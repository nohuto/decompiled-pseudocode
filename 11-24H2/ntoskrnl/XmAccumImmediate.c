/*
 * XREFs of XmAccumImmediate @ 0x140469000
 * Callers:
 *     <none>
 * Callees:
 *     XmGetWordImmediate @ 0x140468D7C (XmGetWordImmediate.c)
 *     XmSetDataType @ 0x140469060 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x14046908C (XmSetDestinationValue.c)
 *     XmGetCodeByte @ 0x140469218 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x14056C8F0 (XmGetLongImmediate.c)
 */

__int64 __fastcall XmAccumImmediate(__int64 a1)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // r8d

  XmSetDataType();
  v2 = *(_DWORD *)(a1 + 120);
  if ( v2 )
  {
    if ( v2 == 1 )
      XmGetWordImmediate(a1);
    else
      XmGetLongImmediate(a1);
  }
  else
  {
    XmGetCodeByte(a1);
  }
  XmSetDestinationValue(a1, a1 + 24);
  result = 1LL;
  *(_DWORD *)(a1 + 108) = v4;
  return result;
}
