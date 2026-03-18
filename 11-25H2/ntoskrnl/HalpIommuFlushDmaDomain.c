/*
 * XREFs of HalpIommuFlushDmaDomain @ 0x14034975C
 * Callers:
 *     HalpIommuFlushDomainTbs @ 0x14026EE00 (HalpIommuFlushDomainTbs.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IommuFlushTb @ 0x1405617E0 (IommuFlushTb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpIommuFlushDmaDomain(__int64 a1, __int64 a2)
{
  KIRQL v3; // di
  unsigned __int8 CurrentIrql; // bp
  _QWORD *j; // rsi
  __int64 v6; // rdx
  _QWORD *i; // rsi
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( CurrentIrql != 15 )
      v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
      IommuFlushTb(i[3], 1LL, &v8);
    if ( CurrentIrql != 15 )
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 88), v3);
  }
  else
  {
    if ( CurrentIrql != 15 )
      v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
    for ( j = *(_QWORD **)(a1 + 16); j != (_QWORD *)(a1 + 16); j = (_QWORD *)*j )
    {
      if ( !HalpHvIommu )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(j[3] + 16LL), j + 4);
    }
    if ( CurrentIrql != 15 )
    {
      KxReleaseSpinLock(a1 + 32);
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = v3;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      }
      __writecr8(v3);
    }
  }
}
