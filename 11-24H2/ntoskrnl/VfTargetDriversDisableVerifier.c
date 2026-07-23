/*
 * XREFs of VfTargetDriversDisableVerifier @ 0x140B8D2DC
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9C568 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140B9D138 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x14060F904 (ViTargetDriversFreeVerifiedData.c)
 *     DifRemovePerDriverDataForPlugins @ 0x1406160A0 (DifRemovePerDriverDataForPlugins.c)
 */

__int64 VfTargetDriversDisableVerifier()
{
  __int64 result; // rax
  int v1; // edx
  unsigned __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !VfSafeMode )
  {
    VfAvlInitializeLockContext((__int64)&v7, 0);
    v3 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v7, v2, (unsigned int)(v1 + 1));
    v5 = v3;
    if ( v3 )
    {
      v6 = v3[8];
      if ( v6 )
      {
        DifRemovePerDriverDataForPlugins((_QWORD **)(v6 + 96));
        ViTargetDriversFreeVerifiedData((void *)v5[8]);
        v5[8] = 0LL;
        --dword_140F047A0;
      }
    }
    return VfAvlCleanupLockContext((__int64)&v7, v4);
  }
  return result;
}
