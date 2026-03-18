/*
 * XREFs of Control_ProcessTransferCompletion @ 0x140010798
 * Callers:
 *     Control_WdfEvtDpcForTransferCompletion @ 0x140010760 (Control_WdfEvtDpcForTransferCompletion.c)
 *     Control_WdfEvtWorkItemForTransferCompletion @ 0x14004C790 (Control_WdfEvtWorkItemForTransferCompletion.c)
 * Callees:
 *     TR_TransfersReclaimed @ 0x140012104 (TR_TransfersReclaimed.c)
 *     Control_Transfer_CompleteCancelable @ 0x140012B50 (Control_Transfer_CompleteCancelable.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Control_ProcessTransferCompletion(__int64 a1)
{
  bool v1; // di
  __int64 v2; // rbx
  KIRQL v3; // al
  bool v4; // zf

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B1F0);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  v4 = *(_QWORD *)(v2 + 360) == 0LL;
  *(_BYTE *)(v2 + 104) = v3;
  if ( !v4 && (int)Control_Transfer_CompleteCancelable(v2) >= 0 )
    v1 = (*(_BYTE *)(v2 + 368) & 2) != 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), *(_BYTE *)(v2 + 104));
  if ( v1 )
    TR_TransfersReclaimed(v2);
}
