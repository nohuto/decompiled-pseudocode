/*
 * XREFs of ?CreateVisualFromBitmap@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1Bitmap1@@AEBUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x18067A4D0
 * Callers:
 *     ?LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x18067AB88 (-LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?DrawBitmap@ID2D1RenderTarget@@QEAAXPEAUID2D1Bitmap@@AEBUD2D_RECT_F@@MW4D2D1_BITMAP_INTERPOLATION_MODE@@PEBU3@@Z @ 0x1804C1B4C (-DrawBitmap@ID2D1RenderTarget@@QEAAXPEAUID2D1Bitmap@@AEBUD2D_RECT_F@@MW4D2D1_BITMAP_INTERPOLATIO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImageLoaders::CDCompVisualImageLoader::CreateVisualFromBitmap(
        ImageLoaders::CDCompVisualImageLoader *this,
        struct ID2D1Bitmap1 *a2,
        const struct tagSIZE *a3,
        struct IDCompositionVisual **a4)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v9)(__int64, struct IDCompositionVisual **); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD, __int64, int, struct D2D_RECT_F *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD, GUID *, FLOAT *, enum D2D1_BITMAP_INTERPOLATION_MODE *); // rdi
  int v17; // eax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v20; // eax
  __int64 v21; // rcx
  ID2D1RenderTarget *v22; // rcx
  float cx; // xmm0_4
  __m128i v24; // xmm1
  int v25; // eax
  struct IDCompositionVisual *v26; // rax
  struct D2D_RECT_F v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h] BYREF
  struct IDCompositionVisual *v30; // [rsp+58h] [rbp-28h] BYREF
  enum D2D1_BITMAP_INTERPOLATION_MODE v31[2]; // [rsp+60h] [rbp-20h] BYREF
  D2D_RECT_F v32; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a4 = 0LL;
  v5 = *((_QWORD *)this + 2);
  v30 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, struct IDCompositionVisual **))(*(_QWORD *)v5 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  v10 = v9(v5, &v30);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = *((_QWORD *)this + 2);
    *(_QWORD *)&v28.left = 0LL;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, struct D2D_RECT_F *))(*(_QWORD *)v12 + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v28);
    v14 = v13(v12, (unsigned int)a3->cx, (unsigned int)a3->cy, 87LL, 1, &v28);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v15 = *(_QWORD *)&v28.left;
      *(_QWORD *)v31 = 0LL;
      *(_QWORD *)&v28.right = 0LL;
      v16 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, FLOAT *, enum D2D1_BITMAP_INTERPOLATION_MODE *))(**(_QWORD **)&v28.left + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v28.right);
      v17 = v16(v15, 0LL, &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, &v28.right, v31);
      v11 = v17;
      if ( v17 >= 0 )
      {
        v18 = *((_QWORD *)this + 1);
        v29 = 0LL;
        v19 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v18 + 496LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
        v20 = v19(v18, *(_QWORD *)&v28.right, 0LL, &v29);
        v11 = v20;
        if ( v20 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 592LL))(*((_QWORD *)this + 1), v29);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 384LL))(*((_QWORD *)this + 1));
          v21 = *((_QWORD *)this + 1);
          v32 = 0LL;
          (*(void (__fastcall **)(__int64, D2D_RECT_F *))(*(_QWORD *)v21 + 376LL))(v21, &v32);
          v22 = (ID2D1RenderTarget *)*((_QWORD *)this + 1);
          cx = (float)a3->cx;
          v32.left = (float)v31[0];
          v24 = _mm_cvtsi32_si128(a3->cy);
          v32.right = cx + (float)v31[0];
          v32.top = (float)v31[1];
          v32.bottom = _mm_cvtepi32_ps(v24).m128_f32[0] + (float)v31[1];
          ID2D1RenderTarget::DrawBitmap(v22, a2, &v32, 1.0);
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 392LL))(
            *((_QWORD *)this + 1),
            0LL,
            0LL);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v28.left + 32LL))(*(_QWORD *)&v28.left);
          v25 = (*(__int64 (__fastcall **)(struct IDCompositionVisual *, _QWORD))(*(_QWORD *)v30 + 120LL))(
                  v30,
                  *(_QWORD *)&v28.left);
          v11 = v25;
          if ( v25 >= 0 )
          {
            v26 = v30;
            v30 = 0LL;
            *a4 = v26;
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v28.right);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v28);
            v11 = 0;
            goto LABEL_14;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x99,
            (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
            (const char *)(unsigned int)v25);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8B,
            (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v29);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v28.left + 32LL))(*(_QWORD *)&v28.left);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x86,
          (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
          (const char *)(unsigned int)v17);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v28.right);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v28);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (int)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
      (const char *)(unsigned int)v10);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  return v11;
}
