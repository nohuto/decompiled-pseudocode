/*
 * XREFs of ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x180211B14
 * Callers:
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180218BB0 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z @ 0x18028531C (-Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x180211C70 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 */

__int64 __fastcall CD3DDevice::GetDirectInkSuperWetRendererNoRef(
        CD3DDevice *this,
        struct IDCompositionDirectInkSuperWetRenderer **a2)
{
  int D3D12Resources; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  D3D12Resources = CD3DDevice::EnsureBeginCreateD3D12Resources(this);
  v5 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x580,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
      (const char *)(unsigned int)D3D12Resources);
    return v5;
  }
  else
  {
    v6 = *((_QWORD *)this + 133);
    WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)v6, 0);
    v7 = *(_DWORD *)(v6 + 96);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x583,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    else
    {
      *a2 = *(struct IDCompositionDirectInkSuperWetRenderer **)(v6 + 88);
      return 0LL;
    }
  }
}
