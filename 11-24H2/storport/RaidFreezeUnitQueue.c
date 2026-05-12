/*
 * XREFs of RaidFreezeUnitQueue @ 0x14009D878
 * Callers:
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A0F68 (RaidUnitTestDeviceQueue.c)
 * Callees:
 *     RiDisableDeviceQueueFastPath @ 0x140026CB0 (RiDisableDeviceQueueFastPath.c)
 *     RaUnitLockForwardIo @ 0x1400301C0 (RaUnitLockForwardIo.c)
 */

void __fastcall RaidFreezeUnitQueue(__int64 a1)
{
  __int64 v2; // rcx

  v2 = a1 + 720;
  *(_BYTE *)(v2 + 36) = 1;
  RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)v2, 0);
  RaUnitLockForwardIo(a1, 3);
}
