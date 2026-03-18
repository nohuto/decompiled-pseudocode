/*
 * XREFs of ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x180170F18
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801714A0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800668C0 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x180099990 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800C6230 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x180105B10 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801700E8 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180173370 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18019F174 (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1801CB910 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAVIOverlayPlaneResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180200890 (-GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAVIOverlayPlaneResource@@PEAUD2D_S.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertDesktopAndAppPlanes(
        CConversionSwapChain *this,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3)
{
  CConversionSwapChain *v3; // rsi
  __int64 v4; // rcx
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v6; // r12
  __int128 v7; // xmm1
  int *v8; // rdi
  int AppOverlayShaderResourceView; // eax
  unsigned int v10; // ebx
  _DWORD **v11; // r14
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, __int64 *); // r13
  __int64 v14; // rax
  int v15; // eax
  const struct FastRegion::Internal::CRgnData **v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // rdx
  int v19; // ecx
  __int64 v20; // r13
  __int128 v21; // xmm0
  int v22; // r15d
  __int128 v23; // xmm1
  struct ID3D11ShaderResourceView *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rsi
  char v28; // bl
  float v29; // xmm6_4
  int v30; // edi
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  unsigned __int64 v34; // r9
  __int64 v35; // r13
  __int128 v37; // xmm0
  int v38; // ebx
  __int128 v39; // xmm1
  __int64 v40; // rdx
  int v41; // eax
  int v42; // eax
  FastRegion::Internal::CRgnData *v43; // rcx
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rdx
  int v47; // eax
  FastRegion::Internal::CRgnData *v48; // rcx
  void *v49; // [rsp+30h] [rbp-D8h]
  int v50; // [rsp+88h] [rbp-80h]
  __int64 v51[2]; // [rsp+98h] [rbp-70h] BYREF
  struct ID3D11ShaderResourceView *v52; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-58h] BYREF
  CConversionSwapChain *v54; // [rsp+B8h] [rbp-50h]
  struct D2D_SIZE_U v55; // [rsp+C0h] [rbp-48h] BYREF
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v56; // [rsp+C8h] [rbp-40h]
  char v57[8]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v58; // [rsp+D8h] [rbp-30h]
  _DWORD *v59; // [rsp+E0h] [rbp-28h]
  __int64 v60; // [rsp+E8h] [rbp-20h]
  int v61; // [rsp+F0h] [rbp-18h]
  int v62; // [rsp+F4h] [rbp-14h]
  _DWORD *v63; // [rsp+100h] [rbp-8h]
  __int64 v64; // [rsp+108h] [rbp+0h]
  __int64 v65[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v66[2]; // [rsp+120h] [rbp+18h] BYREF
  int v67; // [rsp+130h] [rbp+28h] BYREF
  __int128 v68; // [rsp+138h] [rbp+30h] BYREF
  __int128 v69; // [rsp+148h] [rbp+40h] BYREF
  __int128 v70; // [rsp+158h] [rbp+50h] BYREF
  enum DXGI_FORMAT v71[4]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v72[3]; // [rsp+180h] [rbp+78h] BYREF
  FastRegion::Internal::CRgnData *v73; // [rsp+198h] [rbp+90h] BYREF
  int v74; // [rsp+1A0h] [rbp+98h] BYREF
  int *v75; // [rsp+1E8h] [rbp+E0h] BYREF
  int v76; // [rsp+1F0h] [rbp+E8h] BYREF
  FastRegion::CRegion *v77[10]; // [rsp+238h] [rbp+130h] BYREF
  FastRegion::CRegion *v78[10]; // [rsp+288h] [rbp+180h] BYREF

  v3 = this;
  v54 = this;
  v4 = *((_QWORD *)this + 65) + 8LL;
  v53 = 0LL;
  v52 = 0LL;
  v56 = a3;
  v6 = a3;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 32LL))(v4, &v67);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)v3 + 65) + 8LL) + 24LL))(
    *((_QWORD *)v3 + 65) + 8LL,
    v72);
  v71[2] = *((enum DXGI_FORMAT *)v6 + 23);
  v55 = 0LL;
  v71[0] = DXGI_FORMAT_UNKNOWN;
  v71[1] = DXGI_FORMAT_R32G32B32A32_UINT;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v77, (const struct tagRECT *)((char *)a2 + 52));
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v78, (const struct tagRECT *)((char *)v6 + 52));
  v7 = *(_OWORD *)((char *)v6 + 52);
  v75 = &v76;
  v76 = 0;
  v8 = (int *)((char *)v3 + 888);
  *(_OWORD *)v51 = 0LL;
  *(_OWORD *)((char *)v3 + 888) = v7;
  AppOverlayShaderResourceView = CConversionSwapChain::GetAppOverlayShaderResourceView(
                                   v3,
                                   *((struct IOverlayPlaneResource **)v6 + 1),
                                   &v55,
                                   v71,
                                   &v52);
  v10 = AppOverlayShaderResourceView;
  if ( AppOverlayShaderResourceView < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, AppOverlayShaderResourceView, 0x2DDu, 0LL);
    goto LABEL_20;
  }
  v11 = (_DWORD **)((char *)v3 + 800);
  CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v3 + 100, v77);
  v12 = *((_QWORD *)v3 + 65);
  v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)(v12 + 8) + 104LL);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v3 + 65) + 88LL))(*((_QWORD *)v3 + 65), &v70);
  v15 = v13(v12 + 8, v14, &v53);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x2E3u, 0LL);
    goto LABEL_20;
  }
  if ( !**v11 )
  {
LABEL_6:
    if ( *((_BYTE *)v3 + 904) )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v73, (const struct tagRECT *)((char *)v3 + 888));
      CRegion::Subtract(&v73, v77);
      FastRegion::CRegion::BeginIterator((int **)&v73, (__int64)v57);
      while ( (unsigned __int64)v59 < v58 )
      {
        v44 = *(_OWORD *)((char *)v6 + 36);
        HIDWORD(v51[0]) = *v59;
        v45 = *(_OWORD *)((char *)v6 + 20);
        HIDWORD(v51[1]) = v59[2];
        v46 = 2 * v61;
        *(_OWORD *)v66 = v44;
        *(_OWORD *)v65 = v45;
        LODWORD(v51[0]) = *(_DWORD *)(v60 + 4 * v46);
        LODWORD(v51[1]) = *(_DWORD *)(v60 + 4 * v46 + 4);
        LODWORD(v49) = *((_DWORD *)v6 + 17);
        v47 = CConversionSwapChain::ConvertSingleResource(
                (int)v3,
                (int)v52,
                (int)&v55,
                (int)v71,
                (__int64)v65,
                v49,
                (__int64)v66,
                (__int64)v51);
        v10 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0x312u, 0LL);
          goto LABEL_38;
        }
        FastRegion::Internal::CRgnData::StepIterator(v48, (struct FastRegion::CRegion::Iterator *)v57);
      }
      FastRegion::CRegion::FreeMemory(&v73);
      if ( !*((_BYTE *)v3 + 904) )
        goto LABEL_30;
      FastRegion::CRegion::SetRectangle(
        (FastRegion::CRegion *)&v75,
        *v8,
        *((_DWORD *)v3 + 223),
        *((_DWORD *)v3 + 224),
        *((_DWORD *)v3 + 225));
      v16 = v77;
    }
    else
    {
LABEL_30:
      if ( !**v11 )
      {
LABEL_12:
        FastRegion::CRegion::BeginIterator(&v75, (__int64)v57);
        v17 = v60;
        v18 = v59;
        v19 = v61;
        LODWORD(v20) = v62;
        v64 = v60;
        v63 = v59;
        v50 = v61;
LABEL_13:
        while ( (unsigned __int64)v18 < v58 )
        {
          v21 = *(_OWORD *)((char *)v6 + 36);
          v22 = *((_DWORD *)v6 + 17);
          v23 = *(_OWORD *)((char *)v6 + 20);
          v24 = v52;
          HIDWORD(v51[0]) = *v18;
          v66[0] = (__int64)(v18 + 2);
          HIDWORD(v51[1]) = v18[2];
          v25 = 2 * v19;
          v69 = v21;
          v70 = v23;
          LODWORD(v51[0]) = *(_DWORD *)(v17 + 4 * v25);
          LODWORD(v51[1]) = *(_DWORD *)(v17 + 4 * v25 + 4);
          v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 128LL))(v53);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v3 + 37) + 88LL))(*((_QWORD *)v3 + 37), v65);
          v27 = *((_QWORD *)v3 + 8);
          v68 = *(_OWORD *)v51;
          v28 = *((_BYTE *)v54 + 124);
          v29 = *((float *)v54 + 30);
          v30 = *((_DWORD *)v54 + 25);
          v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v54 + 37) + 16LL) + 176LL))(*((_QWORD *)v54 + 37) + 16LL);
          v32 = CD3DDevice::HDRConvertWithFakeOverlay(
                  v27,
                  v26,
                  v72,
                  (__int64)v24,
                  (int)&v55,
                  (__int64 *)v71,
                  (int)&v70,
                  v22,
                  (__int64)&v69,
                  v31,
                  (int *)v65,
                  v30,
                  v29,
                  v28,
                  (__int64)&v68);
          v10 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x39Fu, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x337u, 0LL);
            goto LABEL_20;
          }
          v3 = v54;
          v19 = v50 + 1;
          v6 = v56;
          v18 = v63;
          v17 = v64;
          v50 = v19;
          if ( v19 >= (int)v20 )
          {
            v33 = v66[0];
            do
            {
              v34 = v33;
              v17 = v33 + *(int *)(v33 + 4);
              v35 = *(int *)(v33 + 12) - v17;
              v63 = (_DWORD *)v33;
              v18 = (_DWORD *)v33;
              v64 = v17;
              v33 += 8LL;
              v20 = (v33 + v35) >> 3;
              if ( (_DWORD)v20 )
              {
                v19 = 0;
                v50 = 0;
                goto LABEL_13;
              }
            }
            while ( v34 < v58 );
            v19 = v50;
          }
        }
        goto LABEL_20;
      }
      FastRegion::CRegion::SetRectangle(
        (FastRegion::CRegion *)&v75,
        *v8,
        *((_DWORD *)v3 + 223),
        *((_DWORD *)v3 + 224),
        *((_DWORD *)v3 + 225));
      v16 = (const struct FastRegion::Internal::CRgnData **)((char *)v3 + 800);
    }
    CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)&v75, v16);
    goto LABEL_12;
  }
  v74 = 0;
  v73 = (FastRegion::Internal::CRgnData *)&v74;
  CRegion::Copy((CRegion *)&v73, (CConversionSwapChain *)((char *)v3 + 800));
  CRegion::Subtract(&v73, v78);
  FastRegion::Internal::CRgnData::BeginIterator(v73, (struct FastRegion::CRegion::Iterator *)v57);
  while ( 1 )
  {
    if ( (unsigned __int64)v59 >= v58 )
    {
      FastRegion::CRegion::FreeMemory(&v73);
      goto LABEL_6;
    }
    v37 = *(_OWORD *)((char *)a2 + 36);
    v38 = *((_DWORD *)a2 + 17);
    v39 = *(_OWORD *)((char *)a2 + 20);
    HIDWORD(v51[0]) = *v59;
    HIDWORD(v51[1]) = v59[2];
    v40 = 2 * v61;
    *(_OWORD *)v66 = v37;
    *(_OWORD *)v65 = v39;
    LODWORD(v51[0]) = *(_DWORD *)(v60 + 4 * v40);
    LODWORD(v51[1]) = *(_DWORD *)(v60 + 4 * v40 + 4);
    v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 128LL))(v53);
    LODWORD(v49) = v38;
    v42 = CConversionSwapChain::ConvertSingleResource(
            (int)v3,
            v41,
            (int)&v67,
            (int)v72,
            (__int64)v65,
            v49,
            (__int64)v66,
            (__int64)v51);
    v10 = v42;
    if ( v42 < 0 )
      break;
    FastRegion::Internal::CRgnData::StepIterator(v43, (struct FastRegion::CRegion::Iterator *)v57);
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x2FBu, 0LL);
LABEL_38:
  FastRegion::CRegion::FreeMemory(&v73);
LABEL_20:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v75);
  FastRegion::CRegion::FreeMemory(v78);
  FastRegion::CRegion::FreeMemory(v77);
  if ( v52 )
    ((void (__fastcall *)(struct ID3D11ShaderResourceView *))v52->lpVtbl->Release)(v52);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  return v10;
}
