/*
 * XREFs of ?InternalGetDXGIOutput@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@U_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x1801572B8
 * Callers:
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z @ 0x1801571D8 (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::InternalGetDXGIOutput(
        CDisplayManager *this,
        struct IDXGIAdapter1 *a2,
        struct _LUID a3,
        int a4,
        struct IDXGIOutputDWM **a5)
{
  DWORD LowPart; // ebx
  int v7; // eax
  int v8; // edi
  LONG HighPart; // r14d
  unsigned int i; // esi
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rcx
  struct IDXGIOutputDWM *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rdx
  void (*v18)(void); // rax
  struct _LUID v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+58h] [rbp-A8h]
  _DWORD v25[52]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  LowPart = a3.LowPart;
  v20 = 0LL;
  v19 = a3;
  *a5 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IDXGIAdapter1 *, GUID *, __int64 **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
         &v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
      (const char *)(unsigned int)v7);
    if ( v20 )
    {
      v18 = *(void (**)(void))(*v20 + 16);
LABEL_29:
      v18();
    }
  }
  else
  {
    v21 = 0LL;
    HighPart = v19.HighPart;
    for ( i = 0; ; ++i )
    {
      v11 = *v20;
      v23 = 0LL;
      v22 = &v21;
      v24 = 1;
      v12 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v11 + 40))(
              v20,
              i,
              0xFFFFFFFFLL,
              &v23) >> 31;
      if ( v24 )
      {
        v13 = *v22;
        *v22 = v23;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( (_BYTE)v12 )
      {
        if ( v21 )
          (*(void (**)(void))(*(_QWORD *)v21 + 16LL))();
        if ( v20 )
          (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
        return 2289696770LL;
      }
      v19 = 0LL;
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct _LUID *))v21)(
             v21,
             &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
             &v19);
      if ( v8 < 0 )
      {
        v17 = 246LL;
        goto LABEL_23;
      }
      memset_0(v25, 0, 0xC8uLL);
      v8 = (*(__int64 (__fastcall **)(struct _LUID, _DWORD *))(**(_QWORD **)&v19 + 32LL))(v19, v25);
      if ( v8 < 0 )
        break;
      if ( a4 == v25[2] && LowPart == v25[0] && HighPart == v25[1] )
      {
        v14 = (struct IDXGIOutputDWM *)v19;
        v19 = 0LL;
        v15 = v21;
        *a5 = v14;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v20 )
          (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
        return 0LL;
      }
      if ( v19 )
        (*(void (__fastcall **)(struct _LUID))(**(_QWORD **)&v19 + 16LL))(v19);
    }
    v17 = 249LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
      (const char *)(unsigned int)v8);
    if ( v19 )
      (*(void (__fastcall **)(struct _LUID))(**(_QWORD **)&v19 + 16LL))(v19);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v20 )
    {
      v18 = *(void (**)(void))(*v20 + 16);
      goto LABEL_29;
    }
  }
  return (unsigned int)v8;
}
