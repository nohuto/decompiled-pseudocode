/*
 * XREFs of _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::dtor$9 @ 0x18023E4EE
 * Callers:
 *     <none>
 * Callees:
 *     ??1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ @ 0x1801DA1D8 (--1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync__ResumeCoro_1_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 120) = *(_QWORD *)(a2 + 256) + 152LL;
  winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo::~ProtocolLauncherInfo(*(winrt::Windows::Foundation::IUnknown **)(a2 + 120));
}
