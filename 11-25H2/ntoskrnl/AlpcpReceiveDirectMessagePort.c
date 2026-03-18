/*
 * XREFs of AlpcpReceiveDirectMessagePort @ 0x1408ABB08
 * Callers:
 *     AlpcpReceiveMessage @ 0x1408A88E0 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLogReceiveMessage @ 0x1408AAF48 (AlpcpLogReceiveMessage.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14098E690 (AlpcpInsertMessagePendingQueue.c)
 */

__int64 __fastcall AlpcpReceiveDirectMessagePort(__int64 *a1, __int64 a2, int a3, ULONG_PTR *a4, int a5)
{
  __int64 v6; // rbp
  __int64 result; // rax
  ULONG_PTR v8; // r14
  int v9; // eax
  int v10; // ebx
  volatile signed __int64 *v11; // rdi
  __int64 *v12; // rsi
  int v13; // ecx
  volatile signed __int64 *v14; // rsi
  __int64 *v15; // rax
  __int64 *v16; // rbx
  ULONG_PTR v17; // rdx
  unsigned int v18; // r9d
  int v19; // r8d
  ULONG_PTR v20; // rbx
  unsigned int v21; // ebx
  __int64 *v22; // rax
  __int64 *v23; // rbx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-38h] BYREF

  BugCheckParameter2[0] = 0LL;
  if ( !(_DWORD)a2 )
    return 3221225485LL;
  v6 = *a1;
  result = AlpcpLookupMessage(*a1, a2, a3, (__int64)a4, BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v8 = BugCheckParameter2[0];
    if ( v6 != *(_QWORD *)(BugCheckParameter2[0] + 16) )
    {
      v21 = -1073740030;
LABEL_47:
      AlpcpUnlockMessage(BugCheckParameter2[0]);
      return v21;
    }
    v9 = *(_DWORD *)(BugCheckParameter2[0] + 40);
    if ( (v9 & 0x20000) == 0 || (v10 = 1, v6 != *(_QWORD *)(BugCheckParameter2[0] + 64)) )
      v10 = 0;
    if ( (v9 & 7) != 4 && !v10 )
    {
      v21 = -1073741811;
      goto LABEL_47;
    }
    v11 = (volatile signed __int64 *)(v6 + 352);
    v12 = KeAbPreAcquire(v6 + 352, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 352), 0, v12, v6 + 352);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    v13 = *(_DWORD *)(v6 + 416);
    if ( (v13 & 0x40) != 0 )
    {
      AlpcpUnlockMessage(BugCheckParameter2[0]);
      if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      KeAbPostRelease(v6 + 352);
      return 3221227264LL;
    }
    else
    {
      if ( (v13 & 0x10) == 0 )
      {
        if ( v10 )
        {
          v14 = (volatile signed __int64 *)(v6 + 136);
          v22 = KeAbPreAcquire(v6 + 136, 0LL);
          v23 = v22;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 136), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), v22, v6 + 136);
          if ( v23 )
            *((_BYTE *)v23 + 10) = 1;
          *(_DWORD *)(v8 + 40) &= ~0x20000u;
          v17 = BugCheckParameter2[0];
          **(_QWORD **)(BugCheckParameter2[0] + 88) = *(_QWORD *)(BugCheckParameter2[0] + 80);
          *(_QWORD *)(*(_QWORD *)(v17 + 80) + 8LL) = *(_QWORD *)(v17 + 88);
          --*(_DWORD *)(v6 + 464);
        }
        else
        {
          v14 = (volatile signed __int64 *)(v6 + 200);
          v15 = KeAbPreAcquire(v6 + 200, 0LL);
          v16 = v15;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 200), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 200), v15, v6 + 200);
          if ( v16 )
            *((_BYTE *)v16 + 10) = 1;
          --*(_DWORD *)(v6 + 460);
          *(_DWORD *)(v8 + 40) &= 0xFFFFFFF8;
          v17 = BugCheckParameter2[0];
          *(_QWORD *)(v8 + 16) = 0LL;
          **(_QWORD **)(v17 + 8) = *(_QWORD *)v17;
          *(_QWORD *)(*(_QWORD *)v17 + 8LL) = *(_QWORD *)(v17 + 8);
          v18 = (*(_QWORD *)(v17 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(v17 + 144) )
            v18 = *(_QWORD *)(v17 + 136) != 0LL ? 0x80000000 : 0;
          v19 = v18 | 0x10000000;
          if ( !*(_QWORD *)(v17 + 152) )
            v19 = v18;
          if ( (v19 & a5) != 0 )
          {
            *(_WORD *)(v17 + 244) |= 0x2000u;
            AlpcpInsertMessagePendingQueue(v6, v17);
            goto LABEL_25;
          }
          *(_WORD *)(v17 + 244) &= ~0x2000u;
        }
        --*(_WORD *)(v17 - 30);
LABEL_25:
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v14);
        KeAbPostRelease((ULONG_PTR)v14);
        if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        v20 = BugCheckParameter2[0];
        if ( AlpcpLogEnabled )
          AlpcpLogReceiveMessage(BugCheckParameter2[0]);
        *a4 = v20;
        return 0LL;
      }
      AlpcpUnlockMessage(BugCheckParameter2[0]);
      if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      KeAbPostRelease(v6 + 352);
      return 3221225537LL;
    }
  }
  return result;
}
