/*
 * XREFs of ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x140064B40
 * Callers:
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140017A50 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140064560 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1400647B0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140065380 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     NdisTryAcquireNicActive @ 0x140091900 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009B188 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009B1E0 (-ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140064C20 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x140065B40 (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

__int64 __fastcall ndisAoAcActiveRefIncrement(__int64 a1, int a2)
{
  __int64 v2; // r11
  unsigned int v3; // ebx
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // r11
  int v8; // eax
  __int64 v9; // r9

  ++*(_DWORD *)(a1 + 52);
  v2 = a1;
  *(_DWORD *)(a1 + 388) |= 2u;
  v3 = *(_DWORD *)(a1 + 52);
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 4LL * a2 + 468) + 1;
  *(_DWORD *)(v2 + 4LL * a2 + 468) = v5;
  if ( *(_BYTE *)(v2 + 1081) && v5 == 1 )
  {
    if ( a2 != 15 || ndisPowerRefManagementState )
    {
      if ( !*(_DWORD *)(v2 + 528) || ndisPowerRefManagementState == 1 )
      {
        v8 = *(_DWORD *)(v2 + 376);
        if ( !v8 || v8 == 3 )
        {
          v9 = MEMORY[0xFFFFF78000000008];
          if ( a2 )
          {
            if ( *(int *)(v2 + 468) > 0 )
              ndisCloseTimeInterval((unsigned __int64 *)(v2 + 544), (unsigned __int64 *)(v2 + 536));
          }
          else if ( v3 != 1 )
          {
            return v3;
          }
          *(_QWORD *)(v2 + 16 * (v4 + 34)) = v9;
        }
      }
    }
    else
    {
      ndisAoAcPauseRefTimeStats((struct _NDIS_MINIPORT_AOAC *)v2);
      *(_QWORD *)(v6 + 784) = MEMORY[0xFFFFF78000000008];
    }
  }
  return v3;
}
