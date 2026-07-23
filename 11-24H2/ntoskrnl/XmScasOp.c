/*
 * XREFs of XmScasOp @ 0x1405741A0
 * Callers:
 *     <none>
 * Callees:
 *     XmSetDestinationValue @ 0x140461A3C (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x140461CF8 (XmSetSourceValue.c)
 *     XmCompareOperands @ 0x140573F18 (XmCompareOperands.c)
 *     XmGetStringAddress @ 0x140574D6C (XmGetStringAddress.c)
 */

__int64 __fastcall XmScasOp(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  unsigned __int16 *StringAddress; // rax
  __int64 v5; // rcx

  v2 = 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
      v2 = *(_DWORD *)(a1 + 28);
    else
      v2 = *(unsigned __int16 *)(a1 + 28);
  }
  result = XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 24));
  do
  {
    if ( !v2 )
      break;
    StringAddress = (unsigned __int16 *)XmGetStringAddress(a1, 0LL, 7LL);
    XmSetDestinationValue(a1, StringAddress);
    result = XmCompareOperands(v5);
    --v2;
  }
  while ( ((*(_DWORD *)(a1 + 16) & 0x40) != 0) == *(_BYTE *)(a1 + 141) );
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( *(_BYTE *)(a1 + 137) )
      *(_DWORD *)(a1 + 28) = v2;
    else
      *(_WORD *)(a1 + 28) = v2;
  }
  return result;
}
