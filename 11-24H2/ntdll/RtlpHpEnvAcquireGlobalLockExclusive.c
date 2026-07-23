/*
 * XREFs of RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800D0AD4
 * Callers:
 *     RtlpEnsureSegHeapLockedForWalk @ 0x18005E200 (RtlpEnsureSegHeapLockedForWalk.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180114970 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x1800305D0 (RtlpWaitOnAddress.c)
 *     RtlBackoff @ 0x1800D1E40 (RtlBackoff.c)
 *     NtQueryInformationProcess @ 0x180160370 (NtQueryInformationProcess.c)
 *     ZwFlushProcessWriteBuffers @ 0x180161EA0 (ZwFlushProcessWriteBuffers.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpHpEnvAcquireGlobalLockExclusive(void *a1)
{
  signed __int32 i; // eax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  _DWORD ProcessInformation[2]; // [rsp+38h] [rbp-20h] BYREF
  void *v6; // [rsp+40h] [rbp-18h]

  _m_prefetchw(a1);
  for ( i = _InterlockedOr((volatile signed __int32 *)a1, 0x10u); ; i = _InterlockedOr(
                                                                          (volatile signed __int32 *)a1,
                                                                          0x10u) )
  {
    LODWORD(v4) = i;
    if ( (i & 0x10) == 0 )
      break;
    RtlpWaitOnAddress((unsigned __int64)a1, &v4, 4LL, 0LL, (unsigned int)RtlpWaitOnAddressSpinCycleCount, 0LL);
    _m_prefetchw(a1);
  }
  ZwFlushProcessWriteBuffers();
  HIDWORD(v4) = 0;
  while ( 1 )
  {
    ProcessInformation[0] = 0;
    ProcessInformation[1] = 6232;
    v6 = a1;
    NtQueryInformationProcess(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      ProcessFindFirstThreadByTebValue,
      ProcessInformation,
      0x10u,
      0LL);
    if ( !ProcessInformation[0] )
      break;
    RtlBackoff((char *)&v4 + 4);
  }
  return ZwFlushProcessWriteBuffers();
}
