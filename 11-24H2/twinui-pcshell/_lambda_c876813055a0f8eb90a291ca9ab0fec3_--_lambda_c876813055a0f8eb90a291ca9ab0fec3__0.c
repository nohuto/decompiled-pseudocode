/*
 * XREFs of _lambda_c876813055a0f8eb90a291ca9ab0fec3_::_lambda_c876813055a0f8eb90a291ca9ab0fec3__0 @ 0x18055C354
 * Callers:
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x180561A54 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumb.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??0?$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVVirtualDesktopGestureWindow@@@Z @ 0x18055C560 (--0-$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVVirtualD.c)
 */

__int64 __fastcall lambda_c876813055a0f8eb90a291ca9ab0fec3_::_lambda_c876813055a0f8eb90a291ca9ab0fec3__0(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3,
        __int128 *a4,
        __int64 *a5,
        __int64 *a6,
        _QWORD *a7,
        __int64 *a8,
        _QWORD *a9,
        _QWORD *a10,
        int a11,
        __int64 *a12)
{
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx

  wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(
    a1,
    *a2);
  v15 = *a4;
  *(_OWORD *)(a1 + 8) = *a3;
  *(_OWORD *)(a1 + 24) = v15;
  v16 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a1 + 40) = v16;
  v17 = *a6;
  *a6 = 0LL;
  *(_QWORD *)(a1 + 48) = v17;
  *(_QWORD *)(a1 + 56) = *a7;
  *a7 = 0LL;
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    (_QWORD *)(a1 + 64),
    *a8);
  *(_QWORD *)(a1 + 72) = *a9;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 72));
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  v18 = a10[1];
  if ( v18 )
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
  *(_QWORD *)(a1 + 80) = *a10;
  *(_QWORD *)(a1 + 88) = a10[1];
  v19 = *a12;
  *(_DWORD *)(a1 + 96) = a11;
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    (_QWORD *)(a1 + 104),
    v19);
  return a1;
}
