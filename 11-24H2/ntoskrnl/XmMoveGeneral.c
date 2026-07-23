/*
 * XREFs of XmMoveGeneral @ 0x140461640
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x140461774 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x140461A10 (XmSetDataType.c)
 *     XmGetRegisterAddress @ 0x140461CC8 (XmGetRegisterAddress.c)
 *     XmSetSourceValue @ 0x140461CF8 (XmSetSourceValue.c)
 */

__int64 __fastcall XmMoveGeneral(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 RegisterAddress; // r9
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  XmSetDataType();
  result = XmEvaluateAddressSpecifier(a1, &v5);
  if ( result )
  {
    v3 = v5;
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      *(_QWORD *)(a1 + 88) = XmGetRegisterAddress(a1, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 88) = result;
      RegisterAddress = XmGetRegisterAddress(a1, v3);
    }
    XmSetSourceValue(a1, RegisterAddress);
    return 1LL;
  }
  return result;
}
