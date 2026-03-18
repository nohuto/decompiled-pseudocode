/*
 * XREFs of ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x140106140
 * Callers:
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x14010A030 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEBVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x140110464 (-VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEBVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_T.c)
 * Callees:
 *     ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140106214 (-IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::IsAllocationDecommitCandidate(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2, char a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx

  v3 = *((_QWORD *)a2 + 49);
  if ( *(_WORD *)(v3 + 8) < 2u )
  {
    WdLogSingleEntry1(3LL, 1LL);
    WdLogGlobalForLineNumber = 27103;
    return 0;
  }
  if ( (*((_DWORD *)a2 + 8) & 0x40) == 0 )
  {
    WdLogSingleEntry1(3LL, 2LL);
    WdLogGlobalForLineNumber = 27112;
    return 0;
  }
  if ( (*(_DWORD *)v3 & 0x30) != 0 )
  {
    WdLogSingleEntry1(3LL, 3LL);
    WdLogGlobalForLineNumber = 27123;
    return 0;
  }
  if ( a3 && !VIDMM_GLOBAL::IsAllocationRepurposed(this, a2) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v4) + 24) = 5LL;
      WdLogGlobalForLineNumber = 27133;
    }
    return 0;
  }
  return 1;
}
