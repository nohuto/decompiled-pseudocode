/*
 * XREFs of HalpDmaControllerReadDmaCounter @ 0x1404B4D50
 * Callers:
 *     HalReadDmaCounterV3 @ 0x1404B4D20 (HalReadDmaCounterV3.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerReadDmaCounter(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  _QWORD *v5; // rbx
  unsigned __int8 CurrentIrql; // di
  char v7; // bp
  unsigned __int64 v8; // rdx
  volatile signed __int64 *v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // rdx

  v4 = a2;
  v5 = (_QWORD *)a1;
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
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v8);
    }
    v9 = v5 + 21;
    KxAcquireSpinLock(v5 + 21);
    v7 = 1;
  }
  v10 = guard_dispatch_icall_no_overrides(v5[8], (unsigned int)v4, a3, a4);
  if ( !v10 )
    *(_BYTE *)(160 * v4 + v5[7] + 6) = 1;
  if ( v7 )
  {
    KxReleaseSpinLock(v9);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(CurrentIrql);
  }
  return v10;
}
