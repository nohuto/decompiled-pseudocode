/*
 * XREFs of PopFxLockDevice @ 0x140376070
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1403111B0 (PoFxNotifySurprisePowerOn.c)
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A74A30 (PopFxUnregisterDeviceOrWait.c)
 *     PopSystemIrpCompletion @ 0x140B6F8E0 (PopSystemIrpCompletion.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     PopFxTryReferenceDevice @ 0x140377BF0 (PopFxTryReferenceDevice.c)
 */

__int64 __fastcall PopFxLockDevice(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 v8; // r8
  KIRQL v9; // r14

  v6 = 0LL;
  if ( a1 )
  {
    v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v6 = *(_QWORD *)(a1 + 80);
    v9 = v7;
    if ( !a3
      || (_m_prefetchw((const void *)(a1 + 296)), (_InterlockedOr((volatile signed __int32 *)(a1 + 296), 0) & 4) != 0) )
    {
      if ( v6 && (int)PopFxTryReferenceDevice(v6, a2, v8) < 0 )
        v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 88), v9);
  }
  return v6;
}
