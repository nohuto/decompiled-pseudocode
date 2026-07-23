/*
 * XREFs of PopInitPlatformSettings @ 0x140C69F98
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopAdaptiveStandbyInitialize @ 0x140760B64 (PopAdaptiveStandbyInitialize.c)
 *     PopLogSleepDisabled @ 0x14099E748 (PopLogSleepDisabled.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PopInitPlatformSettings()
{
  _BYTE *v0; // rdi
  bool v1; // si
  NTSTATUS v2; // ebx
  _DWORD *Pool2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edx
  char v7; // al
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG ReturnLength; // [rsp+30h] [rbp-30h] BYREF
  _DWORD SystemInformation[6]; // [rsp+38h] [rbp-28h] BYREF

  SystemInformation[4] = 0;
  PopAcquirePolicyLock();
  v0 = 0LL;
  SystemInformation[0] = 1094930505;
  SystemInformation[3] = 0;
  ReturnLength = 0;
  v1 = 0;
  SystemInformation[2] = 1346584902;
  SystemInformation[1] = 1;
  v2 = ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength);
  if ( v2 != -1073741789 )
    goto LABEL_29;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, ReturnLength, 0x206D654DuLL);
  v0 = Pool2;
  if ( !Pool2 )
  {
    v2 = -1073741670;
    PopReleasePolicyLock();
    goto LABEL_36;
  }
  *Pool2 = 1094930505;
  Pool2[1] = 1;
  Pool2[2] = 1346584902;
  Pool2[3] = ReturnLength - 16;
  v2 = ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, ReturnLength, &ReturnLength);
  if ( v2 < 0 )
  {
LABEL_29:
    PopReleasePolicyLock();
    if ( v2 >= 0 )
      goto LABEL_30;
LABEL_36:
    KeBugCheckEx(0xA0u, 0xEuLL, v2, 0LL, 0LL);
  }
  if ( v0[24] >= 3u )
    PopFirmwarePlatformRole = (unsigned __int8)v0[61];
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v5, v4) )
    PopPlatformAoAc = 1;
  if ( PopPlatformRoleOverride != -1 )
    PopFirmwarePlatformRole = PopPlatformRoleOverride;
  if ( PopPlatformAoAcOverride != -1 )
    PopPlatformAoAc = PopPlatformAoAcOverride != 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    v6 = (HvlpEnlightenments & 0x10000) != 0 ? 16 : 31;
    if ( (HvlpRootFlags & 0x400) != 0 )
    {
      LOBYTE(v6) = 31;
      if ( (HvlEnlightenments & 0x20000000) != 0 )
        LOBYTE(v6) = 23;
    }
    PopLogSleepDisabled(18, v6, 0LL, 0LL);
  }
  v7 = PopPlatformAoAc;
  if ( PopPlatformAoAc )
  {
    if ( !InitSafeBootMode && !InitIsWinPEMode && !PopModernStandbyDisabled )
      goto LABEL_24;
  }
  else
  {
    PopLogSleepDisabled(19, 32, 0LL, 0LL);
  }
  v7 = 0;
  PopPlatformAoAc = 0;
LABEL_24:
  PopPlatformAoAcCapabilityInitialized = 1;
  if ( !v7 )
    KiForceIdleDisabled = 1;
  v8 = PopFirmwarePlatformRole;
  if ( (unsigned int)PopFirmwarePlatformRole > 8 )
  {
    v8 = 0;
    PopFirmwarePlatformRole = 0;
  }
  v1 = qword_140E67720 != 0;
  PopPlatformRole = v8;
  v2 = 0;
  PopReleasePolicyLock();
LABEL_30:
  if ( v1 )
  {
    LOBYTE(v10) = PopPlatformAoAc;
    guard_dispatch_icall_no_overrides(v10, v9);
  }
  PopAdaptiveStandbyInitialize();
  if ( v0 )
    ExFreePoolWithTag(v0, 0x206D654Du);
  return (unsigned int)v2;
}
