/*
 * XREFs of ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x14000B848
 * Callers:
 *     DrvPixelSpaceToUniformSpacePoint @ 0x14000B800 (DrvPixelSpaceToUniformSpacePoint.c)
 * Callees:
 *     DrvIsUniformSpaceMapping @ 0x14000B9A0 (DrvIsUniformSpaceMapping.c)
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 */

__int64 __fastcall TransformPointWithUniformSpaceMapping(struct _MDEV *a1, int *a2, int *a3, int a4)
{
  unsigned int v8; // ebx
  unsigned int v10; // r8d
  unsigned int v11; // ebp
  char *v12; // r12
  int v13; // r8d
  int v14; // r9d
  int v15; // r10d
  _DWORD *v16; // r11
  char *v17; // r8
  float v18; // xmm3_4
  __int64 v19; // [rsp+20h] [rbp-28h]

  v8 = 0;
  if ( (unsigned int)DrvIsUniformSpaceMapping() )
  {
    v10 = 0;
    v11 = *((_DWORD *)a1 + 5);
    LODWORD(v19) = *a2;
    HIDWORD(v19) = *a3;
    while ( v10 < v11 )
    {
      v12 = (char *)a1 + 56 * v10;
      if ( (unsigned int)PtInRect(&v12[a4 != 0 ? 76LL : 56LL], v19) )
      {
        v8 = 1;
        v17 = &v12[(-(__int64)(a4 != 0) & 0xFFFFFFFFFFFFFFECuLL) + 76];
        v18 = (float)((float)((float)(*((_DWORD *)v17 + 3) - *((_DWORD *)v17 + 1)) / (float)(v16[3] - v16[1]))
                    * (float)(v14 - v16[1]))
            + 0.5;
        *a2 = *(_DWORD *)v17
            + (int)(float)((float)((float)((float)(*((_DWORD *)v17 + 2) - *(_DWORD *)v17) / (float)(v16[2] - *v16))
                                 * (float)(v15 - *v16))
                         + 0.5);
        *a3 = *((_DWORD *)v17 + 1) + (int)v18;
        return v8;
      }
      v10 = v13 + 1;
    }
  }
  return v8;
}
