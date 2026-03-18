/*
 * XREFs of HalpDmaRemoveAdapterFromChannelQueue @ 0x140550634
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140331C00 (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelDmaThin @ 0x14049E1F0 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannel @ 0x14054C0C0 (HalCancelAdapterChannel.c)
 *     HalCancelAdapterChannelDmarThin @ 0x14054EF90 (HalCancelAdapterChannelDmarThin.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall HalpDmaRemoveAdapterFromChannelQueue(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v6; // r8
  char v7; // si
  _QWORD *i; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  v1 = *(_QWORD *)(a1 + 368);
  v3 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 380);
  v4 = *(unsigned __int8 *)(v1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v4);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
  KxAcquireSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 368) + 168LL));
  v6 = (_QWORD *)(v3 + 144);
  v7 = 0;
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v9 = (_QWORD *)*i;
    if ( i == (_QWORD *)(a1 + 208) )
    {
      if ( (_QWORD *)v9[1] != i || (v10 = (_QWORD *)i[1], (_QWORD *)*v10 != i) )
        __fastfail(3u);
      *v10 = v9;
      v7 = 1;
      v9[1] = v10;
      break;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)(*(_QWORD *)(a1 + 368) + 168LL));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v7;
}
