/*
 * XREFs of CrmGlobalsRegistrationRemove @ 0x18006498C
 * Callers:
 *     CrmRegistrationCleanup @ 0x180030E04 (CrmRegistrationCleanup.c)
 *     CrmSrvUnregister @ 0x180064644 (CrmSrvUnregister.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmGlobalsRegistrationRemove(__int64 a1)
{
  CempLockAcquireExclusive((__int64)&unk_1800EA9C0);
  RtlRbRemoveNode(&xmmword_1800EA9D0, a1 + 32);
  *(_QWORD *)(a1 + 48) = -1LL;
  dword_1800EA9C8 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800EA9C0);
}
