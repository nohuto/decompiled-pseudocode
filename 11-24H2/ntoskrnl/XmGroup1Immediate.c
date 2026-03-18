/*
 * XREFs of XmGroup1Immediate @ 0x1404686C0
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x140468DC4 (XmEvaluateAddressSpecifier.c)
 *     XmGetImmediateSourceValue @ 0x140468FAC (XmGetImmediateSourceValue.c)
 *     XmSetDataType @ 0x140469060 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x14046908C (XmSetDestinationValue.c)
 */

__int64 __fastcall XmGroup1Immediate(_DWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // r8d
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  XmSetDataType();
  v2 = XmEvaluateAddressSpecifier(a1, &v5);
  XmGetImmediateSourceValue(a1, a1[28] & 2);
  XmSetDestinationValue(a1, v2);
  a1[31] += v5;
  result = 1LL;
  a1[27] = v4;
  return result;
}
