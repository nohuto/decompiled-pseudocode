/*
 * XREFs of PspStorageGetObject @ 0x1409F318C
 * Callers:
 *     PsGetSiloContext @ 0x140465740 (PsGetSiloContext.c)
 *     PsFreeSiloContextSlot @ 0x140772100 (PsFreeSiloContextSlot.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PspGetStorageArrayIfPossible @ 0x14041F930 (PspGetStorageArrayIfPossible.c)
 */

__int64 __fastcall PspStorageGetObject(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // rbx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rdi
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0;
  v9[0] = 0LL;
  result = PspGetStorageArrayIfPossible(a1, a2, &v10, v9);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (signed __int64 *)(v9[0] + 16LL * v10);
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((__int64)v6, 0LL);
    if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, 0, v7, (__int64)v6);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v8 = v6[1] & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 )
      PsReferenceSiloContext((void *)(v6[1] & 0xFFFFFFFFFFFFFFFEuLL));
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveCriticalRegionThread();
    if ( v8 )
    {
      *a3 = v8;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
