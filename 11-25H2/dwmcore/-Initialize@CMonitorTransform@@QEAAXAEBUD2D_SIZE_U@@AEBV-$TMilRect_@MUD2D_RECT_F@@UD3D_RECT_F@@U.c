/*
 * XREFs of ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180250B78
 * Callers:
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C33F8 (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801A8D4C (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x18023EE50 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18028A4B8 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 *     ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x18028B060 (-HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18028B390 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C060 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18002C178 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180077EC4 (-IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180115540 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180170C98 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18025AD80 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CMonitorTransform::Initialize(__int64 a1, int *a2, float *a3, float a4, int a5, int a6, int *a7)
{
  char v7; // si
  char v10; // r12
  char v11; // al
  char v12; // al
  float v13; // xmm0_4
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v19; // r8
  const struct D2D_RECT_F *v20; // r11
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // r10d
  int v26; // r10d
  int v27; // r10d
  float v28; // xmm2_4
  float v29; // xmm1_4
  int v30; // eax
  int v31; // r11d
  float v32; // xmm1_4
  int v33; // eax
  float v34; // xmm1_4
  char v35; // al
  char v36; // cl
  float v37; // [rsp+28h] [rbp-81h] BYREF
  float v38; // [rsp+2Ch] [rbp-7Dh] BYREF
  float v39; // [rsp+30h] [rbp-79h] BYREF
  float v40; // [rsp+34h] [rbp-75h]
  float v41; // [rsp+38h] [rbp-71h]
  float v42; // [rsp+3Ch] [rbp-6Dh]
  _BYTE v43[64]; // [rsp+48h] [rbp-61h] BYREF
  int v44; // [rsp+88h] [rbp-21h]
  struct D2D_RECT_F v45; // [rsp+98h] [rbp-11h] BYREF

  v39 = 0.0;
  v7 = 0;
  v40 = 0.0;
  if ( !*a2 || (v10 = 1, !a2[1]) )
    v10 = 0;
  *(_DWORD *)(a1 + 4) = a5;
  *(float *)a1 = a4;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
  if ( a7 )
  {
    *(_OWORD *)(a1 + 24) = *(_OWORD *)a7;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 48) = a6;
  *(_DWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 52) = 1065353216LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_DWORD *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 72) = 1065353216LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 92) = 1065353216LL;
  *(_QWORD *)(a1 + 100) = 0LL;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 1065353216;
  v11 = *(_BYTE *)(a1 + 117);
  *(_BYTE *)(a1 + 116) = -86;
  *(_BYTE *)(a1 + 117) = v11 & 0xC0 | 0x29;
  *(_QWORD *)(a1 + 248) = 1065353216LL;
  *(_QWORD *)(a1 + 188) = 1065353216LL;
  *(_QWORD *)(a1 + 196) = 0LL;
  *(_DWORD *)(a1 + 204) = 0;
  *(_QWORD *)(a1 + 208) = 1065353216LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 228) = 1065353216LL;
  *(_QWORD *)(a1 + 236) = 0LL;
  *(_DWORD *)(a1 + 244) = 0;
  v12 = *(_BYTE *)(a1 + 253);
  *(_BYTE *)(a1 + 252) = -86;
  *(_BYTE *)(a1 + 253) = v12 & 0xC0 | 0x29;
  v13 = (float)((float)(a3[2] - *a3) * a4) + 6291456.25;
  v37 = v13;
  v14 = (int)(LODWORD(v13) << 10) >> 11;
  *(_DWORD *)(a1 + 40) = v14;
  v37 = (float)((float)(a3[3] - a3[1]) * a4) + 6291456.25;
  v15 = (int)(LODWORD(v37) << 10) >> 11;
  *(_DWORD *)(a1 + 44) = v15;
  if ( v10 )
  {
    v16 = (int)(LODWORD(v13) << 10) >> 11;
    if ( ((a6 - 2) & 0xFFFFFFFD) != 0 )
    {
      v14 = *a2;
      if ( v16 < *a2 )
        v14 = (int)(LODWORD(v13) << 10) >> 11;
      v17 = v15;
      *(_DWORD *)(a1 + 40) = v14;
      v15 = a2[1];
    }
    else
    {
      v14 = a2[1];
      if ( v16 < v14 )
        v14 = (int)(LODWORD(v13) << 10) >> 11;
      v17 = v15;
      *(_DWORD *)(a1 + 40) = v14;
      v15 = *a2;
    }
    if ( v17 < v15 )
      v15 = v17;
    *(_DWORD *)(a1 + 44) = v15;
  }
  v41 = (float)v14;
  v42 = (float)v15;
  CMILMatrix::InferAffineMatrix(a1 + 52, a3, &v39);
  v21 = *(_DWORD *)(a1 + 116);
  v22 = *(_OWORD *)(a1 + 68);
  *(_OWORD *)(a1 + 188) = *(_OWORD *)(a1 + 52);
  v23 = *(_OWORD *)(a1 + 84);
  *(_OWORD *)(a1 + 204) = v22;
  v24 = *(_OWORD *)(a1 + 100);
  *(_OWORD *)(a1 + 220) = v23;
  *(_OWORD *)(a1 + 236) = v24;
  *(_DWORD *)(a1 + 252) = v21;
  v26 = v25 - 2;
  if ( v26 )
  {
    v27 = v26 - 1;
    if ( v27 )
    {
      if ( v27 != 1 )
        goto LABEL_25;
      CMILMatrix::Rotate90((CMILMatrix *)(a1 + 52));
      v28 = 0.0;
      v29 = (float)*(int *)(a1 + 44);
    }
    else
    {
      CMILMatrix::Scale((CMILMatrix *)(a1 + 52), -1.0, -1.0, 1.0);
      v28 = (float)*(int *)(a1 + 44);
      v29 = (float)*(int *)(a1 + 40);
    }
  }
  else
  {
    CMILMatrix::Rotate270((CMILMatrix *)(a1 + 52));
    v29 = 0.0;
    v28 = (float)*(int *)(a1 + 40);
  }
  CMILMatrix::Translate((CMILMatrix *)(a1 + 52), v29, v28);
LABEL_25:
  if ( a7 )
  {
    v45 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(a1 + 52, v20, &v45.left);
    v30 = a7[1];
    v31 = *a7;
    v44 = 0;
    v32 = (float)v30;
    v33 = a7[2];
    v40 = v32;
    v39 = (float)v31;
    v34 = (float)a7[3];
    v41 = (float)v33;
    v42 = v34;
    CMILMatrix::InferAffineMatrix((__int64)v43, &v45.left, &v39);
    CMILMatrix::Multiply((CMILMatrix *)(a1 + 52), (const struct CMILMatrix *)v43);
  }
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a1 + 52);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a1 + 68);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a1 + 84);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a1 + 100);
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(a1 + 116);
  CMILMatrix::Invert((CMILMatrix *)(a1 + 120), v18, v19);
  if ( a7 && v10 && (*a7 || a7[1] || a7[2] != *a2 || a7[3] != a2[1]) )
  {
    v35 = 1;
    v36 = 1;
  }
  else
  {
    v35 = 0;
    v36 = 0;
  }
  *(_BYTE *)(a1 + 256) = v36;
  *(_BYTE *)(a1 + 257) = v35;
  v45 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(a1 + 52, (const struct D2D_RECT_F *)(a1 + 8), &v45.left);
  v38 = 0.0;
  v37 = 0.0;
  *(_BYTE *)(a1 + 258) = IsPixelAligned(&v45);
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)(a1 + 52), &v38, &v37);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v38 - a4) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v37 - a4) & _xmm) > 0.0000011920929 )
  {
    v7 = 1;
  }
  *(_BYTE *)(a1 + 259) = v7;
}
