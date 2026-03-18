/*
 * XREFs of XmImmediateJump @ 0x140575300
 * Callers:
 *     <none>
 * Callees:
 *     XmGetWordImmediate @ 0x140468D7C (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x14056C8F0 (XmGetLongImmediate.c)
 */

__int64 __fastcall XmImmediateJump(__int64 a1)
{
  int LongImmediate; // eax

  if ( *(_BYTE *)(a1 + 138) )
    LongImmediate = XmGetLongImmediate(a1);
  else
    LongImmediate = (unsigned __int16)XmGetWordImmediate(a1);
  *(_DWORD *)(a1 + 104) = LongImmediate;
  *(_WORD *)(a1 + 82) = XmGetWordImmediate(a1);
  return 1LL;
}
