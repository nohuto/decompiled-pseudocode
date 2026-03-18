/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003EF80 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18003F8E8 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x1801A0D14 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801DB3D0 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1802121D0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18027095C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802904A0 (-ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CC.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802BB74C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802C2E4C (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802D46A8 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800408A0 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?GetTexture2D@CDeviceTextureTarget@@UEAAPEAUID3D11Texture2D@@XZ @ 0x1800419E0 (-GetTexture2D@CDeviceTextureTarget@@UEAAPEAUID3D11Texture2D@@XZ.c)
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x180041A04 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x180041C44 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180041FF0 (-SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800422D4 (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18004312C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180145C30 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ @ 0x180146290 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180147060 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x180147A70 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1801B529C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18025B75C (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetDisplayId@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AVDisplayId@@XZ @ 0x1802D6C90 (-GetDisplayId@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AVDisplayId.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUPixelFormatInfo@@XZ @ 0x1802D6CD0 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUPix.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D30 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@WPA@EBA_NXZ @ 0x1802D6E10 (-IsHardwareProtected@CDeviceTextureTarget@@WPA@EBA_NXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ @ 0x1802D6EC0 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6F70 (-QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetColorSpace@CDeviceTextureTarget@@WLI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802D7090 (-SetColorSpace@CDeviceTextureTarget@@WLI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z @ 0x1802D70B0 (-SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        __int64 a1,
        const struct CResourceTag *a2,
        struct D2D_SIZE_U *a3,
        struct PixelFormatInfo *a4,
        struct RenderTargetInfo *a5,
        int a6,
        struct IRenderTargetBitmap **a7)
{
  unsigned int v9; // ebx
  __int64 *v10; // r9
  float v11; // xmm6_4
  int v12; // edi
  struct IDeviceTextureTarget *v13; // rsi
  UINT32 width; // edx
  UINT32 height; // r12d
  char v16; // al
  int v17; // r13d
  float v18; // xmm7_4
  __int64 v19; // rbx
  __int64 v20; // r15
  CD2DBitmap *v21; // rcx
  __int64 (*v22)(void); // rax
  int IsValid; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, int *); // rax
  int v27; // eax
  CDeviceTextureTarget *v28; // rcx
  __int64 (*v29)(void); // rax
  char IsHardwareProtected; // al
  bool v31; // zf
  char v32; // al
  __int64 v33; // rcx
  void (__fastcall *v34)(__int64, __int64 *); // rax
  UINT32 v35; // eax
  UINT32 v36; // ecx
  float v37; // xmm1_4
  unsigned int v38; // edx
  __int64 v39; // r8
  __int64 i; // rcx
  struct PixelFormatInfo *v41; // r15
  __int64 v42; // rcx
  enum DXGI_ALPHA_MODE v43; // ebx
  __int64 (__fastcall *v44)(__int64, struct PixelFormatInfo **, __int64); // rax
  __int64 PixelFormatInfo; // rax
  CD2DBitmap *v46; // rcx
  void (__fastcall *v47)(CD2DBitmap *__hidden, enum DXGI_ALPHA_MODE); // rax
  unsigned int v48; // ebx
  __int64 v49; // rcx
  __int64 (__fastcall *v50)(__int64, _BYTE *); // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  void (__fastcall *v53)(__int64, _QWORD); // rax
  __int64 v54; // rcx
  struct RenderTargetInfo *v55; // r15
  unsigned int v56; // ebx
  __int64 (__fastcall *v57)(__int64, int *); // rax
  _DWORD *DisplayId; // rax
  __int64 v59; // rcx
  void (__fastcall *v60)(__int64, _QWORD); // rax
  float v61; // xmm6_4
  __int64 v62; // rcx
  __int64 (__fastcall *v63)(__int64, _BYTE *); // rax
  __int64 RenderTargetInfo; // rax
  int v65; // ebx
  __int64 (__fastcall ***v66)(_QWORD, GUID *, struct D2D_SIZE_U *); // r9
  struct D2D_SIZE_U v67; // rcx
  char v68; // bl
  __int64 (__fastcall *v69)(_QWORD, GUID *, struct D2D_SIZE_U *); // rax
  int v70; // eax
  struct ID3D11Texture2D *(__fastcall *v71)(CDeviceTextureTarget *__hidden); // rax
  struct ID3D11Texture2D *Texture2D; // rax
  CGlobalDrawingContext *v73; // rcx
  int v75; // eax
  struct IDeviceTextureTarget *v76; // rbx
  int v77; // eax
  int v78; // eax
  int v79; // ecx
  int v80; // r9d
  int v81; // eax
  struct D2D_SIZE_U v82; // [rsp+38h] [rbp-C1h] BYREF
  int v83[2]; // [rsp+40h] [rbp-B9h] BYREF
  struct IDeviceTextureTarget *v84; // [rsp+48h] [rbp-B1h] BYREF
  __int64 v85; // [rsp+50h] [rbp-A9h] BYREF
  struct RenderTargetInfo *v86; // [rsp+58h] [rbp-A1h]
  const struct CResourceTag *v87; // [rsp+60h] [rbp-99h]
  _QWORD *v88; // [rsp+68h] [rbp-91h]
  _BYTE v89[24]; // [rsp+70h] [rbp-89h] BYREF
  int v90; // [rsp+88h] [rbp-71h] BYREF
  __int64 v91; // [rsp+8Ch] [rbp-6Dh]
  struct PixelFormatInfo *v92[2]; // [rsp+98h] [rbp-61h] BYREF
  _BYTE v93[16]; // [rsp+A8h] [rbp-51h] BYREF

  v92[0] = a4;
  v87 = a2;
  v9 = -2003304307;
  *a7 = 0LL;
  v86 = a5;
  v88 = a7;
  if ( *(_DWORD *)(a1 + 1112) )
  {
    v12 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, -2003304307, 0x42Au, 0LL);
    goto LABEL_88;
  }
  if ( a6 )
  {
    v10 = (__int64 *)(a1 + 464);
    v11 = FLOAT_3_4028235e38;
    v12 = 0;
    v82 = *a3;
    v13 = 0LL;
    width = v82.width;
    height = v82.height;
    v16 = *((_BYTE *)a5 + 20);
    v17 = *(_DWORD *)(a1 + 488);
    BYTE1(v83[0]) = ((a6 - 2) & 0xFFFFFFFD) == 0;
    LOBYTE(v83[0]) = v16;
    v83[1] = *(_DWORD *)a4;
    v18 = 1.0 / (float)(int)(((v82.width + 63) & 0xFFFFFFC0) * ((v82.height + 63) & 0xFFFFFFC0));
    while ( 1 )
    {
      if ( !v17 )
      {
LABEL_36:
        if ( v13 )
        {
          v38 = *((_DWORD *)v10 + 6);
          v39 = *v10;
          for ( i = 0LL; (unsigned int)i < v38; i = (unsigned int)(i + 1) )
          {
            if ( v13 == *(struct IDeviceTextureTarget **)(v39 + 8 * i) )
              break;
          }
          if ( (unsigned int)i < v38 )
          {
            while ( (unsigned int)i < v38 - 1 )
            {
              *(_QWORD *)(v39 + 8 * i) = *(_QWORD *)(v39 + 8LL * (unsigned int)(i + 1));
              i = (unsigned int)(i + 1);
              v38 = *((_DWORD *)v10 + 6);
            }
            *((_DWORD *)v10 + 6) = v38 - 1;
          }
          v41 = v92[0];
          v42 = *((_QWORD *)v13 + 15) + 8LL;
          v43 = *((_DWORD *)v92[0] + 1);
          v44 = *(__int64 (__fastcall **)(__int64, struct PixelFormatInfo **, __int64))(*(_QWORD *)v42 + 24LL);
          if ( (char *)v44 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
            PixelFormatInfo = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v42, v92);
          else
            PixelFormatInfo = v44(v42, v92, v39);
          if ( v43 != *(_DWORD *)(PixelFormatInfo + 4) )
          {
            v46 = (CD2DBitmap *)(*((_QWORD *)v13 + 15) + 16LL);
            v47 = *(void (__fastcall **)(CD2DBitmap *__hidden, enum DXGI_ALPHA_MODE))(*(_QWORD *)v46 + 136LL);
            if ( v47 == CD2DBitmap::SetAlphaMode )
              CD2DBitmap::SetAlphaMode(v46, v43);
            else
              v47(v46, v43);
            CRenderTargetBitmap::ResetBitmapCache(v13);
          }
          v48 = *((_DWORD *)v41 + 2);
          v49 = *((_QWORD *)v13 + 15) + 8LL;
          v50 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v49 + 24LL);
          if ( (char *)v50 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
            v51 = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v49, v93);
          else
            v51 = v50(v49, v93);
          if ( v48 != *(_DWORD *)(v51 + 8) )
          {
            v52 = *((_QWORD *)v13 + 15) + 16LL;
            v53 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v52 + 144LL);
            if ( (char *)v53 == (char *)CDeviceTextureTarget::SetColorSpace )
              CDeviceTextureTarget::SetColorSpace(v52, v48);
            else
              v53(v52, v48);
            CRenderTargetBitmap::ResetBitmapCache(v13);
          }
          v54 = *((_QWORD *)v13 + 15);
          v55 = v86;
          v56 = *((_DWORD *)v86 + 2);
          v57 = *(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v54 + 96LL);
          if ( (char *)v57 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId )
            DisplayId = (_DWORD *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId(v54, &v83[1]);
          else
            DisplayId = (_DWORD *)v57(v54, &v83[1]);
          if ( v56 != *DisplayId )
          {
            v59 = *((_QWORD *)v13 + 15) + 16LL;
            v60 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v59 + 152LL);
            if ( (char *)v60 == (char *)CDeviceTextureTarget::SetDisplayId )
              CDeviceTextureTarget::SetDisplayId(v59, v56);
            else
              v60(v59, v56);
            CRenderTargetBitmap::ResetBitmapCache(v13);
          }
          v61 = *((float *)v55 + 4);
          v62 = *((_QWORD *)v13 + 15) + 16LL;
          v63 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v62 + 120LL);
          if ( (char *)v63 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
            RenderTargetInfo = CDeviceTextureTarget::GetRenderTargetInfo(v62, v89);
          else
            RenderTargetInfo = v63(v62, v89);
          if ( v61 != *(float *)(RenderTargetInfo + 16) )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v13 + 15) + 16LL) + 160LL))(*((_QWORD *)v13 + 15) + 16LL);
            CRenderTargetBitmap::ResetBitmapCache(v13);
          }
          CD2DBitmapCache::MarkFullInvalid(v13);
          v65 = a6;
LABEL_68:
          v66 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct D2D_SIZE_U *))*((_QWORD *)v13 + 15);
          v67 = 0LL;
          v82 = 0LL;
          v68 = (unsigned int)(v65 - 1) <= 1;
          if ( v66 )
          {
            v69 = **v66;
            v70 = (char *)v69 == (char *)CDeviceTextureTarget::QueryInterface
                ? CDeviceTextureTarget::QueryInterface(v66, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v82)
                : v69(v66, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v82);
            v67 = v82;
            if ( v70 >= 0 )
            {
              v71 = *(struct ID3D11Texture2D *(__fastcall **)(CDeviceTextureTarget *__hidden))(**(_QWORD **)&v82 + 120LL);
              if ( v71 == CDeviceTextureTarget::GetTexture2D )
                Texture2D = CDeviceTextureTarget::GetTexture2D(*(CDeviceTextureTarget **)&v82);
              else
                Texture2D = v71(*(CDeviceTextureTarget **)&v82);
              ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))Texture2D->lpVtbl->SetPrivateData)(
                Texture2D,
                &WKPDID_D3DDebugObjectName,
                *((unsigned int *)v87 + 2),
                *(_QWORD *)v87);
              v67 = v82;
            }
          }
          if ( *((_BYTE *)v13 + 145) != v68 )
          {
            *((_BYTE *)v13 + 145) = v68;
            *((_BYTE *)v13 + 128) = v68;
            CRenderTargetBitmap::ResetBitmapCache(v13);
            v67 = v82;
          }
          if ( v67 )
            (*(void (__fastcall **)(struct D2D_SIZE_U))(**(_QWORD **)&v67 + 16LL))(v67);
          if ( *((_BYTE *)v13 + 145) )
            ++*(_DWORD *)(a1 + 504);
          v73 = 0LL;
          *v88 = ((unsigned __int64)v13 + 80) & -(__int64)(v13 != 0LL);
        }
        else
        {
          v65 = a6;
          v84 = 0LL;
          if ( ((a6 - 2) & 0xFFFFFFFD) != 0 )
          {
            v82.width = (width + 63) & 0xFFFFFFC0;
            v82.height = (height + 63) & 0xFFFFFFC0;
          }
          v84 = 0LL;
          v81 = CD3DDevice::CreateScratchRenderTargetBitmap((CD3DDevice *)a1, &v82, v92[0], v86, &v84);
          v12 = v81;
          if ( v81 >= 0 )
          {
            v13 = v84;
            goto LABEL_68;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x3Eu, 0LL);
          v73 = v84;
        }
        if ( v73 )
          CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v73);
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, v12, 0x433u, 0LL);
LABEL_86:
        v9 = -2003304307;
        goto LABEL_88;
      }
      v19 = (unsigned int)(v17 - 1);
      v20 = *(_QWORD *)(*v10 + 8 * v19);
      v21 = *(CD2DBitmap **)(v20 + 120);
      if ( !v21 )
        goto LABEL_97;
      v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 24LL);
      if ( (char *)v22 == (char *)CD2DBitmap::IsValid )
      {
        IsValid = CD2DBitmap::IsValid(v21);
      }
      else if ( (char *)v22 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
      {
        IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v21);
      }
      else
      {
        IsValid = v22 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid
                ? IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid()
                : v22();
      }
      if ( IsValid < 0 )
        break;
      v24 = *(_QWORD *)(v20 + 120);
      if ( v24 )
      {
        v25 = v24 + 8;
        v26 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 24LL);
        if ( (char *)v26 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
          IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v25, &v90);
        else
          v26(v25, &v90);
        v27 = v90;
      }
      else
      {
        v90 = 0;
        v27 = 0;
        v91 = 3LL;
      }
      if ( v83[1] != v27 )
        goto LABEL_98;
      v28 = *(CDeviceTextureTarget **)(v20 + 120);
      if ( !v28
        || ((v29 = *(__int64 (**)(void))(*(_QWORD *)v28 + 56LL), v29 != CDeviceTextureTarget::IsHardwareProtected)
          ? ((char *)v29 != (char *)CDeviceTextureTarget::IsHardwareProtected
           ? (IsHardwareProtected = v29())
           : (IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected(v28)))
          : (IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected()),
            v31 = IsHardwareProtected == 0,
            v32 = 1,
            v31) )
      {
        v32 = 0;
      }
      if ( LOBYTE(v83[0]) != v32 )
        goto LABEL_98;
      v33 = *(_QWORD *)(v20 + 120);
      if ( v33 )
      {
        v34 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 88LL);
        if ( (char *)v34 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
          IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v33, &v85);
        else
          v34(v33, &v85);
        v35 = HIDWORD(v85);
        v36 = v85;
      }
      else
      {
        v36 = 0;
        v85 = 0LL;
        v35 = 0;
      }
      width = v82.width;
      if ( BYTE1(v83[0]) )
      {
        if ( v36 == v82.width && v35 == height )
        {
          v13 = (struct IDeviceTextureTarget *)v20;
          v10 = (__int64 *)(a1 + 464);
          goto LABEL_36;
        }
      }
      else if ( v36 >= v82.width && v35 >= height )
      {
        v37 = (float)(int)(v36 * v35);
        if ( (float)(v37 * v18) < 4.0 && v11 > v37 )
        {
          v11 = (float)(int)(v36 * v35);
          v13 = (struct IDeviceTextureTarget *)v20;
        }
      }
LABEL_32:
      --v17;
      v10 = (__int64 *)(a1 + 464);
    }
    v10 = (__int64 *)(a1 + 464);
LABEL_97:
    DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v10, (unsigned int)v19);
    *(_BYTE *)(v20 + 144) = 0;
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((CGlobalDrawingContext *)v20);
LABEL_98:
    width = v82.width;
    goto LABEL_32;
  }
  v84 = 0LL;
  v75 = CD3DDevice::CreateDeviceTextureTarget((CD3DDevice *)a1, a2, (struct D3D11_SUBRESOURCE_DATA *)a3, a4, a5, &v84);
  v12 = v75;
  if ( v75 >= 0 )
  {
    v76 = v84;
    v77 = CRenderTargetBitmap::Create(v84, a7);
    v12 = v77;
    if ( v77 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, v77, 0x43Fu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v84);
    }
    else if ( v76 )
    {
      (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)v76 + 16LL))(v76);
    }
    goto LABEL_86;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, v75, 0x43Cu, 0LL);
  if ( v84 )
    (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)v84 + 16LL))(v84);
LABEL_88:
  if ( !*(_DWORD *)(a1 + 1112)
    && (v12 == -2005532292 || v12 == -2147024882 || v12 == -2005270523)
    && *(_DWORD *)(a1 + 448) )
  {
    if ( v12 == -2005270523 )
    {
      v78 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 312LL))(*(_QWORD *)(a1 + 552));
      v79 = *(_DWORD *)(a1 + 1112);
      if ( v78 != -2005270480 )
      {
        if ( !v79 )
          *(_DWORD *)(a1 + 1112) = -2005270523;
LABEL_116:
        if ( *(_DWORD *)(a1 + 1112) )
          return v9;
        goto LABEL_93;
      }
      if ( !v79 )
        *(_DWORD *)(a1 + 1112) = -2005270480;
    }
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)(a1 + 16));
  }
  if ( v12 < 0 )
    goto LABEL_116;
LABEL_93:
  v83[1] = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v12, 0LL, &v83[1]) )
  {
    v80 = v83[1];
    if ( v83[1] == -2003304307 )
    {
      if ( v12 >= 0 )
        v12 = -2003304307;
      if ( !*(_DWORD *)(a1 + 1112) )
        *(_DWORD *)(a1 + 1112) = v12;
    }
    v12 = v80;
    if ( v80 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0xB4Du, 0LL);
  }
  return (unsigned int)v12;
}
