/*
 * XREFs of PspStorageMakeSlotReadOnly @ 0x1409E21D0
 * Callers:
 *     PsMakeSiloContextPermanent @ 0x1406FB440 (PsMakeSiloContextPermanent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PspGetStorageArray @ 0x1409E23B8 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageMakeSlotReadOnly(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v9 = 0LL;
  result = PspGetStorageArray(a1, a2, &v8, &v9);
  v3 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = (unsigned __int64 *)(v9 + 16LL * v8);
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)v5, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, (__int64)v6, (__int64)v5);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    if ( (v5[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      v5[1] = v5[1] & 0xFFFFFFFFFFFFFFFEuLL | 1;
    else
      v3 = -1073741811;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegion();
    return v3;
  }
  return result;
}
