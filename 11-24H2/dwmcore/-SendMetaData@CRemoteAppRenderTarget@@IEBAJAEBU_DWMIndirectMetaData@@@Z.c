/*
 * XREFs of ?SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x180281AF8
 * Callers:
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1802811E4 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180281A54 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SendMetaData(
        CRemoteAppRenderTarget *this,
        const struct _DWMIndirectMetaData *a2)
{
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, CRemoteAppRenderTarget **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  CRemoteAppRenderTarget *v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, CRemoteAppRenderTarget **); // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v9 = this;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v11,
    **((_QWORD **)g_pComposition + 77));
  if ( v11 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 224LL))(v11);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v10,
      v3);
    v4 = v10;
    if ( v10 )
    {
      v9 = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v9);
      v5 = (**v4)(v4, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v9);
      v6 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x285u, 0LL);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(CRemoteAppRenderTarget *, const struct _DWMIndirectMetaData *))(*(_QWORD *)v9 + 176LL))(
               v9,
               a2);
        v6 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x287u, 0LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
    }
    else
    {
      v6 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x28Bu, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  }
  else
  {
    v6 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x290u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
  return v6;
}
