/*
 * XREFs of ?EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180196DAC
 * Callers:
 *     ?GetDisplaySurface@CDxHandleBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x180196D40 (-GetDisplaySurface@CDxHandleBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Wind.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z @ 0x180196C84 (-GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAPEAUIDXGIResource@@XZ @ 0x1801972A4 (-GetDXGIResource@CD2DBitmap@@QEAAPEAUIDXGIResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureDisplaySurface(CDxHandleBitmapRealization *this)
{
  __int64 *v1; // r14
  int v4; // eax
  unsigned int v5; // ebx
  struct IDXGIResource *DXGIResource; // rax
  int v7; // eax
  void (*v8)(void); // rax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v11; // eax
  struct _LUID *v12; // rax
  CDDisplayManager *v13; // rcx
  int ExistingInteropDevice; // eax
  struct IDisplayDeviceInterop *v15; // rbx
  __int64 (__fastcall *v16)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *); // rdi
  int v17; // eax
  GUID v18; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HANDLE hObject; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF
  struct IDisplayDeviceInterop *v22; // [rsp+80h] [rbp+40h] BYREF
  char v23; // [rsp+88h] [rbp+48h] BYREF

  v1 = (__int64 *)((char *)this + 384);
  if ( *((_QWORD *)this + 48) )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)this + 72LL))(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandlebitmaprealization.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  DXGIResource = CD2DBitmap::GetDXGIResource(*((CD2DBitmap **)this + 47));
  if ( DXGIResource )
  {
    v21 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))DXGIResource->lpVtbl->QueryInterface)(
           DXGIResource,
           &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
           &v21);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AC,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandlebitmaprealization.cpp",
        (const char *)(unsigned int)v7);
      if ( !v21 )
        return v5;
      v8 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
LABEL_8:
      v8();
      return v5;
    }
    v9 = v21;
    hObject = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v21 + 104LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v11 = v10(v9, 0LL, 0x10000000LL, 0LL, &hObject);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B3,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandlebitmaprealization.cpp",
        (const char *)(unsigned int)v11);
    }
    else
    {
      v22 = 0LL;
      v12 = (struct _LUID *)(*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 41) + 64LL))(
                              (char *)this + 328,
                              &v23);
      ExistingInteropDevice = CDDisplayManager::GetExistingInteropDevice(v13, *v12, &v22);
      v5 = ExistingInteropDevice;
      if ( ExistingInteropDevice >= 0 )
      {
        v15 = v22;
        v16 = *(__int64 (__fastcall **)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *))(*(_QWORD *)v22 + 32LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
        v18 = GUID_594f6cc6_139a_56d6_a4b1_15fe2cb76adb;
        v17 = v16(v15, hObject, &v18, v1);
        v5 = v17;
        if ( v17 >= 0 )
        {
          if ( v22 )
            (*(void (__fastcall **)(struct IDisplayDeviceInterop *))(*(_QWORD *)v22 + 16LL))(v22);
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1BC,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandlebitmaprealization.cpp",
          (const char *)(unsigned int)v17);
        if ( v22 )
          (*(void (__fastcall **)(struct IDisplayDeviceInterop *))(*(_QWORD *)v22 + 16LL))(v22);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        if ( !v21 )
          return v5;
        v8 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
        goto LABEL_8;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\dxhandlebitmaprealization.cpp",
        (const char *)(unsigned int)ExistingInteropDevice);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
    return v5;
  }
  return 2291674884LL;
}
