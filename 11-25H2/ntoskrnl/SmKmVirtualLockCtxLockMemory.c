/*
 * XREFs of SmKmVirtualLockCtxLockMemory @ 0x140601FCC
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14020D8E4 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140601E54 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14060211C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ZwLockVirtualMemory @ 0x14069D420 (ZwLockVirtualMemory.c)
 */

__int64 __fastcall SmKmVirtualLockCtxLockMemory(signed __int64 *BugCheckParameter2, void *a2, ULONG_PTR a3)
{
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rdi
  unsigned __int64 *v7; // rsi
  signed __int64 v8; // rax
  unsigned __int64 i; // rdx
  signed __int64 v10; // rtt
  NTSTATUS v11; // eax
  int v12; // edi
  unsigned __int64 v13; // rdi
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+18h] BYREF

  RegionSize = a3;
  BaseAddress = a2;
  v4 = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    if ( _InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, 0, v6, (unsigned __int64)BugCheckParameter2);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    v7 = (unsigned __int64 *)(BugCheckParameter2 + 2);
    if ( !v4 )
    {
      v8 = BugCheckParameter2[1];
      for ( i = v8 + RegionSize; i <= *v7; i = RegionSize + v8 )
      {
        v10 = v8;
        v8 = _InterlockedCompareExchange64(BugCheckParameter2 + 1, i, v8);
        if ( v10 == v8 )
        {
          v4 = 1;
          goto LABEL_12;
        }
      }
      goto LABEL_14;
    }
LABEL_12:
    v11 = ZwLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    v12 = v11;
    if ( v11 >= 0 )
      break;
    if ( v11 != -1073741663 )
      goto LABEL_19;
LABEL_14:
    v13 = *v7;
    if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveCriticalRegion();
    v12 = SmKmVirtualLockContextIncreaseWsMin((unsigned __int64 *)BugCheckParameter2, RegionSize, v13);
    if ( v12 < 0 )
      goto LABEL_22;
  }
  v4 = 0;
  v12 = 0;
LABEL_19:
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
LABEL_22:
  if ( v4 )
    SmKmVirtualLockCtxMemoryUnlocked((ULONG_PTR)BugCheckParameter2);
  return (unsigned int)v12;
}
