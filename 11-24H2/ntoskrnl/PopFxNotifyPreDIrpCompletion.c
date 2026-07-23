/*
 * XREFs of PopFxNotifyPreDIrpCompletion @ 0x1403A6728
 * Callers:
 *     PopRequestCompletion @ 0x1403A6460 (PopRequestCompletion.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1404CD190 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 */

void __fastcall PopFxNotifyPreDIrpCompletion(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  KIRQL v7; // al
  int v8; // edx
  char v9; // si

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 864), 0, 0) & 0x20) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter3 + 32));
    v5 = *(_DWORD *)(BugCheckParameter3 + 32);
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v5, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 0x2000) != 0 )
    {
      _m_prefetchw((const void *)(BugCheckParameter3 + 32));
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 32), 0);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1192));
      v8 = *(_DWORD *)(BugCheckParameter3 + 1220);
      v9 = 0;
      if ( (v8 & 1) != 0 )
      {
        v9 = 1;
        v8 &= ~1u;
      }
      *(_DWORD *)(BugCheckParameter3 + 1216) = a3;
      *(_DWORD *)(BugCheckParameter3 + 1220) = v8 | 2;
      KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 1192), v7);
      if ( v9 )
        PopFxDerefAndCompleteDirectedPowerTransition(BugCheckParameter3);
    }
  }
}
