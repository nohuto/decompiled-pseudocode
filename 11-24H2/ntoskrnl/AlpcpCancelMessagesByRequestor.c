/*
 * XREFs of AlpcpCancelMessagesByRequestor @ 0x14088CA00
 * Callers:
 *     AlpcpDisconnectPort @ 0x14088C638 (AlpcpDisconnectPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1402A1600 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsReleaseProcessWakeCounter @ 0x14088E750 (PsReleaseProcessWakeCounter.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpClearOwnerPortMessage @ 0x140892D3C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1408962B0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140A20580 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpTransferQuotaMessage @ 0x140A2C884 (AlpcpTransferQuotaMessage.c)
 */

__int64 __fastcall AlpcpCancelMessagesByRequestor(
        __int64 a1,
        volatile signed __int32 *a2,
        ULONG_PTR *a3,
        int a4,
        __int64 a5)
{
  int v5; // r15d
  volatile signed __int32 *v8; // r13
  unsigned int v10; // ebp
  _QWORD *v11; // rdi
  __int64 v12; // r8
  unsigned __int64 *v13; // rcx
  ULONG_PTR v14; // rdi
  ULONG_PTR v15; // rbp
  int v16; // r12d
  volatile signed __int64 *v17; // rdi
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 *v25; // r15
  _QWORD *v26; // rax
  _QWORD *v27; // r13
  unsigned __int64 *v28; // r15
  _QWORD *v29; // rax
  ULONG_PTR *i; // rax
  int v32; // [rsp+88h] [rbp+20h]

  v5 = 0;
  v32 = 0;
  v8 = a2;
  v10 = 0;
  if ( a4 == 2 || a4 == 1 )
  {
    v11 = KeAbPreAcquire((__int64)(a2 + 34), 0LL);
    if ( !_interlockedbittestandset64(v8 + 34, 0LL) )
      goto LABEL_5;
    v12 = (__int64)(v8 + 34);
    v13 = (unsigned __int64 *)(v8 + 34);
    goto LABEL_4;
  }
  if ( a4 == 3 )
  {
    v11 = KeAbPreAcquire((__int64)(a2 + 44), 0LL);
    if ( _interlockedbittestandset64(v8 + 44, 0LL) )
    {
      v12 = (__int64)(v8 + 44);
      v13 = (unsigned __int64 *)(v8 + 44);
      goto LABEL_4;
    }
  }
  else
  {
    v11 = KeAbPreAcquire((__int64)(a2 + 50), 0LL);
    if ( _interlockedbittestandset64(v8 + 50, 0LL) )
    {
      v12 = (__int64)(v8 + 50);
      v13 = (unsigned __int64 *)(v8 + 50);
LABEL_4:
      ExfAcquirePushLockExclusiveEx(v13, (__int64)v11, v12);
    }
  }
LABEL_5:
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v14 = *a3;
  if ( (ULONG_PTR *)*a3 != a3 )
  {
    while ( 1 )
    {
      v15 = v14;
      if ( *(_QWORD *)(v14 + 24) == a1 || (*(_DWORD *)(v14 + 40) & 0x10000) != 0 )
      {
        AlpcpReferenceBlob(v14);
        if ( !(unsigned __int8)AlpcpTryLockForCachedReferenceBlob(v14) )
        {
          if ( a4 == 2 || a4 == 1 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v8 + 17);
            KeAbPostRelease((ULONG_PTR)(v8 + 34));
            v32 = 1;
            AlpcpLockForCachedReferenceBlob(v14);
            if ( a4 != 2 )
              v32 = 1;
            v28 = (unsigned __int64 *)(v8 + 34);
            v29 = KeAbPreAcquire((__int64)(v8 + 34), 0LL);
            v27 = v29;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
              ExfAcquirePushLockExclusiveEx(v28, (__int64)v29, (__int64)v28);
            if ( !v27 )
              goto LABEL_60;
          }
          else
          {
            if ( a4 == 3 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v8 + 22);
              KeAbPostRelease((ULONG_PTR)(v8 + 44));
              AlpcpLockForCachedReferenceBlob(v14);
              v32 = 1;
              v25 = (unsigned __int64 *)(v8 + 44);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v8 + 25);
              KeAbPostRelease((ULONG_PTR)(v8 + 50));
              AlpcpLockForCachedReferenceBlob(v14);
              v32 = 1;
              v25 = (unsigned __int64 *)(v8 + 50);
            }
            v26 = KeAbPreAcquire((__int64)v25, 0LL);
            v27 = v26;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
              ExfAcquirePushLockExclusiveEx(v25, (__int64)v26, (__int64)v25);
            if ( !v27 )
              goto LABEL_60;
          }
          *((_BYTE *)v27 + 10) = 1;
LABEL_60:
          if ( *(_QWORD *)(v14 + 24) == a1 )
          {
            for ( i = (ULONG_PTR *)*a3; i != a3; i = (ULONG_PTR *)*i )
            {
              if ( i == (ULONG_PTR *)v14 )
              {
                v8 = a2;
                v5 = 1;
                goto LABEL_30;
              }
            }
          }
          --*(_WORD *)(v14 - 30);
          AlpcpUnlockMessage(v14);
          v14 = *a3;
          v5 = 0;
          v8 = a2;
          goto LABEL_11;
        }
        if ( *(_QWORD *)(v14 + 24) == a1 )
        {
LABEL_30:
          if ( *(_QWORD *)(v14 + 64) )
            goto LABEL_35;
          v20 = *(_DWORD *)(v14 + 40);
          if ( (v20 & 0x80u) != 0 )
            goto LABEL_35;
          v21 = *(_QWORD *)(v14 + 32);
          v22 = v20 | 0x80;
          *(_BYTE *)(v14 + 244) = 0;
          *(_WORD *)(v14 + 244) |= 0xCu;
          *(_DWORD *)(v14 + 40) = v22;
          *(_DWORD *)(v14 + 240) = 2621440;
          if ( v21 )
          {
            if ( _InterlockedExchange64((volatile __int64 *)(v21 + 1464), 0LL) == v14 )
            {
              KeReleaseSemaphoreEx((volatile signed __int32 *)(*(_QWORD *)(v14 + 32) + 1304LL), 1LL, 1, v19, 0, 0LL);
              *(_QWORD *)(v14 + 32) = 0LL;
              *(_WORD *)(v14 - 30) -= 3;
              goto LABEL_35;
            }
          }
          else if ( (v22 & 0x200) == 0 )
          {
            *(_QWORD *)(v14 + 88) = *(_QWORD *)(a5 + 8);
            *(_QWORD *)(v14 + 80) = a5;
            **(_QWORD **)(a5 + 8) = v14 + 80;
            *(_QWORD *)(a5 + 8) = v14 + 80;
LABEL_35:
            AlpcpReleaseMessageAttributesOnCancel(v14);
            *(_DWORD *)(v14 + 40) |= 0x200u;
            *(_WORD *)(v14 + 244) &= ~0x2000u;
            AlpcpClearOwnerPortMessage(v14);
            AlpcpTransferQuotaMessage(v14);
            v23 = *(_QWORD *)(v14 + 208);
            if ( v23 )
            {
              PsReleaseProcessWakeCounter(v23, *(unsigned int *)(v14 + 264));
              *(_QWORD *)(v14 + 208) = 0LL;
            }
            v24 = *(_QWORD *)(v14 + 216);
            if ( v24 )
            {
              PsReleaseProcessWakeCounter(v24, *(unsigned int *)(v14 + 264));
              *(_QWORD *)(v14 + 216) = 0LL;
            }
            if ( v5 )
              v14 = *a3;
            else
              v14 = *(_QWORD *)v14;
            AlpcpUnlockMessage(v15);
            v5 = 0;
            goto LABEL_11;
          }
          --*(_WORD *)(v14 - 30);
          goto LABEL_35;
        }
        --*(_WORD *)(v14 - 30);
        AlpcpUnlockMessage(v14);
        v14 = *(_QWORD *)v14;
      }
      else
      {
        v14 = *(_QWORD *)v14;
      }
LABEL_11:
      if ( (ULONG_PTR *)v14 == a3 )
      {
        v10 = v32;
        break;
      }
    }
  }
  if ( a4 == 2 || (v16 = a4 - 1) == 0 )
  {
    v17 = (volatile signed __int64 *)(v8 + 34);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_18;
LABEL_20:
    ExfTryToWakePushLock(v17);
    goto LABEL_18;
  }
  if ( v16 == 2 )
    v17 = (volatile signed __int64 *)(v8 + 44);
  else
    v17 = (volatile signed __int64 *)(v8 + 50);
  if ( (_InterlockedExchangeAdd64(v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    goto LABEL_20;
LABEL_18:
  KeAbPostRelease((ULONG_PTR)v17);
  return v10;
}
