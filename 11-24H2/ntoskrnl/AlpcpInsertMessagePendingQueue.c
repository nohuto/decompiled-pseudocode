/*
 * XREFs of AlpcpInsertMessagePendingQueue @ 0x14088AD40
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x14088AA00 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14088D3F8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14093E0B8 (AlpcpReceiveDirectMessagePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall AlpcpInsertMessagePendingQueue(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  int v7; // eax

  v2 = (unsigned __int64 *)(a1 + 176);
  v5 = KeAbPreAcquire(a1 + 176, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v5, (__int64)v2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v7 & 0xFFFFFF83 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 192);
  *(_QWORD *)a2 = a1 + 184;
  **(_QWORD **)(a1 + 192) = a2;
  *(_QWORD *)(a1 + 192) = a2;
  ++*(_DWORD *)(a1 + 456);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
