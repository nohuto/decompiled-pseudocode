/*
 * XREFs of CmpCommitDiscardReplacePost @ 0x1409D8BAC
 * Callers:
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1409DAED8 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpDecommisssionKcb @ 0x140848640 (CmpDecommisssionKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408743F0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRemoveFromDelayedClose @ 0x140874820 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpMarkKeyUnbacked @ 0x140885038 (CmpMarkKeyUnbacked.c)
 *     CmpRebuildKcbCache @ 0x140885EF0 (CmpRebuildKcbCache.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14089F140 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14099C700 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpDiscardKcb @ 0x1409DAB50 (CmpDiscardKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpCommitDiscardReplacePost(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  _QWORD *v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // rbx
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // r13d
  __int64 v21; // r12
  __int64 i; // rsi
  _QWORD *v23; // rsi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v3 = a3 + 16;
  v6 = *(_QWORD **)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
    __fastfail(3u);
  *(_QWORD *)v3 = v7;
  v8 = (ULONG_PTR)(v6 - 15);
  *(_QWORD *)(v7 + 8) = v3;
  v9 = 0;
  v6[1] = v6;
  *v6 = v6;
  *((_WORD *)v6 - 27) = *(_WORD *)(BugCheckParameter2 + 66);
  v6[9] = *(_QWORD *)(BugCheckParameter2 + 192);
  *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  *(_WORD *)(BugCheckParameter2 + 66) = 0;
  *(_QWORD *)(v6[9] + 16LL) = v6 - 15;
  v10 = *(_DWORD *)(BugCheckParameter2 + 40);
  if ( v10 != -1 )
  {
    *(_DWORD *)(v8 + 40) = v10;
    CmpMarkKeyUnbacked(BugCheckParameter2, a2);
    CmpRebuildKcbCache(v8);
  }
  CmpDiscardKcb(BugCheckParameter2);
  v11 = *(_QWORD *)(v8 + 32);
  v12 = *(_QWORD *)(v11 + 1648);
  v13 = 3
      * ((unsigned int)(*(_DWORD *)(v11 + 1656) - 1) & ((unsigned int)(101027
                                                                     * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) >> 9)));
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v12
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v11 + 1656) - 1) & ((unsigned int)(101027
                                                                                                  * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) >> 9)))
                                   + 16);
  *(_QWORD *)(v12 + 8 * v13 + 16) = v8 + 16;
  v14 = *(_QWORD *)(v8 + 192);
  v15 = (_QWORD *)(v14 + 32);
  v16 = *(_QWORD **)(v14 + 32);
  while ( v16 != v15 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v8);
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
    v14 = *(_QWORD *)(v8 + 192);
    v16 = (_QWORD *)*v16;
    v15 = (_QWORD *)(v14 + 32);
  }
  v17 = v14 + 48;
  v18 = *(_QWORD **)(v14 + 48);
  while ( v18 != (_QWORD *)v17 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v8);
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
    v18 = (_QWORD *)*v18;
    v17 = *(_QWORD *)(v8 + 192) + 48LL;
  }
  v19 = *(_QWORD *)(v8 + 32);
  memset(&ApcState, 0, sizeof(ApcState));
  v20 = *(_DWORD *)(v19 + 1656);
  v21 = *(_QWORD *)(v19 + 1648);
  CmpAttachToRegistryProcess(&ApcState);
  while ( v9 < v20 )
  {
LABEL_11:
    for ( i = *(_QWORD *)(v21 + 24LL * v9 + 16); i; i = v23[3] )
    {
      v23 = (_QWORD *)(i - 16);
      if ( !*v23 )
      {
        CmpRemoveFromDelayedClose((__int64)v23);
        CmpCleanUpKcbCacheWithLock((ULONG_PTR)v23, a2);
        CmpDecommisssionKcb((ULONG_PTR)v23);
        goto LABEL_11;
      }
      if ( v23[9] == BugCheckParameter2 )
      {
        ++v23[38];
        v23[9] = v8;
        if ( *(_QWORD *)BugCheckParameter2 )
        {
          CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v8);
          CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
        }
      }
    }
    ++v9;
  }
  CmpDetachFromRegistryProcess(&ApcState);
  CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, a2, 0);
  CmpDereferenceKeyControlBlockWithLock(v8, a2, 0);
  return 0LL;
}
