/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x1409E6514
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x140893220 (AlpcSectionDeleteProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1409E64A0 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140A29100 (AlpcSectionDestroyProcedure.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

char __fastcall AlpcDeleteBlobByHandle(_QWORD *a1, int a2, __int64 a3)
{
  char v3; // di
  unsigned __int64 *v6; // rbx
  unsigned int v7; // r14d
  _QWORD *v8; // rax
  _QWORD *v9; // rbp

  v3 = 0;
  if ( !a1 )
    return 0;
  v6 = a1 + 1;
  v7 = a2 - 16;
  v8 = KeAbPreAcquire((__int64)(a1 + 1), 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, (__int64)v8, (__int64)v6);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( (unsigned __int64)v7 < a1[2] && *(_QWORD *)(*a1 + 8LL * v7) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL * v7) = 0LL;
    v3 = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v3;
}
