/*
 * XREFs of AlpcpInsertMessageMainQueue @ 0x14088D2E0
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x14088D3F8 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall AlpcpInsertMessageMainQueue(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  int v7; // eax

  v2 = (unsigned __int64 *)(a1 + 136);
  v5 = KeAbPreAcquire(a1 + 136, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v5, (__int64)v2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v7 & 0xFFFFFF81 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 1;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 152);
  *(_QWORD *)a2 = a1 + 144;
  **(_QWORD **)(a1 + 152) = a2;
  *(_QWORD *)(a1 + 152) = a2;
  ++*(_DWORD *)(a1 + 448);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
