/*
 * XREFs of ?ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003DCF0
 * Callers:
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003D0B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisQueryStatisticsOids @ 0x14003D180 (ndisQueryStatisticsOids.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisCheckForHangSupported(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax

  DriverHandle = a1->DriverHandle;
  if ( a1->MajorNdisVersion < 6u )
  {
    if ( DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
      return DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler != 0LL;
  }
  else if ( DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx
         && DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx )
  {
    return 1;
  }
  return 0;
}
