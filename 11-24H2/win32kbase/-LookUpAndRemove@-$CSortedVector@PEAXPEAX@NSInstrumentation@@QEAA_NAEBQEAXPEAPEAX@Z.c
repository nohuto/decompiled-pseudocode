/*
 * XREFs of ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x140198AAC
 * Callers:
 *     UserReAllocPool @ 0x14001B940 (UserReAllocPool.c)
 *     FreeThreadBufferWithTag @ 0x14001BCC0 (FreeThreadBufferWithTag.c)
 *     ?Win32FreePoolImpl@@YAXPEAX@Z @ 0x14001BE10 (-Win32FreePoolImpl@@YAXPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14001C090 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ @ 0x1401CF5F4 (-Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z @ 0x1401D0774 (-LowerBound@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(
        struct W32_PUSH_LOCK *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  char v6; // si
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rcx

  GreEnterCriticalRegionAndAcquirePushLockExclusive(a1);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)a1 + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)a1 + 7, 1u);
  if ( *((_DWORD *)a1 + 6) )
    NSInstrumentation::CPlatformSingleWaiterSignal::Wait((struct W32_PUSH_LOCK *)((char *)a1 + 8));
  v7 = *((_QWORD *)a1 + 5);
  if ( v7
    && (v8 = NSInstrumentation::CSortedVector<void *,void *>::LowerBound(a1, a2), v8 < v7)
    && (v9 = (_QWORD *)(16 * v8 + *((_QWORD *)a1 + 6)), *v9 == *a2)
    && v9 )
  {
    v10 = *((_QWORD *)a1 + 6);
    *a3 = v9[1];
    memmove(
      (void *)(16 * (((__int64)v9 - v10) >> 4) + v10),
      (const void *)(16 * (((__int64)v9 - v10) >> 4) + v10 + 16),
      16 * (v7 - (((__int64)v9 - v10) >> 4)) - 16);
    --*((_QWORD *)a1 + 5);
  }
  else
  {
    v6 = 0;
  }
  _InterlockedDecrement((volatile signed __int32 *)a1 + 7);
  W32ReleasePushLockExclusive(a1);
  return v6;
}
