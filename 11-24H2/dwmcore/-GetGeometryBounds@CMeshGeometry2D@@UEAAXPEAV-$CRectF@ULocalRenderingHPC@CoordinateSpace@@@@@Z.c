/*
 * XREFs of ?GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x1802025A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMeshGeometry2D::GetGeometryBounds(__int64 a1, _OWORD *a2)
{
  float *v3; // r8
  unsigned __int64 v4; // rdx
  float v5; // xmm5_4
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm6_4
  float *v9; // r8
  __int64 v10; // rdx
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4

  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
  {
    v3 = *(float **)(a1 + 96);
    v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v3) >> 2);
    if ( v4 >= (__int64)(*(_QWORD *)(a1 + 128) - *(_QWORD *)(a1 + 120)) >> 3 )
      LODWORD(v4) = (__int64)(*(_QWORD *)(a1 + 128) - *(_QWORD *)(a1 + 120)) >> 3;
    if ( (_DWORD)v4 )
    {
      v5 = *v3;
      v6 = v3[1];
      v7 = *v3;
      v8 = v6;
      if ( (unsigned int)v4 > 1 )
      {
        v9 = v3 + 3;
        v10 = (unsigned int)(v4 - 1);
        do
        {
          v11 = v9[1];
          v12 = fminf(*v9, v7);
          v13 = fmaxf(*v9, v5);
          v9 += 3;
          v7 = v12;
          v5 = v13;
          v8 = fminf(v11, v8);
          v6 = fmaxf(v11, v6);
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      v7 = 0.0;
      v6 = 0.0;
      v8 = 0.0;
      v5 = 0.0;
    }
    *(float *)(a1 + 180) = v5;
    *(float *)(a1 + 176) = v8;
    *(float *)(a1 + 184) = v6;
    *(float *)(a1 + 172) = v7;
    *(_DWORD *)(a1 + 168) &= ~1u;
  }
  *a2 = *(_OWORD *)(a1 + 172);
}
