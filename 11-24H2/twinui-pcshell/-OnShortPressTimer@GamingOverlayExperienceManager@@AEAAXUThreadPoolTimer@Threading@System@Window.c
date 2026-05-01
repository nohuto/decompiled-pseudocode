/*
 * XREFs of ?OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x180355CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@AEBUAPP_LOCAL_DEVICE_ID@@W4SystemButtons@Gaming@Internal@Windows@@W4GamepadButtonEventKind@@@Z @ 0x18035A2C0 (-SendGamepadCommand@GamingOverlayExperienceManager@@AEAA-AUfire_and_forget@winrt@@AEBUAPP_LOCAL_.c)
 *     ?StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035C618 (-StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamingOverlayExperienceManager::OnShortPressTimer(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  __int64 v4; // r9
  _BYTE v5[8]; // [rsp+30h] [rbp-48h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v6; // [rsp+38h] [rbp-40h]
  _OWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  RTL_SRWLOCK *v8; // [rsp+60h] [rbp-18h] BYREF

  v6 = a2;
  v8 = 0LL;
  wil::AcquireSRWLockExclusive(&v8, (RTL_SRWLOCK *)(a1 + 224));
  if ( *(_BYTE *)(a1 + 328) )
  {
    v4 = *(unsigned int *)(a1 + 332);
    if ( (_DWORD)v4 && !*(_BYTE *)(a1 + 344) )
    {
      memset(v7, 0, sizeof(v7));
      GamingOverlayExperienceManager::SendGamepadCommand(a1, v5, v7, v4, 0);
      *(_DWORD *)(a1 + 332) = 0;
      *(_BYTE *)(a1 + 344) = 0;
    }
    GamingOverlayExperienceManager::StopShortPressTimer(a1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
