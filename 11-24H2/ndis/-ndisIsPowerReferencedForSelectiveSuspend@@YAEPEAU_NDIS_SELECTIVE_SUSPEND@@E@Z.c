/*
 * XREFs of ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x14004A750
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B770 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140082890 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400866C0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C3328 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsPowerReferencedForSelectiveSuspend(struct _NDIS_SELECTIVE_SUSPEND *a1, char a2)
{
  if ( a2 )
  {
    return (*((_DWORD *)a1 + 128)
         || *((_DWORD *)a1 + 129)
         || *((_DWORD *)a1 + 132)
         || *((_DWORD *)a1 + 133)
         || *((_DWORD *)a1 + 130)
         || *((_DWORD *)a1 + 131)
         || *((_DWORD *)a1 + 144)
         || *((_DWORD *)a1 + 127))
        && KeReadStateEvent((PRKEVENT)((char *)a1 + 272));
  }
  else
  {
    if ( (*((_DWORD *)a1 + 126) & 0x14) == 0 )
      return 1;
    return (*((_DWORD *)a1 + 126) & 0x200) != 0;
  }
}
