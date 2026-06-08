/*
 * XREFs of sub_140003A40 @ 0x140003A40
 * Callers:
 *     sub_140047274 @ 0x140047274 (sub_140047274.c)
 * Callees:
 *     sub_140003A78 @ 0x140003A78 (sub_140003A78.c)
 */

__int64 __fastcall sub_140003A40(__int64 a1, int a2)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  return sub_140003A78(a1, &unk_140012FF8, &unk_140013008, 4LL, &v3);
}
