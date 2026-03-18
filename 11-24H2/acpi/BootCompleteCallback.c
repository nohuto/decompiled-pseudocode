/*
 * XREFs of BootCompleteCallback @ 0x140098090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BootCompleteCallback(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  LOBYTE(WPP_MAIN_CB.Queue.ListEntry.Flink) = 1;
}
