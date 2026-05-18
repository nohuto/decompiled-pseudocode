/*
 * XREFs of sub_18002A1B0 @ 0x18002A1B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 *     sub_180095D08 @ 0x180095D08 (sub_180095D08.c)
 */

__int64 __fastcall sub_18002A1B0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = sub_180040290(*(_QWORD *)(a1 + 392) + 184LL);
  if ( (_BYTE)result )
    result = sub_180095D08(v3, *(_QWORD *)(v3 + 192));
  ++*(_QWORD *)(a1 + 432);
  return result;
}
