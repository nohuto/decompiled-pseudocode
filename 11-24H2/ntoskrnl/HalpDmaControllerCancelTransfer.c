/*
 * XREFs of HalpDmaControllerCancelTransfer @ 0x140552C50
 * Callers:
 *     HalCancelMappedTransfer @ 0x140551C00 (HalCancelMappedTransfer.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpDmaControllerCancelTransfer(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  char v9; // r14
  unsigned __int64 v10; // rdx
  volatile signed __int64 *v11; // rbp
  char result; // al
  bool v13; // zf

  v7 = *(_QWORD *)(a1 + 56) + 160LL * a2;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  if ( CurrentIrql == 15 )
  {
    v11 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v10 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v10);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
    v11 = (volatile signed __int64 *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v9 = 1;
  }
  *(_DWORD *)(a3 + 12) |= 1u;
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), a2, a3, a4);
  if ( result )
  {
    v13 = *(_QWORD *)(v7 + 8) == 0LL;
    *(_BYTE *)(v7 + 6) = 1;
    *(_DWORD *)(v7 + 32) = 2;
    if ( !v13 )
      result = KeInsertQueueDpc((PRKDPC)(v7 + 40), 0LL, 0LL);
  }
  if ( v9 )
  {
    KxReleaseSpinLock(v11);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
