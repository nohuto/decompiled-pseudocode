/*
 * XREFs of ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801ADC30
 * Callers:
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801ADB04 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ??1FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAA@XZ @ 0x18056C014 (--1FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x1801ADC7C (-close_and_wait@operation_guard@wil@@QEAAXXZ.c)
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x1801ADCA4 (--1operation_guard@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::~AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
        __int64 *a1)
{
  wil::operation_guard::close_and_wait((wil::operation_guard *)(a1 + 7));
  wil::operation_guard::~operation_guard((wil::operation_guard *)(a1 + 7));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 5);
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(a1);
}
