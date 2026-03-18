/*
 * XREFs of ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CAC30
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1400C9528 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400C9A60 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400C9EF0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(VIDMM_RECYCLE_MULTIRANGE *this)
{
  _QWORD *v1; // rax
  char v2; // dl
  int v3; // r9d
  __int64 v4; // r9
  int v5; // r9d

  v1 = (_QWORD *)*((_QWORD *)this + 8);
  v2 = 0;
  while ( !v2 )
  {
    v3 = *((_DWORD *)this + 50);
    if ( v3 )
    {
      v5 = v3 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 195;
          JUMPOUT(0x1400CACE4LL);
        }
        v1[19] = this;
      }
      else
      {
        v1[18] = this;
      }
    }
    else
    {
      v1[17] = this;
    }
    if ( v1 == *((_QWORD **)this + 9) )
    {
      v2 = 1;
    }
    else
    {
      v4 = v1[15];
      if ( v4 == v1[9] + 72LL )
        v1 = 0LL;
      else
        v1 = (_QWORD *)(v4 - 120);
    }
  }
}
