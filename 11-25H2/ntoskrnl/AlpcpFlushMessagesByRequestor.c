/*
 * XREFs of AlpcpFlushMessagesByRequestor @ 0x14098AE9C
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x14098BF34 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x1408B4930 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpFlushMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, int a4)
{
  unsigned __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rdi
  ULONG_PTR i; // rdi
  int v12; // esi
  int v13; // esi
  volatile signed __int64 *v14; // rdi
  volatile signed __int64 *v16; // r14
  unsigned __int64 *v17; // r14
  __int64 *v18; // rax
  __int64 *v19; // rdi

  if ( a4 == 1 || a4 == 2 )
  {
    v8 = (unsigned __int64 *)(a2 + 136);
  }
  else if ( a4 == 3 )
  {
    v8 = (unsigned __int64 *)(a2 + 176);
  }
  else
  {
    v8 = (unsigned __int64 *)(a2 + 200);
  }
  v9 = KeAbPreAcquire((__int64)v8, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
LABEL_8:
  for ( i = *a3; (ULONG_PTR *)i != a3; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 || (*(_DWORD *)(i + 40) & 0x10000) != 0 )
    {
      AlpcpReferenceBlob(i);
      if ( a4 == 1 || a4 == 2 )
      {
        v16 = (volatile signed __int64 *)(a2 + 136);
      }
      else if ( a4 == 3 )
      {
        v16 = (volatile signed __int64 *)(a2 + 176);
      }
      else
      {
        v16 = (volatile signed __int64 *)(a2 + 200);
      }
      if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      AlpcpLockForCachedReferenceBlob(i);
      --*(_WORD *)(i - 30);
      if ( *(_QWORD *)(i + 24) == a1 )
        AlpcpCancelMessage(a2, i, 0x10000);
      else
        AlpcpUnlockMessage(i);
      if ( a4 == 1 || a4 == 2 )
      {
        v17 = (unsigned __int64 *)(a2 + 136);
      }
      else if ( a4 == 3 )
      {
        v17 = (unsigned __int64 *)(a2 + 176);
      }
      else
      {
        v17 = (unsigned __int64 *)(a2 + 200);
      }
      v18 = KeAbPreAcquire((__int64)v17, 0LL);
      v19 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
        ExfAcquirePushLockExclusiveEx(v17, v18, (__int64)v17);
      if ( v19 )
        *((_BYTE *)v19 + 10) = 1;
      goto LABEL_8;
    }
  }
  v12 = a4 - 1;
  if ( v12 && (v13 = v12 - 1) != 0 )
  {
    if ( v13 == 1 )
      v14 = (volatile signed __int64 *)(a2 + 176);
    else
      v14 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v14 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  return KeAbPostRelease((ULONG_PTR)v14);
}
