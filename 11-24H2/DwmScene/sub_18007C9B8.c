/*
 * XREFs of sub_18007C9B8 @ 0x18007C9B8
 * Callers:
 *     sub_180075340 @ 0x180075340 (sub_180075340.c)
 *     sub_180077E60 @ 0x180077E60 (sub_180077E60.c)
 * Callees:
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     memcmp @ 0x18000CE3D (memcmp.c)
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     sub_18007C124 @ 0x18007C124 (sub_18007C124.c)
 */

int __fastcall sub_18007C9B8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v5; // ax
  const void *v6; // rsi
  size_t v7; // rbx
  void *v8; // rbp
  int result; // eax

  v5 = sub_18007A010(*(_QWORD *)(a1 + 16), a2);
  v6 = *(const void **)a3;
  v7 = 16LL * (unsigned int)((__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4);
  v8 = (void *)sub_18007C124(a1, v5, 5);
  result = memcmp(v8, v6, v7);
  if ( result )
  {
    result = (unsigned int)memcpy(v8, v6, v7);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
