/*
 * XREFs of ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805B4A2C
 * Callers:
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180272010 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180272C50 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B1950 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0hresult@winrt@@QEAA@H@Z @ 0x1801EA3A8 (--0hresult@winrt@@QEAA@H@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x18031C2E8 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

void __fastcall `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_resume(
        __int64 a1)
{
  int *v1; // rax
  unsigned int *v2; // r8
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[32]; // [rsp+38h] [rbp-20h] BYREF
  char v5; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 24) )
  {
    winrt::impl::slim_source_location::current((__int64)v4);
    v1 = (int *)winrt::hresult::hresult((winrt::hresult *)&v5, -2147024469);
    winrt::hresult_error::hresult_error((__int64)pExceptionObject, *v1, v2);
    throw (winrt::hresult_error *)pExceptionObject;
  }
}
