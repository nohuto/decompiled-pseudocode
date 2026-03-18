/*
 * XREFs of XmGroup1General @ 0x140468D00
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x140468DC4 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x140469060 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x14046908C (XmSetDestinationValue.c)
 *     XmGetRegisterAddress @ 0x140469318 (XmGetRegisterAddress.c)
 *     XmSetSourceValue @ 0x140469348 (XmSetSourceValue.c)
 */

__int64 __fastcall XmGroup1General(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 RegisterAddress; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  XmSetDataType();
  result = XmEvaluateAddressSpecifier(a1, &v6);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      RegisterAddress = XmGetRegisterAddress(a1, v6);
      XmSetDestinationValue(a1, RegisterAddress);
    }
    else
    {
      XmSetDestinationValue(a1, result);
      v4 = XmGetRegisterAddress(v3, v6);
    }
    XmSetSourceValue(a1, v4);
    return 1LL;
  }
  return result;
}
