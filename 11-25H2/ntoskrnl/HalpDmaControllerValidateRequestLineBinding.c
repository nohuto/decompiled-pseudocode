/*
 * XREFs of HalpDmaControllerValidateRequestLineBinding @ 0x140550534
 * Callers:
 *     HalGetAdapterV3 @ 0x1406F42C8 (HalGetAdapterV3.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpDmaControllerValidateRequestLineBinding(__int64 a1)
{
  char v2; // bp
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v4; // rdx
  volatile signed __int64 *v5; // rsi
  char v6; // bl

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 15 )
  {
    v5 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v4 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v4);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
    v5 = (volatile signed __int64 *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v2 = 1;
  }
  v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64));
  if ( v2 )
  {
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v6;
}
