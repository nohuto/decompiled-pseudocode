/*
 * XREFs of AlpcpSendLegacySynchronousRequest @ 0x14088D3F8
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AlpcpLogWaitForReply @ 0x140742AB0 (AlpcpLogWaitForReply.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14088AD40 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpInsertMessageMainQueue @ 0x14088D2E0 (AlpcpInsertMessageMainQueue.c)
 *     AlpcpSetOwnerPortMessage @ 0x14088D3C0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x14088E650 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpAvailableBufferSize @ 0x140896380 (AlpcpAvailableBufferSize.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateMessage @ 0x14093F9C0 (AlpcpAllocateMessage.c)
 *     AlpcpCaptureMessageData @ 0x14093FCA0 (AlpcpCaptureMessageData.c)
 *     AlpcpLogSendMessage @ 0x140AA9904 (AlpcpLogSendMessage.c)
 */

__int64 __fastcall AlpcpSendLegacySynchronousRequest(__int64 a1, _WORD *a2, unsigned __int64 a3, __int64 a4)
{
  _WORD *v5; // r10
  __int64 v7; // rdx
  int v8; // ecx
  _DWORD *v9; // r14
  int v10; // edi
  signed __int32 v11; // eax
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rax
  size_t v14; // rdx
  __int64 v15; // rcx
  signed __int64 *v16; // r15
  _QWORD *v17; // rdi
  __int64 v18; // r14
  _QWORD *v19; // rax
  signed __int64 *v20; // rdi
  _QWORD *v21; // rcx
  _QWORD *v22; // rdi
  ULONG_PTR v23; // rcx
  struct _KTHREAD *v24; // rax
  ULONG_PTR v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  ULONG_PTR v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  __int64 result; // rax
  unsigned __int64 v36; // rax
  size_t v37; // rdx
  int v38; // r14d
  _WORD *v39; // rbx
  ULONG_PTR v40; // rcx
  char v41; // [rsp+20h] [rbp-D8h]
  int v42; // [rsp+24h] [rbp-D4h]
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD *v44; // [rsp+30h] [rbp-C8h]
  _WORD *v45; // [rsp+40h] [rbp-B8h]
  _WORD *v46; // [rsp+58h] [rbp-A0h]
  _QWORD *v47; // [rsp+60h] [rbp-98h]
  __int128 v48; // [rsp+68h] [rbp-90h] BYREF
  __int128 v49; // [rsp+78h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-68h]
  signed __int64 *v52; // [rsp+98h] [rbp-60h]
  __int128 v53; // [rsp+A0h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-48h]

  v41 = a4;
  v5 = a2;
  v46 = a2;
  v44 = (_QWORD *)a1;
  v45 = a2;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( (_BYTE)a4 )
  {
    v53 = 0LL;
    v54 = 0LL;
    v7 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v7 = a3;
    RtlCopyVolatileMemory(&v48, (const void *)v7, 0x28uLL);
    v5 = v46;
    LOBYTE(a4) = v41;
  }
  else
  {
    v48 = *(_OWORD *)a3;
    v49 = *(_OWORD *)(a3 + 16);
    v50 = *(_QWORD *)(a3 + 32);
  }
  if ( DWORD2(v49) )
    return AlpcpSendMessage(v5, a3, 0LL, a4);
  v8 = *(_DWORD *)(a1 + 416);
  if ( (v8 & 0x2000) == 0 || (v8 & 6) != 4 || (v8 & 0x38) != 0 || WORD3(v48) )
    return AlpcpSendMessage(v5, a3, 0LL, a4);
  if ( (unsigned __int64)WORD1(v48) > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  if ( (unsigned __int16)v48 >= (unsigned __int16)(v48 + 40)
    || (unsigned __int64)(unsigned __int16)v48 + 40 > WORD1(v48) )
  {
    return 3221225485LL;
  }
  WORD1(v48) = v48 + 40;
  v9 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
  BugCheckParameter2 = (ULONG_PTR)v9;
  if ( v9 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)v9);
    --*((_WORD *)v9 - 15);
    v10 = v9[66] & 0x7FFFFFFF;
    memset_0(v9, 0, 0x118uLL);
    v9[66] = v10;
    do
      v11 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v11 );
    *(_DWORD *)(BugCheckParameter2 + 272) = v11;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog();
LABEL_18:
    CurrentThread = KeGetCurrentThread();
    v12 = BugCheckParameter2;
    *(_OWORD *)(BugCheckParameter2 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    *(_DWORD *)(v12 + 240) = v48;
    *(_WORD *)(v12 + 244) = 8193;
    if ( v41 )
    {
      v36 = AlpcpAvailableBufferSize(v12, (__int16)v48);
      if ( v37 > v36 )
      {
        v38 = AlpcpCaptureMessageData(v12, v37, a3 + 40);
        v42 = v38;
      }
      else
      {
        memmove((void *)(v12 + 280), (const void *)(a3 + 40), v37);
        v38 = 0;
        v42 = 0;
      }
    }
    else
    {
      v13 = AlpcpAvailableBufferSize(v12, (__int16)v48);
      if ( v14 <= v13 )
      {
        memmove((void *)(v12 + 280), (const void *)(a3 + 40), v14);
        v42 = 0;
        goto LABEL_21;
      }
      v38 = AlpcpCaptureMessageData(v15, v14, a3 + 40);
      v42 = v38;
    }
    if ( v38 < 0 )
    {
LABEL_58:
      if ( v12 )
        AlpcpUnlockMessage(v12);
      return (unsigned int)v38;
    }
LABEL_21:
    v47 = *(_QWORD **)(a1 + 16);
    v16 = v47 - 2;
    v52 = v47 - 2;
    v17 = KeAbPreAcquire((__int64)(v47 - 2), 0LL);
    if ( _InterlockedCompareExchange64(v16, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v16, 0, v17, (__int64)v16);
    if ( v17 )
      *((_BYTE *)v17 + 10) = 1;
    v18 = *(_QWORD *)(a1 + 424);
    v19 = *(_QWORD **)(a1 + 432);
    v44 = v19;
    if ( v18 && v19 )
    {
      v20 = v19 + 44;
      v21 = KeAbPreAcquire((__int64)(v19 + 44), 0LL);
      v45 = v21;
      if ( _InterlockedCompareExchange64(v20, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v20, 0, v21, (__int64)v20);
        v21 = v45;
      }
      if ( v21 )
        *((_BYTE *)v21 + 10) = 1;
      if ( (v44[52] & 0x20) != 0 )
      {
        v42 = -1073741769;
        if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v20);
        v40 = (ULONG_PTR)v20;
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 120) = v44[7];
        if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v20);
        KeAbPostRelease((ULONG_PTR)v20);
        v22 = KeAbPreAcquire(v18 + 352, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 352), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)(v18 + 352), 0, v22, v18 + 352);
        if ( v22 )
          *((_BYTE *)v22 + 10) = 1;
        if ( (*(_DWORD *)(v18 + 416) & 0x20) != 0 )
        {
          v42 = -1073741769;
        }
        else
        {
          v23 = BugCheckParameter2;
          v45 = (_WORD *)(BugCheckParameter2 - 30);
          *v45 += 3;
          v24 = CurrentThread;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v23);
          v25 = BugCheckParameter2;
          *(_QWORD *)(BugCheckParameter2 + 32) = v24;
          AlpcpSetOwnerPortMessage(v25, (void *)a1);
          v26 = v47;
          *(_QWORD *)(v25 + 184) = v47;
          *(_QWORD *)(v25 + 192) = *v26;
          *((_QWORD *)v46 + 1) = v25;
          if ( AlpcpLogEnabled )
          {
            AlpcpLogSendMessage(v25);
            if ( AlpcpLogEnabled )
              AlpcpLogWaitForReply(v25);
          }
          v27 = 0LL;
          v44 = 0LL;
          if ( *(_QWORD *)(v18 + 232) != v18 + 232 )
          {
            v28 = KeAbPreAcquire(v18 + 224, 0LL);
            v29 = v28;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 224), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v18 + 224), (__int64)v28, v18 + 224);
            if ( v29 )
              *((_BYTE *)v29 + 10) = 1;
            v30 = *(_QWORD **)(v18 + 232);
            v47 = v30;
            if ( v30 != (_QWORD *)(v18 + 232) )
            {
              v44 = v30 - 185;
              v31 = BugCheckParameter2;
              AlpcpInsertMessagePendingQueue(v18, BugCheckParameter2);
              ++*v45;
              *(_DWORD *)(v31 + 40) |= 0x2000u;
              v44[184] = v31;
              v32 = v47;
              v33 = *v47;
              v34 = (_QWORD *)v47[1];
              if ( *(_QWORD **)(*v47 + 8LL) != v47 || (_QWORD *)*v34 != v47 )
                __fastfail(3u);
              *v34 = v33;
              *(_QWORD *)(v33 + 8) = v34;
              *v32 = 0LL;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v18 + 224));
            KeAbPostRelease(v18 + 224);
            v25 = BugCheckParameter2;
            v16 = v52;
            v27 = v44;
          }
          v39 = v46;
          *((_QWORD *)v46 + 4) = 0LL;
          *((_QWORD *)v39 + 3) = 0LL;
          *((_QWORD *)v39 + 5) = 0LL;
          if ( v27 )
          {
            *((_QWORD *)v39 + 3) = v27;
          }
          else
          {
            AlpcpInsertMessageMainQueue(v18, v25);
            if ( (*(_DWORD *)(v18 + 416) & 0x200) != 0 )
            {
              PsReferenceSiloContext((void *)v18);
              *((_QWORD *)v39 + 4) = v18;
              *((_BYTE *)v39 + 58) = 0;
            }
          }
          AlpcpUnlockMessage(v25);
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v18 + 352));
        v40 = v18 + 352;
      }
      KeAbPostRelease(v40);
    }
    else
    {
      v42 = -1073741769;
    }
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v16);
    KeAbPostRelease((ULONG_PTR)v16);
    v12 = BugCheckParameter2;
    v38 = v42;
    if ( v42 >= 0 )
      return (unsigned int)v38;
    goto LABEL_58;
  }
  result = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0LL);
  if ( (int)result >= 0 )
    goto LABEL_18;
  return result;
}
