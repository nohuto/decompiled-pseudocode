/*
 * XREFs of ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180176E04
 * Callers:
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18018BF20 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802E2350 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@.c)
 * Callees:
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18002C31C (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18003F30C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x180041C44 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180176210 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 *     ?IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180177140 (-IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180177490 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ @ 0x18021FFE0 (-GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(CDxHandleYUVBitmapRealization *this)
{
  bool v1; // zf
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // rax
  __int64 v6; // rax
  bool IsHardwareProtected; // al
  enum DXGI_COLOR_SPACE_TYPE v8; // ecx
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // ebx
  __int64 v13; // rsi
  CD2DBitmapCache *v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  D2D_SIZE_U v17; // [rsp+48h] [rbp-C0h] BYREF
  __m128i v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  int v20; // [rsp+70h] [rbp-98h]
  int v21; // [rsp+74h] [rbp-94h]
  int v22; // [rsp+78h] [rbp-90h]
  bool v23; // [rsp+7Ch] [rbp-8Ch]
  __int16 v24; // [rsp+7Dh] [rbp-8Bh]
  char v25; // [rsp+7Fh] [rbp-89h]
  __m128i v26; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v27[64]; // [rsp+98h] [rbp-70h] BYREF
  int v28; // [rsp+D8h] [rbp-30h]
  __m128i v29; // [rsp+E8h] [rbp-20h] BYREF
  __m128i v30; // [rsp+F8h] [rbp-10h] BYREF

  v1 = (*((_DWORD *)this + 60) & 0x4000) == 0;
  v29 = 0LL;
  v30 = 0LL;
  v17 = 0LL;
  if ( v1 )
  {
    v3 = *(__m128i *)((char *)this + 156);
    v17.width = *((_DWORD *)this + 54);
    v4 = *((__m128i *)this + 14);
    v17.height = *((_DWORD *)this + 55);
    v30 = v3;
    v29 = v4;
  }
  else
  {
    v28 = 0;
    v18 = 0uLL;
    v26 = 0uLL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      this,
      (struct CMILMatrix *)v27,
      (__int64)&v18,
      &v26);
    v30 = v26;
    v29 = v18;
    v17.width = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8)) - _mm_cvtsi128_si32(v18);
    v17.height = _mm_cvtsi128_si32(_mm_srli_si128(v18, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
  }
  v5 = *((_QWORD *)this + 47);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 80LL) + 936LL);
  else
    v6 = *((_QWORD *)this + 33);
  v22 = 0;
  v19 = v6;
  v20 = *((_DWORD *)this + 74);
  v21 = 0;
  IsHardwareProtected = CDxHandleYUVBitmapRealization::IsHardwareProtected((CDxHandleYUVBitmapRealization *)((char *)this + 328));
  v8 = *((_DWORD *)this + 38);
  v23 = IsHardwareProtected;
  v24 = 0;
  v25 = 0;
  if ( IsDXGIColorSpaceRec2020(v8)
    && *((int *)CDxHandleYUVBitmapRealization::GetDevice((CDxHandleYUVBitmapRealization *)((char *)this + 328)) + 154) >= 40960 )
  {
    v18.m128i_i64[0] = 0x30000000ALL;
    v22 = 1065353216;
    v18.m128i_i32[2] = 1;
  }
  else
  {
    v18.m128i_i32[0] = 28;
    *(__int64 *)((char *)v18.m128i_i64 + 4) = 3LL;
  }
  v9 = CDecodeBitmap::EnsureTargetBitmap(
         *((CDecodeBitmap **)this + 36),
         &v17,
         (const struct PixelFormatInfo *)&v18,
         (const struct RenderTargetInfo *)&v19);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = *((_DWORD *)this + 60);
    v13 = *(_QWORD *)(*((_QWORD *)this + 36) + 120LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 160LL))(v13) != ((v12 & 2) != 0) )
    {
      v16 = *((_DWORD *)this + 60) >> 1;
      LOBYTE(v16) = (*((_DWORD *)this + 60) & 2) != 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 168LL))(v13, v16);
    }
    v14 = (CD2DBitmapCache *)*((_QWORD *)this + 36);
    if ( *((_BYTE *)v14 + 136) )
    {
      return 0;
    }
    else
    {
      v15 = CRenderTargetBitmap::VideoProcessorBlt(
              (__int64)v14 + 80,
              *(_QWORD **)(*((_QWORD *)this + 47) + 120LL),
              *((_DWORD *)this + 70),
              *((_DWORD *)this + 38),
              (__int64)&v30,
              1,
              0LL,
              (__int64)&v29);
      v10 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x31u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x2FCu, 0LL);
      }
      else
      {
        *((_BYTE *)v14 + 136) = 1;
        CD2DBitmapCache::MarkFullInvalid(v14);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x2E6u, 0LL);
  }
  return v10;
}
