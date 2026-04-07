/*
 * XREFs of ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x18008FA04
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800935E0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF5C0 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180039310 (-CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004F6B0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180078F10 (-SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowData::EnsureClientAreaVisualProxy(CWindowData *this)
{
  CBaseObject **v1; // rsi
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, void **); // rbx
  int VisualProxyFromSharedHandle; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CBaseObject **)((char *)this + 144);
  if ( !*((_QWORD *)this + 18) )
  {
    v10 = 0LL;
    v2 = *((_QWORD *)this + 3);
    v3 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v2 + 304LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v10,
      0LL);
    VisualProxyFromSharedHandle = v3(v2, &v10);
    v5 = VisualProxyFromSharedHandle;
    if ( VisualProxyFromSharedHandle < 0 )
    {
      v6 = 469LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
        (const char *)(unsigned int)VisualProxyFromSharedHandle,
        v8);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v10);
      return v5;
    }
    VisualProxyFromSharedHandle = CCompositor::CreateVisualProxyFromSharedHandle(
                                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                    v10,
                                    v1);
    v5 = VisualProxyFromSharedHandle;
    if ( VisualProxyFromSharedHandle < 0 )
    {
      v6 = 471LL;
      goto LABEL_8;
    }
    VisualProxyFromSharedHandle = CVisualProxy::SetInterpolationMode((__int64)*v1);
    v5 = VisualProxyFromSharedHandle;
    if ( VisualProxyFromSharedHandle < 0 )
    {
      v6 = 476LL;
      goto LABEL_8;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v10);
  }
  return 0LL;
}
