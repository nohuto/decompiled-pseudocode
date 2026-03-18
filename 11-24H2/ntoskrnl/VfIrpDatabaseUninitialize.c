/*
 * XREFs of VfIrpDatabaseUninitialize @ 0x140BA4110
 * Callers:
 *     ViIovPluginUnload @ 0x1406A4090 (ViIovPluginUnload.c)
 *     ViPacketNotificationCallback @ 0x140B9B530 (ViPacketNotificationCallback.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 VfIrpDatabaseUninitialize()
{
  __int64 result; // rax

  if ( ViIrpDatabase )
  {
    ExFreePoolWithTag(ViIrpDatabase, 0);
    ViIrpDatabase = 0LL;
  }
  result = (unsigned int)_InterlockedExchange(&VfIrpDatabaseInitialized, 0);
  ViIrpDatabaseLock = 0;
  return result;
}
