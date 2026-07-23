/*
 * XREFs of ViTargetAddToCounter @ 0x140B8D8F0
 * Callers:
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140BA01E0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140BA23F0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140BA2520 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140BA2600 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmFreePagesFromMdl @ 0x140BA28C0 (VerifierMmFreePagesFromMdl.c)
 *     VerifierMmMapIoSpace @ 0x140BA2990 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140BA2AB0 (VerifierMmMapLockedPages.c)
 *     VerifierMmUnlockPages @ 0x140BA2D30 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140BA2EB0 (VerifierMmUnmapIoSpace.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B8DC14 (ViTargetUpdateTreeAllowed.c)
 */

__int64 __fastcall ViTargetAddToCounter(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rtt
  __int128 v16; // [rsp+28h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h]

  v4 = a3;
  v17 = 0LL;
  v16 = 0LL;
  v6 = (unsigned int)a2;
  result = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( (_DWORD)result )
  {
    VfAvlInitializeLockContext((__int64)&v16, 1);
    v10 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v16, v8, v9);
    if ( v10 )
    {
      v12 = v10[8];
      if ( v12 )
      {
        v13 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + v12), a4);
        do
        {
          v14 = *(_QWORD *)(v4 + v12);
          if ( v14 > v13 )
            break;
          v15 = *(_QWORD *)(v4 + v12);
        }
        while ( v15 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + v12), v13, v14) );
      }
    }
    return VfAvlCleanupLockContext((__int64)&v16, v11);
  }
  return result;
}
