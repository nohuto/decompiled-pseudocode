/*
 * XREFs of ViIsActiveChannelWcb @ 0x14060F390
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140B87190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B87370 (VfAllocateAdapterChannelEx.c)
 *     ViAdapterCallback @ 0x140B89B50 (ViAdapterCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall ViIsActiveChannelWcb(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // di
  __int64 *v5; // rbx
  KIRQL v6; // dl
  __int64 i; // rax
  __int64 v8; // rax

  v2 = (KSPIN_LOCK *)(a1 + 176);
  v4 = 0;
  v5 = (__int64 *)(a1 + 160);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  for ( i = *v5; ; i = *(_QWORD *)(v8 + 72) )
  {
    v8 = i - 72;
    if ( v5 == (__int64 *)(v8 + 72) )
      break;
    if ( a2 == v8 )
    {
      v4 = 1;
      break;
    }
  }
  KeReleaseSpinLock(v2, v6);
  return v4;
}
