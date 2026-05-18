/*
 * XREFs of sub_18007C858 @ 0x18007C858
 * Callers:
 *     sub_1800751E0 @ 0x1800751E0 (sub_1800751E0.c)
 *     sub_180077D00 @ 0x180077D00 (sub_180077D00.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     sub_180079EB0 @ 0x180079EB0 (sub_180079EB0.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 */

int __fastcall sub_18007C858(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v5; // ax
  const void *v6; // rsi
  size_t v7; // rbx
  void *v8; // rbp
  int result; // eax

  v5 = sub_180079EB0(*(_QWORD *)(a1 + 16), a2);
  v6 = *(const void **)a3;
  v7 = 16LL * (unsigned int)((__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4);
  v8 = (void *)sub_18007BFC4(a1, v5, 5);
  result = memcmp(v8, v6, v7);
  if ( result )
  {
    result = (unsigned int)memcpy(v8, v6, v7);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
