/*
 * XREFs of ProviderHandleRemove @ 0x1800460B0
 * Callers:
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall ProviderHandleRemove(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi

  RtlAcquireSRWLockExclusive(&stru_1801D02E8);
  if ( (a2 & 1) == 0
    || ((a2 >> 1) & 7) >= (unsigned __int8)byte_1801D02E4
    || (v3 = (a2 >> 1) & 7, a2 >> 4 >= dword_18019C7E0[v3])
    || (v4 = qword_1801D02A0[v3], v5 = (unsigned __int64)a2 >> 4, (*(_BYTE *)(v4 + 8 * v5) & 1) != 0) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v5), (unsigned int)dword_1801D02E0);
    dword_1801D02E0 = a2;
  }
  RtlReleaseSRWLockExclusive(&stru_1801D02E8);
  return v6;
}
