/*
 * XREFs of EmpEvaluateUpdateRuleEvalState @ 0x14057C2F8
 * Callers:
 *     EmpUpdateRuleState @ 0x140492920 (EmpUpdateRuleState.c)
 * Callees:
 *     EmpEvaluateTargetRule @ 0x14043D2E8 (EmpEvaluateTargetRule.c)
 *     EmpEvaluatePermuteRuleEntries @ 0x14057C250 (EmpEvaluatePermuteRuleEntries.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EmpEvaluateUpdateRuleEvalState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *Pool2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 *v6; // r14
  __int64 v7; // rcx
  _QWORD **v8; // rax
  _QWORD *v9; // r15
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // r8

  v2 = *(_QWORD *)(a1 + 8);
  Pool2 = 0LL;
  v4 = *(unsigned int *)(v2 + 48);
  if ( *(_BYTE *)(v2 + 20) )
  {
    v5 = 0LL;
    v6 = (__int64 *)(v2 + 56);
    while ( (unsigned int)v5 < (unsigned int)v4 )
    {
      v6 = (__int64 *)(v2 + 56);
      v7 = *(_QWORD *)(v2 + 56);
      v8 = (_QWORD **)(*(_QWORD *)(v7 + 8 * v5) + 56LL);
      v9 = *v8;
      while ( v9 != v8 )
      {
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v7 + 8 * v5));
        v7 = *v6;
        v9 = (_QWORD *)*v9;
        v8 = (_QWORD **)(*(_QWORD *)(*v6 + 8 * v5) + 56LL);
      }
      if ( *(_QWORD *)(*(_QWORD *)(v7 + 8 * v5) + 40LL) == *(_QWORD *)(v7 + 8 * v5) + 40LL )
      {
        *(_DWORD *)(v2 + 16) = 0;
        return;
      }
      v5 = (unsigned int)(v5 + 1);
    }
    if ( !(_DWORD)v4 || (Pool2 = (char *)ExAllocatePool2(0x100uLL), v6 = (__int64 *)(v2 + 56), Pool2) )
    {
      EmpEvaluatePermuteRuleEntries(v2, v4, a2, 1);
      v10 = 2;
      while ( 1 )
      {
        if ( (_DWORD)v4 )
        {
          v11 = 0LL;
          v12 = v4;
          do
          {
            *(_QWORD *)&Pool2[v11] = *(_QWORD *)(*(_QWORD *)(v11 + *v6) + 32LL) - 16LL;
            v11 += 8LL;
            --v12;
          }
          while ( v12 );
        }
        if ( (unsigned int)EmpEvaluateTargetRule(a1, (__int64)Pool2, v4) == 2 )
          break;
        if ( EmpEvaluatePermuteRuleEntries(v2, v4, a2, 0) )
        {
          v10 = 0;
          break;
        }
        v6 = (__int64 *)(v2 + 56);
      }
      *(_DWORD *)(v2 + 16) = v10;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x76654D45u);
    }
  }
  else
  {
    *(_DWORD *)(v2 + 16) = 1;
  }
}
