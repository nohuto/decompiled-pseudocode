/*
 * XREFs of AlpcpCancelMessage @ 0x1408AC700
 * Callers:
 *     AlpcpReceiveMessage @ 0x1408A88E0 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1408AB350 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408AC320 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1408ACCE0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14098AE9C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpFlushMessagesPort @ 0x14098BF34 (AlpcpFlushMessagesPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409F1EF0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 *     NtAlpcCancelMessage @ 0x140A29A50 (NtAlpcCancelMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140420490 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x1408AD120 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1408AD160 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpTransferQuotaMessage @ 0x1408AD278 (AlpcpTransferQuotaMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1408AD2C8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     PsReleaseProcessWakeCounter @ 0x1408B0AE0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpSignalPortAndUnlock @ 0x14098B14C (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x14098B1CC (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpRemoveMessagePort @ 0x1409EE6AC (AlpcpRemoveMessagePort.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // ebp
  int v6; // r13d
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // ebp
  BOOL v14; // r14d
  signed __int64 *v15; // r15
  __int64 *v16; // r13
  int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v26; // ebp
  __int64 *v27; // r15
  __int64 *v28; // r13
  volatile signed __int64 *v29; // rbp
  __int64 *v30; // rax
  __int64 *v31; // r14
  __int64 *v32; // r15
  int v33; // eax
  __int64 *v34; // rax
  __int64 *v35; // r14
  __int64 *v36; // r12
  __int64 *v37; // r13
  signed __int32 v38[8]; // [rsp+0h] [rbp-88h] BYREF
  int v39; // [rsp+90h] [rbp+8h]
  __int64 v40; // [rsp+98h] [rbp+10h]
  __int64 *v42; // [rsp+A8h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 40);
  v6 = a3;
  v7 = 0LL;
  v8 = (unsigned __int8)v3 & 0x80;
  v9 = v3 & 7;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = 0LL;
  v40 = v10;
  v39 = v9;
  v12 = 0LL;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
  {
    v26 = v3 & 0x78;
    v14 = v26 == 8;
    if ( !(_DWORD)v8 && v10 )
    {
      v27 = *(__int64 **)(a2 + 184);
      if ( v27 )
      {
        v28 = KeAbPreAcquire((__int64)(v27 - 2), 0LL);
        if ( _InterlockedCompareExchange64(v27 - 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v27 - 2, 0, v28, (unsigned __int64)(v27 - 2));
        if ( v28 )
          *((_BYTE *)v28 + 10) = 1;
        if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
        {
          if ( v26 == 8 )
          {
            v11 = v27[2];
            v12 = v11;
          }
          else
          {
            v11 = *v27;
            v12 = v27[1];
          }
          if ( v11 )
            v11 &= -(__int64)(ObReferenceObjectSafe(v11) != 0);
          if ( v12 )
            v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
        }
        if ( _InterlockedCompareExchange64(v27 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v27 - 2);
        KeAbPostRelease((ULONG_PTR)(v27 - 2));
        v14 = v26 == 8;
        goto LABEL_12;
      }
      v10 = *(_QWORD *)(a2 + 16);
    }
  }
  else
  {
    v13 = v3 & 0x78;
    v14 = 0;
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      LOBYTE(v14) = v13 == 16;
      if ( !(_DWORD)v8 )
      {
        v42 = *(__int64 **)(a1 + 16);
        v15 = v42 - 2;
        v16 = KeAbPreAcquire((__int64)(v42 - 2), 0LL);
        if ( _InterlockedCompareExchange64(v42 - 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v15, 0, v16, (unsigned __int64)v15);
        if ( v16 )
          *((_BYTE *)v16 + 10) = 1;
        if ( (*(_DWORD *)(a2 + 40) & 0x200) != 0 )
          goto LABEL_9;
        if ( v13 == 16 )
        {
          v11 = *v42;
          v12 = v42[1];
        }
        else
        {
          v11 = a1;
          v12 = a1;
        }
LABEL_87:
        if ( v11 )
          v11 &= -(__int64)(ObReferenceObjectSafe(v11) != 0);
        if ( v12 )
          v12 &= -(__int64)(ObReferenceObjectSafe(v12) != 0);
LABEL_9:
        if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v15);
        KeAbPostRelease((ULONG_PTR)v15);
LABEL_12:
        v9 = v39;
        v10 = v40;
        v6 = a3;
      }
    }
    else
    {
      LOBYTE(v14) = v13 == 8;
      if ( !(_DWORD)v8 )
      {
        v36 = *(__int64 **)(a1 + 16);
        v15 = v36 - 2;
        v37 = KeAbPreAcquire((__int64)(v36 - 2), 0LL);
        if ( _InterlockedCompareExchange64(v36 - 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v36 - 2, 0, v37, (unsigned __int64)(v36 - 2));
        if ( v37 )
          *((_BYTE *)v37 + 10) = 1;
        if ( (*(_DWORD *)(a2 + 40) & 0x200) != 0 )
          goto LABEL_9;
        if ( v13 == 8 )
        {
          v11 = v36[2];
          v12 = v11;
        }
        else
        {
          v11 = *v36;
          v12 = v36[1];
        }
        goto LABEL_87;
      }
    }
  }
  if ( !v14 )
  {
    if ( v10 && (v9 != 3 || (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    {
      v33 = 0;
      v18 = 0;
    }
    else
    {
      v33 = 1;
      v18 = 1073741870;
    }
    if ( (v6 & 1) != 0 && v33 )
      goto LABEL_30;
LABEL_18:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 244) = 0;
    *(_WORD *)(a2 + 244) |= 0xCu;
    *(_DWORD *)(a2 + 240) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v8, v7, 1LL);
    *(_WORD *)(a2 + 244) &= ~0x2000u;
    *(_DWORD *)(a2 + 40) |= 0x10200u;
    _InterlockedOr(v38, 0);
    AlpcpClearOwnerPortMessage(a2);
    AlpcpTransferQuotaMessage(a2);
    v20 = *(_QWORD *)(a2 + 208);
    if ( v20 )
    {
      PsReleaseProcessWakeCounter(v20, *(unsigned int *)(a2 + 264));
      *(_QWORD *)(a2 + 208) = 0LL;
    }
    v21 = *(_QWORD *)(a2 + 216);
    if ( v21 )
    {
      PsReleaseProcessWakeCounter(v21, *(unsigned int *)(a2 + 264));
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v22 = *(_QWORD *)(a2 + 32);
    if ( v22 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v22 + 1464), 0LL) == a2 )
      {
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_WORD *)(a2 - 30) -= 2;
        KeReleaseSemaphoreEx((volatile signed __int32 *)(v22 + 1304), 1, 1, v19, 0, 0LL);
      }
    }
    else if ( v11 && v12 )
    {
      if ( !v14 && (v6 & 2) == 0 )
      {
LABEL_29:
        v24 = *(_DWORD *)(a2 + 40);
        if ( (v24 & 0x2000) != 0 && (v24 & 7) == 3 )
          AlpcpRemoveMessageFromPendingQueue(a2);
        goto LABEL_30;
      }
      v32 = KeAbPreAcquire(v11 + 352, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v11 + 352), 0, v32, v11 + 352);
      if ( v32 )
        *((_BYTE *)v32 + 10) = 1;
      if ( (*(_DWORD *)(v11 + 416) & 0x40) != 0 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v11 + 352));
        KeAbPostRelease(v11 + 352);
      }
      else
      {
        *(_QWORD *)(a2 + 64) = v11;
        *(_QWORD *)(a2 + 56) = v12;
        ++*(_WORD *)(a2 - 30);
        *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v12 + 400));
        *(_QWORD *)(a2 + 128) = *(_QWORD *)(v12 + 56);
        AlpcpInsertMessageCanceledQueue(v11, a2);
        AlpcpSignalPortAndUnlock(v11);
      }
      v10 = v40;
    }
    if ( v14 && (v6 & 0x10000) != 0 && v10 )
    {
      v23 = *(_DWORD *)(a2 + 40) & 7;
      if ( v23 == 3 )
      {
        AlpcpRemoveMessageFromPendingQueue(a2);
      }
      else
      {
        if ( v23 == 4 )
        {
          v29 = (volatile signed __int64 *)(v10 + 200);
          v34 = KeAbPreAcquire(v10 + 200, 0LL);
          v35 = v34;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 200), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 200), v34, v10 + 200);
          if ( v35 )
            *((_BYTE *)v35 + 10) = 1;
          --*(_DWORD *)(v10 + 460);
          *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(a2 + 16) = 0LL;
          **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v29 = (volatile signed __int64 *)(v10 + 136);
          v30 = KeAbPreAcquire(v10 + 136, 0LL);
          v31 = v30;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 136), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 136), v30, v10 + 136);
          if ( v31 )
            *((_BYTE *)v31 + 10) = 1;
          AlpcpRemoveMessagePort(v10, a2);
        }
        if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v29);
        KeAbPostRelease((ULONG_PTR)v29);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_29;
  }
  if ( !v10 || v9 != 3 || (v17 = 1, (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    v17 = 0;
  v18 = 259;
  if ( (v6 & 1) == 0 || v17 )
    goto LABEL_18;
LABEL_30:
  *(_DWORD *)(a2 + 40) &= ~0x10000u;
  AlpcpUnlockMessage(a2);
  if ( v11 )
    ObfDereferenceObject((PVOID)v11);
  if ( v12 )
    ObfDereferenceObject((PVOID)v12);
  return v18;
}
