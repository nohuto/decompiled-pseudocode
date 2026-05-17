/*
 * XREFs of RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800D5764
 * Callers:
 *     RtlpEnsureSegHeapLockedForWalk @ 0x180047D44 (RtlpEnsureSegHeapLockedForWalk.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x18009B780 (RtlpWaitOnAddress.c)
 *     RtlBackoff @ 0x1800D6AD0 (RtlBackoff.c)
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 *     ZwFlushProcessWriteBuffers @ 0x180163AE0 (ZwFlushProcessWriteBuffers.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpEnvAcquireGlobalLockExclusive(void *a1)
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
    NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)115, ProcessInformation, 0x10u, 0LL);
    if ( !ProcessInformation[0] )
      break;
    RtlBackoff((char *)&v4 + 4);
  }
  return ZwFlushProcessWriteBuffers();
}
