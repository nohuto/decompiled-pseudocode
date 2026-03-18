/*
 * XREFs of PspWow64InitThreadGuestx86 @ 0x1409EBB00
 * Callers:
 *     PspWow64InitThread @ 0x1409EB93C (PspWow64InitThread.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall PspWow64InitThreadGuestx86(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v7; // rbp
  int v10; // edx
  bool v11; // zf
  void *result; // rax

  v7 = (_DWORD *)(a2 + *(int *)(a2 + 8));
  v10 = a4 - 4 * (ExGenRandom(1) & 0x1FF);
  v11 = (*(_BYTE *)(a1 + 1872) & 0x40) == 0;
  v7[44] = a5;
  if ( !v11 )
    v10 = a4;
  v7[41] = a6;
  v7[49] = v10 - 16;
  v7[46] = a3;
  v7[35] = 43;
  v7[37] = 43;
  v7[38] = 43;
  v7[50] = 43;
  v7[36] = 83;
  v7[47] = 35;
  memset_0(v7 + 7, 0, 0x70uLL);
  v7[7] = 639;
  v7[9] = 0xFFFF;
  result = memset_0(v7 + 51, 0, 0x200uLL);
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  *v7 |= 0x1003Fu;
  *((_WORD *)v7 + 102) = 639;
  v7[57] = 8064;
  v7[58] = 0xFFFF;
  v7[48] = 514;
  return result;
}
