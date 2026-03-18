/*
 * XREFs of ?GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A95B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180221AB0 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CAffineTransform2DEffect::GetBoundsFromInputs(float *a1, _DWORD *a2, float *a3)
{
  float *v3; // rax
  float v4; // xmm8_4
  float v5; // xmm4_4
  float v6; // xmm8_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm2_4
  float v11; // xmm10_4
  float v12; // xmm2_4
  float v13; // xmm12_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm11_4
  float v17; // xmm8_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  __int64 v21; // rcx
  float v23; // [rsp+28h] [rbp-80h]
  _DWORD v24[5]; // [rsp+2Ch] [rbp-7Ch] BYREF

  if ( a2[6] == 1 )
  {
    v4 = a1[48];
    v5 = v4 * *(float *)(*(_QWORD *)a2 + 16LL);
    v6 = v4 * *(float *)(*(_QWORD *)a2 + 8LL);
    v7 = a1[49] * *(float *)(*(_QWORD *)a2 + 8LL);
    v8 = a1[49] * *(float *)(*(_QWORD *)a2 + 16LL);
    v9 = a1[46] * *(float *)(*(_QWORD *)a2 + 12LL);
    v10 = a1[47];
    v11 = v10 * *(float *)(*(_QWORD *)a2 + 12LL);
    v12 = v10 * *(float *)(*(_QWORD *)a2 + 4LL);
    v3 = (float *)v24;
    v13 = (float)((float)(a1[46] * *(float *)(*(_QWORD *)a2 + 4LL)) + v6) + a1[50];
    v23 = (float)(v5 + (float)(a1[46] * *(float *)(*(_QWORD *)a2 + 4LL))) + a1[50];
    v14 = (float)(v8 + v11) + a1[51];
    v15 = (float)(v8 + v12) + a1[51];
    *(float *)&v24[1] = (float)(v5 + v9) + a1[50];
    v16 = (float)(v12 + v7) + a1[51];
    v17 = (float)(v6 + v9) + a1[50];
    *(float *)&v24[2] = v14;
    *(float *)v24 = v15;
    v18 = v13;
    v19 = (float)(v7 + v11) + a1[51];
    v20 = v16;
    *(float *)&v24[3] = v17;
    v21 = 3LL;
    *(float *)&v24[4] = v19;
    do
    {
      v13 = fminf(v13, *(v3 - 1));
      v16 = fminf(v16, *v3);
      v18 = fmaxf(v18, *(v3 - 1));
      v20 = fmaxf(v20, *v3);
      v3 += 2;
      *a3 = v13;
      --v21;
    }
    while ( v21 );
    a3[1] = v16;
    a3[2] = v18;
    a3[3] = v20;
  }
  else
  {
    LOBYTE(v3) = CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  }
  return (char)v3;
}
