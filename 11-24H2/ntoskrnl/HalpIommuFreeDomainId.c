/*
 * XREFs of HalpIommuFreeDomainId @ 0x14054FB58
 * Callers:
 *     HalpIommuDereferenceHardwareDomain @ 0x140551358 (HalpIommuDereferenceHardwareDomain.c)
 *     IommupDeviceDisableSvm @ 0x1406FCEE8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall HalpIommuFreeDomainId(__int64 a1, unsigned int a2)
{
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // al

  if ( !HalpHvIommu )
  {
    v4 = (KSPIN_LOCK *)(a1 + 448);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 448));
    *(_BYTE *)(*(_QWORD *)(a1 + 464) + ((unsigned __int64)a2 >> 3)) &= ~(1 << (a2 & 7));
    KeReleaseSpinLock(v4, v5);
  }
}
