/*
 * XREFs of sub_18002FDCC @ 0x18002FDCC
 * Callers:
 *     sub_18002DEE8 @ 0x18002DEE8 (sub_18002DEE8.c)
 * Callees:
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 */

__int64 __fastcall sub_18002FDCC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180013228(v2 + 64);
  return sub_18002FB60(a1);
}
