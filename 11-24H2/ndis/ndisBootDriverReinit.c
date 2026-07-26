/*
 * XREFs of ndisBootDriverReinit @ 0x1400958E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisBootDriverReinit(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  ndisKLoaderAreBootDriversLoaded = 1;
  IoRegisterDriverReinitialization(DriverObject, ndisDriverReinit, Context);
}
