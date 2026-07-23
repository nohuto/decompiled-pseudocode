/*
 * XREFs of HalpDmaControllerValidateRequestLineBinding @ 0x140550774
 * Callers:
 *     HalGetAdapterV3 @ 0x1406FDCF8 (HalGetAdapterV3.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpDmaControllerValidateRequestLineBinding(__int64 a1, __int64 a2)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v5; // rdx
  volatile signed __int64 *v6; // rsi
  char v7; // bl
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = *(_DWORD *)(a2 + 48);
  v3 = 0;
  v10 = *(_DWORD *)(a2 + 16);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 15 )
  {
    v6 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v5 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v5);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
    v6 = (volatile signed __int64 *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v3 = 1;
  }
  v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), &v9);
  if ( v3 )
  {
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v7;
}
