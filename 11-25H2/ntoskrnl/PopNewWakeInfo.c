/*
 * XREFs of PopNewWakeInfo @ 0x140B58114
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     PopWakeInfoDereference @ 0x1404BD2EC (PopWakeInfoDereference.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1404BD414 (PopAcquireWakeSourceSpinLock.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404C9F84 (PopReleaseWakeSourceSpinLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

LONG PopNewWakeInfo()
{
  __int64 Pool2; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Pool2 = ExAllocatePool2(0x40uLL);
  v1 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 1;
    *(_BYTE *)(Pool2 + 80) = 1;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
    PopAcquireWakeSourceSpinLock(&LockHandle);
    PopCurrentWakeInfo = v1;
    if ( PopWakeInfoCount == 1 )
    {
      v2 = (_QWORD *)qword_140F0CA28;
      v3 = *(_QWORD **)(qword_140F0CA28 + 8);
      if ( *(__int64 **)qword_140F0CA28 != &PopWakeInfoList || *v3 != qword_140F0CA28 )
        __fastfail(3u);
      qword_140F0CA28 = *(_QWORD *)(qword_140F0CA28 + 8);
      *v3 = &PopWakeInfoList;
      v2[1] = v2;
      *v2 = v2;
      PopWakeInfoDereference((__int64)v2);
      --PopWakeInfoCount;
    }
    PopWakeSourceWorkState = 0;
    PopReleaseWakeSourceSpinLock(&LockHandle);
  }
  result = KeResetEvent(&PopWakeSourceAvailable);
  PopFixedWakeSourceMask = 0;
  return result;
}
