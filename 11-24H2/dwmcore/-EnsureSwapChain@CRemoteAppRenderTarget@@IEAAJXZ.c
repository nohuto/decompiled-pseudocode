/*
 * XREFs of ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180280E34
 * Callers:
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x180280DA0 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x1800439AC (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E4FDC (-reset@-$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x18027FEA0 (-GetRenderTargetInfo@COffScreenRenderTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsValid@CCompSwapChain@@UEBAJXZ @ 0x1802810B0 (-IsValid@CCompSwapChain@@UEBAJXZ.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802814CC (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCCompSwapChain@@@Z @ 0x1802BC5AC (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::EnsureSwapChain(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // edi
  __int64 *v3; // rsi
  CCompSwapChain *v4; // rcx
  int Device; // eax
  int CompositionSwapChain; // eax
  char **v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-30h]
  struct _LUID v10; // [rsp+30h] [rbp-20h] BYREF
  struct CD3DDevice *v11; // [rsp+70h] [rbp+20h] BYREF
  char *v12; // [rsp+78h] [rbp+28h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6264LL) == 7 )
  {
    v3 = (__int64 *)((char *)this + 176);
    v4 = (CCompSwapChain *)*((_QWORD *)this + 22);
    if ( !v4 || (int)CCompSwapChain::IsValid(v4) < 0 )
    {
      CRemoteAppRenderTarget::ReleaseSwapChain(this);
      COffScreenRenderTarget::GetRenderTargetInfo((CRemoteAppRenderTarget *)((char *)this + 96), (__int64)&v10);
      v11 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v11);
      Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v10, &v11);
      v1 = Device;
      if ( Device < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x1C6u, 0LL);
      }
      else
      {
        wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::reset(v3);
        CompositionSwapChain = CD3DDevice::CreateCompositionSwapChain(
                                 v11,
                                 (const struct D2D_SIZE_U *)this + 15,
                                 (CRemoteAppRenderTarget *)((char *)this + 128),
                                 (const struct RenderTargetInfo *)&v10,
                                 v9,
                                 (struct CCompSwapChain **)v3);
        v1 = CompositionSwapChain;
        if ( CompositionSwapChain < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CompositionSwapChain, 0x1CCu, 0LL);
        }
        else
        {
          v7 = (char **)(*v3 + 24);
          v12 = (char *)this + 160;
          std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(v7, &v12);
          *((_QWORD *)this + 23) = *(_QWORD *)(*v3 + 72);
          *((_BYTE *)this + 2630) = 1;
          CTargetDirtyBase<8>::SetFullDirty((__int64)this + 280);
        }
      }
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v11);
    }
  }
  return v1;
}
