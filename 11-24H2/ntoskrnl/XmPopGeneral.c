/*
 * XREFs of XmPopGeneral @ 0x140575660
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x140468DC4 (XmEvaluateAddressSpecifier.c)
 *     XmSetDestinationValue @ 0x14046908C (XmSetDestinationValue.c)
 */

__int64 __fastcall XmPopGeneral(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  result = XmEvaluateAddressSpecifier(a1, &v3);
  if ( result )
  {
    XmSetDestinationValue(a1, (unsigned __int16 *)result);
    return 1LL;
  }
  return result;
}
