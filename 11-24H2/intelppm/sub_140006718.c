/*
 * XREFs of sub_140006718 @ 0x140006718
 * Callers:
 *     sub_140002164 @ 0x140002164 (sub_140002164.c)
 *     sub_140006618 @ 0x140006618 (sub_140006618.c)
 *     sub_14000E5C0 @ 0x14000E5C0 (sub_14000E5C0.c)
 * Callees:
 *     sub_140002350 @ 0x140002350 (sub_140002350.c)
 *     sub_140008D68 @ 0x140008D68 (sub_140008D68.c)
 */

unsigned __int64 __fastcall sub_140006718(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl

  if ( !a2 )
    return 0LL;
  if ( *a2 == 126 )
    return sub_140002350(a2);
  v5 = sub_140008D68();
  v4 = v5;
  if ( v5 )
  {
    v6 = a2[2];
    if ( v6 )
      v4 = v5 >> v6;
    v7 = a2[1];
    if ( v7 < 0x40u )
      v4 &= (1LL << v7) - 1;
  }
  return v4;
}
