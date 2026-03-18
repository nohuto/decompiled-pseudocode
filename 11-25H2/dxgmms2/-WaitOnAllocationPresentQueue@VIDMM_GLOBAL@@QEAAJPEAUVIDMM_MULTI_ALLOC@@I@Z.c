/*
 * XREFs of ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1400CEA28
 * Callers:
 *     VidMmWaitOnAllocationPresentQueue @ 0x14004C9F0 (VidMmWaitOnAllocationPresentQueue.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1400CDFC0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140035700 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140036160 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400AD1D4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400AD5C4 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WaitOnAllocationPresentQueue(VIDMM_GLOBAL *this, struct VIDMM_MULTI_ALLOC *a2)
{
  VIDMM_GLOBAL_ALLOC_NONPAGED *v2; // rsi
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int v8; // edi
  __int64 v9; // rcx
  _QWORD v10[20]; // [rsp+50h] [rbp-B8h] BYREF

  v2 = (VIDMM_GLOBAL_ALLOC_NONPAGED *)*((_QWORD *)a2 + 12);
  v4 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  v6 = *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(v5 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
  {
    v8 = -1071775232;
    WdLogSingleEntry2(3LL, v5, -1071775232LL);
    WdLogGlobalForLineNumber = 22613;
  }
  else
  {
    if ( *((int *)a2 + 26) <= 0 && !VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v2) )
      return 0LL;
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[2]) = 5;
    LOBYTE(v10[19]) = 1;
    VidSchRegisterCompletionEvent(v6, (__int64)v10);
    while ( (*((int *)a2 + 26) > 0 || VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v2)) && v4 >= 0 )
      v4 = VidSchWaitForCompletionEvent(v6, (__int64)v10, 2);
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v6 + 2000), v10, 0LL);
    if ( v4 < 0 || *((int *)a2 + 26) <= 0 && !VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v2) )
      return 0LL;
    v8 = -1073741811;
    WdLogSingleEntry2(1LL, v5, -1073741811LL);
    WdLogGlobalForLineNumber = 22662;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
  return v8;
}
