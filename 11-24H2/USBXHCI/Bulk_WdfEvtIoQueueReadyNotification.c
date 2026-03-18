/*
 * XREFs of Bulk_WdfEvtIoQueueReadyNotification @ 0x14000D810
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_MapTransfers @ 0x14000D910 (Bulk_MapTransfers.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_sds @ 0x140045A8C (WPP_RECORDER_SF_sds.c)
 */

char __fastcall Bulk_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  char v3; // di
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  signed __int32 v7; // eax

  v3 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v3 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a2 + 40));
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 1368LL) == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6);
    LOBYTE(v7) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v7 )
      __debugbreak();
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2
         || (_InterlockedExchange((volatile __int32 *)(a2 + 348), 1),
             v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2),
             v7 == 2) )
  {
    LOBYTE(v7) = Bulk_MapTransfers(a2);
  }
  if ( v3 )
  {
    LOBYTE(v7) = KeGetCurrentIrql();
    if ( (_BYTE)v7 == 2 )
      LOBYTE(v7) = Controller_LowerAndTrackIrql(*(_QWORD *)(a2 + 40));
  }
  return v7;
}
