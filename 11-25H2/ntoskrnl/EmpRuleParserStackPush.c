/*
 * XREFs of EmpRuleParserStackPush @ 0x140C06D1C
 * Callers:
 *     EmpParseRuleExpression @ 0x140C05860 (EmpParseRuleExpression.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall EmpRuleParserStackPush(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  ULONG_PTR result; // rax
  ULONG_PTR *v10; // rcx

  result = ExAllocatePool2(0x100uLL, 0x28uLL, 0x74734D45uLL);
  if ( result )
  {
    v10 = (ULONG_PTR *)(result + 32);
    *(_DWORD *)(result + 24) = a5;
    *(_DWORD *)result = a2;
    *(_QWORD *)(result + 8) = a3;
    *(_QWORD *)(result + 16) = a4;
    result = *(_QWORD *)(a1 + 8);
    *v10 = result;
    *(_QWORD *)(a1 + 8) = v10;
    ++*(_DWORD *)a1;
  }
  return result;
}
