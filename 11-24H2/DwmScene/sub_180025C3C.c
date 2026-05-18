/*
 * XREFs of sub_180025C3C @ 0x180025C3C
 * Callers:
 *     sub_180025160 @ 0x180025160 (sub_180025160.c)
 * Callees:
 *     sub_18006A0CC @ 0x18006A0CC (sub_18006A0CC.c)
 */

__int64 __fastcall sub_180025C3C(__int64 a1, float a2)
{
  float *v2; // rdx
  float v3; // xmm2_4
  int v4; // eax
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // eax
  float v9; // xmm0_4
  __int64 result; // rax

  v2 = (float *)(a1 + 3580);
  v3 = 1000.0 / a2;
  v4 = *(_DWORD *)(a1 + 3576) + 1;
  *(_DWORD *)(a1 + 3576) = v4;
  *(float *)(a1 + 3568) = a2;
  v6 = a2 + *(float *)(a1 + 3572);
  *(float *)(a1 + 3552) = v3;
  *(float *)(a1 + 3572) = v6;
  if ( v6 >= 1000.0 )
  {
    *(_DWORD *)(a1 + 3572) = 0;
    *(_DWORD *)(a1 + 3576) = 0;
    v7 = (float)v4;
    *(_DWORD *)(a1 + 3564) = *(_DWORD *)(a1 + 3584);
    v8 = *v2;
    *(_DWORD *)(a1 + 3584) = 2139095039;
    *(float *)(a1 + 3560) = v8;
    *v2 = -3.4028235e38;
    *(float *)(a1 + 3556) = (float)(v7 * 1000.0) / v6;
  }
  v9 = *(float *)(a1 + 3584);
  if ( v9 > v3 )
    v9 = v3;
  *(float *)(a1 + 3584) = v9;
  if ( v3 <= *v2 )
    v3 = *v2;
  *v2 = v3;
  *(_QWORD *)(a1 + 3592) = sub_18006A0CC(&unk_1801C44E0, 11LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3616) = sub_18006A0CC(&unk_1801C44E0, 6LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3600) = sub_18006A0CC(&unk_1801C44E0, 5LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3608) = sub_18006A0CC(&unk_1801C44E0, 7LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3624) = sub_18006A0CC(&unk_1801C44E0, 3LL, 2LL, 3LL);
  result = sub_18006A0CC(&unk_1801C44E0, 8LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3632) = result;
  return result;
}
