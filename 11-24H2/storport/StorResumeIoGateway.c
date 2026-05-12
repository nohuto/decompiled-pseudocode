/*
 * XREFs of StorResumeIoGateway @ 0x140028340
 * Callers:
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     StorAcquireLockForAllGateways @ 0x1400A6238 (StorAcquireLockForAllGateways.c)
 *     StorReleaseLockForAllGateways @ 0x1400A6ED4 (StorReleaseLockForAllGateways.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall StorResumeIoGateway(__int64 a1, char a2, char a3)
{
  char v3; // al
  bool v6; // si
  KSPIN_LOCK *v7; // rcx
  unsigned __int32 v8; // ebx
  __int64 *v10; // r15
  __int64 *i; // rdi
  KIRQL v12; // bp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+38h] [rbp-80h] BYREF
  __int128 v18; // [rsp+50h] [rbp-68h]
  __int128 v19; // [rsp+60h] [rbp-58h]
  __int128 v20; // [rsp+70h] [rbp-48h]
  __int64 v21; // [rsp+80h] [rbp-38h]

  v3 = 0;
  v6 = *(_DWORD *)(a1 + 968) > 1u;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v17, 0, sizeof(v17));
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
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &v17);
    v10 = (__int64 *)(a1 + 144);
    for ( i = *(__int64 **)(a1 + 144); i != v10; i = (__int64 *)*i )
    {
      v18 = 0LL;
      v21 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      if ( *(i - 4) && RaidIsUnitControlSupported((__int64)(i - 8), 31) )
      {
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(i - 4) + 24));
        --*(_DWORD *)(*(i - 4) + 84);
        v13 = *(i - 4);
        if ( (*(_DWORD *)(v13 + 80) & 0x1E0) == 0 && *(int *)(v13 + 84) <= 0 )
        {
          v14 = *(i - 5);
          *(_QWORD *)&v18 = 0x3800000038LL;
          DWORD2(v18) = 3;
          WORD4(v20) = 1;
          HIDWORD(v20) = 4;
          WORD5(v20) = *(_WORD *)(v14 + 56);
          LOWORD(v21) = *((_WORD *)i + 20);
          BYTE2(v21) = *((_BYTE *)i + 42);
          if ( *(_DWORD *)v14 == 1094997074 )
          {
            v15 = v14 + 376;
          }
          else if ( *(_DWORD *)v14 == 1314275652 )
          {
            v15 = v14 + 168;
          }
          else
          {
            v15 = 0LL;
          }
          RaCallMiniportUnitControl(v15);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(*(i - 4) + 24), v12);
      }
    }
    if ( !a3 )
      KeReleaseInStackQueuedSpinLock(&v17);
  }
  return v8;
}
