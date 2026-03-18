/*
 * XREFs of HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x14053C818
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140392950 (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelDmaThin @ 0x14049D310 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannel @ 0x14054E9D0 (HalCancelAdapterChannel.c)
 *     HalCancelAdapterChannelDmarThin @ 0x140551890 (HalCancelAdapterChannelDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall HalpDmaRemoveFromEmergencyLogicalAddressQueue(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // di
  _QWORD *v5; // rbx
  KIRQL v6; // r8
  _QWORD *i; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx

  v2 = (KSPIN_LOCK *)(a1 + 568);
  v4 = 0;
  v5 = (_QWORD *)(a1 + 576);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 568));
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    v8 = (_QWORD *)*i;
    if ( i == a2 )
    {
      v4 = 1;
      if ( (_QWORD *)v8[1] != i || (v9 = (_QWORD *)i[1], (_QWORD *)*v9 != i) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
      break;
    }
  }
  KeReleaseSpinLock(v2, v6);
  return v4;
}
