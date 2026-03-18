/*
 * XREFs of ?InitializeSegmentPowerManagement@VIDMM_GLOBAL@@QEAAJIIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x1400955B4
 * Callers:
 *     VidMmInitializeSegmentPowerManagement @ 0x14004BDC0 (VidMmInitializeSegmentPowerManagement.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitializeSegmentPowerManagement(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        enum _DXGK_POWER_COMPONENT_TYPE a5)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a2 >= *((_DWORD *)this + 1736) )
  {
    WdLogSingleEntry1(1LL, a2);
    WdLogGlobalForLineNumber = 7195;
LABEL_3:
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225485LL;
  }
  _mm_lfence();
  v7 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  if ( a3 >= *(_DWORD *)(v7 + 64) )
  {
    WdLogSingleEntry1(1LL, a3);
    WdLogGlobalForLineNumber = 7203;
    goto LABEL_3;
  }
  _mm_lfence();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 1648) + 8LL * a3);
  if ( a5 == DXGK_POWER_COMPONENT_MEMORY )
  {
    if ( (*(_DWORD *)(v8 + 104) & 0x1001) == 0 )
      *(_DWORD *)(v8 + 408) = a4;
  }
  else if ( a5 == DXGK_POWER_COMPONENT_MEMORY_REFRESH )
  {
    *(_DWORD *)(*(_QWORD *)(v8 + 24) + 40192LL) = a4;
  }
  return 0LL;
}
