/*
 * XREFs of rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x14019D300
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x14005CA04 (rimHandleAnyPnpRemovePendingDevices.c)
 */

void __fastcall rimDoHandleAnyPnpRemovePendingDevicesWorkItem(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  RIMLockExclusive(v1 + 760);
  *(_DWORD *)(v1 + 1116) = 0;
  RIMUnlockExclusive(v1 + 760);
  rimHandleAnyPnpRemovePendingDevices((struct RawInputManagerObject *)v1);
}
