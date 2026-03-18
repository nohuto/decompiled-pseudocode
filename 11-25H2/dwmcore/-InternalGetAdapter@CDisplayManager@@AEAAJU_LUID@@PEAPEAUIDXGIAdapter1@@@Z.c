/*
 * XREFs of ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x18020A3C0
 * Callers:
 *     ?GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x18020A27C (-GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18020A2E0 (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x1802C9644 (-ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003E134 (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::InternalGetAdapter(
        CDisplayManager *this,
        struct _LUID a2,
        struct IDXGIAdapter1 **a3)
{
  DWORD LowPart; // edi
  int DXGIFactory; // eax
  unsigned int v6; // ebx
  struct IDXGIFactory5 *v7; // rbx
  unsigned int v8; // r14d
  LONG HighPart; // r12d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  int v11; // r13d
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // esi
  int v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct IDXGIFactory5 *v17; // [rsp+28h] [rbp-D8h] BYREF
  int *v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  char v20; // [rsp+40h] [rbp-C0h]
  struct _LUID v21; // [rsp+48h] [rbp-B8h]
  _BYTE v22[296]; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+178h] [rbp+78h]
  int v24; // [rsp+17Ch] [rbp+7Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  LowPart = a2.LowPart;
  v21 = a2;
  *a3 = 0LL;
  v17 = 0LL;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, &v17);
  v6 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)DXGIFactory);
    if ( v17 )
      ((void (__fastcall *)(struct IDXGIFactory5 *))v17->lpVtbl->Release)(v17);
    return v6;
  }
  else
  {
    v7 = v17;
    v8 = 0;
    HighPart = v21.HighPart;
    *(_QWORD *)v16 = 0LL;
    while ( 1 )
    {
      lpVtbl = v7->lpVtbl;
      v18 = v16;
      v19 = 0LL;
      v20 = 1;
      v11 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v7, v8, &v19);
      if ( v20 )
      {
        v12 = *(_QWORD *)v18;
        *(_QWORD *)v18 = v19;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v11 < 0 )
        break;
      memset_0(v22, 0, 0x138uLL);
      v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v16 + 80LL))(*(_QWORD *)v16, v22);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
          (const char *)(unsigned int)v13);
        if ( *(_QWORD *)v16 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 16LL))(*(_QWORD *)v16);
        if ( v7 )
          ((void (__fastcall *)(struct IDXGIFactory5 *))v7->lpVtbl->Release)(v7);
        return v14;
      }
      if ( LowPart == v23 && HighPart == v24 )
      {
        *a3 = *(struct IDXGIAdapter1 **)v16;
        *(_QWORD *)v16 = 0LL;
        if ( v7 )
          ((void (__fastcall *)(struct IDXGIFactory5 *))v7->lpVtbl->Release)(v7);
        return 0LL;
      }
      ++v8;
    }
    if ( *(_QWORD *)v16 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 16LL))(*(_QWORD *)v16);
    if ( v7 )
      ((void (__fastcall *)(struct IDXGIFactory5 *))v7->lpVtbl->Release)(v7);
    return (unsigned int)v11;
  }
}
