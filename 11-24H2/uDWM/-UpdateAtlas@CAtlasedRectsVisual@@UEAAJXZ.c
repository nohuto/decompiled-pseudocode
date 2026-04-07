/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180022E40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateAtlasedRectsGroupProxy@CCompositor@@QEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z @ 0x180023098 (-CreateAtlasedRectsGroupProxy@CCompositor@@QEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800230A4 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180023348 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?Update@CAtlasedRectsGroupProxy@@QEAAJPEBVCBitmapSourceProxy@@PEAPEAVCAtlasedRectsMeshProxy@@I@Z @ 0x180023424 (-Update@CAtlasedRectsGroupProxy@@QEAAJPEBVCBitmapSourceProxy@@PEAPEAVCAtlasedRectsMeshProxy@@I@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(CAtlasedRectsVisual *this)
{
  unsigned int v2; // ebx
  struct CAtlasedRectsMeshProxy **v3; // rsi
  unsigned __int64 v4; // r12
  const struct CBitmapSourceProxy *v5; // r13
  __int32 *v6; // rcx
  CCompositor *v7; // rbx
  int v8; // eax
  unsigned __int128 v9; // rax
  __int64 v10; // r15
  __int64 i; // r14
  CAtlasedImage *v12; // r8
  const struct CBitmapSourceProxy *v13; // rcx
  const struct CBitmapSourceProxy *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  CBaseObject *v16; // rcx
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-40h]
  CBaseObject *v20; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT *p_si128; // [rsp+38h] [rbp-28h]
  __m128i si128; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  v20 = 0LL;
  v3 = 0LL;
  v4 = *((unsigned int *)this + 56);
  if ( !(_DWORD)v4 )
  {
LABEL_20:
    (*(void (__fastcall **)(CAtlasedRectsVisual *))(*(_QWORD *)this + 192LL))(this);
    goto LABEL_21;
  }
  v5 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  p_si128 = 0LL;
  v6 = (__int32 *)*((_QWORD *)this + 29);
  if ( v6 )
  {
    si128.m128i_i32[0] = *v6;
    si128.m128i_i32[1] = v6[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 18) - v6[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 19) - v6[3];
    p_si128 = (struct tagRECT *)&si128;
  }
  v7 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
  v8 = CCompositor::CreateAtlasedRectsGroupProxy(v7, &v20);
  v2 = v8;
  if ( v8 < 0 )
  {
    v19 = 172;
LABEL_27:
    v18 = v8;
    goto LABEL_25;
  }
  v9 = v4 * (unsigned __int128)8uLL;
  if ( !is_mul_ok(v4, 8uLL) )
    *(_QWORD *)&v9 = -1LL;
  v3 = (struct CAtlasedRectsMeshProxy **)operator new[](v9, *((const struct std::nothrow_t **)&v9 + 1));
  if ( v3 )
  {
    v10 = 0LL;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
    {
      v12 = *(CAtlasedImage **)(*((_QWORD *)this + 25) + 8 * i);
      v13 = (const struct CBitmapSourceProxy *)*((_QWORD *)v12 + 9);
      if ( v13 )
        v13 = (const struct CBitmapSourceProxy *)*((_QWORD *)v13 + 2);
      v14 = v13;
      if ( v5 )
        v14 = v5;
      v5 = v14;
      if ( v13 )
      {
        CAtlasedImage::SetMarginClip(v12, p_si128);
        v8 = CAtlasedImage::Validate(*(CAtlasedImage **)(*((_QWORD *)this + 25) + 8 * i));
        v2 = v8;
        if ( v8 < 0 )
        {
          v19 = 191;
          goto LABEL_27;
        }
        if ( (*(unsigned __int8 (__fastcall **)(CAtlasedRectsVisual *, _QWORD))(*(_QWORD *)this + 208LL))(
               this,
               *(_QWORD *)(*((_QWORD *)this + 25) + 8 * i)) )
        {
          v3[v10] = *(struct CAtlasedRectsMeshProxy **)(*(_QWORD *)(*((_QWORD *)this + 25) + 8 * i) + 88LL);
          v10 = (unsigned int)(v10 + 1);
        }
      }
    }
    v8 = CAtlasedRectsGroupProxy::Update(v20, v5, v3, v10);
    v2 = v8;
    if ( v8 >= 0 )
      goto LABEL_20;
    v19 = 200;
    goto LABEL_27;
  }
  v2 = -2147024882;
  v19 = 174;
  v18 = -2147024882;
LABEL_25:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v19, 0LL);
LABEL_21:
  CDisplayBlackCurtainAnimatedVisual::operator delete(v3, v15);
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    CBaseObject::Release(v16);
  }
  return v2;
}
