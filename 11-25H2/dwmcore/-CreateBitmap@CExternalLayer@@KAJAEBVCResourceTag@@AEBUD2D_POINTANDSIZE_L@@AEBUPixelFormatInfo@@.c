/*
 * XREFs of ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068
 * Callers:
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x180028648 (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@MMW4Enum@CompositionResamp.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180029038 (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCV.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180029438 (-Create@CLinearInterpolationLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x18007FC58 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformResource@@PEAPEAV1@@Z @ 0x1800A4040 (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformR.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DCA0C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x18022DF68 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEB.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18028695C (-Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z @ 0x180287490 (-Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z.c)
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
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180145C30 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ @ 0x180146290 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180147060 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x180147A70 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1801B529C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
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

__int64 __fastcall CExternalLayer::CreateBitmap(
        struct CResourceTag *a1,
        _DWORD *a2,
        struct PixelFormatInfo *a3,
        CDeviceTextureTarget *a4,
        int a5,
        __int64 *a6)
{
  unsigned int *v6; // rbx
  UINT *v8; // rsi
  __int64 v9; // rdi
  UINT pSysMem_high; // r13d
  __int64 v11; // rsi
  int v12; // r14d
  unsigned int pSysMem; // r12d
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // r15d
  _QWORD *v17; // r15
  int v18; // esi
  float v19; // xmm6_4
  struct CScratchRenderTargetBitmap *v20; // r14
  int v21; // eax
  float v22; // xmm7_4
  __int64 v23; // r15
  __int64 v24; // r13
  CD2DBitmap *v25; // rcx
  __int64 (__fastcall *v26)(CD2DBitmap *__hidden); // rax
  int IsValid; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  void (__fastcall *v30)(__int64, _DWORD *); // rax
  int v31; // eax
  CDeviceTextureTarget *v32; // rcx
  bool (__fastcall *v33)(CDeviceTextureTarget *__hidden); // rax
  char IsHardwareProtected; // al
  char v35; // al
  __int64 v36; // rcx
  void (__fastcall *v37)(__int64, __int64 *); // rax
  UINT v38; // eax
  float v39; // xmm1_4
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 i; // r8
  struct PixelFormatInfo *v43; // r12
  __int64 v44; // rcx
  enum DXGI_ALPHA_MODE v45; // edi
  __int64 (__fastcall *v46)(__int64, struct PixelFormatInfo **, __int64); // rax
  __int64 PixelFormatInfo; // rax
  CD2DBitmap *v48; // rcx
  void (__fastcall *v49)(CD2DBitmap *, enum DXGI_ALPHA_MODE); // rax
  unsigned int v50; // edi
  __int64 v51; // rcx
  __int64 (__fastcall *v52)(__int64, _BYTE *); // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  void (__fastcall *v55)(__int64, _QWORD); // rax
  __int64 v56; // rcx
  CDeviceTextureTarget *v57; // r12
  unsigned int v58; // edi
  __int64 (__fastcall *v59)(__int64, __int64 *); // rax
  _DWORD *DisplayId; // rax
  __int64 v61; // rcx
  void (__fastcall *v62)(__int64, _QWORD); // rax
  float v63; // xmm6_4
  __int64 v64; // rcx
  __int64 (__fastcall *v65)(__int64, _BYTE *); // rax
  __int64 RenderTargetInfo; // rax
  int v67; // r13d
  __int64 (__fastcall ***v68)(_QWORD, GUID *, CDeviceTextureTarget **); // r9
  CDeviceTextureTarget *v69; // rcx
  char v70; // di
  __int64 (__fastcall *v71)(_QWORD, GUID *, CDeviceTextureTarget **); // rax
  int v72; // eax
  struct ID3D11Texture2D *(__fastcall *v73)(CDeviceTextureTarget *); // rax
  struct ID3D11Texture2D *Texture2D; // rax
  struct CScratchRenderTargetBitmap *v75; // rcx
  __int64 v76; // rax
  __int64 v78; // r8
  int v79; // edx
  UINT v80; // ecx
  unsigned int v81; // ecx
  int v82; // edx
  __int64 v83; // r8
  int v84; // ecx
  int v85; // eax
  struct IDeviceTextureTarget *v86; // rdi
  int v87; // eax
  __int64 v88; // rdx
  int v89; // eax
  int v90; // ecx
  int v91; // r9d
  int v92; // eax
  int v93; // [rsp+28h] [rbp-E0h]
  int v94[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v95; // [rsp+40h] [rbp-C8h] BYREF
  char v96; // [rsp+48h] [rbp-C0h]
  bool v97; // [rsp+49h] [rbp-BFh]
  __int64 v98; // [rsp+50h] [rbp-B8h] BYREF
  CDeviceTextureTarget *v99; // [rsp+58h] [rbp-B0h] BYREF
  struct CScratchRenderTargetBitmap *v100; // [rsp+60h] [rbp-A8h] BYREF
  struct IDeviceTextureTarget *v101; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v102; // [rsp+70h] [rbp-98h]
  struct D3D11_SUBRESOURCE_DATA v103; // [rsp+78h] [rbp-90h] BYREF
  __int64 v104; // [rsp+88h] [rbp-80h] BYREF
  struct CResourceTag *v105; // [rsp+90h] [rbp-78h]
  int *v106; // [rsp+98h] [rbp-70h]
  __int64 *v107; // [rsp+A0h] [rbp-68h]
  _BYTE v108[24]; // [rsp+A8h] [rbp-60h] BYREF
  struct PixelFormatInfo *v109[2]; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v110[4]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v111[24]; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+F8h] [rbp-10h] BYREF
  void *v113; // [rsp+108h] [rbp+0h]
  __int64 v114; // [rsp+110h] [rbp+8h]
  __int64 *v115; // [rsp+118h] [rbp+10h]
  __int64 v116; // [rsp+120h] [rbp+18h]
  __int64 *v117; // [rsp+128h] [rbp+20h]
  __int64 v118; // [rsp+130h] [rbp+28h]
  void *v119; // [rsp+138h] [rbp+30h]
  __int64 v120; // [rsp+140h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v6 = a2 + 2;
  v99 = a4;
  v109[0] = a3;
  v106 = a2;
  v8 = a2 + 3;
  *a6 = 0LL;
  v9 = 0LL;
  v105 = a1;
  v107 = a6;
  v100 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v78 = (unsigned int)a2[1];
    v79 = *a2;
    v80 = *v8;
    v113 = v94;
    LODWORD(v101) = v78 + v80;
    v81 = *v6;
    v115 = (__int64 *)&v95;
    LODWORD(v98) = v79 + v81;
    v117 = &v98;
    v94[0] = v79;
    v119 = &v101;
    LODWORD(v95) = v78;
    v114 = 4LL;
    v116 = 4LL;
    v118 = 4LL;
    v120 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Start,
      v78,
      5u,
      &v112);
  }
  pSysMem_high = *v8;
  v11 = *(_QWORD *)a4;
  v12 = 0;
  pSysMem = *v6;
  v102 = v11;
  v103.pSysMem = (const void *)__PAIR64__(pSysMem_high, pSysMem);
  v103.SysMemPitch = pSysMem_high;
  EnterCriticalSection(&CriticalSection);
  v14 = qword_180406B38;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = -2003304307;
    if ( v14 == (_QWORD)xmmword_180406B40 )
    {
      v102 = 0LL;
      goto LABEL_115;
    }
    if ( __PAIR64__(HIDWORD(v102), v11) == *(_QWORD *)(*(_QWORD *)v14 + 936LL) )
      break;
    v14 += 16LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)v14 + 1112LL) )
  {
    v102 = 0LL;
LABEL_115:
    v12 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, -2003304307, 0x11Du, 0LL);
    goto LABEL_10;
  }
  v15 = *(_QWORD *)v14;
  if ( _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v14 + 8LL), 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v93);
  pSysMem_high = HIDWORD(v103.pSysMem);
  v9 = (__int64)v100;
  pSysMem = (unsigned int)v103.pSysMem;
  v103.SysMemPitch = HIDWORD(v103.pSysMem);
  v102 = v15;
LABEL_10:
  LeaveCriticalSection(&CriticalSection);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x21u, 0LL);
    goto LABEL_108;
  }
  v9 = 0LL;
  v100 = 0LL;
  if ( *(_DWORD *)(v15 + 1112) )
  {
    v18 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, -2003304307, 0x42Au, 0LL);
    goto LABEL_98;
  }
  if ( !a5 )
  {
    v101 = 0LL;
    v85 = CD3DDevice::CreateDeviceTextureTarget((CD3DDevice *)v15, v105, &v103, v109[0], v99, &v101);
    v18 = v85;
    if ( v85 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, v85, 0x43Cu, 0LL);
      if ( v101 )
        (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)v101 + 16LL))(v101);
    }
    else
    {
      v86 = v101;
      v87 = CRenderTargetBitmap::Create(v101, &v100);
      v18 = v87;
      if ( v87 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, v87, 0x43Fu, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v101);
      }
      else if ( v86 )
      {
        (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)v86 + 16LL))(v86);
      }
      v9 = (__int64)v100;
    }
    goto LABEL_98;
  }
  v17 = (_QWORD *)(v15 + 464);
  v18 = 0;
  v19 = FLOAT_3_4028235e38;
  v95 = (_QWORD *)(v15 + 464);
  v96 = *((_BYTE *)v99 + 20);
  v97 = ((a5 - 2) & 0xFFFFFFFD) == 0;
  v20 = 0LL;
  LODWORD(v101) = *(_DWORD *)v109[0];
  v21 = *(_DWORD *)(v15 + 488);
  v22 = 1.0 / (float)(int)(((pSysMem + 63) & 0xFFFFFFC0) * ((pSysMem_high + 63) & 0xFFFFFFC0));
  while ( 2 )
  {
    v94[0] = v21;
    if ( v21 )
    {
      v23 = (unsigned int)(v21 - 1);
      v24 = *(_QWORD *)(*v95 + 8 * v23);
      v25 = *(CD2DBitmap **)(v24 + 120);
      if ( v25
        && ((v26 = *(__int64 (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v25 + 24LL), v26 == CD2DBitmap::IsValid)
          ? (IsValid = CD2DBitmap::IsValid(v25))
          : (char *)v26 != (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid
          ? ((char *)v26 != (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid
           ? (IsValid = ((__int64 (*)(void))v26)())
           : (IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v25)))
          : (IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v25)),
            IsValid >= 0) )
      {
        v28 = *(_QWORD *)(v24 + 120);
        if ( v28 )
        {
          v29 = v28 + 8;
          v30 = *(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(v28 + 8) + 24LL);
          if ( (char *)v30 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
            IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v29, v110);
          else
            v30(v29, v110);
          v31 = v110[0];
        }
        else
        {
          v110[0] = 0;
          v110[2] = 0;
          v31 = 0;
          v110[1] = 3;
        }
        if ( (_DWORD)v101 != v31 )
          goto LABEL_42;
        v32 = *(CDeviceTextureTarget **)(v24 + 120);
        v35 = 0;
        if ( v32 )
        {
          v33 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(*(_QWORD *)v32 + 56LL);
          if ( (char *)v33 == (char *)CDeviceTextureTarget::IsHardwareProtected )
            IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected();
          else
            IsHardwareProtected = v33 == CDeviceTextureTarget::IsHardwareProtected
                                ? CDeviceTextureTarget::IsHardwareProtected(v32)
                                : ((__int64 (*)(void))v33)();
          if ( IsHardwareProtected )
            v35 = 1;
        }
        if ( v96 != v35 )
          goto LABEL_42;
        v36 = *(_QWORD *)(v24 + 120);
        if ( v36 )
        {
          v37 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 88LL);
          if ( (char *)v37 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
            IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v36, &v104);
          else
            v37(v36, &v104);
          v38 = HIDWORD(v104);
          LODWORD(v36) = v104;
        }
        else
        {
          v104 = 0LL;
          v38 = 0;
        }
        if ( v97 )
        {
          v17 = v95;
          if ( (_DWORD)v36 == pSysMem && v38 == v103.SysMemPitch )
          {
            v20 = (struct CScratchRenderTargetBitmap *)v24;
            break;
          }
          goto LABEL_43;
        }
        if ( (unsigned int)v36 >= pSysMem && v38 >= v103.SysMemPitch )
        {
          v17 = v95;
          v39 = (float)(int)(v36 * v38);
          if ( (float)(v39 * v22) < 4.0 && v19 > v39 )
          {
            v19 = (float)(int)(v36 * v38);
            v20 = (struct CScratchRenderTargetBitmap *)v24;
          }
        }
        else
        {
LABEL_42:
          v17 = v95;
        }
      }
      else
      {
        v88 = (unsigned int)v23;
        v17 = v95;
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v95, v88);
        *(_BYTE *)(v24 + 144) = 0;
        CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((CGlobalDrawingContext *)v24);
      }
LABEL_43:
      v21 = v94[0] - 1;
      continue;
    }
    break;
  }
  if ( v20 )
  {
    v40 = *((_DWORD *)v17 + 6);
    v41 = 0LL;
    for ( i = *v17; (unsigned int)v41 < v40; v41 = (unsigned int)(v41 + 1) )
    {
      if ( v20 == *(struct CScratchRenderTargetBitmap **)(i + 8 * v41) )
        break;
    }
    if ( (unsigned int)v41 < v40 )
    {
      while ( (unsigned int)v41 < v40 - 1 )
      {
        *(_QWORD *)(i + 8 * v41) = *(_QWORD *)(i + 8LL * (unsigned int)(v41 + 1));
        v41 = (unsigned int)(v41 + 1);
        v40 = *((_DWORD *)v17 + 6);
      }
      *((_DWORD *)v17 + 6) = v40 - 1;
    }
    v43 = v109[0];
    v44 = *((_QWORD *)v20 + 15) + 8LL;
    v45 = *((_DWORD *)v109[0] + 1);
    v46 = *(__int64 (__fastcall **)(__int64, struct PixelFormatInfo **, __int64))(*(_QWORD *)v44 + 24LL);
    if ( (char *)v46 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
      PixelFormatInfo = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v44, v109);
    else
      PixelFormatInfo = v46(v44, v109, i);
    if ( v45 != *(_DWORD *)(PixelFormatInfo + 4) )
    {
      v48 = (CD2DBitmap *)(*((_QWORD *)v20 + 15) + 16LL);
      v49 = *(void (__fastcall **)(CD2DBitmap *, enum DXGI_ALPHA_MODE))(*(_QWORD *)v48 + 136LL);
      if ( v49 == CD2DBitmap::SetAlphaMode )
        CD2DBitmap::SetAlphaMode(v48, v45);
      else
        v49(v48, v45);
      CRenderTargetBitmap::ResetBitmapCache(v20);
    }
    v50 = *((_DWORD *)v43 + 2);
    v51 = *((_QWORD *)v20 + 15) + 8LL;
    v52 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v51 + 24LL);
    if ( (char *)v52 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
      v53 = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v51, v111);
    else
      v53 = v52(v51, v111);
    if ( v50 != *(_DWORD *)(v53 + 8) )
    {
      v54 = *((_QWORD *)v20 + 15) + 16LL;
      v55 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v54 + 144LL);
      if ( (char *)v55 == (char *)CDeviceTextureTarget::SetColorSpace )
        CDeviceTextureTarget::SetColorSpace(v54, v50);
      else
        v55(v54, v50);
      CRenderTargetBitmap::ResetBitmapCache(v20);
    }
    v56 = *((_QWORD *)v20 + 15);
    v57 = v99;
    v58 = *((_DWORD *)v99 + 2);
    v59 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v56 + 96LL);
    if ( (char *)v59 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId )
      DisplayId = (_DWORD *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId(v56, &v98);
    else
      DisplayId = (_DWORD *)v59(v56, &v98);
    if ( v58 != *DisplayId )
    {
      v61 = *((_QWORD *)v20 + 15) + 16LL;
      v62 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v61 + 152LL);
      if ( (char *)v62 == (char *)CDeviceTextureTarget::SetDisplayId )
        CDeviceTextureTarget::SetDisplayId(v61, v58);
      else
        v62(v61, v58);
      CRenderTargetBitmap::ResetBitmapCache(v20);
    }
    v63 = *((float *)v57 + 4);
    v64 = *((_QWORD *)v20 + 15) + 16LL;
    v65 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v64 + 120LL);
    if ( (char *)v65 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
      RenderTargetInfo = CDeviceTextureTarget::GetRenderTargetInfo(v64, v108);
    else
      RenderTargetInfo = v65(v64, v108);
    if ( v63 != *(float *)(RenderTargetInfo + 16) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v20 + 15) + 16LL) + 160LL))(*((_QWORD *)v20 + 15) + 16LL);
      CRenderTargetBitmap::ResetBitmapCache(v20);
    }
    CD2DBitmapCache::MarkFullInvalid(v20);
    v67 = a5;
LABEL_79:
    v68 = (__int64 (__fastcall ***)(_QWORD, GUID *, CDeviceTextureTarget **))*((_QWORD *)v20 + 15);
    v69 = 0LL;
    v99 = 0LL;
    v70 = (unsigned int)(v67 - 1) <= 1;
    if ( v68 )
    {
      v71 = **v68;
      v72 = (char *)v71 == (char *)CDeviceTextureTarget::QueryInterface
          ? CDeviceTextureTarget::QueryInterface(v68, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v99)
          : v71(v68, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v99);
      v69 = v99;
      if ( v72 >= 0 )
      {
        v73 = *(struct ID3D11Texture2D *(__fastcall **)(CDeviceTextureTarget *))(*(_QWORD *)v99 + 120LL);
        if ( v73 == CDeviceTextureTarget::GetTexture2D )
          Texture2D = CDeviceTextureTarget::GetTexture2D(v99);
        else
          Texture2D = v73(v99);
        ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))Texture2D->lpVtbl->SetPrivateData)(
          Texture2D,
          &WKPDID_D3DDebugObjectName,
          *((unsigned int *)v105 + 2),
          *(_QWORD *)v105);
        v69 = v99;
      }
    }
    if ( *((_BYTE *)v20 + 145) != v70 )
    {
      *((_BYTE *)v20 + 145) = v70;
      *((_BYTE *)v20 + 128) = v70;
      CRenderTargetBitmap::ResetBitmapCache(v20);
      v69 = v99;
    }
    if ( v69 )
      (*(void (__fastcall **)(CDeviceTextureTarget *))(*(_QWORD *)v69 + 16LL))(v69);
    if ( *((_BYTE *)v20 + 145) )
      ++*((_DWORD *)v17 + 10);
    v75 = 0LL;
    v9 = ((unsigned __int64)v20 + 80) & -(__int64)(v20 != 0LL);
  }
  else
  {
    v67 = a5;
    v100 = 0LL;
    if ( ((a5 - 2) & 0xFFFFFFFD) != 0 )
    {
      LODWORD(v103.pSysMem) = (pSysMem + 63) & 0xFFFFFFC0;
      HIDWORD(v103.pSysMem) = (HIDWORD(v103.pSysMem) + 63) & 0xFFFFFFC0;
    }
    v100 = 0LL;
    v92 = CD3DDevice::CreateScratchRenderTargetBitmap(
            (CD3DDevice *)(v17 - 58),
            (const struct D2D_SIZE_U *)&v103,
            (struct D3D11_SUBRESOURCE_DATA *)v109[0],
            v99,
            &v100);
    v18 = v92;
    if ( v92 >= 0 )
    {
      v20 = v100;
      goto LABEL_79;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v92, 0x3Eu, 0LL);
    v75 = v100;
  }
  if ( v75 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v75);
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, v18, 0x433u, 0LL);
  v16 = -2003304307;
LABEL_98:
  if ( *(_DWORD *)(v15 + 1112)
    || v18 != -2005532292 && v18 != -2147024882 && v18 != -2005270523
    || !*(_DWORD *)(v15 + 448) )
  {
    goto LABEL_102;
  }
  if ( v18 != -2005270523 )
    goto LABEL_136;
  v89 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 552) + 312LL))(*(_QWORD *)(v15 + 552));
  v90 = *(_DWORD *)(v102 + 1112);
  if ( v89 != -2005270480 )
  {
    if ( !v90 )
      *(_DWORD *)(v15 + 1112) = -2005270523;
LABEL_137:
    if ( !*(_DWORD *)(v15 + 1112) )
      goto LABEL_103;
    v12 = -2003304307;
    goto LABEL_139;
  }
  if ( !v90 )
    *(_DWORD *)(v15 + 1112) = -2005270480;
LABEL_136:
  CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v15 + 16));
LABEL_102:
  if ( v18 < 0 )
    goto LABEL_137;
LABEL_103:
  v94[0] = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v18, 0LL, v94) )
  {
    v91 = v94[0];
    if ( v94[0] == -2003304307 )
    {
      if ( v18 >= 0 )
        v18 = -2003304307;
      if ( !*(_DWORD *)(v15 + 1112) )
        *(_DWORD *)(v15 + 1112) = v18;
    }
    v18 = v91;
    if ( v91 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, 0xB4Du, 0LL);
  }
  v16 = v18;
  v12 = v18;
  if ( v18 < 0 )
  {
LABEL_139:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x28u, 0LL);
    goto LABEL_108;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v113 = &v101;
    v115 = &v98;
    v117 = (__int64 *)&v95;
    v82 = *v106;
    v83 = (unsigned int)v106[1];
    v94[0] = v83 + v106[3];
    v84 = v106[2];
    v119 = v94;
    LODWORD(v95) = v82 + v84;
    LODWORD(v101) = v82;
    LODWORD(v98) = v83;
    v114 = 4LL;
    v116 = 4LL;
    v118 = 4LL;
    v120 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Stop,
      v83,
      5u,
      &v112);
  }
  v76 = v9;
  v9 = 0LL;
  *v107 = v76;
LABEL_108:
  if ( v15 )
    CD3DDevice::Release((CD3DDevice *)v15);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v12;
}
