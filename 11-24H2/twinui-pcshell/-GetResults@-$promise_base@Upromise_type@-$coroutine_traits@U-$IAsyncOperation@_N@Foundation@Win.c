/*
 * XREFs of ?GetResults@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180221E04
 * Callers:
 *     ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEA_N@Z @ 0x180221DD0 (-GetResults@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@.c)
 * Callees:
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXW4AsyncStatus@Foundation@Windows@3@@Z @ 0x1802968A8 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAc.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18032CCE0 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::GetResults(
        __int64 a1)
{
  char v2; // bl
  const struct winrt::impl::slim_source_location *v4; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[32]; // [rsp+38h] [rbp-20h] BYREF
  RTL_SRWLOCK *SRWLock; // [rsp+60h] [rbp+8h]

  SRWLock = (RTL_SRWLOCK *)(a1 + 72);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  if ( *(_DWORD *)(a1 + 96) != 1 )
  {
    winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,void>::rethrow_if_failed(a1);
    v4 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v6);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v4);
    throw (winrt::hresult_illegal_method_call *)pExceptionObject;
  }
  v2 = *(_BYTE *)(a1 + 104);
  ReleaseSRWLockExclusive_0(SRWLock);
  return v2;
}
