/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x14060C444
 * Callers:
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

__int64 __fastcall SmKmVirtualLockContextIncreaseWsMin(
        unsigned __int64 *BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rax
  char *v8; // rsi
  int v9; // esi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  char v21; // [rsp+90h] [rbp+30h] BYREF
  int v22; // [rsp+A8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v17 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = (char *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v7, (__int64)BugCheckParameter2);
  if ( v8 )
    v8[10] = 1;
  if ( a3 >= BugCheckParameter2[2] )
  {
    do
    {
      v22 = 0;
      v9 = MmQueryWorkingSetInformation(&v20, &v19, &v18, &v16, &v17, &v22);
      if ( v9 < 0 )
        break;
      v10 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v11 = v10 + v16;
      if ( v10 + v16 <= v16 )
      {
        v9 = -1073741675;
        break;
      }
      v12 = v17;
      v16 += v10;
      if ( v11 > v17 )
        v12 = v11;
      v21 = 0;
      v17 = v12;
      v13 = MmAdjustWorkingSetSizeEx(v11, v12, 0, 1, 0, &v21);
      v9 = v13;
      if ( v13 >= 0 )
      {
        v14 = BugCheckParameter2[2];
        if ( v14 + v10 > v14 )
          BugCheckParameter2[2] = v14 + v10;
        v9 = 0;
        break;
      }
    }
    while ( v13 == -1073741748 );
  }
  else
  {
    v9 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
