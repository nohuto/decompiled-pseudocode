/*
 * XREFs of ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014134C
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeTimer @ 0x140088F90 (NdisInitializeTimer.c)
 */

void __fastcall ndisAoAcInitialize(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 AoAc; // rbx
  int v3; // edx
  unsigned __int8 v4; // al

  AoAc = (__int64)a1->AoAc;
  if ( AoAc || (AoAc = ExAllocatePool2(64LL, 1160LL, 1835091022)) != 0 )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)AoAc);
    *(_QWORD *)(AoAc + 16) = AoAc + 8;
    *(_QWORD *)(AoAc + 8) = AoAc + 8;
    *(_QWORD *)(AoAc + 40) = AoAc + 32;
    *(_QWORD *)(AoAc + 32) = AoAc + 32;
    KeInitializeEvent((PRKEVENT)(AoAc + 392), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(AoAc + 416), NotificationEvent, 1u);
    v4 = ndisCsResiliency;
    *(_DWORD *)(AoAc + 376) = 0;
    *(_DWORD *)(AoAc + 380) |= 0x100u;
    *(_BYTE *)(AoAc + 1081) = v4;
    *(_BYTE *)(AoAc + 288) = 0;
    *(_BYTE *)(AoAc + 386) = 1;
    *(_BYTE *)(AoAc + 1080) = 0;
    *(_DWORD *)(AoAc + 284) = ndisNicQuietDerefDefaultTimeout;
    NdisInitializeTimer((PNDIS_TIMER)(AoAc + 72), (PNDIS_TIMER_FUNCTION)ndisTempRefTimerDpc, a1);
    *(_QWORD *)(AoAc + 200) = a1;
    *(_QWORD *)(AoAc + 208) = ndisAoAcTempRefWorkItem;
    *(_QWORD *)(AoAc + 304) = ndisAoAcWakeWorkItem;
    *(_QWORD *)(AoAc + 296) = a1;
    a1->AoAc = (struct _NDIS_MINIPORT_AOAC *)AoAc;
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      14,
      14,
      (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
      (char)a1);
  }
}
