/*
 * XREFs of ProviderHandleRemove @ 0x18001D2D0
 * Callers:
 *     EtwNotificationUnregister @ 0x18001D140 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x18001D450 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall ProviderHandleRemove(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi

  RtlAcquireSRWLockExclusive(&unk_1801CE2E8);
  if ( (a2 & 1) == 0
    || ((a2 >> 1) & 7) >= (unsigned __int8)byte_1801CE2E4
    || (v3 = (a2 >> 1) & 7, a2 >> 4 >= dword_18019A6E0[v3])
    || (v4 = qword_1801CE2A0[v3], v5 = (unsigned __int64)a2 >> 4, (*(_BYTE *)(v4 + 8 * v5) & 1) != 0) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v5), (unsigned int)dword_1801CE2E0);
    dword_1801CE2E0 = a2;
  }
  RtlReleaseSRWLockExclusive(&unk_1801CE2E8);
  return v6;
}
