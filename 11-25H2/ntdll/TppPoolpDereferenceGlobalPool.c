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

__int64 __fastcall TppPoolpDereferenceGlobalPool(const void **a1, volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // r9
  signed __int32 v5; // r8d
  bool v6; // zf
  __int64 result; // rax
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  const void *v11; // rsi

  v4 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v5 = *v4;
  while ( v5 > 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(v4, v5 - 1, v5);
    v6 = v5 == (_DWORD)result;
    v5 = result;
    if ( v6 )
      return result;
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
  v11 = *a1;
  *a1 = 0LL;
LABEL_10:
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)a2);
  if ( v11 )
    return TpReleasePool(v11);
  return result;
}
