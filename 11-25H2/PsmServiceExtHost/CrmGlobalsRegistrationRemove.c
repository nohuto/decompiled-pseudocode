/*
 * XREFs of CrmGlobalsRegistrationRemove @ 0x180064A0C
 * Callers:
 *     CrmRegistrationCleanup @ 0x180030E84 (CrmRegistrationCleanup.c)
 *     CrmSrvUnregister @ 0x1800646C4 (CrmSrvUnregister.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmGlobalsRegistrationRemove(__int64 a1)
{
  CempLockAcquireExclusive((__int64)&unk_1800E9A20);
  RtlRbRemoveNode(&xmmword_1800E9A30, a1 + 32);
  *(_QWORD *)(a1 + 48) = -1LL;
  dword_1800E9A28 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800E9A20);
}
