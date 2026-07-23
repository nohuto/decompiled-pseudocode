/*
 * XREFs of HalpDmaControllerQueryMaxFragments @ 0x14038CC04
 * Callers:
 *     HalMapTransferEx @ 0x14038B410 (HalMapTransferEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerQueryMaxFragments(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char v4; // bp
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v6; // rdx
  volatile signed __int64 *v7; // rsi
  unsigned int v8; // edi
  __int64 v10; // rdx

  v3 = a1;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 15 )
  {
    v7 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v6);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v6);
    }
    v7 = (volatile signed __int64 *)(v3 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 168));
    v4 = 1;
  }
  v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 64), *(unsigned int *)(a2 + 380));
  if ( v4 )
  {
    KxReleaseSpinLock(v7);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(CurrentIrql);
  }
  return v8;
}
