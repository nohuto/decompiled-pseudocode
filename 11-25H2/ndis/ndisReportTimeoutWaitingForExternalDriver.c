/*
 * XREFs of ndisReportTimeoutWaitingForExternalDriver @ 0x14014CFB0
 * Callers:
 *     ndisFindSomeoneToBlame @ 0x14014CE6C (ndisFindSomeoneToBlame.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x14009B88C (-ndisLiveBugCheck@@YAX_K000@Z.c)
 *     ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x14009B8D4 (-ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z.c)
 *     ndisGetMiniportFromObject @ 0x140166740 (ndisGetMiniportFromObject.c)
 */

void __fastcall ndisReportTimeoutWaitingForExternalDriver(unsigned int a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *MiniportFromObject; // rdi
  bool v5; // dl
  bool v6; // cl

  v2 = a1;
  MiniportFromObject = (struct _NDIS_MINIPORT_BLOCK *)ndisGetMiniportFromObject(*(_QWORD *)(a2 + 16));
  v5 = MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) != 0;
  v6 = v5;
  if ( MiniportFromObject
    && (MiniportFromObject->AoAc
     && MiniportFromObject->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
     && !ndisWatchdogForceBugCheckForWDI
     || (v6 = v5, (_DWORD)v2 == 39)
     && MiniportFromObject->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
     && !ndisBugCheckOnReenumerationTimeout)
    || v6 )
  {
    ndisBugCheckEx(0x25uLL, v2, a2, *(_QWORD *)(a2 + 40));
  }
  if ( (_BYTE)KdDebuggerNotPresent )
  {
    if ( !MiniportFromObject || (_DWORD)v2 == 34 )
      ndisLiveBugCheck(37LL, v2, a2, *(_QWORD *)(a2 + 40));
    else
      ndisMLiveBugCheck(MiniportFromObject, 37LL, v2, a2, *(_QWORD *)(a2 + 40));
  }
}
