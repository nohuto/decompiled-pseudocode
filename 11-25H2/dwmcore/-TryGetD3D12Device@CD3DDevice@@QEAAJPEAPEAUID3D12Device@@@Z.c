/*
 * XREFs of ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18021D390
 * Callers:
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180224870 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x18026A280 (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18021D450 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::TryGetD3D12Device(CD3DDevice *this, struct ID3D12Device **a2)
{
  int D3D12Resources; // eax
  unsigned int v5; // ebx
  struct ID3D12Device *v6; // rbx
  __int64 v7; // rbx
  int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  D3D12Resources = CD3DDevice::EnsureBeginCreateD3D12Resources(this);
  v5 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
      (const char *)(unsigned int)D3D12Resources);
    return v5;
  }
  else
  {
    v6 = 0LL;
    if ( !*(_BYTE *)(*((_QWORD *)this + 133) + 100LL) )
    {
LABEL_6:
      *a2 = v6;
      return 0LL;
    }
    v7 = *((_QWORD *)this + 133);
    WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)v7, 0);
    v8 = *(_DWORD *)(v7 + 96);
    if ( v8 >= 0 )
    {
      v6 = *(struct ID3D12Device **)(v7 + 72);
      if ( v6 )
        ((void (__fastcall *)(struct ID3D12Device *))v6->lpVtbl->AddRef)(v6);
      goto LABEL_6;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
}
