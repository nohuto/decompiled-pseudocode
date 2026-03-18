/*
 * XREFs of SshpDereferenceBlocker @ 0x14047CBC0
 * Callers:
 *     SleepstudyHelperDestroyBlocker @ 0x14047CB90 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperSetBlockerParentHandle @ 0x1404852A0 (SleepstudyHelperSetBlockerParentHandle.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A1A000 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpPurgeBlockersWorker @ 0x140A3D940 (SshpPurgeBlockersWorker.c)
 *     SshNotifySystemSessionChange @ 0x140A489D8 (SshNotifySystemSessionChange.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SshpBlockerActiveDereference @ 0x14044E118 (SshpBlockerActiveDereference.c)
 *     SshpWorkItemQueue @ 0x14047CD9C (SshpWorkItemQueue.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409F4D94 (CmpVolumeManagerLockContextListExclusive.c)
 *     SshpUnlinkBlockerFromLibrary @ 0x140A3DB78 (SshpUnlinkBlockerFromLibrary.c)
 *     SshpFreeBlockerEntry @ 0x140A3DC0C (SshpFreeBlockerEntry.c)
 */

void __fastcall SshpDereferenceBlocker(PKSPIN_LOCK SpinLock, int a2, char a3)
{
  KIRQL v6; // al
  KIRQL v7; // di
  int v9; // edx
  int v10; // ecx
  char v11; // si
  KSPIN_LOCK v12; // rcx
  KSPIN_LOCK *v13; // r14
  volatile signed __int64 *v14; // rsi
  volatile signed __int64 *v15; // rdi
  KIRQL v16; // al
  int v17; // r15d
  KSPIN_LOCK v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx

  while ( 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    v7 = v6;
    if ( !a2 )
      break;
LABEL_8:
    v10 = *((_DWORD *)SpinLock + 4);
    v11 = 0;
    *((_DWORD *)SpinLock + 4) = v10 - 1;
    if ( v10 == 1 )
    {
      *((_DWORD *)SpinLock + 4) = 1;
      if ( !a3 || v7 )
      {
        *((_DWORD *)SpinLock + 2) |= 8u;
        SshpWorkItemQueue(&SshpPurgeBlockersWorkItem);
      }
      else
      {
        v11 = 1;
      }
    }
    KeReleaseSpinLock(SpinLock, v7);
    if ( v11 )
    {
      v12 = SpinLock[38];
      v13 = (KSPIN_LOCK *)SpinLock[37];
      v14 = (volatile signed __int64 *)(*(_QWORD *)(v12 + 32) + 16LL);
      v15 = (volatile signed __int64 *)(&SshpBlockerCollections + 6 * *(int *)(v12 + 40));
      CmpVolumeManagerLockContextListExclusive(v14);
      v16 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v17 = *((_DWORD *)SpinLock + 4);
      KeReleaseSpinLock(SpinLock, v16);
      if ( v17 == 1 )
        SshpUnlinkBlockerFromLibrary(SpinLock);
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      if ( v17 == 1 )
      {
        CmpVolumeManagerLockContextListExclusive(v15);
        v18 = SpinLock[38] + 16;
        v19 = *(_QWORD *)v18;
        if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 || (v20 = *(_QWORD **)(SpinLock[38] + 24), *v20 != v18) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v15);
        KeAbPostRelease((ULONG_PTR)v15);
        SshpFreeBlockerEntry(SpinLock);
        SpinLock = v13;
        if ( v13 )
          continue;
      }
    }
    return;
  }
  if ( (*((_DWORD *)SpinLock + 3))-- == 1 )
  {
    v9 = *((_DWORD *)SpinLock + 5) - 1;
    if ( *((int *)SpinLock + 6) <= 0 )
      v9 = *((_DWORD *)SpinLock + 5);
    if ( v9 )
      SshpBlockerActiveDereference((__int64)SpinLock, v9);
    a2 = 1;
    goto LABEL_8;
  }
  KeReleaseSpinLock(SpinLock, v6);
}
