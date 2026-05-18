/*
 * XREFs of sub_180049900 @ 0x180049900
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800142A4 @ 0x1800142A4 (sub_1800142A4.c)
 *     sub_1800475E0 @ 0x1800475E0 (sub_1800475E0.c)
 */

__int64 *__fastcall sub_180049900(__int64 a1)
{
  __int64 v2; // rdi
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  if ( 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v2) >> 3) )
  {
    sub_1800475E0(v2, *(_QWORD *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = v2;
  }
  v4 = 0LL;
  return sub_1800142A4(a1, &v4);
}
