/*
 * XREFs of ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x180198840
 * Callers:
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010BFE0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180197360 (-GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801974E0 (-GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@.c)
 *     ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801978E0 (-GetDeviceTexture@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealizati.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180198030 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801986C0 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801990D8 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180198BE0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180198DB4 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?GetSize@CWICBitmapWrapper@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180198F60 (-GetSize@CWICBitmapWrapper@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmapInternal(
        CD2DBitmapCache *a1,
        struct _LUID a2,
        int a3,
        char a4,
        volatile signed __int32 **a5,
        _BYTE *a6)
{
  volatile signed __int32 *v6; // rbx
  unsigned __int64 v8; // r12
  __int64 v11; // rcx
  unsigned int v12; // ebp
  DWORD LowPart; // r13d
  __int64 v14; // rcx
  _DWORD *v15; // rax
  int v16; // ecx
  __int64 (__fastcall *v17)(CMILRefCountImpl *); // rax
  int v18; // et0
  __int64 v20; // rbp
  __int64 v21; // r12
  LONG HighPart; // r13d
  _DWORD *v23; // rax
  struct CSecondaryD2DBitmap *v24; // rsi
  int v25; // eax
  CWICBitmapWrapper *v26; // rcx
  struct D2D_SIZE_U (__fastcall *v27)(CSystemMemoryBitmap *__hidden); // rax
  int updated; // eax
  volatile signed __int32 *v29; // rax
  unsigned int v30; // [rsp+20h] [rbp-88h]
  int v32; // [rsp+38h] [rbp-70h] BYREF
  int v33; // [rsp+3Ch] [rbp-6Ch]
  struct CSecondaryD2DBitmap *v34; // [rsp+40h] [rbp-68h] BYREF
  _BYTE *v35; // [rsp+48h] [rbp-60h]
  struct _LUID v36; // [rsp+50h] [rbp-58h] BYREF
  int v37; // [rsp+58h] [rbp-50h]
  int v38; // [rsp+5Ch] [rbp-4Ch]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v6 = 0LL;
  v8 = HIDWORD(*(unsigned __int64 *)&a2);
  *a6 = 0;
  v11 = *((_QWORD *)a1 + 3);
  v12 = 0;
  v36 = a2;
  v35 = a6;
  if ( !v11 )
  {
    v12 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0xAEu, 0LL);
    goto LABEL_12;
  }
  LowPart = a2.LowPart;
  if ( (*(unsigned __int8 (**)(void))(*(_QWORD *)v11 + 56LL))() && *((_BYTE *)g_pComposition + 6466) )
    goto LABEL_14;
  v14 = *((_QWORD *)a1 + 4);
  if ( v14
    && (v15 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 64LL))(v14, &v32), *v15 == LowPart)
    && v15[1] == (_DWORD)v8
    && ((v16 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**((_QWORD **)a1 + 4) + 96LL))(
                            *((_QWORD *)a1 + 4),
                            &v34),
         v16 == -1)
     || v16 == a3
     || a3 == -3)
    && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 4) + 56LL))(*((_QWORD *)a1 + 4)) || a4) )
  {
    v6 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
    if ( v6 )
    {
      v17 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v6 + 8LL);
      if ( v17 == CMILRefCountImpl::AddReference )
      {
        v18 = _InterlockedAdd(v6, 1u);
        if ( (v18 < 0) ^ __OFSUB__(v17, CMILRefCountImpl::AddReference) | (v18 == 0) )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v30);
      }
      else
      {
        v17(*((CMILRefCountImpl **)a1 + 4));
      }
    }
  }
  else
  {
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**((_QWORD **)a1 + 3) + 40LL))(
                      *((_QWORD *)a1 + 3),
                      &v34) != -1
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 3) + 48LL))(*((_QWORD *)a1 + 3)) )
    {
LABEL_14:
      *v35 = 1;
      goto LABEL_12;
    }
    v20 = *((_QWORD *)a1 + 6);
    v21 = *((_QWORD *)a1 + 7);
    HighPart = v36.HighPart;
    while ( v20 != v21 )
    {
      v23 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _LUID *))(**(_QWORD **)(*(_QWORD *)v20 + 8LL) + 64LL))(
                        *(_QWORD *)(*(_QWORD *)v20 + 8LL),
                        &v36);
      if ( *v23 == a2.LowPart && v23[1] == HighPart )
      {
        v24 = *(struct CSecondaryD2DBitmap **)(*(_QWORD *)v20 + 8LL);
        if ( v24 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 8LL))(*(_QWORD *)(*(_QWORD *)v20 + 8LL));
          goto LABEL_31;
        }
        break;
      }
      v20 += 8LL;
    }
    v34 = 0LL;
    v25 = CD2DBitmapCache::CreateAndCacheBitmap(a1, a2, &v34);
    v12 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0xDCu, 0LL);
      if ( v34 )
        (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v34 + 16LL))(v34);
      goto LABEL_12;
    }
    v24 = v34;
LABEL_31:
    v26 = (CWICBitmapWrapper *)*((_QWORD *)a1 + 3);
    v27 = *(struct D2D_SIZE_U (__fastcall **)(CSystemMemoryBitmap *__hidden))(*(_QWORD *)v26 + 32LL);
    if ( v27 == CSystemMemoryBitmap::GetSize )
    {
      v32 = *((_DWORD *)v26 - 8);
      v33 = *((_DWORD *)v26 - 7);
    }
    else if ( v27 == CWICBitmapWrapper::GetSize )
    {
      CWICBitmapWrapper::GetSize(v26);
    }
    else
    {
      ((void (__fastcall *)(CWICBitmapWrapper *, int *))v27)(v26, &v32);
    }
    v37 = v32;
    v38 = v33;
    v36 = 0LL;
    updated = CD2DBitmapCache::UpdateCachedBitmap(a1);
    v12 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0xE3u, 0LL);
      if ( v24 )
        (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    else
    {
      v29 = (volatile signed __int32 *)((char *)v24 + 72);
      if ( !v24 )
        v29 = 0LL;
      v6 = v29;
    }
  }
LABEL_12:
  *a5 = v6;
  return v12;
}
