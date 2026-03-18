/*
 * XREFs of ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C3598
 * Callers:
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C33F8 (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x18023EE50 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x180289B20 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x1800C1FD4 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C2FDC (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vli.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x180100570 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x180207354 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18025A414 (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureDXGIOutput(CLegacyRenderTarget *this)
{
  char *v1; // r14
  unsigned int v3; // edx
  int DXGIOutput; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v8; // ecx
  char v9; // dl
  bool v10; // al
  __int64 v11; // rdx
  bool v12; // zf
  struct IDXGIOutputDWM *v13; // rdx
  struct CSyncLockGroup *Group; // rax
  struct IDXGIOutputDWM *v15[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v16[28]; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+64h] [rbp-A4h]
  int v18; // [rsp+68h] [rbp-A0h]
  char v19; // [rsp+B4h] [rbp-54h]
  char v20; // [rsp+B5h] [rbp-53h]
  unsigned int v21; // [rsp+FCh] [rbp-Ch]

  v1 = (char *)this + 192;
  if ( *((_QWORD *)this + 24) )
  {
    return 0;
  }
  else
  {
    v3 = *((_DWORD *)this + 8370);
    v15[0] = 0LL;
    DXGIOutput = CDisplayManager::GetDXGIOutput(this, v3, v15);
    v5 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DXGIOutput, 0x396u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v15);
    }
    else
    {
      memset_0(v16, 0, 0xC8uLL);
      v6 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v15[0] + 32LL))(v15[0], v16);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v8 = v21;
        *((_DWORD *)this + 30) = v17;
        *((_DWORD *)this + 31) = v18;
        if ( v8 )
        {
          Group = CSyncLockGroup::GetGroup(v8);
          *((_QWORD *)this + 4236) = Group;
          *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
                       (__int64 *)Group + 2,
                       (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3) = (char *)this + 160;
        }
        v9 = v19;
        *((_BYTE *)this + 33897) = v20 & 1;
        v10 = (v9 & 8) != 0;
        v11 = v9 & 1;
        v12 = CCommonRegistryData::m_fShowDirtyRegions == 0;
        *((_BYTE *)this + 33898) = v10;
        if ( !v12 )
          v11 = 0LL;
        CTargetDirtyBase<8>::EnableTightDirtyRegion((char *)this + 31152, v11);
        v13 = v15[0];
        v15[0] = 0LL;
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(v1, v13);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x399u, 0LL);
      }
      if ( v15[0] )
        (*(void (__fastcall **)(struct IDXGIOutputDWM *))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
    }
  }
  return v5;
}
