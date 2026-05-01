/*
 * XREFs of ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAUGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAH@Z @ 0x18033DC70
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18032CCE0 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@IEBAXW4AsyncStatus@Foundation@Windows@3@@Z @ 0x180338120 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 */

__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>>::GetResults(
        unsigned __int64 a1,
        _DWORD *a2)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // ebx
  const struct winrt::impl::slim_source_location *v7; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF
  RTL_SRWLOCK *SRWLock; // [rsp+70h] [rbp+18h]

  v3 = (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  SRWLock = (RTL_SRWLOCK *)(v3 + 72);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v3 + 72));
  v4 = *(_DWORD *)(v3 + 96);
  if ( v4 != 1 )
  {
    winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction const &,winrt::Windows::Foundation::IAsyncAction const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::rethrow_if_failed(
      v3,
      v4);
    v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v9);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v7);
    throw (winrt::hresult_illegal_method_call *)pExceptionObject;
  }
  v5 = *(_DWORD *)(v3 + 104);
  ReleaseSRWLockExclusive_0(SRWLock);
  *a2 = v5;
  return 0LL;
}
