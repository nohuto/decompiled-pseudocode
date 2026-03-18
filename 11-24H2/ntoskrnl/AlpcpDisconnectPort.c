/*
 * XREFs of AlpcpDisconnectPort @ 0x14088C638
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14088B7F4 (AlpcpDoPortCleanup.c)
 *     NtAlpcDisconnectPort @ 0x140A42220 (NtAlpcDisconnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafe @ 0x14041D310 (ObReferenceObjectSafe.c)
 *     AlpcpWalkConnectionList @ 0x14088C9A4 (AlpcpWalkConnectionList.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14088CA00 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x1408963A0 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14089666C (AlpcpLockBlobExclusive.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x140A562D4 (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpSignalPortAndUnlock @ 0x140A5E8B4 (AlpcpSignalPortAndUnlock.c)
 */

__int64 __fastcall AlpcpDisconnectPort(__int64 a1, char a2)
{
  __int64 *v2; // r12
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  int v7; // eax
  volatile signed __int64 *v8; // rdi
  __int64 v9; // r15
  signed __int64 *v10; // r14
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // rdi
  ULONG_PTR v16; // rdi
  _QWORD *v17; // r13
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF
  signed __int64 *v19; // [rsp+70h] [rbp+30h]

  v2 = *(__int64 **)(a1 + 16);
  v18 = 0LL;
  AlpcpLockBlobExclusive(v2);
  v5 = KeAbPreAcquire(a1 + 352, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), (__int64)v5, a1 + 352);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(a1 + 416) |= 0x80u;
  v7 = *(_DWORD *)(a1 + 416);
  v8 = (volatile signed __int64 *)(a1 + 352);
  if ( (v7 & 0x20) == 0 )
  {
    *(_DWORD *)(a1 + 416) = v7 | 0x20;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
      AlpcpWalkConnectionList(a1);
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
      {
        v9 = *v2;
        v10 = (signed __int64 *)a1;
      }
      else
      {
        v9 = v2[2];
        v10 = (signed __int64 *)*v2;
      }
      v19 = v10;
      if ( v9 )
        v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
      if ( !v10 || ObReferenceObjectSafe((__int64)v10) )
        goto LABEL_20;
    }
    v19 = 0LL;
    v10 = 0LL;
LABEL_20:
    AlpcpUnlockBlobUncachedExclusive(v2);
    if ( v9 )
    {
      *((_QWORD *)&v18 + 1) = &v18;
      *(_QWORD *)&v18 = &v18;
      do
      {
        v11 = AlpcpCancelMessagesByRequestor(a1, v9, (int)v9 + 144, 1, (__int64)&v18);
        v12 = AlpcpCancelMessagesByRequestor(a1, v9, (int)v9 + 160, 2, (__int64)&v18) | v11;
        v13 = AlpcpCancelMessagesByRequestor(a1, v9, (int)v9 + 184, 3, (__int64)&v18) | v12;
      }
      while ( v13 | (unsigned int)AlpcpCancelMessagesByRequestor(a1, v9, (int)v9 + 208, 4, (__int64)&v18) );
      ObfDereferenceObject((PVOID)v9);
      v10 = v19;
      while ( 1 )
      {
        v14 = v18;
        if ( (__int128 *)v18 == &v18 )
          break;
        *(_QWORD *)&v18 = *(_QWORD *)v18;
        v16 = v14 - 80;
        *(_QWORD *)(v18 + 8) = &v18;
        AlpcpLockForCachedReferenceBlob(v16);
        if ( v19 )
        {
          v17 = KeAbPreAcquire((__int64)(v19 + 44), 0LL);
          if ( _InterlockedCompareExchange64(v19 + 44, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v19 + 44, 0, v17, (__int64)(v19 + 44));
          if ( v17 )
            *((_BYTE *)v17 + 10) = 1;
          if ( (v19[52] & 0x40) != 0 )
          {
            --*(_WORD *)(v16 - 30);
            if ( _InterlockedCompareExchange64(v19 + 44, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v19 + 44);
            KeAbPostRelease((ULONG_PTR)(v19 + 44));
          }
          else
          {
            *(_DWORD *)(v16 + 72) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 400));
            *(_QWORD *)(v16 + 128) = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(v16 + 56) = a1;
            *(_QWORD *)(v16 + 64) = v19;
            AlpcpInsertMessageCanceledQueue(v19, v16);
            AlpcpSignalPortAndUnlock(v19);
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
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpUnlockBlobUncachedExclusive(v2);
  return 3221225527LL;
}
