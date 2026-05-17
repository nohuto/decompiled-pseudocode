/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x18006D7D0
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18001A830 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     TpDereferenceGlobalPool @ 0x18006F5F8 (TpDereferenceGlobalPool.c)
 *     RtlpTpWorkUnposted @ 0x18006F660 (RtlpTpWorkUnposted.c)
 *     TpReleasePool @ 0x1800DEB80 (TpReleasePool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800EDE60 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800EDFB0 (TpSetDefaultPoolStackInformation.c)
 *     TpUnreserveTaskPost @ 0x1800EE35C (TpUnreserveTaskPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TppPoolpDereferenceGlobalPool(const void **a1, volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // r9
  unsigned __int64 v5; // r8
  bool v6; // zf
  __int64 result; // rax
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  const void *v11; // rsi

  v4 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v5 = *(unsigned int *)v4;
  while ( (int)v5 > 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(v4, v5 - 1, v5);
    v6 = (_DWORD)v5 == (_DWORD)result;
    v5 = (unsigned int)result;
    if ( v6 )
      return result;
  }
  RtlAcquireSRWLockExclusive(a2, (volatile signed __int32 **)a2, v5);
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
