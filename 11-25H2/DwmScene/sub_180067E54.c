/*
 * XREFs of sub_180067E54 @ 0x180067E54
 * Callers:
 *     sub_18005DD30 @ 0x18005DD30 (sub_18005DD30.c)
 * Callees:
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 */

__int64 __fastcall sub_180067E54(__int64 a1)
{
  __int64 result; // rax

  result = 0x492492492492492LL;
  if ( *(_QWORD *)(a1 + 8) == 0x492492492492492LL )
    sub_18001CC04();
  return result;
}
