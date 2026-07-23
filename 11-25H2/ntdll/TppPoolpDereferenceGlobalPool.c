/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x18003DF80
 * Callers:
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18003DA30 (RtlpTpWorkUnposted.c)
 *     TpDereferenceGlobalPool @ 0x18003DB58 (TpDereferenceGlobalPool.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180048150 (TppCleanupGroupMemberInitialize.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     TpReleasePool @ 0x1800A06E0 (TpReleasePool.c)
 *     TpUnreserveTaskPost @ 0x1800EEE3C (TpUnreserveTaskPost.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800F0E10 (TpSetDefaultPoolStackInformation.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111770 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
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
