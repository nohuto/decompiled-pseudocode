/*
 * XREFs of AlpcpSendLegacySynchronousRequest @ 0x14098D31C
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AlpcpLogWaitForReply @ 0x140736A90 (AlpcpLogWaitForReply.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpAvailableBufferSize @ 0x1408AC6E0 (AlpcpAvailableBufferSize.c)
 *     AlpcpCaptureMessageData @ 0x1408AE9B0 (AlpcpCaptureMessageData.c)
 *     AlpcpAllocateMessage @ 0x1408B07D0 (AlpcpAllocateMessage.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1408B09DC (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpSetOwnerPortMessage @ 0x14098DA20 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpInsertMessageMainQueue @ 0x14098DA60 (AlpcpInsertMessageMainQueue.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14098E690 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogSendMessage @ 0x140AA48A4 (AlpcpLogSendMessage.c)
 */

__int64 __fastcall AlpcpSendLegacySynchronousRequest(__int64 a1, __int64 *a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // r10
  __int64 v7; // rdx
  int v8; // ecx
  _DWORD *v9; // r14
  int v10; // edi
  signed __int32 v11; // eax
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rax
  size_t v15; // rdx
  __int64 v16; // rcx
  signed __int64 *v17; // r15
  __int64 *v18; // rdi
  __int64 v19; // r14
  _QWORD *v20; // rax
  signed __int64 *v21; // rdi
  __int64 *v22; // rcx
  __int64 *v23; // rdi
  ULONG_PTR v24; // rcx
  struct _KTHREAD *v25; // rax
  ULONG_PTR v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  __int64 *v29; // rax
  __int64 *v30; // rdi
  _QWORD *v31; // rax
  ULONG_PTR v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 result; // rax
  __int64 v37; // rbx
  ULONG_PTR v38; // rcx
  int v39; // r14d
  unsigned __int64 v40; // rax
  size_t v41; // rdx
  char v42; // [rsp+20h] [rbp-D8h]
  int v43; // [rsp+24h] [rbp-D4h]
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD *v45; // [rsp+30h] [rbp-C8h]
  __int64 *v46; // [rsp+40h] [rbp-B8h]
  __int64 v47; // [rsp+58h] [rbp-A0h]
  _QWORD *v48; // [rsp+60h] [rbp-98h]
  __int128 v49; // [rsp+68h] [rbp-90h] BYREF
  __int128 v50; // [rsp+78h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-68h]
  signed __int64 *v53; // [rsp+98h] [rbp-60h]
  __int128 v54; // [rsp+A0h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-48h]

  v42 = a4;
  v5 = (__int64)a2;
  v47 = (__int64)a2;
  v45 = (_QWORD *)a1;
  v46 = a2;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( a4 )
  {
    v54 = 0LL;
    v55 = 0LL;
    v7 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v7 = a3;
    RtlCopyVolatileMemory(&v49, (const void *)v7, 0x28uLL);
    v5 = v47;
    a4 = v42;
  }
  else
  {
    v49 = *(_OWORD *)a3;
    v50 = *(_OWORD *)(a3 + 16);
    v51 = *(_QWORD *)(a3 + 32);
  }
  if ( DWORD2(v50) )
    return AlpcpSendMessage(v5, (__m256i *)a3, 0LL, a4);
  v8 = *(_DWORD *)(a1 + 416);
  if ( (v8 & 0x2000) == 0 || (v8 & 6) != 4 || (v8 & 0x38) != 0 || WORD3(v49) )
    return AlpcpSendMessage(v5, (__m256i *)a3, 0LL, a4);
  if ( (unsigned __int64)WORD1(v49) > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  if ( (unsigned __int16)v49 >= (unsigned __int16)(v49 + 40)
    || (unsigned __int64)(unsigned __int16)v49 + 40 > WORD1(v49) )
  {
    return 3221225485LL;
  }
  WORD1(v49) = v49 + 40;
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
    v12 = BugCheckParameter2;
    *(_DWORD *)(BugCheckParameter2 + 272) = v11;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v12);
LABEL_18:
    CurrentThread = KeGetCurrentThread();
    v13 = BugCheckParameter2;
    *(_OWORD *)(BugCheckParameter2 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    *(_DWORD *)(v13 + 240) = v49;
    *(_WORD *)(v13 + 244) = 8193;
    if ( v42 )
    {
      v40 = AlpcpAvailableBufferSize(v13);
      if ( v41 > v40 )
      {
        v39 = AlpcpCaptureMessageData(v13, v41, (char *)(a3 + 40));
        v43 = v39;
      }
      else
      {
        memmove((void *)(v13 + 280), (const void *)(a3 + 40), v41);
        v39 = 0;
        v43 = 0;
      }
    }
    else
    {
      v14 = AlpcpAvailableBufferSize(v13);
      if ( v15 <= v14 )
      {
        memmove((void *)(v13 + 280), (const void *)(a3 + 40), v15);
        v43 = 0;
        goto LABEL_21;
      }
      v39 = AlpcpCaptureMessageData(v16, v15, (char *)(a3 + 40));
      v43 = v39;
    }
    if ( v39 < 0 )
    {
LABEL_72:
      if ( v13 )
        AlpcpUnlockMessage(v13);
      return (unsigned int)v39;
    }
LABEL_21:
    v48 = *(_QWORD **)(a1 + 16);
    v17 = v48 - 2;
    v53 = v48 - 2;
    v18 = KeAbPreAcquire((__int64)(v48 - 2), 0LL);
    if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v17, 0, v18, (unsigned __int64)v17);
    if ( v18 )
      *((_BYTE *)v18 + 10) = 1;
    v19 = *(_QWORD *)(a1 + 424);
    v20 = *(_QWORD **)(a1 + 432);
    v45 = v20;
    if ( v19 && v20 )
    {
      v21 = v20 + 44;
      v22 = KeAbPreAcquire((__int64)(v20 + 44), 0LL);
      v46 = v22;
      if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v21, 0, v22, (unsigned __int64)v21);
        v22 = v46;
      }
      if ( v22 )
        *((_BYTE *)v22 + 10) = 1;
      if ( (v45[52] & 0x20) != 0 )
      {
        v43 = -1073741769;
        if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v21);
        v38 = (ULONG_PTR)v21;
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 120) = v45[7];
        if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v21);
        KeAbPostRelease((ULONG_PTR)v21);
        v23 = KeAbPreAcquire(v19 + 352, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 352), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)(v19 + 352), 0, v23, v19 + 352);
        if ( v23 )
          *((_BYTE *)v23 + 10) = 1;
        if ( (*(_DWORD *)(v19 + 416) & 0x20) != 0 )
        {
          v43 = -1073741769;
        }
        else
        {
          v24 = BugCheckParameter2;
          v46 = (__int64 *)(BugCheckParameter2 - 30);
          *(_WORD *)v46 += 3;
          v25 = CurrentThread;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v24);
          v26 = BugCheckParameter2;
          *(_QWORD *)(BugCheckParameter2 + 32) = v25;
          AlpcpSetOwnerPortMessage(v26, a1);
          v27 = v48;
          *(_QWORD *)(v26 + 184) = v48;
          *(_QWORD *)(v26 + 192) = *v27;
          *(_QWORD *)(v47 + 8) = v26;
          if ( AlpcpLogEnabled )
          {
            AlpcpLogSendMessage(v26);
            if ( AlpcpLogEnabled )
              AlpcpLogWaitForReply(v26);
          }
          v28 = 0LL;
          v45 = 0LL;
          if ( *(_QWORD *)(v19 + 232) != v19 + 232 )
          {
            v29 = KeAbPreAcquire(v19 + 224, 0LL);
            v30 = v29;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 224), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v19 + 224), v29, v19 + 224);
            if ( v30 )
              *((_BYTE *)v30 + 10) = 1;
            v31 = *(_QWORD **)(v19 + 232);
            v48 = v31;
            if ( v31 != (_QWORD *)(v19 + 232) )
            {
              v45 = v31 - 185;
              v32 = BugCheckParameter2;
              AlpcpInsertMessagePendingQueue(v19, BugCheckParameter2);
              ++*(_WORD *)v46;
              *(_DWORD *)(v32 + 40) |= 0x2000u;
              v45[184] = v32;
              v33 = v48;
              v34 = *v48;
              v35 = (_QWORD *)v48[1];
              if ( *(_QWORD **)(*v48 + 8LL) != v48 || (_QWORD *)*v35 != v48 )
                __fastfail(3u);
              *v35 = v34;
              *(_QWORD *)(v34 + 8) = v35;
              *v33 = 0LL;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v19 + 224));
            KeAbPostRelease(v19 + 224);
            v26 = BugCheckParameter2;
            v17 = v53;
            v28 = v45;
          }
          v37 = v47;
          *(_QWORD *)(v47 + 32) = 0LL;
          *(_QWORD *)(v37 + 24) = 0LL;
          *(_QWORD *)(v37 + 40) = 0LL;
          if ( v28 )
          {
            *(_QWORD *)(v37 + 24) = v28;
          }
          else
          {
            AlpcpInsertMessageMainQueue(v19, v26);
            if ( (*(_DWORD *)(v19 + 416) & 0x200) != 0 )
            {
              PsReferenceSiloContext((void *)v19);
              *(_QWORD *)(v37 + 32) = v19;
              *(_BYTE *)(v37 + 58) = 0;
            }
          }
          AlpcpUnlockMessage(v26);
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v19 + 352));
        v38 = v19 + 352;
      }
      KeAbPostRelease(v38);
    }
    else
    {
      v43 = -1073741769;
    }
    if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v17);
    KeAbPostRelease((ULONG_PTR)v17);
    v13 = BugCheckParameter2;
    v39 = v43;
    if ( v43 >= 0 )
      return (unsigned int)v39;
    goto LABEL_72;
  }
  result = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0);
  if ( (int)result >= 0 )
    goto LABEL_18;
  return result;
}
