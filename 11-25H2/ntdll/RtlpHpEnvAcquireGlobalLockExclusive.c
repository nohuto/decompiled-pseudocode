/*
 * XREFs of RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800A0AF8
 * Callers:
 *     RtlpEnsureSegHeapLockedForWalk @ 0x18009BA24 (RtlpEnsureSegHeapLockedForWalk.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x180006DF0 (RtlpWaitOnAddress.c)
 *     RtlBackoff @ 0x18009EE30 (RtlBackoff.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     ZwFlushProcessWriteBuffers @ 0x180165070 (ZwFlushProcessWriteBuffers.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
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
    RtlBackoff((unsigned int *)&v4 + 1);
  }
  return ZwFlushProcessWriteBuffers();
}
