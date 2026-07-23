/*
 * XREFs of HalHandleNMI @ 0x140541490
 * Callers:
 *     KiProcessNMI @ 0x1405B4C40 (KiProcessNMI.c)
 * Callees:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1404204D8 (WheapGetErrorSource.c)
 *     HalpCheckAndReportGhes @ 0x14049A84C (HalpCheckAndReportGhes.c)
 *     HalpNMIHalt @ 0x1405417D4 (HalpNMIHalt.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall HalHandleNMI(__int64 a1)
{
  __int64 *v1; // rdi
  char v2; // bl
  char result; // al
  unsigned __int8 v4; // al
  char v5; // bl
  __int64 *ErrorSource; // rax

  _InterlockedAdd(&WheapCriticalStateRefCount, 1u);
  dword_140E10288 = 1;
  HalpProcessorInNmiHandler = KeGetPcr()->Prcb.Number;
  if ( !HalpGenericNmiInitDone )
    goto LABEL_7;
  v1 = (__int64 *)HalpGenericNmiErrorSourceListHead;
  v2 = 0;
  if ( (__int64 *)HalpGenericNmiErrorSourceListHead == &HalpGenericNmiErrorSourceListHead )
    goto LABEL_7;
  do
  {
    result = HalpCheckAndReportGhes((__int64)v1);
    v1 = (__int64 *)*v1;
    if ( result )
      v2 = 1;
  }
  while ( v1 != &HalpGenericNmiErrorSourceListHead );
  if ( v2 != 1 )
  {
LABEL_7:
    v4 = __inbyte(0x61u);
    v5 = v4;
    if ( dword_140E10284 != 1 )
    {
      LOBYTE(a1) = v4;
      HalpNMIHalt(a1);
    }
    memset_0(&dword_140E10290, 0, 0x5CuLL);
    dword_140E10294 = 3;
    dword_140E102A0 = 3;
    dword_140E102AC = 3;
    dword_140E10290 = 1095059543;
    dword_140E102E8 = ((unsigned int)dword_140E1029C >> 2) & 1;
    dword_140E10298 = 92;
    dword_140E102A4 = 1;
    dword_140E102A8 = HalpNmiInfo;
    xmmword_140E102B0 = (__int128)NMI_NOTIFY_TYPE_GUID;
    dword_140E102C8 = 4;
    dword_140E102D0 = 80;
    dword_140E102D4 = 12;
    byte_140E102E0 = v5;
    ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, HalpNmiInfo);
    PshedRetrieveErrorInfo(
      &dword_140E10290,
      (unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
    result = WheaReportHwError((__int64)&dword_140E10290);
  }
  _InterlockedDecrement(&WheapCriticalStateRefCount);
  HalpProcessorInNmiHandler = 2048;
  return result;
}
