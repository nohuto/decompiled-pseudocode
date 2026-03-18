/*
 * XREFs of AlpcpInsertMessageLargeMessageQueue @ 0x1409CD68C
 * Callers:
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1409CD560 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertMessageLargeMessageQueue(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  __int64 *v5; // rax
  __int64 *v6; // rdi
  int v7; // eax

  v2 = (unsigned __int64 *)(a1 + 136);
  v5 = KeAbPreAcquire(a1 + 136, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (__int64)v2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v7 & 0xFFFFFF82 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 2;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 168);
  *(_QWORD *)a2 = a1 + 160;
  **(_QWORD **)(a1 + 168) = a2;
  *(_QWORD *)(a1 + 168) = a2;
  ++*(_DWORD *)(a1 + 452);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
