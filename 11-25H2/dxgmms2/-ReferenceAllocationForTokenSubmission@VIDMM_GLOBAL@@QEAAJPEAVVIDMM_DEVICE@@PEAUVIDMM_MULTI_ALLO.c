/*
 * XREFs of ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F90F0
 * Callers:
 *     VidMmReferenceAllocationForTokenSubmission @ 0x14003CAC0 (VidMmReferenceAllocationForTokenSubmission.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        __int64 **a3,
        __int64 ***a4)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *a4 = 0LL;
  v4 = **a3;
  if ( *(_BYTE *)(v4 + 41) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 8814;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v7) + 24) = v4;
      WdLogGlobalForLineNumber = 8815;
    }
    return 3223191814LL;
  }
  else
  {
    v5 = *(unsigned int *)(*(_QWORD *)(v4 + 376) + 16LL);
    if ( (_DWORD)v5 )
    {
      if ( a2 && a3[1] != (__int64 *)a2 )
      {
        WdLogSingleEntry3(1LL, a2, a3, a3[1]);
        WdLogGlobalForLineNumber = 8842;
        DxgkLogInternalTriageEvent(v9, 0x40000LL);
        return 3223191829LL;
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
        *a4 = a3;
        return 0LL;
      }
    }
    else
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v5);
        WdLogGlobalForLineNumber = 8828;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = v4;
        WdLogGlobalForLineNumber = 8829;
      }
      return 3223191812LL;
    }
  }
}
