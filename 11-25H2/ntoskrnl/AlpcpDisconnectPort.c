/*
 * XREFs of AlpcpDisconnectPort @ 0x14098B448
 * Callers:
 *     NtAlpcDisconnectPort @ 0x14098B290 (NtAlpcDisconnectPort.c)
 *     AlpcpDoPortCleanup @ 0x14098B834 (AlpcpDoPortCleanup.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140420490 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpSignalPortAndUnlock @ 0x14098B14C (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x14098B1CC (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14098BD4C (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14098BD84 (AlpcpLockBlobExclusive.c)
 *     AlpcpWalkConnectionList @ 0x14098C700 (AlpcpWalkConnectionList.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14098C750 (AlpcpCancelMessagesByRequestor.c)
 */

__int64 __fastcall AlpcpDisconnectPort(char *Object, char a2)
{
  __int64 *v2; // r12
  __int64 *v5; // rax
  __int64 *v6; // rdi
  int v7; // eax
  volatile signed __int64 *v8; // rdi
  __int64 v9; // r15
  PVOID v10; // r14
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // rdi
  ULONG_PTR v16; // rdi
  __int64 *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r8
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h]

  v2 = (__int64 *)*((_QWORD *)Object + 2);
  v20 = 0LL;
  AlpcpLockBlobExclusive(v2);
  v5 = KeAbPreAcquire((__int64)(Object + 352), 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Object + 88, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)Object + 44, v5, (__int64)(Object + 352));
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( (a2 & 1) != 0 )
    *((_DWORD *)Object + 104) |= 0x80u;
  v7 = *((_DWORD *)Object + 104);
  v8 = (volatile signed __int64 *)(Object + 352);
  if ( (v7 & 0x20) == 0 )
  {
    *((_DWORD *)Object + 104) = v7 | 0x20;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
      AlpcpWalkConnectionList(Object);
    if ( ((*((_DWORD *)Object + 104) >> 1) & 3) == 1 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( ((*((_DWORD *)Object + 104) >> 1) & 3) == 2 )
      {
        v9 = *v2;
        v10 = Object;
      }
      else
      {
        v9 = v2[2];
        v10 = (PVOID)*v2;
      }
      v21 = (__int64)v10;
      if ( v9 )
        v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
      if ( !v10 || ObReferenceObjectSafe((__int64)v10) )
        goto LABEL_20;
    }
    v21 = 0LL;
    v10 = 0LL;
LABEL_20:
    AlpcpUnlockBlobUncachedExclusive(v2);
    if ( v9 )
    {
      *((_QWORD *)&v20 + 1) = &v20;
      *(_QWORD *)&v20 = &v20;
      do
      {
        v11 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v9, (int)v9 + 144, 1, (__int64)&v20);
        v12 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v9, (int)v9 + 160, 2, (__int64)&v20) | v11;
        v13 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v9, (int)v9 + 184, 3, (__int64)&v20) | v12;
      }
      while ( v13 | (unsigned int)AlpcpCancelMessagesByRequestor((_DWORD)Object, v9, (int)v9 + 208, 4, (__int64)&v20) );
      ObfDereferenceObject((PVOID)v9);
      v10 = (PVOID)v21;
      while ( 1 )
      {
        v14 = v20;
        if ( (__int128 *)v20 == &v20 )
          break;
        *(_QWORD *)&v20 = *(_QWORD *)v20;
        v16 = v14 - 80;
        *(_QWORD *)(v20 + 8) = &v20;
        AlpcpLockForCachedReferenceBlob(v16);
        if ( v21 )
        {
          v17 = KeAbPreAcquire(v21 + 352, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 352), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v21 + 352), 0, v17, v21 + 352);
          if ( v17 )
            *((_BYTE *)v17 + 10) = 1;
          if ( (*(_DWORD *)(v21 + 416) & 0x40) != 0 )
          {
            --*(_WORD *)(v16 - 30);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 352), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v21 + 352));
            KeAbPostRelease(v21 + 352);
          }
          else
          {
            *(_DWORD *)(v16 + 72) = _InterlockedIncrement((volatile signed __int32 *)Object + 100);
            *(_QWORD *)(v16 + 128) = *((_QWORD *)Object + 7);
            *(_QWORD *)(v16 + 56) = Object;
            *(_QWORD *)(v16 + 64) = v21;
            AlpcpInsertMessageCanceledQueue(v21, v16);
            AlpcpSignalPortAndUnlock(v21, v18, v19);
          }
        }
        else
        {
          --*(_WORD *)(v16 - 30);
        }
        AlpcpUnlockMessage(v16);
      }
    }
    if ( v10 )
      ObfDereferenceObject(v10);
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 352));
  AlpcpUnlockBlobUncachedExclusive(v2);
  return 3221225527LL;
}
