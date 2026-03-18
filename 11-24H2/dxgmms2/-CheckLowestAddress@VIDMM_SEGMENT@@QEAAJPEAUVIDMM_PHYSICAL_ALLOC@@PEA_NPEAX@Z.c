/*
 * XREFs of ?CheckLowestAddress@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009E0F0
 * Callers:
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x14010EFBC (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_SEGMENT::CheckLowestAddress(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        bool *a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx

  if ( a2 )
  {
    if ( *((_QWORD *)a2 + 8) )
      v4 = *((_QWORD *)a2 + 9);
    else
      v4 = *((_QWORD *)a2 + 12);
    *a4 = v4;
    return 3221225473LL;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6409;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221226021LL;
  }
}
