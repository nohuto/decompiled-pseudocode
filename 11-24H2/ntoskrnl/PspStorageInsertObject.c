/*
 * XREFs of PspStorageInsertObject @ 0x1409DC050
 * Callers:
 *     PsInsertSiloContext @ 0x1409DB9C0 (PsInsertSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409DBE54 (PsInsertPermanentSiloContextEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PspGetStorageArray @ 0x1409DC168 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageInsertObject(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rdi
  char *v10; // rax
  char *v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbp
  volatile signed __int64 *v15; // rdi
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[4]; // [rsp+28h] [rbp-20h] BYREF

  v17 = 0;
  v18[0] = 0LL;
  result = PspGetStorageArray(a1, a2, &v17, v18);
  v7 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = (unsigned __int64 *)(v18[0] + 16LL * v17);
    --CurrentThread->KernelApcDisable;
    v10 = (char *)KeAbPreAcquire((__int64)v9, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      v11[10] = 1;
    v12 = v9[1];
    v13 = v17;
    v14 = v18[0];
    if ( v12 )
    {
      v7 = -1073741637;
    }
    else
    {
      PsReferenceSiloContext((void *)a4);
      v16 = a4 | 1;
      if ( !a3 )
        v16 = a4;
      *(_QWORD *)(v14 + 16 * v13 + 8) = v16;
    }
    v15 = (volatile signed __int64 *)(v14 + 16 * v13);
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15);
    KeAbPostRelease((ULONG_PTR)v15);
    KeLeaveCriticalRegion();
    return v7;
  }
  return result;
}
