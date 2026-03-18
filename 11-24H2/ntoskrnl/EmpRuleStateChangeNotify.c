/*
 * XREFs of EmpRuleStateChangeNotify @ 0x14057F314
 * Callers:
 *     EmpUpdateRuleState @ 0x140491B80 (EmpUpdateRuleState.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EmpRuleStateChangeNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  v4 = (_QWORD *)(a1 + 80);
  for ( i = *(_QWORD **)(a1 + 80); i != v4; i = (_QWORD *)*i )
    result = guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 16), a1, *(i - 1), a4);
  return result;
}
