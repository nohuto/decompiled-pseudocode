/*
 * XREFs of ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400FE440
 * Callers:
 *     VidMmReferencePrimaryAllocationForSubmission @ 0x140039270 (VidMmReferencePrimaryAllocationForSubmission.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4)
{
  __int64 v4; // rdi
  int *v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *a4 = 0LL;
  v4 = **(_QWORD **)a3;
  if ( !*(_BYTE *)(v4 + 41) )
  {
    v5 = *(int **)(v4 + 392);
    if ( (*v5 & 0x40000100) != 0 || *v5 < 0 )
    {
      if ( v5[4] )
      {
        if ( *((struct VIDMM_DEVICE **)a3 + 1) == a2 )
        {
          _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
          *a4 = a3;
          return 0LL;
        }
        else
        {
          WdLogSingleEntry3(1LL, a2, a3, *((_QWORD *)a3 + 1));
          WdLogGlobalForLineNumber = 8859;
          DxgkLogInternalTriageEvent(v8, 0x40000LL);
          return 3223191829LL;
        }
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v5) + 24) = v4;
        WdLogGlobalForLineNumber = 8846;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, **(_QWORD **)a3);
      WdLogGlobalForLineNumber = 8836;
      DxgkLogInternalTriageEvent(v7, 0x40000LL);
    }
    return 3221225485LL;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v4;
    WdLogGlobalForLineNumber = 8824;
  }
  return 3223191814LL;
}
