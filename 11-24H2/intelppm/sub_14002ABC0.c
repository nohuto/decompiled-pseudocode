/*
 * XREFs of sub_14002ABC0 @ 0x14002ABC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000664C @ 0x14000664C (sub_14000664C.c)
 */

__int64 *__fastcall sub_14002ABC0(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( sub_14000664C()
    && *(_BYTE *)(a1 + 296) == 127
    && *(_QWORD *)(a1 + 300) == 232LL
    && *(_BYTE *)(a1 + 272) == 127
    && *(_QWORD *)(a1 + 276) == 231LL )
  {
    return qword_140003100;
  }
  return (__int64 *)v2;
}
