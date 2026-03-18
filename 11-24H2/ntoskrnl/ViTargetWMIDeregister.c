/*
 * XREFs of ViTargetWMIDeregister @ 0x140B8BC38
 * Callers:
 *     VfTargetWMIRegistrationControl @ 0x140B8B75C (VfTargetWMIRegistrationControl.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     VfAvlEnumerateNodes @ 0x140B83C24 (VfAvlEnumerateNodes.c)
 */

__int64 __fastcall ViTargetWMIDeregister(__int64 a1)
{
  int v2; // edx
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  VfAvlInitializeLockContext((__int64)&v9, 0);
  v4 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v9, v3, (unsigned int)(v2 + 1));
  if ( v4 && (v7 = v4[8]) != 0 && *(_QWORD *)(v7 + 8) == a1 )
  {
    *(_QWORD *)(v7 + 8) = 0LL;
  }
  else
  {
    ++ViTargetWMIRegistrationMismatches;
    VfAvlEnumerateNodes(v6, (__int64)&v9, (__int64)ViTargetWMIDeregisterCallback, a1);
  }
  return VfAvlCleanupLockContext((__int64)&v9, v5);
}
