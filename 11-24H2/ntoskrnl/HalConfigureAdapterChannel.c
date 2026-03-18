/*
 * XREFs of HalConfigureAdapterChannel @ 0x1404A1520
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalConfigureAdapterChannel(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // bl
  char v8; // bp
  unsigned __int64 v9; // rdx
  volatile signed __int64 *v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // rdx

  v3 = *(_QWORD *)(a1 + 368);
  v6 = a1;
  if ( !*(_QWORD *)(v3 + 112) )
    return 3221225474LL;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0;
  if ( CurrentIrql == 15 )
  {
    v10 = (volatile signed __int64 *)(v3 + 168);
  }
  else
  {
    v9 = *(unsigned __int8 *)(v3 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v9);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v9);
    }
    v10 = (volatile signed __int64 *)(v3 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 168));
    v8 = 1;
  }
  v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 64), *(unsigned int *)(v6 + 380), a2, a3);
  if ( v8 )
  {
    KxReleaseSpinLock(v10);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    }
    __writecr8(CurrentIrql);
  }
  return v11;
}
