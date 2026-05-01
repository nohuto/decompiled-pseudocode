/*
 * XREFs of ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18065AD7C
 * Callers:
 *     ?put_IsImmersiveModeSupported@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAH_N@Z @ 0x18065DA50 (-put_IsImmersiveModeSupported@-$produce@URemoteSessionWindowManager@implementation@Shell@Interna.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C790C (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18065A608 (-DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsImmersiveModeSupported(
        RTL_SRWLOCK *this,
        unsigned __int8 a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  wil::AcquireSRWLockExclusive(&v7, this + 8);
  v4 = SHRegSetDWORD(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\RemoteSystemIntegration",
         L"SwitcherIntegrationEnabled",
         v2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x151,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
      (const char *)(unsigned int)v4,
      v5);
  BYTE2(this[31].Ptr) = v2;
  if ( !(_BYTE)v2 )
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DisconnectAllRemoteSessions(this);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
}
