/*
 * XREFs of ObpPushRefDerefInfo @ 0x140739208
 * Callers:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObpPushStackInfoQueue @ 0x1407393F0 (ObpPushStackInfoQueue.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     ObpGetObjectRefInfo @ 0x140738D60 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x140738E6C (ObpGetTraceIndex.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void __fastcall ObpPushRefDerefInfo(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int16 *Source2,
        int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rax
  signed __int8 v12; // cf
  __int64 *v13; // rsi
  unsigned __int16 *v14; // rsi
  unsigned __int16 TraceIndex; // r8
  unsigned __int16 i; // dx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  _SLIST_ENTRY *Pool2; // rax
  unsigned __int16 *v22; // [rsp+20h] [rbp-38h] BYREF

  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v11 = KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v13 = v11;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v11, (__int64)&ObpStackTraceLock);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    if ( (int)ObpGetObjectRefInfo(a1, &v22) >= 0 )
    {
      v14 = v22;
      if ( v22 )
      {
        TraceIndex = ObpGetTraceIndex(Source2);
        if ( TraceIndex >= 0x3FFDu )
        {
          DbgPrintEx(0, 1u, "ObpPushRefDerefInfo - ObpStackTable overflow\n");
        }
        else
        {
          for ( i = v14[16]; i; *(_DWORD *)&v14[2 * v17 + 22] = *(_DWORD *)&v14[6 * i-- + 16] )
          {
            if ( a4 >= *(_DWORD *)&v14[6 * i + 12] )
              break;
            v17 = 3LL * i;
            *(_QWORD *)&v14[2 * v17 + 18] = *(_QWORD *)&v14[6 * i + 12];
          }
          v18 = i;
          v19 = 3LL * i;
          v14[2 * v19 + 20] = TraceIndex | (a2 != 0 ? 0x8000 : 0);
          v14[2 * v19 + 21] = a3;
          *(_DWORD *)&v14[6 * v18 + 18] = a4;
          *(_DWORD *)&v14[2 * v19 + 22] = a6;
          ++v14[16];
        }
      }
    }
    v20 = 100LL;
    if ( LOWORD(ObpWorkItemFreeList.Alignment) < 0x64u )
    {
      do
      {
        Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x40uLL);
        if ( Pool2 )
          RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, Pool2);
        --v20;
      }
      while ( v20 );
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  KeLeaveGuardedRegion();
}
