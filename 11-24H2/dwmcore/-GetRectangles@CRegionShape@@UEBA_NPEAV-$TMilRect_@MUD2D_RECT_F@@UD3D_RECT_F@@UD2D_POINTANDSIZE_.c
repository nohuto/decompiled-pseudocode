/*
 * XREFs of ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180063A70
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180063EA4 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180063F70 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 */

char __fastcall CRegionShape::GetRectangles(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  unsigned int RectangleCount; // eax
  __int64 v6; // r10
  int v7; // r9d
  unsigned int v8; // r15d
  __int64 v9; // r10
  int *v10; // r11
  unsigned __int64 v11; // rsi
  int v12; // edi
  char *v13; // rbp
  int v15; // eax
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rdx
  float v19; // xmm1_4
  int v20; // eax
  int *v21; // rcx
  int *v22; // rdx
  __int64 v23; // r10
  char v24[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]
  int *v26; // [rsp+30h] [rbp-38h]
  char *v27; // [rsp+38h] [rbp-30h]
  int v28; // [rsp+40h] [rbp-28h]
  int v29; // [rsp+44h] [rbp-24h]

  v3 = 0;
  if ( a3 )
  {
    RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(a1 + 16));
    if ( v7 == RectangleCount )
    {
      v8 = 0;
      FastRegion::CRegion::BeginIterator(v6, v24);
      LODWORD(v9) = v29;
      v10 = v26;
      v11 = v25;
      v12 = v28;
      v13 = v27;
LABEL_4:
      while ( (unsigned __int64)v10 < v11 )
      {
        v15 = 2 * v12;
        v16 = v10[2];
        ++v12;
        v17 = v15;
        v18 = v8++;
        v18 *= 2LL;
        v19 = (float)*v10;
        v20 = *(_DWORD *)&v13[4 * v15 + 4];
        *(float *)(a2 + 8 * v18) = (float)*(int *)&v13[4 * v17];
        *(float *)(a2 + 8 * v18 + 4) = v19;
        *(float *)(a2 + 8 * v18 + 8) = (float)v20;
        *(float *)(a2 + 8 * v18 + 12) = (float)v16;
        if ( v12 >= (int)v9 )
        {
          v21 = v10 + 2;
          while ( 1 )
          {
            v22 = v21;
            v13 = (char *)v21 + v21[1];
            v23 = v21[3] - (_QWORD)v13;
            v10 = v21;
            v21 += 2;
            v9 = ((__int64)v21 + v23) >> 3;
            if ( (_DWORD)v9 )
              break;
            if ( (unsigned __int64)v22 >= v11 )
              goto LABEL_4;
          }
          v12 = 0;
        }
      }
      return 1;
    }
  }
  return v3;
}
