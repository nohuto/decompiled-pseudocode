/*
 * XREFs of RaUnitRequestPowerUpForPLDR @ 0x140077638
 * Callers:
 *     RaidRequestDIrpForAssociatedUnits @ 0x1400787A8 (RaidRequestDIrpForAssociatedUnits.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x140001948 (RaidResumeUnitQueue.c)
 *     RaidPauseUnitQueue @ 0x140014D40 (RaidPauseUnitQueue.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 */

__int64 __fastcall RaUnitRequestPowerUpForPLDR(__int64 Context)
{
  __int32 v1; // edi
  unsigned int v3; // esi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = -1073741823;
  if ( _interlockedbittestandset((volatile signed __int32 *)(Context + 512), 5u) == 1 )
  {
    result = 3221226614LL;
    **(_DWORD **)(*(_QWORD *)(Context + 24) + 6144LL) |= 2u;
    return result;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 48), &LockHandle);
  if ( *(_DWORD *)(Context + 548) == 1 || *(char *)(Context + 504) < 0 || *(_BYTE *)(Context + 556) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    RaidPauseUnitQueue(Context);
    v3 = PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)1,
           RaidUnitSetDevicePowerCompletionRoutineForPLDR,
           (PVOID)Context,
           0LL);
    if ( v3 == 259 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x45u,
          (__int64)&WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids);
      }
      *(_BYTE *)(Context + 504) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v1 = 0;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x44u,
          (__int64)&WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids);
      }
      RaidResumeUnitQueue(Context);
    }
    _InterlockedExchange((volatile __int32 *)(Context + 1888), v1);
    if ( v3 == 259 )
      return v3;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(Context + 512), 5u);
  return v3;
}
