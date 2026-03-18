/*
 * XREFs of ACPIWakeEnableDisablePciDevice @ 0x1400330A8
 * Callers:
 *     ACPIWakeDisableAsync @ 0x140031C68 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032750 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140032D20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWaitWakeEnableOnPowerUp @ 0x1400481B0 (ACPIWaitWakeEnableOnPowerUp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIWakeEnableDisablePciDevice(__int64 a1, char a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // di
  PVOID v7; // rdx

  if ( PciPmeInterfaceInstantiated )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v5 = *(_QWORD *)(a1 + 784);
    v6 = v4;
    if ( v5 )
    {
      if ( PciPmeInterfaceInstantiated )
      {
        v7 = PciPmeInterface;
        LOBYTE(v7) = a2;
        (*((void (__fastcall **)(__int64, PVOID))PciPmeInterface + 6))(v5, v7);
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  }
}
