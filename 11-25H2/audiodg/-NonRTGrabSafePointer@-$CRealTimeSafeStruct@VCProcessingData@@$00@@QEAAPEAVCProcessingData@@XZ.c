/*
 * XREFs of ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x140035FBC
 * Callers:
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x140035CF0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14003611C (--4CProcessingData@@QEAAXAEAV0@@Z.c)
 *     ?ContinueWaitingForRTActive@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BF64 (-ContinueWaitingForRTActive@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14005D394 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CRealTimeSafeStruct<CProcessingData,1>::NonRTGrabSafePointer(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rbx
  int v4; // r14d
  const char *v6; // [rsp+28h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
  v3 = 0LL;
  v4 = 0;
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 304), 0LL, 0LL) )
  {
    if ( (int)CRealTimeSafeStruct<CProcessingData,1>::ContinueWaitingForRTActive(a1) < 0 )
    {
      LeaveCriticalSection(v2);
      return v3;
    }
    ++v4;
    if ( v4 == 100 * (v4 / 100) )
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x12B,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        (const char *)0x887C0033LL,
        (int)"Non-fatal. Will continue waiting for RT thread...",
        v6);
  }
  *(_QWORD *)(a1 + 320) = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 312), 0LL, 0LL);
  if ( *(_BYTE *)(a1 + 376) )
  {
    CProcessingData::operator=(
      a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL),
      a1 + 144LL * *(unsigned __int16 *)(a1 + 328));
    *(_BYTE *)(a1 + 376) = 0;
  }
  return a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL);
}
