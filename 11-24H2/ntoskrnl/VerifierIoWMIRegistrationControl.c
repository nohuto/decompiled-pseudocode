/*
 * XREFs of VerifierIoWMIRegistrationControl @ 0x140BA15A0
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetWMIRegistrationControl @ 0x140B8B75C (VfTargetWMIRegistrationControl.c)
 */

__int64 __fastcall VerifierIoWMIRegistrationControl(unsigned __int64 a1, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  volatile signed __int32 *v6; // rax
  __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  VfTargetWMIRegistrationControl(a1, a2, retaddr);
  v10 = 0LL;
  v9 = 0LL;
  if ( (MmVerifierData & 0x10) != 0 && a2 >= 0 )
  {
    VfAvlInitializeLockContext((__int64)&v9, 1);
    v6 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v9, a1, 0LL);
    if ( v6 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_7;
        case 2:
          _InterlockedAnd(v6 + 4, 0xFFFFFFFE);
          break;
        case 3:
LABEL_7:
          _InterlockedOr(v6 + 4, 1u);
          break;
      }
    }
    VfAvlCleanupLockContext((__int64)&v9, v7);
  }
  return guard_dispatch_icall_no_overrides(a1, (unsigned int)a2, v4, v5);
}
