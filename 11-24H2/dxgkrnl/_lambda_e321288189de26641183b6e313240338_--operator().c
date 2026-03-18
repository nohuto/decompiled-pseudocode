/*
 * XREFs of _lambda_e321288189de26641183b6e313240338_::operator() @ 0x1401BDE20
 * Callers:
 *     _lambda_2b0a0ae50116c8aa91dc0eedbc3a4823_::operator() @ 0x1401BD4FC (_lambda_2b0a0ae50116c8aa91dc0eedbc3a4823_--operator().c)
 * Callees:
 *     ConvertDmmToDisplayConfigRotation @ 0x1402D7EC0 (ConvertDmmToDisplayConfigRotation.c)
 */

__int64 __fastcall lambda_e321288189de26641183b6e313240338_::operator()(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  _DWORD *v5; // r10
  int v6; // eax
  _DWORD *v7; // r11
  int v8; // eax
  __int64 result; // rax

  *(_QWORD *)(a3 + 8) = 16911106LL;
  *(_QWORD *)a3 = 0x8004700000010000uLL;
  v5 = (_DWORD *)a3;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(a4 + 4);
  *(_DWORD *)(a3 + 24) = a2;
  *(_DWORD *)(a3 + 28) = *(_DWORD *)(a4 + 12);
  if ( (*(_DWORD *)a4 & 1) != 0 )
  {
    *(_QWORD *)a3 = 0x8004700001030B02uLL;
    *(_DWORD *)(a3 + 88) = *(_DWORD *)(a4 + 24);
    *(_DWORD *)(a3 + 92) = *(_DWORD *)(a4 + 28);
    *(_DWORD *)(a3 + 96) = 21;
    *(_DWORD *)(a3 + 48) = *(_DWORD *)(a4 + 36);
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a4 + 40);
    *(_DWORD *)(a3 + 72) ^= (*(_DWORD *)(a3 + 72) ^ (*(_DWORD *)(a4 + 44) << 16)) & 0x3F0000;
    v6 = ConvertDmmToDisplayConfigRotation(*(unsigned int *)(a4 + 32));
    v5[26] = v6;
    v5[29] = v7[4];
    v5[30] = v7[5];
    if ( ((v7[8] - 1) & 0xFFFFFFFD) != 0 )
    {
      v5[31] = v7[7];
      v8 = v7[6];
    }
    else
    {
      v5[31] = v7[6];
      v8 = v7[7];
    }
    v5[32] = v8;
    v5[49] = v7[9];
    v5[50] = v7[10];
    v5[53] = 1;
  }
  result = a5;
  v5[39] = a5;
  v5[28] = 1;
  v5[27] = 1;
  return result;
}
