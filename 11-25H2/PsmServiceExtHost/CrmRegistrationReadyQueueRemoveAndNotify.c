/*
 * XREFs of CrmRegistrationReadyQueueRemoveAndNotify @ 0x18002E894
 * Callers:
 *     CrmActivityUpdate @ 0x18002E120 (CrmActivityUpdate.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CrmRegistrationNotify @ 0x18002F2C0 (CrmRegistrationNotify.c)
 *     CrmRegistrationReadyQueueRemove @ 0x18002F6F8 (CrmRegistrationReadyQueueRemove.c)
 */

__int64 __fastcall CrmRegistrationReadyQueueRemoveAndNotify(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // esi

  if ( !a3 )
  {
    RtlAcquireSRWLockExclusive(&unk_1800E9A40);
    dword_1800E9A48 = GetCurrentThreadId();
  }
  v6 = CrmRegistrationReadyQueueRemove(a1, 1LL);
  if ( (unsigned int)CrmRegistrationNotify(*(_QWORD *)(a1 + 48), a1, a2) )
    *(_QWORD *)(a1 + 128) = CempQueryUnbiasedInterruptTimeMs64();
  if ( !a3 )
  {
    dword_1800E9A48 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E9A40);
  }
  return v6;
}
