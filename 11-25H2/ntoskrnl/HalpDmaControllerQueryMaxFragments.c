/*
 * XREFs of HalpDmaControllerQueryMaxFragments @ 0x1403315D0
 * Callers:
 *     HalMapTransferEx @ 0x140332780 (HalMapTransferEx.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerQueryMaxFragments(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char v4; // bp
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rsi
  unsigned int v7; // edi
  __int64 v9; // rdx

  v3 = a1;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 15 )
  {
    v6 = a1 + 168;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(*(unsigned __int8 *)(a1 + 176));
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    v6 = v3 + 168;
    KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 168));
    v4 = 1;
  }
  v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 64), *(unsigned int *)(a2 + 380));
  if ( v4 )
  {
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    }
    __writecr8(CurrentIrql);
  }
  return v7;
}
