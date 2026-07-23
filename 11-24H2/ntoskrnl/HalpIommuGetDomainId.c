/*
 * XREFs of HalpIommuGetDomainId @ 0x14054FCE4
 * Callers:
 *     HalpIommuAcquireNewDomain @ 0x14054F89C (HalpIommuAcquireNewDomain.c)
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall HalpIommuGetDomainId(__int64 a1, ULONG *a2)
{
  KSPIN_LOCK *v5; // rsi
  KIRQL v6; // di
  ULONG ClearBitsAndSet; // eax
  unsigned int v8; // ebx

  if ( HalpHvIommu )
    return 3221225659LL;
  v5 = (KSPIN_LOCK *)(a1 + 448);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 448));
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 456), 1u, 0);
  *a2 = ClearBitsAndSet;
  v8 = -1073741670;
  if ( ClearBitsAndSet != -1 )
    v8 = 0;
  KeReleaseSpinLock(v5, v6);
  return v8;
}
