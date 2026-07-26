/*
 * XREFs of ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1400658C0
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x140017F50 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ndisDispatchRequest @ 0x140029830 (ndisDispatchRequest.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x140063390 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1400642C0 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1400647B0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140065270 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     NdisReleaseNicActive @ 0x140091710 (NdisReleaseNicActive.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140065980 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x140065B40 (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400EBEB0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisAoAcActiveRefSubtract(__int64 a1, int a2, int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // rdi
  bool v7; // sf
  unsigned __int64 *v8; // rcx

  *(_DWORD *)(a1 + 52) -= a3;
  v4 = *(_DWORD *)(a1 + 52);
  v5 = a2;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 4LL * a2 + 468) - a3 < 0;
  *(_DWORD *)(a1 + 4LL * a2 + 468) -= a3;
  if ( v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_BYTE *)(a1 + 1081) && !*(_DWORD *)(a1 + 4 * v5 + 468) )
  {
    v8 = (unsigned __int64 *)(a1 + 16 * (v5 + 34));
    if ( *v8 )
      ndisCloseTimeInterval(v8, (unsigned __int64 *)(16 * v6 + a1 + 536));
    if ( (_DWORD)v5 == 15 )
    {
      ndisAoAcStartRefTimeStats((struct _NDIS_MINIPORT_AOAC *)a1);
    }
    else if ( v4 == 1 && *(_QWORD *)(a1 + 544) )
    {
      *(_QWORD *)(a1 + 544) = MEMORY[0xFFFFF78000000008];
    }
  }
  return v4;
}
