/*
 * XREFs of ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400923C0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x140043C00 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x140043C98 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_THREADLOCK@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x1400480E4 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_THREADLOCK@@@-$DomainSharedB.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140091FC0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400922FC (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x140041660 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall tagDomLock::LockExclusive(PERESOURCE *this)
{
  if ( tagDomLock::IsLockedExclusive(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1074LL);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
}
