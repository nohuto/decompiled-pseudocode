/*
 * XREFs of PopFxLockDevice @ 0x1403A79D0
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1403A6200 (PoFxNotifySurprisePowerOn.c)
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A6ED50 (PopFxUnregisterDeviceOrWait.c)
 *     PopSystemIrpCompletion @ 0x140B71950 (PopSystemIrpCompletion.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     PopFxTryReferenceDevice @ 0x1403A6408 (PopFxTryReferenceDevice.c)
 */

__int64 __fastcall PopFxLockDevice(__int64 a1, int a2, char a3)
{
  __int64 v6; // rbx
  KIRQL v7; // al
  KIRQL v8; // r14

  v6 = 0LL;
  if ( a1 )
  {
    v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v6 = *(_QWORD *)(a1 + 80);
    v8 = v7;
    if ( !a3
      || (_m_prefetchw((const void *)(a1 + 296)), (_InterlockedOr((volatile signed __int32 *)(a1 + 296), 0) & 4) != 0) )
    {
      if ( v6 && (int)PopFxTryReferenceDevice(v6, a2) < 0 )
        v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 88), v8);
  }
  return v6;
}
