/*
 * XREFs of AlpcpReceiveDirectMessagePort @ 0x14093E0B8
 * Callers:
 *     AlpcpReceiveMessage @ 0x140899160 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14088AD40 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogReceiveMessage @ 0x1408928A0 (AlpcpLogReceiveMessage.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 */

__int64 __fastcall AlpcpReceiveDirectMessagePort(__int64 *a1, int a2, int a3, ULONG_PTR *a4, int a5)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v11; // r14
  int v12; // eax
  int v13; // ebx
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  volatile signed __int64 *v20; // rsi
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  ULONG_PTR v23; // rdx
  unsigned int v24; // r9d
  int v25; // r8d
  ULONG_PTR v26; // rbx
  unsigned int v27; // ebx
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-38h] BYREF

  BugCheckParameter2[0] = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v6 = *a1;
  result = AlpcpLookupMessage(*a1, a2, a3, (_DWORD)a4, (__int64)BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v11 = BugCheckParameter2[0];
    if ( v6 != *(_QWORD *)(BugCheckParameter2[0] + 16) )
    {
      v27 = -1073740030;
LABEL_46:
      AlpcpUnlockMessage(BugCheckParameter2[0], v8, v9, v10);
      return v27;
    }
    v12 = *(_DWORD *)(BugCheckParameter2[0] + 40);
    if ( (v12 & 0x20000) == 0 || (v13 = 1, v6 != *(_QWORD *)(BugCheckParameter2[0] + 64)) )
      v13 = 0;
    if ( (v12 & 7) != 4 && !v13 )
    {
      v27 = -1073741811;
      goto LABEL_46;
    }
    v14 = (volatile signed __int64 *)(v6 + 352);
    v16 = KeAbPreAcquire(v6 + 352, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 352), 0, v16, v6 + 352);
    if ( v16 )
      *((_BYTE *)v16 + 10) = 1;
    v19 = *(_DWORD *)(v6 + 416);
    if ( (v19 & 0x40) != 0 )
    {
      AlpcpUnlockMessage(BugCheckParameter2[0], v15, v17, v18);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      KeAbPostRelease(v6 + 352);
      return 3221227264LL;
    }
    else
    {
      if ( (v19 & 0x10) == 0 )
      {
        if ( v13 )
        {
          v20 = (volatile signed __int64 *)(v6 + 136);
          v28 = KeAbPreAcquire(v6 + 136, 0LL);
          v29 = v28;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 136), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 136), (__int64)v28, v6 + 136);
          if ( v29 )
            *((_BYTE *)v29 + 10) = 1;
          *(_DWORD *)(v11 + 40) &= ~0x20000u;
          v23 = BugCheckParameter2[0];
          **(_QWORD **)(BugCheckParameter2[0] + 88) = *(_QWORD *)(BugCheckParameter2[0] + 80);
          *(_QWORD *)(*(_QWORD *)(v23 + 80) + 8LL) = *(_QWORD *)(v23 + 88);
          --*(_DWORD *)(v6 + 464);
        }
        else
        {
          v20 = (volatile signed __int64 *)(v6 + 200);
          v21 = KeAbPreAcquire(v6 + 200, 0LL);
          v22 = v21;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 200), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 200), (__int64)v21, v6 + 200);
          if ( v22 )
            *((_BYTE *)v22 + 10) = 1;
          --*(_DWORD *)(v6 + 460);
          *(_DWORD *)(v11 + 40) &= 0xFFFFFFF8;
          v23 = BugCheckParameter2[0];
          *(_QWORD *)(v11 + 16) = 0LL;
          **(_QWORD **)(v23 + 8) = *(_QWORD *)v23;
          *(_QWORD *)(*(_QWORD *)v23 + 8LL) = *(_QWORD *)(v23 + 8);
          v24 = (*(_QWORD *)(v23 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(v23 + 144) )
            v24 = *(_QWORD *)(v23 + 136) != 0LL ? 0x80000000 : 0;
          v25 = v24 | 0x10000000;
          if ( !*(_QWORD *)(v23 + 152) )
            v25 = v24;
          if ( (v25 & a5) != 0 )
          {
            *(_WORD *)(v23 + 244) |= 0x2000u;
            AlpcpInsertMessagePendingQueue(v6, v23);
            goto LABEL_25;
          }
          *(_WORD *)(v23 + 244) &= ~0x2000u;
        }
        --*(_WORD *)(v23 - 30);
LABEL_25:
        if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v20);
        KeAbPostRelease((ULONG_PTR)v20);
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        v26 = BugCheckParameter2[0];
        if ( AlpcpLogEnabled )
          AlpcpLogReceiveMessage(BugCheckParameter2[0]);
        *a4 = v26;
        return 0LL;
      }
      AlpcpUnlockMessage(BugCheckParameter2[0], v15, v17, v18);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
      KeAbPostRelease(v6 + 352);
      return 3221225537LL;
    }
  }
  return result;
}
