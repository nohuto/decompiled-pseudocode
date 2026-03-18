/*
 * XREFs of ?GetExistingInteropDevice@CDDisplayManager@@QEAAJU_LUID@@PEAPEAUIDisplayDeviceInterop@@@Z @ 0x180196C84
 * Callers:
 *     ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180196A30 (-EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180196DAC (-EnsureDisplaySurface@CDxHandleBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180192EEC (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::GetExistingInteropDevice(
        CDDisplayManager *this,
        struct _LUID a2,
        struct IDisplayDeviceInterop **a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CDDisplayManager *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = this;
  v4 = qword_1803FABB0;
  v5 = *(_QWORD *)(qword_1803FABB0 + 8);
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( *(_QWORD *)(v5 + 32) >= *(unsigned __int64 *)&a2 )
    {
      v4 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  if ( *(_BYTE *)(v4 + 25) || *(unsigned __int64 *)&a2 < *(_QWORD *)(v4 + 32) )
    v4 = qword_1803FABB0;
  if ( v4 == qword_1803FABB0 )
    return 2291662854LL;
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    (__int64 *)&v10,
    (__int64 *)(v4 + 40));
  v6 = (**(__int64 (__fastcall ***)(CDDisplayManager *, GUID *, struct IDisplayDeviceInterop **))v10)(
         v10,
         &GUID_64338358_366a_471b_bd56_dd8ef48e439b,
         a3);
  v7 = v6;
  if ( v6 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v6);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  return v7;
}
