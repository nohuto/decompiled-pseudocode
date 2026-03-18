/*
 * XREFs of ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x14018D898
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x1402CACD4 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForStop(DXGADAPTER *this, unsigned __int64 *a2)
{
  char *v3; // rdi
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  *a2 = -1LL;
  v3 = (char *)this + 136;
  if ( *((_QWORD *)this + 391) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 391), 3LL, 0xFFFFFFFFLL);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0LL);
  }
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  DXGADAPTER::AcquireCoreResourceExclusive(this, 2LL, 0LL);
}
