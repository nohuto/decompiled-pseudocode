/*
 * XREFs of HalpIommuFreeDomainId @ 0x14054F918
 * Callers:
 *     HalpIommuDereferenceHardwareDomain @ 0x140551118 (HalpIommuDereferenceHardwareDomain.c)
 *     IommupDeviceDisableSvm @ 0x1406F34B8 (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x1406F3754 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
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
