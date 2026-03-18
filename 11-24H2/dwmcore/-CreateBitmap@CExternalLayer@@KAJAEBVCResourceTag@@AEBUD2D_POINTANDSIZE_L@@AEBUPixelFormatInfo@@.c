/*
 * XREFs of ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800A8898 (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCV.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800FE3C8 (-Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformResource@@PEAPEAV1@@Z @ 0x1800FE87C (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformR.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x180138E78 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x1801B4898 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEB.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180230700 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?Create@CValueColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransform@@PEAPEAV1@@Z @ 0x18027B620 (-Create@CValueColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTra.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z @ 0x18027C050 (-Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_SIZE_F@@AEBV?$optional@M@std@@PEAPEAV1@@Z @ 0x18027C4B4 (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSI.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetTexture2D@CDeviceTextureTarget@@UEAAPEAUID3D11Texture2D@@XZ @ 0x18005A070 (-GetTexture2D@CDeviceTextureTarget@@UEAAPEAUID3D11Texture2D@@XZ.c)
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18005A094 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x18005A2D4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18005A650 (-SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18005AC84 (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x18005BD3C (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005BED0 (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180109FF0 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ @ 0x18010A650 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x18010B420 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x18010BE30 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1801B002C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetDisplayId@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AVDisplayId@@XZ @ 0x1802CDA20 (-GetDisplayId@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AVDisplayId.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUPixelFormatInfo@@XZ @ 0x1802CDA60 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUPix.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAC0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@WPA@EBA_NXZ @ 0x1802CDBA0 (-IsHardwareProtected@CDeviceTextureTarget@@WPA@EBA_NXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ @ 0x1802CDC50 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CDD00 (-QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetColorSpace@CDeviceTextureTarget@@WLI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802CDE20 (-SetColorSpace@CDeviceTextureTarget@@WLI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z @ 0x1802CDE40 (-SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalLayer::CreateBitmap(
        struct CResourceTag *a1,
        _DWORD *a2,
        struct PixelFormatInfo *a3,
        CDeviceTextureTarget *a4,
        int a5,
        __int64 *a6)
{
  UINT32 *v6; // rdi
  __int64 v7; // rbx
  UINT32 *v9; // rsi
  UINT32 height; // r15d
  UINT32 width; // r12d
  D2D_SIZE_U v12; // rsi
  int v13; // r14d
  D2D_SIZE_U *v14; // rcx
  D2D_SIZE_U v15; // rdi
  int v16; // r13d
  D2D_SIZE_U v17; // rdx
  struct CScratchRenderTargetBitmap *v18; // rsi
  __int64 v19; // r13
  float v20; // xmm6_4
  int v21; // eax
  int v22; // eax
  float v23; // xmm7_4
  __int64 v24; // r15
  __int64 v25; // r13
  CD2DBitmap *v26; // rcx
  __int64 (__fastcall *v27)(CD2DBitmap *__hidden); // rax
  int IsValid; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  void (__fastcall *v31)(__int64, _DWORD *); // rax
  int v32; // eax
  CDeviceTextureTarget *v33; // rcx
  bool (__fastcall *v34)(CDeviceTextureTarget *__hidden); // rax
  char IsHardwareProtected; // al
  char v36; // al
  __int64 v37; // rcx
  void (__fastcall *v38)(__int64, __int64 *); // rax
  UINT32 v39; // eax
  float v40; // xmm1_4
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 i; // r8
  struct PixelFormatInfo *v44; // r15
  __int64 v45; // rcx
  enum DXGI_ALPHA_MODE v46; // ebx
  __int64 (__fastcall *v47)(__int64, struct PixelFormatInfo **, __int64); // rax
  __int64 PixelFormatInfo; // rax
  CD2DBitmap *v49; // rcx
  void (__fastcall *v50)(CD2DBitmap *__hidden, enum DXGI_ALPHA_MODE); // rax
  unsigned int v51; // ebx
  __int64 v52; // rcx
  __int64 (__fastcall *v53)(__int64, _BYTE *); // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  void (__fastcall *v56)(__int64, _QWORD); // rax
  __int64 v57; // rcx
  CDeviceTextureTarget *v58; // r15
  unsigned int v59; // ebx
  __int64 (__fastcall *v60)(__int64, UINT32 *); // rax
  _DWORD *DisplayId; // rax
  __int64 v62; // rcx
  void (__fastcall *v63)(__int64, _QWORD); // rax
  float v64; // xmm6_4
  __int64 v65; // rcx
  __int64 (__fastcall *v66)(__int64, _BYTE *); // rax
  __int64 RenderTargetInfo; // rax
  __int64 (__fastcall ***v68)(_QWORD, GUID *, CDeviceTextureTarget **); // r9
  char v69; // bl
  CDeviceTextureTarget *v70; // rcx
  __int64 (__fastcall *v71)(_QWORD, GUID *, CDeviceTextureTarget **); // rax
  int v72; // eax
  struct ID3D11Texture2D *(__fastcall *v73)(CDeviceTextureTarget *__hidden); // rax
  struct ID3D11Texture2D *Texture2D; // rax
  struct CScratchRenderTargetBitmap *v75; // rcx
  __int64 v76; // rax
  __int64 v78; // r8
  int v79; // edx
  UINT32 v80; // ecx
  UINT32 v81; // ecx
  int v82; // edx
  __int64 v83; // r8
  int v84; // ecx
  int v85; // eax
  D2D_SIZE_U v86; // rbx
  int v87; // eax
  int v88; // r9d
  int v89; // eax
  int v90; // [rsp+20h] [rbp-E0h]
  int v91; // [rsp+30h] [rbp-D0h] BYREF
  D2D_SIZE_U v92; // [rsp+38h] [rbp-C8h] BYREF
  char v93; // [rsp+40h] [rbp-C0h]
  bool v94; // [rsp+41h] [rbp-BFh]
  struct CScratchRenderTargetBitmap *v95; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v96; // [rsp+50h] [rbp-B0h] BYREF
  UINT32 v97; // [rsp+58h] [rbp-A8h] BYREF
  int v98; // [rsp+60h] [rbp-A0h] BYREF
  CDeviceTextureTarget *v99; // [rsp+68h] [rbp-98h] BYREF
  UINT32 v100; // [rsp+70h] [rbp-90h]
  struct D2D_SIZE_U v101; // [rsp+78h] [rbp-88h] BYREF
  struct CResourceTag *v102; // [rsp+80h] [rbp-80h]
  int *v103; // [rsp+88h] [rbp-78h]
  __int64 *v104; // [rsp+90h] [rbp-70h]
  _BYTE v105[24]; // [rsp+98h] [rbp-68h] BYREF
  struct PixelFormatInfo *v106[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v107[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v108[16]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+E0h] [rbp-20h] BYREF
  int *v110; // [rsp+F0h] [rbp-10h]
  __int64 v111; // [rsp+F8h] [rbp-8h]
  UINT32 *v112; // [rsp+100h] [rbp+0h]
  __int64 v113; // [rsp+108h] [rbp+8h]
  UINT32 *v114; // [rsp+110h] [rbp+10h]
  __int64 v115; // [rsp+118h] [rbp+18h]
  int *v116; // [rsp+120h] [rbp+20h]
  __int64 v117; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v6 = a2 + 2;
  v99 = a4;
  v7 = 0LL;
  v106[0] = a3;
  v103 = a2;
  *a6 = 0LL;
  v9 = a2 + 3;
  v102 = a1;
  v104 = a6;
  v95 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v78 = (unsigned int)a2[1];
    v79 = *a2;
    v80 = *v9;
    v110 = &v91;
    v98 = v78 + v80;
    v81 = *v6;
    v112 = (UINT32 *)&v96;
    v97 = v79 + v81;
    v114 = &v97;
    v91 = v79;
    v116 = &v98;
    LODWORD(v96) = v78;
    v111 = 4LL;
    v113 = 4LL;
    v115 = 4LL;
    v117 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Start,
      v78,
      5u,
      &v109);
  }
  height = *v9;
  width = *v6;
  v101.width = *v6;
  v100 = height;
  v101.height = height;
  v92 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v92);
  v12 = *(D2D_SIZE_U *)a4;
  v92 = *(D2D_SIZE_U *)a4;
  v13 = 0;
  EnterCriticalSection(&CriticalSection);
  v14 = (D2D_SIZE_U *)qword_1803FAAE8;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = -2003304307;
    if ( v14 == (D2D_SIZE_U *)xmmword_1803FAAF0 )
    {
      v18 = 0LL;
      goto LABEL_20;
    }
    if ( __PAIR64__(v92.height, v12.width) == *(_QWORD *)(*(_QWORD *)v14 + 936LL) )
      break;
    v14 += 2;
  }
  v17 = *v14;
  v18 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)v14 + 1112LL) )
  {
LABEL_20:
    v13 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AFF8, 2u, -2003304307, 0x11Du, 0LL);
    goto LABEL_10;
  }
  v92 = *v14;
  if ( _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)&v17 + 8LL), 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v90);
  height = v101.height;
  v7 = (__int64)v95;
  width = v101.width;
  v15 = v92;
  v100 = v101.height;
LABEL_10:
  LeaveCriticalSection(&CriticalSection);
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x21u, 0LL);
    goto LABEL_109;
  }
  v7 = 0LL;
  v95 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)&v15 + 1112LL) )
  {
    v13 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AFF8, 2u, -2003304307, 0x40Eu, 0LL);
  }
  else if ( a5 )
  {
    v19 = *(_QWORD *)&v15 + 464LL;
    v13 = 0;
    v20 = FLOAT_3_4028235e38;
    v92 = v101;
    v93 = *((_BYTE *)v99 + 20);
    v21 = *(_DWORD *)v106[0];
    v94 = ((a5 - 2) & 0xFFFFFFFD) == 0;
    v98 = v21;
    v22 = *(_DWORD *)(*(_QWORD *)&v15 + 488LL);
    v23 = 1.0 / (float)(int)(((width + 63) & 0xFFFFFFC0) * ((height + 63) & 0xFFFFFFC0));
    while ( 1 )
    {
      v91 = v22;
      if ( !v22 )
        break;
      v24 = (unsigned int)(v22 - 1);
      v25 = *(_QWORD *)(*(_QWORD *)v19 + 8 * v24);
      v26 = *(CD2DBitmap **)(v25 + 120);
      if ( v26
        && ((v27 = *(__int64 (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v26 + 24LL), v27 == CD2DBitmap::IsValid)
          ? (IsValid = CD2DBitmap::IsValid(v26))
          : (char *)v27 != (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid
          ? ((char *)v27 != (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid
           ? (IsValid = ((__int64 (*)(void))v27)())
           : (IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v26)))
          : (IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v26)),
            IsValid >= 0) )
      {
        v29 = *(_QWORD *)(v25 + 120);
        if ( v29 )
        {
          v30 = v29 + 8;
          v31 = *(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v30 + 24LL);
          if ( (char *)v31 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
            IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v30, v107);
          else
            v31(v30, v107);
          v32 = v107[0];
        }
        else
        {
          v107[0] = 0;
          v107[2] = 0;
          v32 = 0;
          v107[1] = 3;
        }
        if ( v98 == v32 )
        {
          v33 = *(CDeviceTextureTarget **)(v25 + 120);
          v36 = 0;
          if ( v33 )
          {
            v34 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(*(_QWORD *)v33 + 56LL);
            if ( (char *)v34 == (char *)CDeviceTextureTarget::IsHardwareProtected )
              IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected();
            else
              IsHardwareProtected = v34 == CDeviceTextureTarget::IsHardwareProtected
                                  ? CDeviceTextureTarget::IsHardwareProtected(v33)
                                  : ((__int64 (*)(void))v34)();
            if ( IsHardwareProtected )
              v36 = 1;
          }
          if ( v93 == v36 )
          {
            v37 = *(_QWORD *)(v25 + 120);
            if ( v37 )
            {
              v38 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 88LL);
              if ( (char *)v38 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
                IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v37, &v96);
              else
                v38(v37, &v96);
              v39 = HIDWORD(v96);
              LODWORD(v37) = v96;
            }
            else
            {
              v96 = 0LL;
              v39 = 0;
            }
            if ( v94 )
            {
              if ( (_DWORD)v37 == width && v39 == v100 )
              {
                v18 = (struct CScratchRenderTargetBitmap *)v25;
                v19 = *(_QWORD *)&v15 + 464LL;
                break;
              }
            }
            else if ( (unsigned int)v37 >= width && v39 >= v100 )
            {
              v40 = (float)(int)(v37 * v39);
              if ( (float)(v40 * v23) < 4.0 && v20 > v40 )
              {
                v20 = (float)(int)(v37 * v39);
                v18 = (struct CScratchRenderTargetBitmap *)v25;
              }
            }
          }
        }
      }
      else
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(*(_QWORD *)&v15 + 464LL, (unsigned int)v24);
        *(_BYTE *)(v25 + 144) = 0;
        CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((CGlobalDrawingContext *)v25);
      }
      v19 = *(_QWORD *)&v15 + 464LL;
      v22 = v91 - 1;
    }
    if ( v18 )
    {
      v41 = *(_DWORD *)(v19 + 24);
      v42 = 0LL;
      for ( i = *(_QWORD *)v19; (unsigned int)v42 < v41; v42 = (unsigned int)(v42 + 1) )
      {
        if ( v18 == *(struct CScratchRenderTargetBitmap **)(i + 8 * v42) )
          break;
      }
      if ( (unsigned int)v42 < v41 )
      {
        while ( (unsigned int)v42 < v41 - 1 )
        {
          *(_QWORD *)(i + 8 * v42) = *(_QWORD *)(i + 8LL * (unsigned int)(v42 + 1));
          v42 = (unsigned int)(v42 + 1);
          v41 = *(_DWORD *)(v19 + 24);
        }
        *(_DWORD *)(v19 + 24) = v41 - 1;
      }
      v44 = v106[0];
      v45 = *((_QWORD *)v18 + 15) + 8LL;
      v46 = *((_DWORD *)v106[0] + 1);
      v47 = *(__int64 (__fastcall **)(__int64, struct PixelFormatInfo **, __int64))(*(_QWORD *)v45 + 24LL);
      if ( (char *)v47 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
        PixelFormatInfo = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v45, v106);
      else
        PixelFormatInfo = v47(v45, v106, i);
      if ( v46 != *(_DWORD *)(PixelFormatInfo + 4) )
      {
        v49 = (CD2DBitmap *)(*((_QWORD *)v18 + 15) + 16LL);
        v50 = *(void (__fastcall **)(CD2DBitmap *__hidden, enum DXGI_ALPHA_MODE))(*(_QWORD *)v49 + 136LL);
        if ( v50 == CD2DBitmap::SetAlphaMode )
          CD2DBitmap::SetAlphaMode(v49, v46);
        else
          v50(v49, v46);
        CRenderTargetBitmap::ResetBitmapCache(v18);
      }
      v51 = *((_DWORD *)v44 + 2);
      v52 = *((_QWORD *)v18 + 15) + 8LL;
      v53 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v52 + 24LL);
      if ( (char *)v53 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
        v54 = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v52, v108);
      else
        v54 = v53(v52, v108);
      if ( v51 != *(_DWORD *)(v54 + 8) )
      {
        v55 = *((_QWORD *)v18 + 15) + 16LL;
        v56 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 144LL);
        if ( (char *)v56 == (char *)CDeviceTextureTarget::SetColorSpace )
          CDeviceTextureTarget::SetColorSpace(v55, v51);
        else
          v56(v55, v51);
        CRenderTargetBitmap::ResetBitmapCache(v18);
      }
      v57 = *((_QWORD *)v18 + 15);
      v58 = v99;
      v59 = *((_DWORD *)v99 + 2);
      v60 = *(__int64 (__fastcall **)(__int64, UINT32 *))(*(_QWORD *)v57 + 96LL);
      if ( (char *)v60 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId )
        DisplayId = (_DWORD *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId(v57, &v97);
      else
        DisplayId = (_DWORD *)v60(v57, &v97);
      if ( v59 != *DisplayId )
      {
        v62 = *((_QWORD *)v18 + 15) + 16LL;
        v63 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v62 + 152LL);
        if ( (char *)v63 == (char *)CDeviceTextureTarget::SetDisplayId )
          CDeviceTextureTarget::SetDisplayId(v62, v59);
        else
          v63(v62, v59);
        CRenderTargetBitmap::ResetBitmapCache(v18);
      }
      v64 = *((float *)v58 + 4);
      v65 = *((_QWORD *)v18 + 15) + 16LL;
      v66 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v65 + 120LL);
      if ( (char *)v66 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
        RenderTargetInfo = CDeviceTextureTarget::GetRenderTargetInfo(v65, v105);
      else
        RenderTargetInfo = v66(v65, v105);
      if ( v64 != *(float *)(RenderTargetInfo + 16) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v18 + 15) + 16LL) + 160LL))(*((_QWORD *)v18 + 15) + 16LL);
        CRenderTargetBitmap::ResetBitmapCache(v18);
      }
      CD2DBitmapCache::MarkFullInvalid(v18);
LABEL_80:
      v68 = (__int64 (__fastcall ***)(_QWORD, GUID *, CDeviceTextureTarget **))*((_QWORD *)v18 + 15);
      v69 = (unsigned int)(a5 - 1) <= 1;
      v70 = 0LL;
      v99 = 0LL;
      if ( v68 )
      {
        v71 = **v68;
        v72 = (char *)v71 == (char *)CDeviceTextureTarget::QueryInterface
            ? CDeviceTextureTarget::QueryInterface(v68, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v99)
            : v71(v68, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v99);
        v70 = v99;
        if ( v72 >= 0 )
        {
          v73 = *(struct ID3D11Texture2D *(__fastcall **)(CDeviceTextureTarget *__hidden))(*(_QWORD *)v99 + 120LL);
          if ( v73 == CDeviceTextureTarget::GetTexture2D )
            Texture2D = CDeviceTextureTarget::GetTexture2D(v99);
          else
            Texture2D = v73(v99);
          ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))Texture2D->lpVtbl->SetPrivateData)(
            Texture2D,
            &WKPDID_D3DDebugObjectName,
            *((unsigned int *)v102 + 2),
            *(_QWORD *)v102);
          v70 = v99;
        }
      }
      if ( *((_BYTE *)v18 + 145) != v69 )
      {
        *((_BYTE *)v18 + 145) = v69;
        *((_BYTE *)v18 + 128) = v69;
        CRenderTargetBitmap::ResetBitmapCache(v18);
        v70 = v99;
      }
      if ( v70 )
        (*(void (__fastcall **)(CDeviceTextureTarget *))(*(_QWORD *)v70 + 16LL))(v70);
      if ( *((_BYTE *)v18 + 145) )
        ++*(_DWORD *)(v19 + 40);
      v75 = 0LL;
      v7 = ((unsigned __int64)v18 + 80) & -(__int64)(v18 != 0LL);
    }
    else
    {
      v95 = 0LL;
      if ( ((a5 - 2) & 0xFFFFFFFD) != 0 )
      {
        v92.width = (width + 63) & 0xFFFFFFC0;
        v92.height = (v92.height + 63) & 0xFFFFFFC0;
      }
      v95 = 0LL;
      v89 = CD3DDevice::CreateScratchRenderTargetBitmap((CD3DDevice *)(v19 - 464), &v92, v106[0], v99, &v95);
      v13 = v89;
      if ( v89 >= 0 )
      {
        v18 = v95;
        goto LABEL_80;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v89, 0x3Eu, 0LL);
      v75 = v95;
    }
    if ( v75 )
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v75);
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AFF8, 2u, v13, 0x417u, 0LL);
    v16 = -2003304307;
  }
  else
  {
    v92 = 0LL;
    v85 = CD3DDevice::CreateDeviceTextureTarget(
            *(CD3DDevice **)&v15,
            v102,
            &v101,
            v106[0],
            v99,
            (struct IDeviceTextureTarget **)&v92);
    v13 = v85;
    if ( v85 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AFF8, 2u, v85, 0x420u, 0LL);
      if ( v92 )
        (*(void (__fastcall **)(D2D_SIZE_U))(**(_QWORD **)&v92 + 16LL))(v92);
    }
    else
    {
      v86 = v92;
      v87 = CRenderTargetBitmap::Create(*(struct IDeviceTextureTarget **)&v92, &v95);
      v13 = v87;
      if ( v87 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AFF8, 2u, v87, 0x423u, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v92);
      }
      else if ( v86 )
      {
        (*(void (__fastcall **)(D2D_SIZE_U))(**(_QWORD **)&v86 + 16LL))(v86);
      }
      v7 = (__int64)v95;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)&v15 + 1112LL)
    || v13 != -2005532292 && v13 != -2147024882 && v13 != -2005270523
    || !*(_DWORD *)(*(_QWORD *)&v15 + 448LL) )
  {
    goto LABEL_103;
  }
  if ( v13 != -2005270523 )
    goto LABEL_135;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v15 + 552LL) + 312LL))(*(_QWORD *)(*(_QWORD *)&v15 + 552LL)) != -2005270480 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&v15 + 1112LL) )
    {
LABEL_137:
      v13 = -2003304307;
LABEL_138:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x28u, 0LL);
      goto LABEL_109;
    }
    *(_DWORD *)(*(_QWORD *)&v15 + 1112LL) = -2005270523;
LABEL_136:
    if ( !*(_DWORD *)(*(_QWORD *)&v15 + 1112LL) )
      goto LABEL_104;
    goto LABEL_137;
  }
  if ( !*(_DWORD *)(*(_QWORD *)&v15 + 1112LL) )
    *(_DWORD *)(*(_QWORD *)&v15 + 1112LL) = -2005270480;
LABEL_135:
  CD2DContext::TempDisableHardwareProtection((CD2DContext *)(*(_QWORD *)&v15 + 16LL));
LABEL_103:
  if ( v13 < 0 )
    goto LABEL_136;
LABEL_104:
  v91 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v13, 0LL, &v91) )
  {
    v88 = v91;
    if ( v91 == -2003304307 )
    {
      if ( v13 >= 0 )
        v13 = -2003304307;
      if ( !*(_DWORD *)(*(_QWORD *)&v15 + 1112LL) )
        *(_DWORD *)(*(_QWORD *)&v15 + 1112LL) = v13;
    }
    v13 = v88;
    if ( v88 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v88, 0xB31u, 0LL);
  }
  v16 = v13;
  if ( v13 < 0 )
    goto LABEL_138;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v110 = &v98;
    v112 = &v97;
    v114 = (UINT32 *)&v96;
    v82 = *v103;
    v83 = (unsigned int)v103[1];
    v91 = v83 + v103[3];
    v84 = v103[2];
    v116 = &v91;
    LODWORD(v96) = v82 + v84;
    v98 = v82;
    v97 = v83;
    v111 = 4LL;
    v113 = 4LL;
    v115 = 4LL;
    v117 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Stop,
      v83,
      5u,
      &v109);
  }
  v76 = v7;
  v7 = 0LL;
  *v104 = v76;
LABEL_109:
  if ( v15 )
    CD3DDevice::Release(*(CD3DDevice **)&v15);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v13;
}
