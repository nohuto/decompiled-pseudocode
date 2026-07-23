/*
 * XREFs of EmpRuleStateChangeNotify @ 0x14057C7A4
 * Callers:
 *     EmpUpdateRuleState @ 0x14048CA20 (EmpUpdateRuleState.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EmpRuleStateChangeNotify(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 80);
  for ( i = *(_QWORD **)(a1 + 80); i != v1; i = (_QWORD *)*i )
    result = guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 16), a1);
  return result;
}
