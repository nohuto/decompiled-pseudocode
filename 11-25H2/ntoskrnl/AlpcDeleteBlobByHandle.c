/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x1409EC5A4
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x1408AF820 (AlpcSectionDeleteProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1409EC530 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140A1F5C0 (AlpcSectionDestroyProcedure.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcDeleteBlobByHandle(_QWORD *a1, int a2, __int64 a3)
{
  char v3; // di
  unsigned __int64 *v6; // rbx
  unsigned int v7; // r14d
  __int64 *v8; // rax
  __int64 *v9; // rbp

  v3 = 0;
  if ( !a1 )
    return 0;
  v6 = a1 + 1;
  v7 = a2 - 16;
  v8 = KeAbPreAcquire((__int64)(a1 + 1), 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v8, (__int64)v6);
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
