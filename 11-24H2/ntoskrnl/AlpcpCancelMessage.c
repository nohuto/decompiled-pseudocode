/*
 * XREFs of AlpcpCancelMessage @ 0x14089C73C
 * Callers:
 *     AlpcpFlushMessagesByRequestor @ 0x14088E378 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpFlushMessagesPort @ 0x14088EE5C (AlpcpFlushMessagesPort.c)
 *     NtAlpcCancelMessage @ 0x140891590 (NtAlpcCancelMessage.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14089BF40 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReceiveLegacyMessage @ 0x14089D780 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x1408A1800 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140993FB0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409E5CE0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     ObReferenceObjectSafe @ 0x140411C00 (ObReferenceObjectSafe.c)
 *     AlpcpSignalPortAndUnlock @ 0x14088E594 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x14088E614 (AlpcpInsertMessageCanceledQueue.c)
 *     PsReleaseProcessWakeCounter @ 0x140898050 (PsReleaseProcessWakeCounter.c)
 *     AlpcpClearOwnerPortMessage @ 0x14089C36C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14089C3A0 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpRemoveMessagePort @ 0x1409E2F2C (AlpcpRemoveMessagePort.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140A15680 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpTransferQuotaMessage @ 0x140A212C4 (AlpcpTransferQuotaMessage.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // ebp
  int v6; // r13d
  int v7; // edx
  int v8; // ecx
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // ebp
  BOOL v13; // r14d
  signed __int64 *v14; // r15
  char *v15; // r13
  int v16; // ebp
  __int64 *v17; // r15
  char *v18; // r13
  int v19; // eax
  unsigned int v20; // r12d
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  volatile signed __int64 *v28; // rbp
  char *v29; // rax
  char *v30; // r14
  char *v31; // r15
  int v32; // eax
  char *v33; // rax
  char *v34; // r14
  __int64 *v35; // r12
  char *v36; // r13
  signed __int32 v37[8]; // [rsp+0h] [rbp-88h] BYREF
  int v38; // [rsp+90h] [rbp+8h]
  __int64 v39; // [rsp+98h] [rbp+10h]
  __int64 *v41; // [rsp+A8h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 40);
  v6 = a3;
  v7 = v3 & 0x80;
  v8 = v3 & 7;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = 0LL;
  v39 = v9;
  v38 = v8;
  v11 = 0LL;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 1 )
  {
    v12 = v3 & 0x78;
    v13 = 0;
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      LOBYTE(v13) = v12 == 16;
      if ( v7 )
        goto LABEL_27;
      v41 = *(__int64 **)(a1 + 16);
      v14 = v41 - 2;
      v15 = (char *)KeAbPreAcquire((__int64)(v41 - 2), 0LL);
      if ( _InterlockedCompareExchange64(v41 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v14, 0, v15, (__int64)v14);
      if ( v15 )
        v15[10] = 1;
      if ( (*(_DWORD *)(a2 + 40) & 0x200) != 0 )
        goto LABEL_87;
      if ( v12 == 16 )
      {
        v10 = *v41;
        v11 = v41[1];
      }
      else
      {
        v10 = a1;
        v11 = a1;
      }
    }
    else
    {
      LOBYTE(v13) = v12 == 8;
      if ( v7 )
        goto LABEL_27;
      v35 = *(__int64 **)(a1 + 16);
      v14 = v35 - 2;
      v36 = (char *)KeAbPreAcquire((__int64)(v35 - 2), 0LL);
      if ( _InterlockedCompareExchange64(v35 - 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v35 - 2, 0, v36, (__int64)(v35 - 2));
      if ( v36 )
        v36[10] = 1;
      if ( (*(_DWORD *)(a2 + 40) & 0x200) != 0 )
        goto LABEL_87;
      if ( v12 == 8 )
      {
        v10 = v35[2];
        v11 = v10;
      }
      else
      {
        v10 = *v35;
        v11 = v35[1];
      }
    }
    if ( v10 )
      v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
    if ( v11 )
      v11 &= -(__int64)(ObReferenceObjectSafe(v11) != 0);
LABEL_87:
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v14);
    KeAbPostRelease((ULONG_PTR)v14);
LABEL_110:
    v8 = v38;
    v9 = v39;
    v6 = a3;
    goto LABEL_27;
  }
  v16 = v3 & 0x78;
  v13 = v16 == 8;
  if ( !v7 && v9 )
  {
    v17 = *(__int64 **)(a2 + 184);
    if ( !v17 )
    {
      v9 = *(_QWORD *)(a2 + 16);
      goto LABEL_27;
    }
    v18 = (char *)KeAbPreAcquire((__int64)(v17 - 2), 0LL);
    if ( _InterlockedCompareExchange64(v17 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v17 - 2, 0, v18, (__int64)(v17 - 2));
    if ( v18 )
      v18[10] = 1;
    if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
    {
      if ( v16 == 8 )
      {
        v10 = v17[2];
        v11 = v10;
      }
      else
      {
        v10 = *v17;
        v11 = v17[1];
      }
      if ( v10 )
        v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      if ( v11 )
        v11 &= -(__int64)(ObReferenceObjectSafe(v11) != 0);
    }
    if ( _InterlockedCompareExchange64(v17 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v17 - 2);
    KeAbPostRelease((ULONG_PTR)(v17 - 2));
    v13 = v16 == 8;
    goto LABEL_110;
  }
LABEL_27:
  if ( !v13 )
  {
    if ( v9 && (v8 != 3 || (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    {
      v32 = 0;
      v20 = 0;
    }
    else
    {
      v32 = 1;
      v20 = 1073741870;
    }
    if ( (v6 & 1) != 0 && v32 )
      goto LABEL_44;
LABEL_32:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 244) = 0;
    *(_WORD *)(a2 + 244) |= 0xCu;
    *(_DWORD *)(a2 + 240) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2);
    *(_WORD *)(a2 + 244) &= ~0x2000u;
    *(_DWORD *)(a2 + 40) |= 0x10200u;
    _InterlockedOr(v37, 0);
    AlpcpClearOwnerPortMessage(a2);
    AlpcpTransferQuotaMessage(a2);
    v22 = *(_QWORD *)(a2 + 208);
    if ( v22 )
    {
      PsReleaseProcessWakeCounter(v22);
      *(_QWORD *)(a2 + 208) = 0LL;
    }
    v23 = *(_QWORD *)(a2 + 216);
    if ( v23 )
    {
      PsReleaseProcessWakeCounter(v23);
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v24 = *(_QWORD *)(a2 + 32);
    if ( v24 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v24 + 1464), 0LL) == a2 )
      {
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_WORD *)(a2 - 30) -= 2;
        KeReleaseSemaphoreEx((volatile signed __int32 *)(v24 + 1304), 1LL, 1, v21, 0, 0LL);
      }
    }
    else if ( v10 && v11 )
    {
      if ( !v13 && (v6 & 2) == 0 )
      {
LABEL_43:
        v26 = *(_DWORD *)(a2 + 40);
        if ( (v26 & 0x2000) != 0 && (v26 & 7) == 3 )
          AlpcpRemoveMessageFromPendingQueue(a2);
        goto LABEL_44;
      }
      v31 = (char *)KeAbPreAcquire(v10 + 352, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v10 + 352), 0, v31, v10 + 352);
      if ( v31 )
        v31[10] = 1;
      if ( (*(_DWORD *)(v10 + 416) & 0x40) != 0 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v10 + 352));
        KeAbPostRelease(v10 + 352);
      }
      else
      {
        *(_QWORD *)(a2 + 64) = v10;
        *(_QWORD *)(a2 + 56) = v11;
        ++*(_WORD *)(a2 - 30);
        *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v11 + 400));
        *(_QWORD *)(a2 + 128) = *(_QWORD *)(v11 + 56);
        AlpcpInsertMessageCanceledQueue(v10, a2);
        AlpcpSignalPortAndUnlock(v10);
      }
      v9 = v39;
    }
    if ( v13 && (v6 & 0x10000) != 0 && v9 )
    {
      v25 = *(_DWORD *)(a2 + 40) & 7;
      if ( v25 == 3 )
      {
        AlpcpRemoveMessageFromPendingQueue(a2);
      }
      else
      {
        if ( v25 == 4 )
        {
          v28 = (volatile signed __int64 *)(v9 + 200);
          v33 = (char *)KeAbPreAcquire(v9 + 200, 0LL);
          v34 = v33;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 200), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 200), v33, v9 + 200);
          if ( v34 )
            v34[10] = 1;
          --*(_DWORD *)(v9 + 460);
          *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(a2 + 16) = 0LL;
          **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v28 = (volatile signed __int64 *)(v9 + 136);
          v29 = (char *)KeAbPreAcquire(v9 + 136, 0LL);
          v30 = v29;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 136), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 136), v29, v9 + 136);
          if ( v30 )
            v30[10] = 1;
          AlpcpRemoveMessagePort(v9, a2);
        }
        if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v28);
        KeAbPostRelease((ULONG_PTR)v28);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_43;
  }
  if ( !v9 || v8 != 3 || (v19 = 1, (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    v19 = 0;
  v20 = 259;
  if ( (v6 & 1) == 0 || v19 )
    goto LABEL_32;
LABEL_44:
  *(_DWORD *)(a2 + 40) &= ~0x10000u;
  AlpcpUnlockMessage(a2);
  if ( v10 )
    ObfDereferenceObject((PVOID)v10);
  if ( v11 )
    ObfDereferenceObject((PVOID)v11);
  return v20;
}
