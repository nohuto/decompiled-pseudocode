/*
 * XREFs of VfTargetEtwUnregister @ 0x140B8D5A0
 * Callers:
 *     VerifierEtwUnregister @ 0x140BA3560 (VerifierEtwUnregister.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfTargetEtwUnregister(__int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  void *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *i; // rax
  _QWORD *v9; // rcx
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  if ( !VfSafeMode )
  {
    v4 = 0;
    v5 = 0LL;
    VfAvlInitializeLockContext((__int64)&v10, 0);
    v6 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v10, a2, 1LL);
    if ( v6 )
    {
      v7 = v6[8];
      if ( v7 )
      {
        for ( i = *(_QWORD **)(v7 + 16); i != (_QWORD *)(v7 + 16); i = (_QWORD *)*i )
        {
          v5 = i;
          v9 = (_QWORD *)*i;
          if ( i[2] == a1 )
          {
            v4 = 1;
            if ( (_QWORD *)v9[1] != i || (v7 = i[1], *(_QWORD **)v7 != i) )
              __fastfail(3u);
            *(_QWORD *)v7 = v9;
            v9[1] = v7;
            goto LABEL_16;
          }
        }
        if ( !dword_140F04860 && (*(_DWORD *)(v7 + 32) & 1) == 0 && (MmVerifierData & 0x800) != 0 )
          CarReportRuleViolationFromNt(0xC4u, 0xDCuLL, 0LL, 0LL, 0LL, 11, a2);
      }
    }
LABEL_16:
    VfAvlCleanupLockContext((__int64)&v10, v7);
    if ( v4 )
      ExFreePoolWithTag(v5, 0);
  }
}
