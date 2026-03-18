/*
 * XREFs of HalpDmaControllerFlushChannel @ 0x14039268C
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140392210 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x140551E80 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerFlushChannel(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  char v7; // r15
  volatile signed __int64 *v8; // rsi
  __int64 v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx

  BugCheckParameter4 = a2;
  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0;
  if ( CurrentIrql == 15 )
  {
    v8 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v11 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v11);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v11);
    }
    v8 = (volatile signed __int64 *)(v5 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v5 + 168));
    v7 = 1;
  }
  v9 = *(_QWORD *)(v5 + 56) + 160 * BugCheckParameter4;
  if ( !*(_BYTE *)(v9 + 6) && *(_QWORD *)(v9 + 8) )
    KeBugCheckEx(0xE6u, 0x23uLL, 0LL, *(unsigned int *)(v5 + 32), BugCheckParameter4);
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 64), (unsigned int)BugCheckParameter4, a3, a4);
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_BYTE *)(v9 + 6) = 0;
  if ( v7 )
  {
    KxReleaseSpinLock(v8);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
