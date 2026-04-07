/*
 * XREFs of ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18006DF00
 * Callers:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x18006DB04 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800BBFA4 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18003CB6C (-Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PE.c)
 *     ?CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18003CD78 (-CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Width@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x18009A4AC (-Width@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 *     ?Height@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x18009B1E4 (-Height@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::_EnsureResources(CDesktopThumbnailCVI *this)
{
  int CachedVisualImageProxy; // edi
  CBaseObject **v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // r10d
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  float v13; // xmm2_4
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  CBaseObject *v17; // rcx
  __m128i v18; // xmm0
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  unsigned int v22; // eax
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  float v25[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v26; // [rsp+50h] [rbp-30h] BYREF
  float v27[4]; // [rsp+60h] [rbp-20h] BYREF

  CachedVisualImageProxy = 0;
  v2 = (CBaseObject **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    return (unsigned int)CachedVisualImageProxy;
  CachedVisualImageProxy = CCompositor::CreateCachedVisualImageProxy(
                             *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                             (struct CCachedVisualImageProxy **)this + 3);
  if ( CachedVisualImageProxy < 0 )
  {
    v22 = 595;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CachedVisualImageProxy, v22, 0LL);
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
    return (unsigned int)CachedVisualImageProxy;
  }
  v4 = *(_QWORD *)this;
  v26 = 0LL;
  CachedVisualImageProxy = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, __int128 *))(v4 + 16))(this, &v26);
  if ( CachedVisualImageProxy < 0 )
  {
    v22 = 598;
    goto LABEL_13;
  }
  v5 = *(_QWORD *)this;
  v24 = 0LL;
  CachedVisualImageProxy = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, __int64 *))(v5 + 24))(this, &v24);
  if ( CachedVisualImageProxy < 0 )
  {
    v22 = 601;
    goto LABEL_13;
  }
  v6 = (char *)this + 32;
  v7 = v24;
  v8 = (unsigned int)v26;
  v9 = DWORD1(v26);
  v10 = HIDWORD(v24);
  *((_QWORD *)this + 5) = *((_QWORD *)&v26 + 1);
  *((_DWORD *)this + 8) = v8;
  *((_DWORD *)this + 9) = v9;
  *((_QWORD *)this + 6) = v7;
  if ( !(_DWORD)v7 || !(_DWORD)v10 )
  {
    *((_DWORD *)this + 12) = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Width(v6, v7, v10, v8);
    *((_DWORD *)this + 13) = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Height(v12, v11);
  }
  v13 = (float)v9;
  v27[0] = (float)(int)v8;
  v27[1] = (float)v9;
  v27[2] = (float)(int)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Width(v6, v7, v10, v8) + (float)(int)v8;
  v16 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Height(v15, v14);
  v17 = *v2;
  v18 = _mm_cvtsi32_si128(v16);
  v19 = *((_QWORD *)this + 2);
  v25[1] = (float)v20;
  v27[3] = _mm_cvtepi32_ps(v18).m128_f32[0] + v13;
  v25[0] = (float)v21;
  CachedVisualImageProxy = CCachedVisualImageProxy::Update(
                             (__int64)v17,
                             (__int64)v27,
                             (__int64)v25,
                             0LL,
                             0LL,
                             *(_QWORD *)(v19 + 16),
                             0);
  if ( CachedVisualImageProxy < 0 )
  {
    v22 = 633;
    goto LABEL_13;
  }
  return (unsigned int)CachedVisualImageProxy;
}
