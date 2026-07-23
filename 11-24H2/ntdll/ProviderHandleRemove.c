/*
 * XREFs of ProviderHandleRemove @ 0x180049CD0
 * Callers:
 *     EtwNotificationUnregister @ 0x180049B40 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x180049E50 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall ProviderHandleRemove(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi

  RtlAcquireSRWLockExclusive(&stru_1801CD2E8);
  if ( (a2 & 1) == 0
    || ((a2 >> 1) & 7) >= (unsigned __int8)byte_1801CD2E4
    || (v3 = (a2 >> 1) & 7, a2 >> 4 >= dword_1801997F0[v3])
    || (v4 = qword_1801CD2A0[v3], v5 = (unsigned __int64)a2 >> 4, (*(_BYTE *)(v4 + 8 * v5) & 1) != 0) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v5), (unsigned int)dword_1801CD2E0);
    dword_1801CD2E0 = a2;
  }
  RtlReleaseSRWLockExclusive(&stru_1801CD2E8);
  return v6;
}
