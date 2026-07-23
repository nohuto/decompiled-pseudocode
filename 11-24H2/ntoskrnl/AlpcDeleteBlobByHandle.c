/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x1409E0DA4
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x14089CDC0 (AlpcSectionDeleteProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1409E0D30 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140A1DAC0 (AlpcSectionDestroyProcedure.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

char __fastcall AlpcDeleteBlobByHandle(_QWORD *a1, int a2, __int64 a3)
{
  char v3; // di
  unsigned __int64 *v6; // rbx
  unsigned int v7; // r14d
  char *v8; // rax
  char *v9; // rbp

  v3 = 0;
  if ( !a1 )
    return 0;
  v6 = a1 + 1;
  v7 = a2 - 16;
  v8 = (char *)KeAbPreAcquire((__int64)(a1 + 1), 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v8, (__int64)v6);
  if ( v9 )
    v9[10] = 1;
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
