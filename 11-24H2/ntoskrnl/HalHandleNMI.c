/*
 * XREFs of HalHandleNMI @ 0x140543B40
 * Callers:
 *     KiProcessNMI @ 0x1405B7670 (KiProcessNMI.c)
 * Callees:
 *     WheaReportHwError @ 0x14042E300 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x14042E7A8 (WheapGetErrorSource.c)
 *     HalpCheckAndReportGhes @ 0x1404A01CC (HalpCheckAndReportGhes.c)
 *     HalpNMIHalt @ 0x140543E84 (HalpNMIHalt.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  dword_140E100F8 = 1;
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
    if ( dword_140E100F4 != 1 )
    {
      LOBYTE(a1) = v4;
      HalpNMIHalt(a1);
    }
    memset_0(&dword_140E10100, 0, 0x5CuLL);
    dword_140E10104 = 3;
    dword_140E10110 = 3;
    dword_140E1011C = 3;
    dword_140E10100 = 1095059543;
    dword_140E10158 = ((unsigned int)dword_140E1010C >> 2) & 1;
    dword_140E10108 = 92;
    dword_140E10114 = 1;
    dword_140E10118 = HalpNmiInfo;
    xmmword_140E10120 = (__int128)NMI_NOTIFY_TYPE_GUID;
    dword_140E10138 = 4;
    dword_140E10140 = 80;
    dword_140E10144 = 12;
    byte_140E10150 = v5;
    ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, HalpNmiInfo);
    PshedRetrieveErrorInfo(
      &dword_140E10100,
      (unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
    result = WheaReportHwError((__int64)&dword_140E10100);
  }
  _InterlockedDecrement(&WheapCriticalStateRefCount);
  HalpProcessorInNmiHandler = 2048;
  return result;
}
