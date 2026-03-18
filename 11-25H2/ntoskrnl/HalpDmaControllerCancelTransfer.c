/*
 * XREFs of HalpDmaControllerCancelTransfer @ 0x140550350
 * Callers:
 *     HalCancelMappedTransfer @ 0x14054F300 (HalCancelMappedTransfer.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpDmaControllerCancelTransfer(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  char v7; // r14
  unsigned __int64 v8; // rdx
  volatile signed __int64 *v9; // rbp
  char result; // al
  bool v11; // zf

  v5 = *(_QWORD *)(a1 + 56) + 160LL * a2;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0;
  if ( CurrentIrql == 15 )
  {
    v9 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v8 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v8);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
    v9 = (volatile signed __int64 *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v7 = 1;
  }
  *(_DWORD *)(a3 + 12) |= 1u;
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64));
  if ( result )
  {
    v11 = *(_QWORD *)(v5 + 8) == 0LL;
    *(_BYTE *)(v5 + 6) = 1;
    *(_DWORD *)(v5 + 32) = 2;
    if ( !v11 )
      result = KeInsertQueueDpc((PRKDPC)(v5 + 40), 0LL, 0LL);
  }
  if ( v7 )
  {
    KxReleaseSpinLock(v9);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
