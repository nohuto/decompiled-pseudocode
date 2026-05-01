/*
 * XREFs of _lambda_f03fbe1e409519c33ffd389fa0e0619f_::operator() @ 0x1802154A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f03fbe1e409519c33ffd389fa0e0619f___::Run @ 0x180215900 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f03fbe1e409519c33ffd389f_ea_180215900.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CoCreateInstanceNoThrow@VDesktopWallpaper@@UIDesktopWallpaperPrivate@@@wil@@YA?AV?$com_ptr_t@UIDesktopWallpaperPrivate@@Uerr_returncode_policy@wil@@@0@K@Z @ 0x1805FCC48 (--$CoCreateInstanceNoThrow@VDesktopWallpaper@@UIDesktopWallpaperPrivate@@@wil@@YA-AV-$com_ptr_t@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f03fbe1e409519c33ffd389fa0e0619f_::operator()(void ***a1)
{
  LPVOID v2; // rbx
  __int64 (__fastcall *v3)(LPVOID, _QWORD, void **); // rdi
  void **v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID ppv; // [rsp+38h] [rbp+10h] BYREF

  wil::CoCreateInstanceNoThrow<DesktopWallpaper,IDesktopWallpaperPrivate>(&ppv);
  v2 = ppv;
  if ( ppv
    && (v3 = *(__int64 (__fastcall **)(LPVOID, _QWORD, void **))(*(_QWORD *)ppv + 32LL),
        v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(*a1),
        v5 = v3(v2, 0LL, v4),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x574,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return v6;
}
