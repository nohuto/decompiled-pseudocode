/*
 * XREFs of TR_TransfersReclaimed @ 0x140005B10
 * Callers:
 *     Control_ProcessTransferCompletion @ 0x140004658 (Control_ProcessTransferCompletion.c)
 *     Bulk_ProcessTransferCompletion @ 0x1400054A8 (Bulk_ProcessTransferCompletion.c)
 *     Control_EP_ReclaimTransfers @ 0x1400147A0 (Control_EP_ReclaimTransfers.c)
 *     Isoch_ProcessTransferCompletion @ 0x14004C3B0 (Isoch_ProcessTransferCompletion.c)
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_TransfersReclaimed(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v2 + 37) )
  {
    v3 = *(_QWORD *)(v2 + 144);
    if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 20)) == *(_DWORD *)(v3 + 8) )
      ESM_AddEvent((PVOID)(v2 + 304));
  }
  else
  {
    ESM_AddEsmEvent(v2, 138LL);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 56));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01033 + 1648))(
           WdfDriverGlobals,
           v4,
           "Transfer Ring Tag",
           1291LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c");
}
