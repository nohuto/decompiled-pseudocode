/*
 * XREFs of ?GetTransform@CAtlasBitmapResource@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B6550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18020CDD8 (-GetSize@CAtlasTexture@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

char __fastcall CAtlasBitmapResource::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  CAtlasTexture *v5; // rcx
  int v6; // eax
  float v7; // xmm1_4
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  v4 = *(_BYTE *)(a2 + 65) & 0xE9;
  *(_BYTE *)(a2 + 64) = -86;
  *(_BYTE *)(a2 + 65) = v4 | 0x29;
  if ( a3 )
  {
    v5 = *(CAtlasTexture **)(a1 + 8);
    if ( v5 )
    {
      CAtlasTexture::GetSize(v5, &v9);
      v6 = v9;
      *(_QWORD *)a3 = 0LL;
      v7 = (float)SHIDWORD(v9);
      *(float *)(a3 + 8) = (float)v6;
      *(float *)(a3 + 12) = v7;
    }
    else
    {
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)a3 = 0LL;
    }
  }
  return 0;
}
