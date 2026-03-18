/*
 * XREFs of KiComputeThreadQos @ 0x140318250
 * Callers:
 *     KeSetThreadPpmPolicy @ 0x1402005B4 (KeSetThreadPpmPolicy.c)
 *     KeSetProcessPpmPolicy @ 0x140200830 (KeSetProcessPpmPolicy.c)
 *     KzRefreshWorkloadProperties @ 0x140201D1C (KzRefreshWorkloadProperties.c)
 *     KeUpdateThreadTag @ 0x140202F10 (KeUpdateThreadTag.c)
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140317E50 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140317FB0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x1404F0A4C (Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KiComputeThreadQos(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ecx
  __int64 v4; // rdi
  int v5; // ecx
  __int64 v7; // rdx
  char v8; // r8
  __int64 v9; // rax
  unsigned __int8 v10; // r9
  unsigned __int8 v11; // r10
  int v12; // [rsp+20h] [rbp-18h]
  __int16 v13; // [rsp+24h] [rbp-14h]
  char v14; // [rsp+26h] [rbp-12h]

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    return *(unsigned __int8 *)(a1 + 516);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 1616);
    if ( v2 )
    {
      v7 = *(unsigned __int8 *)(a1 + 516);
      v8 = 0;
      v9 = *(unsigned __int8 *)(v2 + 516);
      v12 = -16645372;
      v3 = v9;
      v13 = 5;
      v14 = 1;
      if ( (_DWORD)v9 != (_DWORD)v7 )
      {
        v10 = *((_BYTE *)&v12 + v9);
        if ( v10 == 0xFF || (v11 = *((_BYTE *)&v12 + v7), v10 > v11) || v11 == 0xFF )
          v8 = 1;
      }
      if ( !v8 )
        return (unsigned int)v7;
    }
    else if ( *(_BYTE *)(a1 + 124) == 1 )
    {
      return 3;
    }
    else if ( *(_BYTE *)(a1 + 124) == 2 )
    {
      return 4;
    }
    else
    {
      v3 = KiThreadPolicyToQosMappingTable[*(unsigned __int8 *)(a1 + 958)];
      if ( v3 == 7 )
      {
        v4 = (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) >> 7) & 0xF;
        if ( (unsigned int)Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( (_DWORD)v4 != 8
            && (_DWORD)v4 != 9
            && (KiDynamicHeteroCpuPolicyMask & 1) != 0
            && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) & 0x2000) != 0 )
          {
            return 0;
          }
        }
        else if ( (_DWORD)v4 != 8
               && (KiDynamicHeteroCpuPolicyMask & 1) != 0
               && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) & 0x2000) != 0 )
        {
          return 0;
        }
        v3 = KiProcessPolicyToQosMappingTable[v4];
        if ( v3 == 7 )
        {
          v5 = *(char *)(a1 + 195);
          if ( *(char *)(a1 + 195) >= 15
            || (KiDynamicHeteroCpuPolicyMask & 2) != 0
            && (v5 >= KiDynamicHeteroCpuPolicyImportantPriority || (*(_DWORD *)(a1 + 116) & 0x400) != 0 && (char)v5 >= 8) )
          {
            return 0;
          }
          return 6;
        }
      }
    }
  }
  return v3;
}
