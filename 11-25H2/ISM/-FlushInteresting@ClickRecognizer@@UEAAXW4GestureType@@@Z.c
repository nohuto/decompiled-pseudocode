/*
 * XREFs of ?FlushInteresting@ClickRecognizer@@UEAAXW4GestureType@@@Z @ 0x1801AD340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall ClickRecognizer::FlushInteresting(__int64 a1, __int16 a2)
{
  _WORD *v2; // rax
  _WORD *v4; // rcx
  _WORD *v5; // r8

  v2 = (_WORD *)(a1 + 16);
  if ( (a2 & 2) != 0 )
    *v2 &= ~8u;
  if ( (a2 & 1) != 0 )
    *v2 &= ~4u;
  v4 = (_WORD *)(a1 + 16);
  if ( (a2 & 8) != 0 )
  {
    *v2 &= ~0x40u;
    v5 = (_WORD *)(a1 + 16);
  }
  else
  {
    v5 = v4;
  }
  if ( (a2 & 0x200) != 0 )
    *v2 &= ~0x100u;
  else
    v5 = v4;
  if ( (a2 & 4) != 0 )
  {
    *v4 &= ~0x10u;
    LOWORD(v2) = *v4 & 0xFFDF;
    *v5 = (_WORD)v2;
  }
  return (__int16)v2;
}
