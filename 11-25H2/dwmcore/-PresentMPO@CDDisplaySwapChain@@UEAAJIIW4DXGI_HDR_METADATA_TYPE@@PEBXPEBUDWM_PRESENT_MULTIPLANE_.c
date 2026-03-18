/*
 * XREFs of ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180171A70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1801717F4 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 *     ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x180171C74 (-PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 *     ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180171CE0 (-SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x1801724C4 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z @ 0x1801726B8 (-PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z.c)
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180172728 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 *     ?CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180172B9C (-CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplaySc.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1802C7F64 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::PresentMPO(
        CDDisplaySwapChain *this,
        __int64 a2,
        char a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        const void *a5,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  CDDisplaySwapChain *v7; // r14
  struct Windows::Devices::Display::Core::IDisplayScanout *v8; // rbx
  bool v9; // r15
  int v11; // eax
  char v12; // dl
  unsigned int v13; // r9d
  unsigned int v14; // edi
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v15; // rsi
  unsigned int v16; // ebp
  int CachedDesktopScanout; // eax
  int v18; // eax
  int v19; // eax
  bool v20; // r8
  int v22; // eax
  int CachedGeneralScanout; // eax
  __int64 v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+28h] [rbp-40h]
  void *v26; // [rsp+30h] [rbp-38h]
  struct Windows::Devices::Display::Core::IDisplayScanout *v27; // [rsp+70h] [rbp+8h] BYREF

  v7 = (CDDisplaySwapChain *)((char *)this - 24);
  v8 = 0LL;
  v9 = (a3 & 2) != 0;
  v27 = 0LL;
  v11 = CDDisplaySwapChain::PrePresent((CDDisplaySwapChain *)((char *)this - 24), v9);
  v14 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x21Fu, 0LL);
    goto LABEL_11;
  }
  v15 = a6;
  v16 = a7;
  if ( CCommonRegistryData::EnableDDisplayScanoutCaching )
  {
    if ( a7 == 1
      && !*(_DWORD *)a6
      && *((_BYTE *)a6 + 4)
      && IsDesktopOverlayPlaneResource(*((const struct IOverlayPlaneResource **)a6 + 1)) )
    {
      CachedDesktopScanout = CDDisplaySwapChain::FindCachedDesktopScanout(v7, v9, v15, &v27);
      v14 = CachedDesktopScanout;
      if ( CachedDesktopScanout >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedDesktopScanout, 0x22Du, 0LL);
LABEL_16:
      v8 = v27;
      goto LABEL_11;
    }
    CachedGeneralScanout = CDDisplaySwapChain::FindCachedGeneralScanout(
                             (__int64 **)v7,
                             v12,
                             v16,
                             v15,
                             v24,
                             v25,
                             (__int64)v26,
                             &v27);
    v14 = CachedGeneralScanout;
    if ( CachedGeneralScanout < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedGeneralScanout, 0x239u, 0LL);
      goto LABEL_16;
    }
  }
  else
  {
    v22 = CDDisplaySwapChain::CreateScanout(v7, a7, a6, v13, v24, &v27);
    v14 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x245u, 0LL);
      goto LABEL_16;
    }
  }
LABEL_8:
  v8 = v27;
  v18 = CDDisplaySwapChain::SetPerPresentDisplayScanoutOptions(v7, v15, v16, v27, v9, a4, a5);
  v14 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x24Fu, 0LL);
  }
  else
  {
    v19 = CDDisplaySwapChain::ExecutePresent(v7, v8, v15, v16);
    v14 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x255u, 0LL);
    else
      CDDisplaySwapChain::PostPresent(v7, v9, v20);
  }
LABEL_11:
  if ( v8 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v8 + 16LL))(v8);
  return v14;
}
