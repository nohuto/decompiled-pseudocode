/*
 * XREFs of HalConfigureAdapterChannel @ 0x14049BD80
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalConfigureAdapterChannel(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // bl
  char v4; // bp
  unsigned __int64 v5; // rdx
  volatile signed __int64 *v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 368);
  v2 = a1;
  if ( !*(_QWORD *)(v1 + 112) )
    return 3221225474LL;
  CurrentIrql = KeGetCurrentIrql();
  v4 = 0;
  if ( CurrentIrql == 15 )
  {
    v6 = (volatile signed __int64 *)(v1 + 168);
  }
  else
  {
    v5 = *(unsigned __int8 *)(v1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v5);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v5);
    }
    v6 = (volatile signed __int64 *)(v1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v1 + 168));
    v4 = 1;
  }
  v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v1 + 64), *(unsigned int *)(v2 + 380));
  if ( v4 )
  {
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    __writecr8(CurrentIrql);
  }
  return v7;
}
