/*
 * XREFs of ??1?$out_param_t@V?$com_ptr_t@UIDXGIOutput@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18021E60C
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x180239090 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1802C1224 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z @ 0x1802C94E8 (-InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::out_param_t<wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>>(
        __int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  if ( *((_BYTE *)a1 + 16) )
  {
    result = (__int64)a1[1];
    v2 = **a1;
    **a1 = result;
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
