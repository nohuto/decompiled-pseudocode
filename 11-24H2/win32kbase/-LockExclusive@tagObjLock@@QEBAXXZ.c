/*
 * XREFs of ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x140133080
 * Callers:
 *     ??$vInitAndLock@UtagObjLock@@@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAAXAEAUtagObjLock@@@Z @ 0x1400462B8 (--$vInitAndLock@UtagObjLock@@@-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainS.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall tagObjLock::LockExclusive(struct _KTHREAD **this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( this[1] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 982LL);
  this[1] = KeGetCurrentThread();
}
