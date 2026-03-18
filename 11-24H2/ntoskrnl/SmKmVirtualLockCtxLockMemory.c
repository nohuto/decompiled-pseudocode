/*
 * XREFs of SmKmVirtualLockCtxLockMemory @ 0x14060DFFC
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14060DE84 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14060E14C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ZwLockVirtualMemory @ 0x1406A86F0 (ZwLockVirtualMemory.c)
 */

__int64 __fastcall SmKmVirtualLockCtxLockMemory(signed __int64 *BugCheckParameter2, __int64 a2, __int64 a3)
{
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rdi
  unsigned __int64 *v7; // rsi
  signed __int64 v8; // rax
  unsigned __int64 i; // rdx
  signed __int64 v10; // rtt
  int v11; // eax
  int v12; // edi
  unsigned __int64 v13; // rdi
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  v15 = a2;
  v4 = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    if ( _InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, 0, v6, (__int64)BugCheckParameter2);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    v7 = (unsigned __int64 *)(BugCheckParameter2 + 2);
    if ( !v4 )
    {
      v8 = BugCheckParameter2[1];
      for ( i = v8 + v16; i <= *v7; i = v16 + v8 )
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
    v11 = ZwLockVirtualMemory(-1LL, &v15, &v16, 1LL);
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
    v12 = SmKmVirtualLockContextIncreaseWsMin((unsigned __int64 *)BugCheckParameter2, v16, v13);
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
