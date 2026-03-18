/*
 * XREFs of ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x180211A8C
 * Callers:
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180218BB0 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x180260340 (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z @ 0x18028531C (-Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x180211C70 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x180222228 (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@.c)
 */

__int64 __fastcall CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(
        CD3DDevice *this,
        struct ID3D12CommandQueue **a2)
{
  int D3D12Resources; // ebx
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  D3D12Resources = CD3DDevice::EnsureBeginCreateD3D12Resources(this);
  if ( D3D12Resources < 0 )
  {
    v5 = 1395LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
      (const char *)(unsigned int)D3D12Resources);
    return (unsigned int)D3D12Resources;
  }
  v7 = *((_QWORD *)this + 133);
  v9 = 0LL;
  D3D12Resources = CAsyncTask<CD3DDevice::D3D12Resources>::WaitForResult(v7, &v9);
  if ( D3D12Resources < 0 )
  {
    v5 = 1398LL;
    goto LABEL_3;
  }
  result = 0LL;
  *a2 = *(struct ID3D12CommandQueue **)(v9 + 8);
  return result;
}
