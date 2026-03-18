/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x140865674
 * Callers:
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x1407D1800 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408653AC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140865470 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x140865518 (CmpEnumerateAllOpenSubKeys.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpDecommisssionKcb @ 0x140848640 (CmpDecommisssionKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408743F0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRemoveFromDelayedClose @ 0x140874820 (CmpRemoveFromDelayedClose.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
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
          CmpCleanUpKcbCacheWithLock(v7);
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
