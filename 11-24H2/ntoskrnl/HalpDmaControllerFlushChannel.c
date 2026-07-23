/*
 * XREFs of HalpDmaControllerFlushChannel @ 0x14038BFBC
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x14038BB40 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x14054F7C0 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerFlushChannel(__int64 a1, unsigned int a2)
{
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  char v5; // r15
  volatile signed __int64 *v6; // rsi
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx

  BugCheckParameter4 = a2;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0;
  if ( CurrentIrql == 15 )
  {
    v6 = (volatile signed __int64 *)(a1 + 168);
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
    v6 = (volatile signed __int64 *)(v3 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 168));
    v5 = 1;
  }
  v7 = *(_QWORD *)(v3 + 56) + 160 * BugCheckParameter4;
  if ( !*(_BYTE *)(v7 + 6) && *(_QWORD *)(v7 + 8) )
    KeBugCheckEx(0xE6u, 0x23uLL, 0LL, *(unsigned int *)(v3 + 32), BugCheckParameter4);
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 64), (unsigned int)BugCheckParameter4);
  *(_QWORD *)(v7 + 8) = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_BYTE *)(v7 + 6) = 0;
  if ( v5 )
  {
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
