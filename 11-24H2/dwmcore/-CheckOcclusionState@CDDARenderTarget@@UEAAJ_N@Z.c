/*
 * XREFs of ?CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801F1630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E4FDC (-reset@-$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsValid@CDDASwapChain@@UEBAJXZ @ 0x1801F1690 (-IsValid@CDDASwapChain@@UEBAJXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCDDASwapChain@@@Z @ 0x1802B95EC (-CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDARenderTarget::CheckOcclusionState(CDDARenderTarget *this)
{
  __int64 *v1; // rdi
  CDDASwapChain *v3; // rcx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IDXGIOutput **); // rcx
  int v6; // eax
  int Device; // eax
  int DDASwapChain; // eax
  struct CD3DDevice *v9; // [rsp+50h] [rbp+20h] BYREF
  struct IDXGIOutput *v10; // [rsp+60h] [rbp+30h] BYREF

  v1 = (__int64 *)((char *)this + 80);
  v3 = (CDDASwapChain *)*((_QWORD *)this + 10);
  if ( !v3 || (int)CDDASwapChain::IsValid(v3) < 0 )
  {
    wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::reset(v1);
    if ( *((_DWORD *)this + 6) )
    {
      if ( *((_DWORD *)this + 7) )
      {
        v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDXGIOutput **))*((_QWORD *)this + 9);
        v10 = 0LL;
        v9 = 0LL;
        v6 = (**v5)(v5, &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa, &v10);
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x76u, 0LL);
        }
        else
        {
          wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v9);
          Device = CDeviceManager::GetDevice(
                     (CDeviceManager *)&g_DeviceManager,
                     *(struct _LUID *)((char *)this + 96),
                     &v9);
          if ( Device < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x78u, 0LL);
          }
          else
          {
            wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::reset(v1);
            DDASwapChain = CD3DDevice::CreateDDASwapChain(
                             v9,
                             v10,
                             (const struct D2D_SIZE_U *)this + 3,
                             (CDDARenderTarget *)((char *)this + 32),
                             (CDDARenderTarget *)((char *)this + 96),
                             (struct CDDASwapChain **)v1);
            if ( DDASwapChain < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DDASwapChain, 0x7Eu, 0LL);
            else
              CTargetDirtyBase<8>::SetFullDirty((__int64)this + 384);
          }
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v9);
      }
    }
  }
  return 142213121LL;
}
