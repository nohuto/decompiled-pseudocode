/*
 * XREFs of PspWow64InitThreadGuestx86 @ 0x1409E0C08
 * Callers:
 *     PspWow64InitThread @ 0x1409E089C (PspWow64InitThread.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall PspWow64InitThreadGuestx86(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _DWORD *v7; // rbp
  int v8; // edi
  int v9; // esi
  int v10; // edx
  bool v11; // zf
  void *result; // rax

  v7 = (_DWORD *)(a2 + *(int *)(a2 + 8));
  v8 = a4;
  v9 = a3;
  v10 = a4 - 4 * (ExGenRandom(1, a2, a3, a4) & 0x1FF);
  v11 = (*(_BYTE *)(a1 + 1872) & 0x40) == 0;
  v7[44] = a5;
  if ( !v11 )
    v10 = v8;
  v7[41] = a6;
  v7[49] = v10 - 16;
  v7[46] = v9;
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
