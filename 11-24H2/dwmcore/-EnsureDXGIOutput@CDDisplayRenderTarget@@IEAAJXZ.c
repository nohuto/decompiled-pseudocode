/*
 * XREFs of ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ @ 0x180189B18
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x18027F5F0 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1801897AC (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vli.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x18018A5E0 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18024EF44 (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::EnsureDXGIOutput(CDDisplayRenderTarget *this)
{
  unsigned int v1; // edi
  struct IDXGIOutputDWM **v2; // rsi
  CDisplayManager *v4; // rcx
  int DXGIOutput; // eax
  int v6; // eax
  unsigned int v7; // ecx
  struct CSyncLockGroup *Group; // rax
  _BYTE v10[180]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v11; // [rsp+E4h] [rbp-34h]

  v1 = 0;
  v2 = (struct IDXGIOutputDWM **)((char *)this + 200);
  if ( !*((_QWORD *)this + 25) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 25);
    DXGIOutput = CDisplayManager::GetDXGIOutput(v4, *((_DWORD *)this + 8283), v2);
    v1 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DXGIOutput, 0x4DDu, 0LL);
      return v1;
    }
    memset_0(v10, 0, 0xC8uLL);
    v6 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)*v2 + 32LL))(*v2, v10);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x4DFu, 0LL);
      return v1;
    }
    v7 = v11;
    *((_BYTE *)this + 33521) = (v10[108] & 8) != 0;
    if ( !v7 )
    {
      if ( CCommonRegistryData::m_parallelModePolicy != 2 )
        return v1;
      v7 = -1;
    }
    Group = CSyncLockGroup::GetGroup(v7);
    *((_QWORD *)this + 4189) = Group;
    *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
                 (__int64 *)Group + 2,
                 (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3) = (char *)this + 160;
  }
  return v1;
}
