/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x140B8D364
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9C568 (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x14060F904 (ViTargetDriversFreeVerifiedData.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140B8D994 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversEnableVerifier(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *VerifiedData; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v9 = 0LL;
  v8 = 0LL;
  if ( !VfSafeMode )
  {
    if ( ViTargetInitialized )
    {
      VerifiedData = (void *)ViTargetDriversAllocateVerifiedData(a2);
      if ( VerifiedData )
      {
        VfAvlInitializeLockContext((__int64)&v8, 0);
        v5 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v8, a1, 1LL);
        if ( v5 )
        {
          v5[8] = VerifiedData;
          v2 = 1;
          ++dword_140F047A0;
        }
        VfAvlCleanupLockContext((__int64)&v8, v6);
        if ( !v2 )
          ViTargetDriversFreeVerifiedData(VerifiedData);
      }
    }
  }
  return v2;
}
