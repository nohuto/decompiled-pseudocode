/*
 * XREFs of ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1802B7BE4
 * Callers:
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1802B7A4C (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180154DCC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIDXGIOutput@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18021303C (--1-$out_param_t@V-$com_ptr_t@UIDXGIOutput@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _LUID __fastcall CDisplayManager::GetWarpAdapterLuid(CDisplayManager *this, _QWORD *a2)
{
  struct IDXGIFactory5 *v3; // rbx
  unsigned int i; // r14d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  int v6; // edi
  __int64 v8; // [rsp+20h] [rbp-E0h] BYREF
  struct IDXGIFactory5 *v9; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  char v12; // [rsp+40h] [rbp-C0h]
  _BYTE v13[296]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+178h] [rbp+78h]
  char v15; // [rsp+180h] [rbp+80h]

  v9 = 0LL;
  *a2 = 0LL;
  if ( (int)CDisplayManager::InternalGetDXGIFactory(this, &v9) >= 0 )
  {
    v8 = 0LL;
    v3 = v9;
    for ( i = 0; ; ++i )
    {
      lpVtbl = v3->lpVtbl;
      v11 = 0LL;
      v10 = &v8;
      v12 = 1;
      v6 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v3, i, &v11);
      wil::details::out_param_t<wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>>(&v10);
      if ( v6 < 0 )
        break;
      memset_0(v13, 0, 0x138uLL);
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 80LL))(v8, v13) >= 0 && (v15 & 2) != 0 )
      {
        *a2 = v14;
        break;
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
  return (struct _LUID)a2;
}
