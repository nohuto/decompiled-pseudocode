/*
 * XREFs of VerifierIoWMIRegistrationControl @ 0x140BA35A0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetWMIRegistrationControl @ 0x140B8D75C (VfTargetWMIRegistrationControl.c)
 */

__int64 __fastcall VerifierIoWMIRegistrationControl(unsigned __int64 a1, int a2)
{
  volatile signed __int32 *v4; // rax
  __int64 v5; // rdx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfTargetWMIRegistrationControl(a1, a2, retaddr);
  v8 = 0LL;
  v7 = 0LL;
  if ( (MmVerifierData & 0x10) != 0 && a2 >= 0 )
  {
    VfAvlInitializeLockContext((__int64)&v7, 1);
    v4 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v7, a1, 0LL);
    if ( v4 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_7;
        case 2:
          _InterlockedAnd(v4 + 4, 0xFFFFFFFE);
          break;
        case 3:
LABEL_7:
          _InterlockedOr(v4 + 4, 1u);
          break;
      }
    }
    VfAvlCleanupLockContext((__int64)&v7, v5);
  }
  return guard_dispatch_icall_no_overrides(a1, (unsigned int)a2);
}
