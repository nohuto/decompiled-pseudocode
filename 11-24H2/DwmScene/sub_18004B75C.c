/*
 * XREFs of sub_18004B75C @ 0x18004B75C
 * Callers:
 *     sub_18004A968 @ 0x18004A968 (sub_18004A968.c)
 * Callees:
 *     sub_18004B864 @ 0x18004B864 (sub_18004B864.c)
 */

__int64 __fastcall sub_18004B75C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18004B864(v2 + 32);
  return sub_18003D88C(a1);
}
