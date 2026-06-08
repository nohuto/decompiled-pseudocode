/*
 * XREFs of sub_140003370 @ 0x140003370
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400064C4 @ 0x1400064C4 (sub_1400064C4.c)
 *     sub_140008C34 @ 0x140008C34 (sub_140008C34.c)
 */

__int64 __fastcall sub_140003370(__int64 a1, __int16 a2)
{
  unsigned __int64 v3; // [rsp+48h] [rbp+10h]

  v3 = __readmsr(0x199u);
  LOWORD(v3) = a2;
  __writemsr(0x199u, v3);
  return 0LL;
}
