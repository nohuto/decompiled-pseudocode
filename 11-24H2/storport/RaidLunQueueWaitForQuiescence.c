/*
 * XREFs of RaidLunQueueWaitForQuiescence @ 0x140026A9C
 * Callers:
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x140050270 (RaidUnitQuiesceDeviceWorkRoutine.c)
 * Callees:
 *     RiDisableDeviceQueueFastPath @ 0x140026CB0 (RiDisableDeviceQueueFastPath.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 */

__int64 __fastcall RaidLunQueueWaitForQuiescence(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // ebp
  KIRQL v5; // bl
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned int)a2;
  v4 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  LOBYTE(a2) = 1;
  RiDisableDeviceQueueFastPath(a1, a2);
  if ( (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF) != 0 )
  {
    if ( (_DWORD)v2 )
    {
      Timeout.QuadPart = -10000000 * v2;
      v4 = KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, &Timeout);
      if ( v4 == 258
        && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          15LL,
          &WPP_42bc12a918843888f68018f88e1285b6_Traceguids,
          (unsigned int)v2);
      }
    }
    else
    {
      v4 = KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, 0LL);
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF) == 1 && v4 != 258 )
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    KeClearEvent((PRKEVENT)(a1 + 48));
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v5);
  }
  return v4;
}
