/*
 * XREFs of HalpDmaControllerValidateRequestLineBinding @ 0x140552E34
 * Callers:
 *     HalGetAdapterV3 @ 0x1407000B8 (HalGetAdapterV3.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpDmaControllerValidateRequestLineBinding(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bp
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v7; // rdx
  volatile signed __int64 *v8; // rsi
  char v9; // bl
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v11 = *(_DWORD *)(a2 + 48);
  v5 = 0;
  v12 = *(_DWORD *)(a2 + 16);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 15 )
  {
    v8 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v7 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v7);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
    v8 = (volatile signed __int64 *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v5 = 1;
  }
  v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), &v11, a3, a4);
  if ( v5 )
  {
    KxReleaseSpinLock(v8);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v9;
}
