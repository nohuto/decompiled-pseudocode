/*
 * XREFs of VfTargetDriversDisableVerifier @ 0x140B8B2DC
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9A568 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140B9B138 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140611344 (ViTargetDriversFreeVerifiedData.c)
 *     DifRemovePerDriverDataForPlugins @ 0x140617AE0 (DifRemovePerDriverDataForPlugins.c)
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
        --dword_140F045C0;
      }
    }
    return VfAvlCleanupLockContext((__int64)&v7, v4);
  }
  return result;
}
