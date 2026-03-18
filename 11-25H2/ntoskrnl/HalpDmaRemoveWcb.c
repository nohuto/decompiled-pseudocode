/*
 * XREFs of HalpDmaRemoveWcb @ 0x14053A080
 * Callers:
 *     HalCancelAdapterChannelDmaThin @ 0x14049E1F0 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannel @ 0x14054C0C0 (HalCancelAdapterChannel.c)
 *     HalCancelAdapterChannelDmarThin @ 0x14054EF90 (HalCancelAdapterChannelDmarThin.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

char __fastcall HalpDmaRemoveWcb(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // di
  _QWORD *v5; // rbx
  KIRQL v6; // r8
  _QWORD *i; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx

  v2 = (KSPIN_LOCK *)(a1 + 184);
  v4 = 0;
  v5 = (_QWORD *)(a1 + 192);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    v8 = (_QWORD *)*i;
    if ( i == a2 )
    {
      if ( (_QWORD *)v8[1] != i || (v9 = (_QWORD *)i[1], (_QWORD *)*v9 != i) )
        __fastfail(3u);
      *v9 = v8;
      v4 = 1;
      v8[1] = v9;
      break;
    }
  }
  KeReleaseSpinLock(v2, v6);
  return v4;
}
