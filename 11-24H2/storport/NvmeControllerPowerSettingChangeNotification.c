/*
 * XREFs of NvmeControllerPowerSettingChangeNotification @ 0x140132680
 * Callers:
 *     NvmePowerSettingCallback @ 0x140136080 (NvmePowerSettingCallback.c)
 * Callees:
 *     NvmeSetNonOperationalPowerStatePermissiveMode @ 0x1400CB05C (NvmeSetNonOperationalPowerStatePermissiveMode.c)
 *     NvmeControllerUpdateResumeLatencyTolerance @ 0x140132B18 (NvmeControllerUpdateResumeLatencyTolerance.c)
 */

__int64 __fastcall NvmeControllerPowerSettingChangeNotification(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 128);
  v5 = *(_QWORD *)(v4 + 160);
  if ( *(_BYTE *)v5 == 1 )
  {
    if ( a2 && *(_DWORD *)(a2 + 24) == 4 )
    {
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data1
        && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data4 )
      {
        *(_DWORD *)(v5 + 196) = **(_DWORD **)(a2 + 16);
        NvmeControllerUpdateResumeLatencyTolerance(a1);
        return 0LL;
      }
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT1.Data1
        && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT1.Data4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 52LL) == -1 )
        {
          result = 0LL;
          *(_DWORD *)(v5 + 200) = **(_DWORD **)(a2 + 16);
          return result;
        }
      }
      else
      {
        if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data1
          && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data4 )
        {
          *(_DWORD *)(v5 + 204) = **(_DWORD **)(a2 + 16);
          NvmeControllerUpdateResumeLatencyTolerance(a1);
          return 0LL;
        }
        if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT2.Data1
          && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT2.Data4 )
        {
          result = 0LL;
          *(_DWORD *)(v5 + 208) = **(_DWORD **)(a2 + 16);
          return result;
        }
        if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_NOPPME.Data1
          && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_NVME_POWER_NOPPME.Data4
          && *(_DWORD *)(v4 + 84) == 1 )
        {
          NvmeSetNonOperationalPowerStatePermissiveMode(a1, **(_BYTE **)(a2 + 16));
          return 0LL;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v3;
}
