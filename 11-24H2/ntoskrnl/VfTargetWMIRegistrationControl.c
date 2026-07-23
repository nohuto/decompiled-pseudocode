/*
 * XREFs of VfTargetWMIRegistrationControl @ 0x140B8D75C
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x140BA35A0 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     ViTargetWMIDeregister @ 0x140B8DC38 (ViTargetWMIDeregister.c)
 */

void __fastcall VfTargetWMIRegistrationControl(__int64 a1, int a2, unsigned __int64 a3)
{
  int v5; // edx
  int v6; // edx
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  if ( VfSafeMode || a2 >= 0 )
    return;
  v5 = (a2 & 0x7FFFFFFF) - 1;
  if ( !v5 )
    goto LABEL_7;
  v6 = v5 - 1;
  if ( !v6 )
  {
    ViTargetWMIDeregister(a1, a3);
    return;
  }
  if ( v6 == 1 )
  {
    ViTargetWMIDeregister(a1, a3);
LABEL_7:
    v12 = 0LL;
    v11 = 0LL;
    VfAvlInitializeLockContext((__int64)&v11, 1);
    v8 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v11, a3, v7);
    if ( v8 )
    {
      v10 = v8[8];
      if ( v10 )
        *(_QWORD *)(v10 + 8) = a1;
    }
    VfAvlCleanupLockContext((__int64)&v11, v9);
  }
}
