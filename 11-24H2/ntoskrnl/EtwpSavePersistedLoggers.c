/*
 * XREFs of EtwpSavePersistedLoggers @ 0x1407B03FC
 * Callers:
 *     EtwpKsrCallback @ 0x1407AF910 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x1404F9880 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1407B042C (EtwpSavePersistedLoggersWorker.c)
 */

char EtwpSavePersistedLoggers()
{
  signed __int32 v0; // eax

  LOBYTE(v0) = ExIsSoftBoot();
  if ( (_BYTE)v0 )
  {
    v0 = _InterlockedCompareExchange(&EtwpLoggerSaveState, 1, 0);
    if ( !v0 )
      LOBYTE(v0) = EtwpSavePersistedLoggersWorker();
  }
  return v0;
}
