/*
 * XREFs of HalpDmaControllerCancelTransfer @ 0x140550590
 * Callers:
 *     HalCancelMappedTransfer @ 0x14054F540 (HalCancelMappedTransfer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpDmaControllerCancelTransfer(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  char v8; // r14
  unsigned __int64 v9; // rdx
  volatile signed __int64 *v10; // rbp
  char result; // al
  bool v12; // zf

  v6 = *(_QWORD *)(a1 + 56) + 160LL * a2;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0;
  if ( CurrentIrql == 15 )
  {
    v10 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v9 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v9);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
    v10 = (volatile signed __int64 *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v8 = 1;
  }
  *(_DWORD *)(a3 + 12) |= 1u;
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), a2);
  if ( result )
  {
    v12 = *(_QWORD *)(v6 + 8) == 0LL;
    *(_BYTE *)(v6 + 6) = 1;
    *(_DWORD *)(v6 + 32) = 2;
    if ( !v12 )
      result = KeInsertQueueDpc((PRKDPC)(v6 + 40), 0LL, 0LL);
  }
  if ( v8 )
  {
    KxReleaseSpinLock(v10);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
