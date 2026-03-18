/*
 * XREFs of HalConfigureAdapterChannel @ 0x1404A1DC0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalConfigureAdapterChannel(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // bl
  char v4; // bp
  volatile signed __int64 *v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 368);
  v2 = a1;
  if ( !*(_QWORD *)(v1 + 112) )
    return 3221225474LL;
  CurrentIrql = KeGetCurrentIrql();
  v4 = 0;
  if ( CurrentIrql == 15 )
  {
    v5 = (volatile signed __int64 *)(v1 + 168);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(*(unsigned __int8 *)(v1 + 176));
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    v5 = (volatile signed __int64 *)(v1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v1 + 168));
    v4 = 1;
  }
  v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v1 + 64), *(unsigned int *)(v2 + 380));
  if ( v4 )
  {
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(CurrentIrql);
  }
  return v6;
}
