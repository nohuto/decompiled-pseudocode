/*
 * XREFs of ?InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ @ 0x1802C888C
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802CBB7C (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::InitializeVBlankWaitEventHandle(CDDisplaySwapChain *this)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, char *); // rsi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp+38h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+40h] BYREF

  v14 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, _QWORD **))this + 53))(
    *((_QWORD *)this + 53),
    &GUID_a2b1e0a8_cde9_57d6_9b3e_c0e06ac291ad,
    &v14);
  v2 = *v14;
  v15 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v2 + 48))(v14, &v15);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_11;
  }
  v13 = 0LL;
  v5 = (**v15)(v15, &GUID_0b3a56e8_12a4_4dd9_b7d6_b6ab8f5a2d29, &v13);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 1000LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)v5);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
    goto LABEL_11;
  }
  v7 = v13;
  v8 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 48LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 68,
    0LL);
  v5 = v8(v7, (char *)this + 544);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 1002LL;
    goto LABEL_5;
  }
  v9 = v14;
  v10 = *((_QWORD *)this + 67);
  v14 = 0LL;
  *((_QWORD *)this + 67) = v9;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
  v4 = 0;
LABEL_11:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v4;
}
