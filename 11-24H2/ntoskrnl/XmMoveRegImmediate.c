/*
 * XREFs of XmMoveRegImmediate @ 0x140461550
 * Callers:
 *     <none>
 * Callees:
 *     XmGetWordImmediate @ 0x14046172C (XmGetWordImmediate.c)
 *     XmGetCodeByte @ 0x140461BC8 (XmGetCodeByte.c)
 *     XmGetRegisterAddress @ 0x140461CC8 (XmGetRegisterAddress.c)
 *     XmGetLongImmediate @ 0x140569D80 (XmGetLongImmediate.c)
 */

__int64 __fastcall XmMoveRegImmediate(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // r9d
  int WordImmediate; // eax

  v2 = *(_DWORD *)(a1 + 112) & 7;
  if ( (*(_DWORD *)(a1 + 112) & 8) != 0 )
  {
    if ( *(_BYTE *)(a1 + 138) )
      *(_DWORD *)(a1 + 120) = 3;
    else
      *(_DWORD *)(a1 + 120) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 0;
  }
  *(_QWORD *)(a1 + 88) = XmGetRegisterAddress(a1, v2);
  if ( v3 )
  {
    if ( v3 == 1 )
      WordImmediate = (unsigned __int16)XmGetWordImmediate(a1);
    else
      WordImmediate = XmGetLongImmediate(a1);
  }
  else
  {
    WordImmediate = (unsigned __int8)XmGetCodeByte(a1);
  }
  *(_DWORD *)(a1 + 108) = WordImmediate;
  return 1LL;
}
