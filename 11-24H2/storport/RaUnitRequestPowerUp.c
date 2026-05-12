/*
 * XREFs of RaUnitRequestPowerUp @ 0x140036CD0
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 *     RaidUnitPendingDpcRoutine @ 0x14002ED00 (RaidUnitPendingDpcRoutine.c)
 *     RaAcquirePowerRefWorkRoutine @ 0x14003E4F0 (RaAcquirePowerRefWorkRoutine.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x140001948 (RaidResumeUnitQueue.c)
 *     RaidPauseUnitQueue @ 0x140014D40 (RaidPauseUnitQueue.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 */

__int64 __fastcall RaUnitRequestPowerUp(__int64 a1)
{
  unsigned int v2; // esi
  __int32 v3; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = -1073741823;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 548) == 1 || *(char *)(a1 + 504) < 0 || *(_BYTE *)(a1 + 556) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    RaidPauseUnitQueue(a1);
    v2 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
    if ( v2 == 259 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 64LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids);
      }
      *(_BYTE *)(a1 + 504) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v3 = 0;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 63LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids);
      }
      RaidResumeUnitQueue(a1);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 1888), v3);
  }
  return v2;
}
