/*
 * XREFs of EmpEvaluateUpdateRuleEvalState @ 0x14057F618
 * Callers:
 *     EmpUpdateRuleState @ 0x140491B80 (EmpUpdateRuleState.c)
 * Callees:
 *     EmpEvaluateTargetRule @ 0x14043D590 (EmpEvaluateTargetRule.c)
 *     EmpEvaluatePermuteRuleEntries @ 0x14057F570 (EmpEvaluatePermuteRuleEntries.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EmpEvaluateUpdateRuleEvalState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char *Pool2; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 *v8; // r14
  __int64 v9; // rcx
  _QWORD **v10; // rax
  _QWORD *v11; // r15
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // r8

  v4 = *(_QWORD *)(a1 + 8);
  Pool2 = 0LL;
  v6 = *(unsigned int *)(v4 + 48);
  if ( *(_BYTE *)(v4 + 20) )
  {
    v7 = 0LL;
    v8 = (__int64 *)(v4 + 56);
    while ( (unsigned int)v7 < (unsigned int)v6 )
    {
      v8 = (__int64 *)(v4 + 56);
      v9 = *(_QWORD *)(v4 + 56);
      v10 = (_QWORD **)(*(_QWORD *)(v9 + 8 * v7) + 56LL);
      v11 = *v10;
      while ( v11 != v10 )
      {
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 8 * v7), *(v11 - 1), a3, a4);
        v9 = *v8;
        v11 = (_QWORD *)*v11;
        v10 = (_QWORD **)(*(_QWORD *)(*v8 + 8 * v7) + 56LL);
      }
      if ( *(_QWORD *)(*(_QWORD *)(v9 + 8 * v7) + 40LL) == *(_QWORD *)(v9 + 8 * v7) + 40LL )
      {
        *(_DWORD *)(v4 + 16) = 0;
        return;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    if ( !(_DWORD)v6 || (Pool2 = (char *)ExAllocatePool2(0x100uLL), v8 = (__int64 *)(v4 + 56), Pool2) )
    {
      EmpEvaluatePermuteRuleEntries(v4, v6, a2, 1);
      v12 = 2;
      while ( 1 )
      {
        if ( (_DWORD)v6 )
        {
          v13 = 0LL;
          v14 = v6;
          do
          {
            *(_QWORD *)&Pool2[v13] = *(_QWORD *)(*(_QWORD *)(v13 + *v8) + 32LL) - 16LL;
            v13 += 8LL;
            --v14;
          }
          while ( v14 );
        }
        if ( (unsigned int)EmpEvaluateTargetRule(a1, (__int64)Pool2, v6) == 2 )
          break;
        if ( EmpEvaluatePermuteRuleEntries(v4, v6, a2, 0) )
        {
          v12 = 0;
          break;
        }
        v8 = (__int64 *)(v4 + 56);
      }
      *(_DWORD *)(v4 + 16) = v12;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x76654D45u);
    }
  }
  else
  {
    *(_DWORD *)(v4 + 16) = 1;
  }
}
