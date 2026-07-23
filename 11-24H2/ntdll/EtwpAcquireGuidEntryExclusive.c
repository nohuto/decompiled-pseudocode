/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x1801057CC
 * Callers:
 *     EtwDeliverDataBlock @ 0x18004AB50 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18004B390 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x18004B650 (EtwpEventApiCallback.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800EC1A4 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180105730 (EtwpDereferenceUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

void *__fastcall EtwpAcquireGuidEntryExclusive(__int64 a1)
{
  void *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 48) = (_DWORD)result;
  return result;
}
