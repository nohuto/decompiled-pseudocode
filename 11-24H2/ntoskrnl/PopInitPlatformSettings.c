/*
 * XREFs of PopInitPlatformSettings @ 0x140C67E1C
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1405CCC74 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407617F8 (PopAdaptiveStandbyInitialize.c)
 *     PopLogSleepDisabled @ 0x1409B80F8 (PopLogSleepDisabled.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopInitPlatformSettings(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rdi
  bool v4; // si
  int SystemInformation; // ebx
  _DWORD *Pool2; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  char v12; // al
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD v19[6]; // [rsp+38h] [rbp-28h] BYREF

  v19[4] = 0;
  PopAcquirePolicyLock(a1, a2, a3);
  v3 = 0LL;
  v19[0] = 1094930505;
  v19[3] = 0;
  v4 = 0;
  v19[2] = 1346584902;
  v19[1] = 1;
  SystemInformation = ZwQuerySystemInformation(76LL, (__int64)v19);
  if ( SystemInformation != -1073741789 )
    goto LABEL_29;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 0LL, 0x206D654DuLL);
  v3 = Pool2;
  if ( !Pool2 )
  {
    SystemInformation = -1073741670;
    PopReleasePolicyLock();
    goto LABEL_38;
  }
  *Pool2 = 1094930505;
  Pool2[1] = 1;
  Pool2[2] = 1346584902;
  Pool2[3] = -16;
  SystemInformation = ZwQuerySystemInformation(76LL, (__int64)Pool2);
  if ( SystemInformation < 0 )
  {
LABEL_29:
    PopReleasePolicyLock();
    if ( SystemInformation >= 0 )
      goto LABEL_30;
LABEL_38:
    KeBugCheckEx(0xA0u, 0xEuLL, SystemInformation, 0LL, 0LL);
  }
  if ( v3[24] >= 3u )
    PopFirmwarePlatformRole = (unsigned __int8)v3[61];
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v8, v7, v9, v10) )
    PopPlatformAoAc = 1;
  if ( PopPlatformRoleOverride != -1 )
    PopFirmwarePlatformRole = PopPlatformRoleOverride;
  if ( PopPlatformAoAcOverride != -1 )
    PopPlatformAoAc = PopPlatformAoAcOverride != 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    v11 = (HvlpEnlightenments & 0x10000) != 0 ? 16 : 31;
    if ( (HvlpRootFlags & 0x400) != 0 )
    {
      LOBYTE(v11) = 31;
      if ( (HvlEnlightenments & 0x20000000) != 0 )
        LOBYTE(v11) = 23;
    }
    PopLogSleepDisabled(18, v11, 0LL, 0LL);
  }
  v12 = PopPlatformAoAc;
  if ( PopPlatformAoAc )
  {
    if ( !(_DWORD)InitSafeBootMode && !InitIsWinPEMode && !PopModernStandbyDisabled )
      goto LABEL_24;
  }
  else
  {
    PopLogSleepDisabled(19, 32, 0LL, 0LL);
  }
  v12 = 0;
  PopPlatformAoAc = 0;
LABEL_24:
  PopPlatformAoAcCapabilityInitialized = 1;
  if ( !v12 )
    KiForceIdleDisabled = 1;
  v13 = PopFirmwarePlatformRole;
  if ( (unsigned int)PopFirmwarePlatformRole > 8 )
  {
    v13 = 0;
    PopFirmwarePlatformRole = 0;
  }
  v4 = qword_140E675B0 != 0;
  PopPlatformRole = v13;
  SystemInformation = 0;
  PopReleasePolicyLock();
LABEL_30:
  if ( v4 )
  {
    LOBYTE(v15) = PopPlatformAoAc;
    guard_dispatch_icall_no_overrides(v15, v14, v16, v17);
  }
  if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
    PopAdaptiveStandbyInitialize();
  if ( v3 )
    ExFreePoolWithTag(v3, 0x206D654Du);
  return (unsigned int)SystemInformation;
}
