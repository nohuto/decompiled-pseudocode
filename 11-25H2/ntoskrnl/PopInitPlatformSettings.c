/*
 * XREFs of PopInitPlatformSettings @ 0x140C54A50
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopLogSleepDisabled @ 0x140A0FAF0 (PopLogSleepDisabled.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 PopInitPlatformSettings()
{
  _BYTE *v0; // rdi
  bool v1; // si
  int SystemInformation; // ebx
  _DWORD *Pool2; // rax
  __int64 v4; // rcx
  int v5; // edx
  char v6; // al
  int v7; // eax
  __int64 v8; // rcx
  _DWORD v10[6]; // [rsp+38h] [rbp-28h] BYREF

  v10[4] = 0;
  PopAcquirePolicyLock();
  v0 = 0LL;
  v10[0] = 1094930505;
  v10[3] = 0;
  v1 = 0;
  v10[2] = 1346584902;
  v10[1] = 1;
  SystemInformation = ZwQuerySystemInformation(76LL, (__int64)v10);
  if ( SystemInformation == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 0LL, 0x206D654DuLL);
    v0 = Pool2;
    if ( !Pool2 )
    {
      SystemInformation = -1073741670;
      PopReleasePolicyLock();
      goto LABEL_4;
    }
    *Pool2 = 1094930505;
    Pool2[1] = 1;
    Pool2[2] = 1346584902;
    Pool2[3] = -16;
    SystemInformation = ZwQuerySystemInformation(76LL, (__int64)Pool2);
    if ( SystemInformation >= 0 )
    {
      if ( v0[24] >= 3u )
        PopFirmwarePlatformRole = (unsigned __int8)v0[61];
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v4) )
        PopPlatformAoAc = 1;
      if ( PopPlatformRoleOverride != -1 )
        PopFirmwarePlatformRole = PopPlatformRoleOverride;
      if ( PopPlatformAoAcOverride != -1 )
        PopPlatformAoAc = PopPlatformAoAcOverride != 0;
      if ( (HvlpFlags & 2) != 0 )
      {
        v5 = (HvlpEnlightenments & 0x10000) != 0 ? 16 : 31;
        if ( (HvlpRootFlags & 0x400) != 0 )
        {
          LOBYTE(v5) = 31;
          if ( (HvlEnlightenments & 0x20000000) != 0 )
            LOBYTE(v5) = 23;
        }
        PopLogSleepDisabled(18, v5, 0LL, 0LL);
      }
      v6 = PopPlatformAoAc;
      if ( PopPlatformAoAc )
      {
        if ( !(_DWORD)InitSafeBootMode && !InitIsWinPEMode && !PopModernStandbyDisabled )
          goto LABEL_26;
      }
      else
      {
        PopLogSleepDisabled(19, 32, 0LL, 0LL);
      }
      v6 = 0;
      PopPlatformAoAc = 0;
LABEL_26:
      PopPlatformAoAcCapabilityInitialized = 1;
      if ( !v6 )
        KiForceIdleDisabled = 1;
      v7 = PopFirmwarePlatformRole;
      if ( (unsigned int)PopFirmwarePlatformRole > 8 )
      {
        v7 = 0;
        PopFirmwarePlatformRole = 0;
      }
      v1 = qword_140E672D0 != 0;
      PopPlatformRole = v7;
      SystemInformation = 0;
      PopReleasePolicyLock();
      goto LABEL_32;
    }
  }
  PopReleasePolicyLock();
  if ( SystemInformation < 0 )
LABEL_4:
    KeBugCheckEx(0xA0u, 0xEuLL, SystemInformation, 0LL, 0LL);
LABEL_32:
  if ( v1 )
  {
    LOBYTE(v8) = PopPlatformAoAc;
    guard_dispatch_icall_no_overrides(v8);
  }
  if ( v0 )
    ExFreePoolWithTag(v0, 0x206D654Du);
  return (unsigned int)SystemInformation;
}
