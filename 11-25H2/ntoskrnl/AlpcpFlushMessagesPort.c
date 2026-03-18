/*
 * XREFs of AlpcpFlushMessagesPort @ 0x14098BF34
 * Callers:
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
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x1408B4930 (AlpcpReferenceBlob.c)
 *     AlpcpFlushCancelQueue @ 0x14098AD9C (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14098AE9C (AlpcpFlushMessagesByRequestor.c)
 */

__int64 __fastcall AlpcpFlushMessagesPort(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  ULONG_PTR *v3; // r14
  __int64 *v4; // rax
  __int64 *v5; // rbx
  ULONG_PTR v6; // rsi
  ULONG_PTR *v7; // r14
  __int64 *v8; // rax
  __int64 *v9; // rsi
  ULONG_PTR v10; // rsi
  ULONG_PTR *v11; // r14
  volatile signed __int32 *v12; // rdi
  __int64 *v13; // rax
  __int64 *v14; // rsi
  ULONG_PTR v15; // rsi
  ULONG_PTR *v16; // r14
  volatile signed __int32 *v17; // rdi
  __int64 *v18; // rax
  __int64 *v19; // rsi
  ULONG_PTR v20; // rsi
  __int64 result; // rax
  __int64 *v22; // r14
  signed __int64 *v23; // rdi
  __int64 *v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // r14
  __int64 *v27; // rax
  __int64 *v28; // rsi
  ULONG_PTR *v29; // r15
  volatile signed __int32 *v30; // rsi
  __int64 *v31; // rax
  __int64 *v32; // rdi
  ULONG_PTR i; // rdi
  ULONG_PTR *v34; // r15
  volatile signed __int32 *v35; // rsi
  __int64 *v36; // rax
  __int64 *v37; // rdi
  ULONG_PTR j; // rdi
  ULONG_PTR *v39; // r15
  volatile signed __int32 *v40; // rdi
  __int64 *v41; // rax
  __int64 *v42; // rsi
  ULONG_PTR k; // rsi

  v1 = (unsigned __int64 *)(a1 + 136);
  v3 = (ULONG_PTR *)(a1 + 144);
  v4 = KeAbPreAcquire(a1 + 136, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v4, (__int64)v1);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  while ( 1 )
  {
    v6 = *v3;
    if ( (ULONG_PTR *)*v3 == v3 )
      break;
    AlpcpReferenceBlob(*v3);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    AlpcpLockForCachedReferenceBlob(v6);
    --*(_WORD *)(v6 - 30);
    if ( *(_QWORD *)(v6 + 16) == a1 )
      AlpcpCancelMessage(a1, v6, 0x10000);
    else
      AlpcpUnlockMessage(v6);
    v27 = KeAbPreAcquire((__int64)v1, 0LL);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1, v27, (__int64)v1);
    if ( v28 )
      *((_BYTE *)v28 + 10) = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  v7 = (ULONG_PTR *)(a1 + 160);
  while ( 1 )
  {
    v8 = KeAbPreAcquire((__int64)v1, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1, v8, (__int64)v1);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    v10 = *v7;
    if ( (ULONG_PTR *)*v7 == v7 )
      break;
    AlpcpReferenceBlob(*v7);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    AlpcpLockForCachedReferenceBlob(v10);
    --*(_WORD *)(v10 - 30);
    if ( *(_QWORD *)(v10 + 16) == a1 )
      AlpcpCancelMessage(a1, v10, 0x10000);
    else
      AlpcpUnlockMessage(v10);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  v11 = (ULONG_PTR *)(a1 + 184);
  v12 = (volatile signed __int32 *)(a1 + 176);
  while ( 1 )
  {
    v13 = KeAbPreAcquire(a1 + 176, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64(v12, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 176), v13, a1 + 176);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    v15 = *v11;
    if ( (ULONG_PTR *)*v11 == v11 )
      break;
    AlpcpReferenceBlob(*v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 176));
    KeAbPostRelease(a1 + 176);
    AlpcpLockForCachedReferenceBlob(v15);
    --*(_WORD *)(v15 - 30);
    if ( *(_QWORD *)(v15 + 16) == a1 )
      AlpcpCancelMessage(a1, v15, 0x10000);
    else
      AlpcpUnlockMessage(v15);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 176));
  KeAbPostRelease(a1 + 176);
  v16 = (ULONG_PTR *)(a1 + 208);
  v17 = (volatile signed __int32 *)(a1 + 200);
  while ( 1 )
  {
    v18 = KeAbPreAcquire(a1 + 200, 0LL);
    v19 = v18;
    if ( _interlockedbittestandset64(v17, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 200), v18, a1 + 200);
    if ( v19 )
      *((_BYTE *)v19 + 10) = 1;
    v20 = *v16;
    if ( (ULONG_PTR *)*v16 == v16 )
      break;
    AlpcpReferenceBlob(*v16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 200));
    KeAbPostRelease(a1 + 200);
    AlpcpLockForCachedReferenceBlob(v20);
    --*(_WORD *)(v20 - 30);
    if ( *(_QWORD *)(v20 + 16) == a1 )
      AlpcpCancelMessage(a1, v20, 0x10000);
    else
      AlpcpUnlockMessage(v20);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 200));
  KeAbPostRelease(a1 + 200);
  AlpcpFlushCancelQueue(a1, 0LL);
  result = *(_DWORD *)(a1 + 416) & 6;
  if ( (*(_BYTE *)(a1 + 416) & 6) == 6 )
  {
    v22 = *(__int64 **)(a1 + 16);
    v23 = v22 - 2;
    v24 = KeAbPreAcquire((__int64)(v22 - 2), 0LL);
    if ( _InterlockedCompareExchange64(v22 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v22 - 2, 0, v24, (unsigned __int64)(v22 - 2));
    if ( v24 )
      *((_BYTE *)v24 + 10) = 1;
    v25 = *v22;
    v26 = v22[2];
    if ( v25 )
      v25 &= -(__int64)(ObReferenceObjectSafe(v25) != 0);
    if ( v26 )
      v26 &= -(__int64)(ObReferenceObjectSafe(v26) != 0);
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    result = KeAbPostRelease((ULONG_PTR)v23);
    if ( v25 )
    {
      if ( (*(_DWORD *)(v25 + 416) & 0x40) == 0 && v26 && (*(_DWORD *)(v26 + 416) & 8) == 0 )
      {
        AlpcpFlushMessagesByRequestor(v26, v25, (ULONG_PTR *)(v25 + 144), 1);
        v29 = (ULONG_PTR *)(v25 + 160);
        v30 = (volatile signed __int32 *)(v25 + 136);
LABEL_72:
        v31 = KeAbPreAcquire(v25 + 136, 0LL);
        v32 = v31;
        if ( _interlockedbittestandset64(v30, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 136), v31, v25 + 136);
        if ( v32 )
          *((_BYTE *)v32 + 10) = 1;
        for ( i = *v29; (ULONG_PTR *)i != v29; i = *(_QWORD *)i )
        {
          if ( *(_QWORD *)(i + 24) == v26 || (*(_DWORD *)(i + 40) & 0x10000) != 0 )
          {
            AlpcpReferenceBlob(i);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 136));
            KeAbPostRelease(v25 + 136);
            AlpcpLockForCachedReferenceBlob(i);
            --*(_WORD *)(i - 30);
            if ( *(_QWORD *)(i + 24) == v26 )
              AlpcpCancelMessage(v25, i, 0x10000);
            else
              AlpcpUnlockMessage(i);
            goto LABEL_72;
          }
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 136));
        KeAbPostRelease(v25 + 136);
        if ( (*(_DWORD *)(a1 + 416) & 0x80u) == 0 )
        {
          v34 = (ULONG_PTR *)(v25 + 184);
          v35 = (volatile signed __int32 *)(v25 + 176);
LABEL_85:
          v36 = KeAbPreAcquire(v25 + 176, 0LL);
          v37 = v36;
          if ( _interlockedbittestandset64(v35, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 176), v36, v25 + 176);
          if ( v37 )
            *((_BYTE *)v37 + 10) = 1;
          for ( j = *v34; (ULONG_PTR *)j != v34; j = *(_QWORD *)j )
          {
            if ( *(_QWORD *)(j + 24) == v26 || (*(_DWORD *)(j + 40) & 0x10000) != 0 )
            {
              AlpcpReferenceBlob(j);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 176));
              KeAbPostRelease(v25 + 176);
              AlpcpLockForCachedReferenceBlob(j);
              --*(_WORD *)(j - 30);
              if ( *(_QWORD *)(j + 24) == v26 )
                AlpcpCancelMessage(v25, j, 0x10000);
              else
                AlpcpUnlockMessage(j);
              goto LABEL_85;
            }
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 176));
          KeAbPostRelease(v25 + 176);
        }
        v39 = (ULONG_PTR *)(v25 + 208);
        v40 = (volatile signed __int32 *)(v25 + 200);
LABEL_98:
        v41 = KeAbPreAcquire(v25 + 200, 0LL);
        v42 = v41;
        if ( _interlockedbittestandset64(v40, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 200), v41, v25 + 200);
        if ( v42 )
          *((_BYTE *)v42 + 10) = 1;
        for ( k = *v39; (ULONG_PTR *)k != v39; k = *(_QWORD *)k )
        {
          if ( *(_QWORD *)(k + 24) == v26 || (*(_DWORD *)(k + 40) & 0x10000) != 0 )
          {
            AlpcpReferenceBlob(k);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 200));
            KeAbPostRelease(v25 + 200);
            AlpcpLockForCachedReferenceBlob(k);
            --*(_WORD *)(k - 30);
            if ( *(_QWORD *)(k + 24) == v26 )
              AlpcpCancelMessage(v25, k, 0x10000);
            else
              AlpcpUnlockMessage(k);
            goto LABEL_98;
          }
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 200));
        KeAbPostRelease(v25 + 200);
        AlpcpFlushCancelQueue(v25, a1);
      }
      result = ObfDereferenceObject((PVOID)v25);
    }
    if ( v26 )
      return ObfDereferenceObject((PVOID)v26);
  }
  return result;
}
