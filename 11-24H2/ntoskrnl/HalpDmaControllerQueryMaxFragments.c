/*
 * XREFs of HalpDmaControllerQueryMaxFragments @ 0x1403932D4
 * Callers:
 *     HalMapTransferEx @ 0x140391AE0 (HalMapTransferEx.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerQueryMaxFragments(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rdi
  char v7; // bp
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v9; // rdx
  volatile signed __int64 *v10; // rsi
  unsigned int v11; // edi
  __int64 v13; // rdx

  v6 = a1;
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
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
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v9);
    }
    v10 = (volatile signed __int64 *)(v6 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v6 + 168));
    v7 = 1;
  }
  v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 64), *(unsigned int *)(a2 + 380), a3, a4);
  if ( v7 )
  {
    KxReleaseSpinLock(v10);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    }
    __writecr8(CurrentIrql);
  }
  return v11;
}
