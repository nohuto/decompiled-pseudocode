/*
 * XREFs of VfTargetEtwRegister @ 0x140B8D4AC
 * Callers:
 *     VerifierEtwRegister @ 0x140BA34D0 (VerifierEtwRegister.c)
 *     VerifierEtwRegisterClassicProvider @ 0x140BA3510 (VerifierEtwRegisterClassicProvider.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall VfTargetEtwRegister(__int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  _QWORD *Pool2; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  if ( !VfSafeMode )
  {
    v4 = 0;
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x54456656uLL);
    VfAvlInitializeLockContext((__int64)&v11, 0);
    v6 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v11, a2, 1LL);
    if ( v6 )
    {
      v8 = v6[8];
      if ( v8 )
      {
        if ( Pool2 )
        {
          v9 = v8 + 16;
          Pool2[2] = a1;
          Pool2[3] = a2;
          v10 = *(_QWORD **)(v9 + 8);
          if ( *v10 != v9 )
            __fastfail(3u);
          *Pool2 = v9;
          v4 = 1;
          Pool2[1] = v10;
          *v10 = Pool2;
          *(_QWORD *)(v9 + 8) = Pool2;
        }
        else
        {
          *(_DWORD *)(v8 + 32) |= 1u;
        }
      }
    }
    VfAvlCleanupLockContext((__int64)&v11, v7);
    if ( !v4 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x54456656u);
    }
  }
}
