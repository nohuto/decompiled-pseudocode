/*
 * XREFs of PspStorageInsertObject @ 0x1409E22A0
 * Callers:
 *     PsInsertSiloContext @ 0x1409E1C10 (PsInsertSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x1409E20A4 (PsInsertPermanentSiloContextEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PspGetStorageArray @ 0x1409E23B8 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageInsertObject(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
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
    v10 = KeAbPreAcquire((__int64)v9, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, (__int64)v10, (__int64)v9);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
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
