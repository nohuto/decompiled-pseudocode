/*
 * XREFs of HalpIommuGetDomainId @ 0x14054FAA4
 * Callers:
 *     HalpIommuAcquireNewDomain @ 0x14054F65C (HalpIommuAcquireNewDomain.c)
 *     IommupDeviceEnableSvm @ 0x1406F3754 (IommupDeviceEnableSvm.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     RtlFindClearBitsAndSet @ 0x140338AF0 (RtlFindClearBitsAndSet.c)
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
