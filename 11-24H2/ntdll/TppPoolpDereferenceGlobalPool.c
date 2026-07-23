/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x18008A0B0
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x180047230 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     TpDereferenceGlobalPool @ 0x18008BED8 (TpDereferenceGlobalPool.c)
 *     RtlpTpWorkUnposted @ 0x18008BF40 (RtlpTpWorkUnposted.c)
 *     TpReleasePool @ 0x1800D9CF0 (TpReleasePool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800E9040 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800E9190 (TpSetDefaultPoolStackInformation.c)
 *     TpUnreserveTaskPost @ 0x1800E953C (TpUnreserveTaskPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TppPoolpDereferenceGlobalPool(const void **a1, _RTL_SRWLOCK *a2)
{
  volatile signed __int32 *v4; // r9
  signed __int32 v5; // r8d
  bool v6; // zf
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  _TP_POOL *v11; // rsi

  v4 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v5 = *v4;
  while ( v5 > 1 )
  {
    v7 = _InterlockedCompareExchange(v4, v5 - 1, v5);
    v6 = v5 == v7;
    v5 = v7;
    if ( v6 )
      return;
  }
  RtlAcquireSRWLockExclusive(a2);
  v8 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v9 = *v8;
  while ( v9 > 1 )
  {
    v10 = _InterlockedCompareExchange(v8, v9 - 1, v9);
    v6 = v9 == v10;
    v9 = v10;
    if ( v6 )
    {
      v11 = 0LL;
      goto LABEL_10;
    }
  }
  v11 = (_TP_POOL *)*a1;
  *a1 = 0LL;
LABEL_10:
  RtlReleaseSRWLockExclusive(a2);
  if ( v11 )
    TpReleasePool(v11);
}
