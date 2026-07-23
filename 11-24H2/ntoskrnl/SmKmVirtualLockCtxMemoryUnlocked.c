/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x14060C70C
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14060C5BC (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MmQueryWorkingSetInformation @ 0x1404103B0 (MmQueryWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 */

void __fastcall SmKmVirtualLockCtxMemoryUnlocked(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  char *v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF
  char v15; // [rsp+80h] [rbp+28h] BYREF
  int v16; // [rsp+88h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+38h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp+40h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  _InterlockedAdd64((volatile signed __int64 *)(BugCheckParameter2 + 8), -a2);
  v3 = *(_QWORD *)(BugCheckParameter2 + 8);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v3 < v4 && (!v3 || v4 - v3 >= 0x800000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v6, BugCheckParameter2);
    if ( v7 )
      v7[10] = 1;
    v8 = *(_QWORD *)(BugCheckParameter2 + 8);
    v9 = *(_QWORD *)(BugCheckParameter2 + 16) - v8;
    if ( v9 >= 0x800000 || !v8 && *(_QWORD *)(BugCheckParameter2 + 16) )
    {
      v16 = 0;
      if ( (int)MmQueryWorkingSetInformation(v14, &v13, &v12, &v17, &v18, &v16) >= 0 )
      {
        v10 = v17;
        v11 = v9 & 0xFFFFFFFFFFC00000uLL;
        *(_QWORD *)(BugCheckParameter2 + 16) -= v11;
        if ( v10 >= v11 )
        {
          v17 = v10 - v11;
          v15 = 0;
          MmAdjustWorkingSetSizeEx(v10 - v11, v18, 0, 0, 0, &v15);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
}
