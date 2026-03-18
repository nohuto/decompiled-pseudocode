/*
 * XREFs of HalpDmaControllerReadDmaCounter @ 0x1404B52B0
 * Callers:
 *     HalReadDmaCounterV3 @ 0x1404B5280 (HalReadDmaCounterV3.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerReadDmaCounter(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  char v5; // bp
  volatile signed __int64 *v6; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rdx

  v2 = a2;
  v3 = (_QWORD *)a1;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0;
  if ( CurrentIrql == 15 )
  {
    v6 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(*(unsigned __int8 *)(a1 + 176));
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    v6 = v3 + 21;
    KxAcquireSpinLock(v3 + 21);
    v5 = 1;
  }
  v7 = guard_dispatch_icall_no_overrides(v3[8], (unsigned int)v2);
  if ( !v7 )
    *(_BYTE *)(160 * v2 + v3[7] + 6) = 1;
  if ( v5 )
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
