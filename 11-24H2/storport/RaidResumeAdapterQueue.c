/*
 * XREFs of RaidResumeAdapterQueue @ 0x14000FA30
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x14000F548 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterCancelPauseTimer @ 0x14003C0D0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x14006179C (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x140064FD0 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x140065B60 (RaidPauseTimerDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x140073760 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x140074390 (StorPortPause.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     StorAcquireLockForAllGateways @ 0x1400A6238 (StorAcquireLockForAllGateways.c)
 *     StorReleaseLockForAllGateways @ 0x1400A6ED4 (StorReleaseLockForAllGateways.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1, char a2, char a3)
{
  char v3; // al
  bool v6; // si
  KSPIN_LOCK *v7; // rcx
  signed __int32 v8; // ebx
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *i; // r15
  KIRQL v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v21[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v22; // [rsp+70h] [rbp-48h]
  __int64 v23; // [rsp+80h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]

  v3 = 0;
  v6 = *(_DWORD *)(a1 + 968) > 1u;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v20, 0, sizeof(v20));
  if ( a2 )
  {
    v7 = *(KSPIN_LOCK **)(a1 + 960);
    if ( v7 )
    {
      if ( !v6 )
      {
        KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
        v8 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 988));
LABEL_5:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_6;
      }
      v3 = StorAcquireLockForAllGateways(a1);
    }
  }
  v8 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 988));
  if ( v3 )
  {
    if ( !v6 )
      goto LABEL_5;
    StorReleaseLockForAllGateways(a1);
  }
LABEL_6:
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    if ( !a3 )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &v20);
    for ( i = *(__int64 **)(a1 + 144); i != (__int64 *)(a1 + 144); i = (__int64 *)*i )
    {
      memset(v21, 0, sizeof(v21));
      v23 = 0LL;
      v22 = 0LL;
      if ( *(i - 4) && (unsigned __int8)RaidIsUnitControlSupported(i - 8, 31LL) )
      {
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(i - 4) + 24));
        --*(_DWORD *)(*(i - 4) + 84);
        v16 = *(i - 4);
        if ( (*(_DWORD *)(v16 + 80) & 0x1E0) == 0 && *(int *)(v16 + 84) <= 0 )
        {
          v17 = *(i - 5);
          *(_QWORD *)&v21[0] = 0x3800000038LL;
          DWORD2(v21[0]) = 3;
          WORD4(v22) = 1;
          HIDWORD(v22) = 4;
          WORD5(v22) = *(_WORD *)(v17 + 56);
          LOWORD(v23) = *((_WORD *)i + 20);
          BYTE2(v23) = *((_BYTE *)i + 42);
          if ( *(_DWORD *)v17 == 1094997074 )
          {
            v18 = v17 + 376;
          }
          else if ( *(_DWORD *)v17 == 1314275652 )
          {
            v18 = v17 + 168;
          }
          else
          {
            v18 = 0LL;
          }
          RaCallMiniportUnitControl(v18, 31LL, v21);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(*(i - 4) + 24), v15);
      }
    }
    if ( !a3 )
      KeReleaseInStackQueuedSpinLock(&v20);
  }
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v9 = *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v10 = *(_DWORD *)(a1 + 4932);
      if ( v10 )
      {
        v11 = *(_QWORD *)(a1 + 4936);
        if ( v11 )
        {
          v12 = v11 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4928)) % v10);
          *(_DWORD *)v12 = 7;
          *(_QWORD *)(v12 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v12 + 16) = v8;
          *(_QWORD *)(v12 + 8) = retaddr;
          *(_QWORD *)(v12 + 24) = a1;
          *(_QWORD *)(v12 + 32) = v9;
        }
      }
    }
  }
  return (unsigned int)v8;
}
