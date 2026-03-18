/*
 * XREFs of ?ConvertToMatrix_3x4@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1400397FC
 * Callers:
 *     ColorSpaceTransformConvert @ 0x140039740 (ColorSpaceTransformConvert.c)
 * Callees:
 *     ColorSpaceTransformCombine @ 0x140043914 (ColorSpaceTransformCombine.c)
 *     ?InitializeIdentityMatrix@@YAJPEAMII@Z @ 0x14005C3D8 (-InitializeIdentityMatrix@@YAJPEAMII@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall ConvertToMatrix_3x4(const struct _D3DKMDT_GAMMA_RAMP *a1, struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned int v2; // ebx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rdi
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v6; // rbp
  float v7; // xmm0_4
  float *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // r8
  int v19; // xmm0_4
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v20; // rcx

  v2 = 0;
  if ( a1->Type == (D3DDDI_GAMMARAMP_MATRIX_3x4|D3DDDI_GAMMARAMP_DEFAULT) )
  {
    pRgb256x3x16 = a2->Data.pRgb256x3x16;
    v6 = a1->Data.pRgb256x3x16;
    *(_DWORD *)&pRgb256x3x16->Red[24] = 1065353216;
    if ( *(_DWORD *)&v6[32].Red[22] == 1 )
    {
      memmove(&pRgb256x3x16->Red[26], &v6[32].Red[24], 0xC000uLL);
    }
    else
    {
      v7 = 0.0;
      v8 = (float *)&pRgb256x3x16->Red[28];
      v9 = 4096LL;
      do
      {
        v8[1] = v7;
        *v8 = v7;
        *(v8 - 1) = v7;
        v8 += 3;
        v7 = v7 + 0.00024420026;
        --v9;
      }
      while ( v9 );
    }
    if ( *(_DWORD *)&v6[32].Red[2] == 1 )
    {
      v15 = 0LL;
      v16 = 3LL;
      do
      {
        v17 = 0;
        v18 = 0LL;
        do
        {
          if ( v17 >= 3 )
            v19 = 0;
          else
            v19 = *(_DWORD *)&v6[32].Red[2 * v15 + 4 + 2 * v18];
          *(_DWORD *)pRgb256x3x16->Red = v19;
          ++v17;
          pRgb256x3x16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)pRgb256x3x16 + 4);
          ++v18;
        }
        while ( v17 < 4 );
        v15 += 3LL;
        --v16;
      }
      while ( v16 );
    }
    else
    {
      v10 = 0;
      *(_OWORD *)pRgb256x3x16->Red = 0LL;
      v11 = 0LL;
      *(_OWORD *)&pRgb256x3x16->Red[8] = 0LL;
      *(_OWORD *)&pRgb256x3x16->Red[16] = 0LL;
      do
      {
        v12 = 4 * v10++;
        v13 = v11 + v12;
        ++v11;
        *(_DWORD *)&pRgb256x3x16->Red[2 * v13] = 1065353216;
      }
      while ( v10 < 3 );
    }
  }
  else if ( (unsigned int)(a1->Type - 2) <= 1 )
  {
    v20 = a2->Data.pRgb256x3x16;
    *(_DWORD *)&v20->Red[24] = 1065353216;
    InitializeIdentityMatrix((float *)v20->Red, (unsigned int)a2, 4u);
    return (unsigned int)ColorSpaceTransformCombine(0LL, a1, a2);
  }
  return v2;
}
