/*
 * XREFs of ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x18027FF70
 * Callers:
 *     ?CheckOcclusionState@CRemoteRenderTarget@@UEAAJ_N@Z @ 0x18027FEE0 (-CheckOcclusionState@CRemoteRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802B980C (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?GetRemotingDXGIOutput@CDisplayManager@@QEAAJPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x1802C00EC (-GetRemotingDXGIOutput@CDisplayManager@@QEAAJPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802C6918 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::EnsureSwapChain(CRemoteRenderTarget *this)
{
  __int64 *v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx
  struct IDXGIOutputDWM **v5; // r14
  CDisplayManager *v6; // rcx
  int RemotingDXGIOutput; // eax
  __int64 v8; // rax
  int Device; // eax
  int LegacyRemotingSwapChain; // eax
  unsigned int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+34h] [rbp-34h]
  struct CD3DDevice *v15; // [rsp+70h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 192);
  v3 = 0;
  v4 = *((_QWORD *)this + 24);
  if ( !v4
    || (*(int (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) < 0
    || *((_BYTE *)this + 2674) && *(_DWORD *)(*((_QWORD *)this + 3) + 6264LL) != 7 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
    v5 = (struct IDXGIOutputDWM **)((char *)this + 184);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 23);
    RemotingDXGIOutput = CDisplayManager::GetRemotingDXGIOutput(
                           v6,
                           *((HMONITOR *)this + 27),
                           (struct IDXGIOutputDWM **)this + 23);
    v3 = RemotingDXGIOutput;
    if ( RemotingDXGIOutput < 0 )
    {
      v12 = 375;
      goto LABEL_20;
    }
    *((_DWORD *)this + 79) = *((_DWORD *)this + 54);
    v8 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 40) = 0LL;
    *((_BYTE *)this + 328) = 0;
    if ( *(_DWORD *)(v8 + 6264) == 7 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
      RemotingDXGIOutput = CDummyRemotingSwapChain::Create(*v5, (struct ILegacyRemotingSwapChain **)v1);
      v3 = RemotingDXGIOutput;
      if ( RemotingDXGIOutput >= 0 )
      {
        *((_BYTE *)this + 2674) = 1;
        return v3;
      }
      v12 = 389;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RemotingDXGIOutput, v12, 0LL);
      return v3;
    }
    if ( *((_DWORD *)this + 30) && *((_DWORD *)this + 31) )
    {
      v13 = 87;
      v14 = 3LL;
      v15 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v15);
      Device = CDeviceManager::GetDevice(
                 (CDeviceManager *)&g_DeviceManager,
                 *(struct _LUID *)((char *)this + 308),
                 &v15);
      v3 = Device;
      if ( Device < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x18Fu, 0LL);
      }
      else
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
        LegacyRemotingSwapChain = CD3DDevice::CreateLegacyRemotingSwapChain(
                                    v15,
                                    *v5,
                                    (const struct D2D_SIZE_U *)this + 15,
                                    (const struct PixelFormatInfo *)&v13,
                                    (CRemoteRenderTarget *)((char *)this + 308),
                                    (struct ILegacyRemotingSwapChain **)v1);
        v3 = LegacyRemotingSwapChain;
        if ( LegacyRemotingSwapChain < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, LegacyRemotingSwapChain, 0x195u, 0LL);
        }
        else
        {
          CTargetDirtyBase<8>::SetFullDirty((__int64)this + 336);
          *((_BYTE *)this + 2674) = 0;
        }
      }
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v15);
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x19Bu, 0LL);
    }
  }
  return v3;
}
