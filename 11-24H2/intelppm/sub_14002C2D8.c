/*
 * XREFs of sub_14002C2D8 @ 0x14002C2D8
 * Callers:
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     sub_14002C004 @ 0x14002C004 (sub_14002C004.c)
 */

BOOLEAN __fastcall sub_14002C2D8(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)&unk_1400144A0;
  if ( !v1 )
    v2 = &stru_1400142B0;
  return sub_14002C004(v2);
}
