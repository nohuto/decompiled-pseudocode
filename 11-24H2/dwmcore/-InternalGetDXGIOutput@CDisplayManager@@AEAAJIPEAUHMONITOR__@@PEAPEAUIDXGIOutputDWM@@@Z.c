/*
 * XREFs of ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x18018A64C
 * Callers:
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x18018A5E0 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?GetRemotingDXGIOutput@CDisplayManager@@QEAAJPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x1802C00EC (-GetRemotingDXGIOutput@CDisplayManager@@QEAAJPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180154DCC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::InternalGetDXGIOutput(
        CDisplayManager *this,
        int a2,
        HMONITOR a3,
        struct IDXGIOutputDWM **a4)
{
  int DXGIFactory; // eax
  unsigned int v8; // ebx
  struct IDXGIFactory5 *v10; // rbx
  unsigned int i; // r14d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  int v13; // esi
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // edi
  unsigned int j; // esi
  __int64 v18; // rax
  unsigned int v19; // edi
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  struct IDXGIOutputDWM *v23; // rax
  __int64 v24; // rcx
  void (*v25)(void); // rax
  int v26; // eax
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  struct IDXGIOutputDWM *v28; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  struct IDXGIFactory5 *v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v32; // [rsp+60h] [rbp-A8h]
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  char v34; // [rsp+70h] [rbp-98h]
  _BYTE v35[88]; // [rsp+78h] [rbp-90h] BYREF
  HMONITOR v36; // [rsp+D0h] [rbp-38h]
  _BYTE v37[16]; // [rsp+D8h] [rbp-30h] BYREF
  int v38; // [rsp+E8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  *a4 = 0LL;
  v31 = 0LL;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, &v31);
  v8 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
      (const char *)(unsigned int)DXGIFactory);
    if ( v31 )
      ((void (__fastcall *)(struct IDXGIFactory5 *))v31->lpVtbl->Release)(v31);
    return v8;
  }
  v30 = 0LL;
  v10 = v31;
  for ( i = 0; ; ++i )
  {
    lpVtbl = v10->lpVtbl;
    v33 = 0LL;
    v32 = &v30;
    v34 = 1;
    v13 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v10, i, &v33);
    if ( v34 )
    {
      v14 = *v32;
      *v32 = v33;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v13 < 0 )
      break;
    v29 = 0LL;
    v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v30)(
            v30,
            &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
            (__int64 *)&v29);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
        (const char *)(unsigned int)v15);
LABEL_62:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v30);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
      return v16;
    }
    v27 = 0LL;
    for ( j = 0; ; ++j )
    {
      v18 = *v29;
      v33 = 0LL;
      v32 = &v27;
      v34 = 1;
      v19 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v18 + 40))(
              v29,
              j,
              0xFFFFFFFFLL,
              &v33) >> 31;
      if ( v34 )
      {
        v20 = *v32;
        *v32 = v33;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( (_BYTE)v19 )
        break;
      if ( a2 )
      {
        v28 = 0LL;
        v21 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v27)(
                v27,
                &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
                (__int64 *)&v28);
        v16 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBD,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
            (const char *)(unsigned int)v21);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
LABEL_60:
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
          goto LABEL_62;
        }
        memset_0(v37, 0, 0xC8uLL);
        v22 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v28 + 32LL))(v28, v37);
        v16 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC0,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
            (const char *)(unsigned int)v22);
          if ( v28 )
            (*(void (__fastcall **)(struct IDXGIOutputDWM *))(*(_QWORD *)v28 + 16LL))(v28);
          if ( v27 )
          {
            v25 = *(void (**)(void))(*(_QWORD *)v27 + 16LL);
            goto LABEL_33;
          }
          goto LABEL_34;
        }
        if ( a2 == v38 )
        {
          v23 = v28;
          v28 = 0LL;
          v24 = v27;
          *a4 = v23;
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          if ( v29 )
            (*(void (__fastcall **)(__int64 *))(*v29 + 16))(v29);
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          if ( v10 )
            ((void (__fastcall *)(struct IDXGIFactory5 *))v10->lpVtbl->Release)(v10);
          return 0LL;
        }
        if ( v28 )
          (*(void (__fastcall **)(struct IDXGIOutputDWM *))(*(_QWORD *)v28 + 16LL))(v28);
      }
      else
      {
        memset_0(v35, 0, 0x60uLL);
        v26 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 56LL))(v27, v35);
        v16 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xCB,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
            (const char *)(unsigned int)v26);
          goto LABEL_60;
        }
        if ( a3 == v36 )
        {
          v16 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIOutputDWM **))v27)(
                  v27,
                  &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
                  a4);
          if ( v27 )
          {
            v25 = *(void (**)(void))(*(_QWORD *)v27 + 16LL);
LABEL_33:
            v25();
          }
LABEL_34:
          if ( v29 )
            (*(void (__fastcall **)(__int64 *))(*v29 + 16))(v29);
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          if ( v10 )
            ((void (__fastcall *)(struct IDXGIFactory5 *))v10->lpVtbl->Release)(v10);
          return v16;
        }
      }
    }
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v29 )
      (*(void (__fastcall **)(__int64 *))(*v29 + 16))(v29);
  }
  if ( v30 )
    (*(void (**)(void))(*(_QWORD *)v30 + 16LL))();
  if ( v10 )
    ((void (__fastcall *)(struct IDXGIFactory5 *))v10->lpVtbl->Release)(v10);
  return (unsigned int)v13;
}
