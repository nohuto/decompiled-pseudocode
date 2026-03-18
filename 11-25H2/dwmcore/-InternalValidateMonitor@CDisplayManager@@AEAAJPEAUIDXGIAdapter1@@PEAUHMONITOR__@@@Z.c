/*
 * XREFs of ?InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z @ 0x1802C94E8
 * Callers:
 *     ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x1802C9644 (-ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIDXGIOutput@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18021E60C (--1-$out_param_t@V-$com_ptr_t@UIDXGIOutput@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::InternalValidateMonitor(
        CDisplayManager *this,
        struct IDXGIAdapter1 *a2,
        HMONITOR a3)
{
  struct IDXGIAdapter1Vtbl *lpVtbl; // rax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int i; // edi
  __int64 v8; // rax
  int v9; // ebx
  int v10; // eax
  __int64 v12; // [rsp+38h] [rbp-49h] BYREF
  __int64 *v13; // [rsp+40h] [rbp-41h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-39h] BYREF
  __int64 v15; // [rsp+50h] [rbp-31h] BYREF
  char v16; // [rsp+58h] [rbp-29h]
  _BYTE v17[88]; // [rsp+68h] [rbp-19h] BYREF
  HMONITOR v18; // [rsp+C0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  lpVtbl = a2->lpVtbl;
  v13 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IDXGIAdapter1 *, GUID *, __int64 **))lpVtbl->QueryInterface)(
         a2,
         &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
         &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v12 = 0LL;
    for ( i = 0; ; ++i )
    {
      v8 = *v13;
      v15 = 0LL;
      v14 = &v12;
      v16 = 1;
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v8 + 40))(v13, i, 0xFFFFFFFFLL, &v15);
      wil::details::out_param_t<wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IDXGIOutput,wil::err_returncode_policy>>(&v14);
      if ( v9 < 0 )
        break;
      memset_0(v17, 0, 0x60uLL);
      v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 56LL))(v12, v17);
      v6 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
          (const char *)(unsigned int)v10);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
        goto LABEL_11;
      }
      if ( a3 == v18 )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
        v6 = 0;
        goto LABEL_11;
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
    v6 = -2005270526;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
      (const char *)(unsigned int)v5);
  }
LABEL_11:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v6;
}
