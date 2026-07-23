/*
 * XREFs of HalpDmaControllerReadDmaCounter @ 0x1404AF550
 * Callers:
 *     HalReadDmaCounterV3 @ 0x1404AF520 (HalReadDmaCounterV3.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerReadDmaCounter(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  char v5; // bp
  unsigned __int64 v6; // rdx
  volatile signed __int64 *v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rdx

  v2 = a2;
  v3 = (_QWORD *)a1;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0;
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
    v7 = v3 + 21;
    KxAcquireSpinLock(v3 + 21);
    v5 = 1;
  }
  v8 = guard_dispatch_icall_no_overrides(v3[8], (unsigned int)v2);
  if ( !v8 )
    *(_BYTE *)(160 * v2 + v3[7] + 6) = 1;
  if ( v5 )
  {
    KxReleaseSpinLock(v7);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    }
    __writecr8(CurrentIrql);
  }
  return v8;
}
