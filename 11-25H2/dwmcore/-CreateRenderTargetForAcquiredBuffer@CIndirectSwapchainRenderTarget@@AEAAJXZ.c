/*
 * XREFs of ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800C4E44
 * Callers:
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800C4D70 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18028E930 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002E7F0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800C4FE8 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180220E44 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ??$_Emplace@U?$pair@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAUIDXGIResource@@@std@@V?$allocator@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180255730 (--$_Emplace@U-$pair@PEAUIDXGIResource@@V-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(
        CIndirectSwapchainRenderTarget *this)
{
  char *v1; // r14
  __int64 v2; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdi
  char *v11; // r10
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // esi
  unsigned int v16; // eax
  int Device; // eax
  __int64 v18; // r9
  int v19; // xmm0_4
  int v20; // eax
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  char v23[12]; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+5Ch] [rbp-14h]
  __int64 v25; // [rsp+A0h] [rbp+30h] BYREF
  struct CD3DDevice *v26; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+40h] BYREF

  v27 = 0LL;
  v1 = (char *)this + 2752;
  v2 = 0LL;
  v24 = 0;
  v4 = (__int64 *)*((_QWORD *)this + 344);
  v25 = 0LL;
  v5 = v4;
  v6 = (__int64 *)v4[1];
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( (unsigned __int64)v6[4] >= *((_QWORD *)this + 352) )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( !*((_BYTE *)v5 + 25) && *((_QWORD *)this + 352) >= (unsigned __int64)v5[4] && v5 != v4 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v25, v5 + 5);
    v10 = v25;
    goto LABEL_12;
  }
  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 352);
  v27 = 0LL;
  v8 = (**v7)(v7, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v27);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x153u, 0LL);
    goto LABEL_16;
  }
  v26 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v26);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 2824), &v26);
  v9 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, 0x156u, 0LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v26);
    goto LABEL_18;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v25);
  if ( IsDXGIColorSpaceHDR(*((enum DXGI_COLOR_SPACE_TYPE *)this + 34)) )
    v19 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  else
    v19 = 0;
  v20 = CD3DDevice::CreateRenderTargetBitmap(v26, v27, *((unsigned int *)this + 33), v18, -3, v19, &v25);
  v9 = v20;
  if ( v20 >= 0 )
  {
    v10 = v25;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 72LL))(
      v25,
      ((unsigned __int64)this + 2744) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v21 = *((_QWORD *)this + 352);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v22,
      v10);
    std::_Tree<std::_Tmap_traits<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>,std::less<IDXGIResource *>,std::allocator<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>,0>>::_Emplace<std::pair<IDXGIResource *,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>(
      v1,
      v23,
      &v21);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v26);
LABEL_12:
    v11 = (char *)this + 2640;
    v25 = v10;
    v12 = *((_DWORD *)this + 666);
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v9 = -2147024362;
      v16 = 181;
      v14 = -2147024362;
    }
    else
    {
      v14 = 0;
      if ( v13 <= *((_DWORD *)v11 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v11 + 8LL * v12) = v10;
        *((_DWORD *)v11 + 6) = v13;
LABEL_15:
        v9 = v14;
        goto LABEL_16;
      }
      v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11, 8, 1, &v25);
      v9 = v14;
      if ( v14 >= 0 )
        goto LABEL_15;
      v16 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v16, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x169u, 0LL);
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x15Du, 0LL);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v26);
  v2 = v25;
LABEL_16:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
LABEL_18:
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  return v9;
}
