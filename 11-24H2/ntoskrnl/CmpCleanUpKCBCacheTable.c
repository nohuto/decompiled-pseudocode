/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x14096478C
 * Callers:
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x1407E1630 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1409644C4 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140964588 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x140964630 (CmpEnumerateAllOpenSubKeys.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRemoveFromDelayedClose @ 0x140874C40 (CmpRemoveFromDelayedClose.c)
 *     CmpDecommisssionKcb @ 0x140875040 (CmpDecommisssionKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 *v4; // rsi
  __int64 i; // rax
  ULONG_PTR v7; // rbx
  __int64 *v8; // rax
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(a1 + 1656);
  v2 = *(_QWORD *)(a1 + 1648);
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0LL;
  CmpAttachToRegistryProcess(&ApcState);
  CmpInitializeDelayDerefContext(&v9);
  v3 = 0LL;
  if ( v1 )
  {
    v4 = (__int64 *)(v2 + 16);
    do
    {
      for ( i = *v4; i; i = *v8 )
      {
        v7 = i - 16;
        if ( *(_QWORD *)(i - 16) )
        {
          v8 = (__int64 *)(v7 + 24);
        }
        else
        {
          CmpRemoveFromDelayedClose(i - 16);
          CmpCleanUpKcbCacheWithLock(v7, (__int64)&v9);
          CmpDecommisssionKcb(v7);
          CmpDrainDelayDerefContext((_QWORD **)&v9);
          v8 = (__int64 *)(v2 + 8 * (v3 + 2 * (v3 + 1)));
        }
      }
      v3 = (unsigned int)(v3 + 1);
      v4 += 3;
    }
    while ( (unsigned int)v3 < v1 );
  }
  return CmpDetachFromRegistryProcess(&ApcState);
}
