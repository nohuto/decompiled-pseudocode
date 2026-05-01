/*
 * XREFs of ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x18059636C
 * Callers:
 *     _lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_ @ 0x180594770 (_lambda_7c27b082a2d594abdbf5dd9e5359180a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU123456@XZ @ 0x18016E6A4 (-Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA-AU123456@XZ.c)
 *     ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@SA@XZ @ 0x1801F9B10 (-InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@SA@XZ.c)
 *     ?GetForCurrentThread@DispatcherQueue@System@Windows@winrt@@SA@XZ @ 0x180595714 (-GetForCurrentThread@DispatcherQueue@System@Windows@winrt@@SA@XZ.c)
 *     ?XamlHostThreadEnded@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180596340 (-XamlHostThreadEnded@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?XamlHostThreadStarted@TouchEdgeGestureTelemetry@@SAXXZ @ 0x1805964FC (-XamlHostThreadStarted@TouchEdgeGestureTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchEdgeGripperHost::XamlHostThreadProc(TouchEdgeGripperHost *this)
{
  HANDLE CurrentThread; // rax
  HRESULT v3; // eax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  void *v7; // rdx
  const char *v8; // r9
  DWORD v9; // ebx
  void *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h] BYREF
  RTL_SRWLOCK *v19; // [rsp+50h] [rbp-18h] BYREF
  HANDLE pHandles[2]; // [rsp+58h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD dwindex; // [rsp+78h] [rbp+10h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  TouchEdgeGestureTelemetry::XamlHostThreadStarted();
  CurrentThread = GetCurrentThread();
  v3 = SetThreadDescription(CurrentThread, L"TouchEdgeGripperHost Thread");
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA8,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
      (const char *)(unsigned int)v3);
  dwindex = 0;
  v15 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  try
  {
    v4 = winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication::Current(&v16);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v15, v4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    v5 = winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread(&v17);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v25, v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
    v6 = winrt::Windows::System::DispatcherQueue::GetForCurrentThread(&v18);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v24, v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    wil::AcquireSRWLockExclusive(&v19, (RTL_SRWLOCK *)this + 29);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 10, &v25);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 9, &v24);
    pHandles[0] = *((HANDLE *)this + 5);
    wil::details::SetEvent(*((wil::details **)this + 4), v7);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
    CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, 1u, pHandles, &dwindex);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xC7,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
      v8);
    *((_BYTE *)this + 24) = 0;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)pHandles, (RTL_SRWLOCK *)this + 29);
    wil::details::SetEvent(*((wil::details **)this + 4), v11);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 5,
      0LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)pHandles);
    MicrosoftTelemetryAssertTriggeredNoArgs(v13, v12);
  }
  TouchEdgeGestureTelemetry::XamlHostThreadEnded(v14);
  v9 = dwindex;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  return v9;
}
