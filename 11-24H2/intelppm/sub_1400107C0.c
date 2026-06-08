/*
 * XREFs of sub_1400107C0 @ 0x1400107C0
 * Callers:
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 * Callees:
 *     sub_140010840 @ 0x140010840 (sub_140010840.c)
 */

__int64 __fastcall sub_1400107C0(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax

  if ( (byte_140018D40 & 1) == 0 )
    result = sub_140010840();
  *a1 = v3;
  a1[1] = v3;
  a1[2] = v3;
  a1[3] = v3;
  memset(
    (void *)((unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFC0uLL),
    v3,
    (unsigned __int64)a1 + a3 - ((unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFC0uLL));
  return result;
}
