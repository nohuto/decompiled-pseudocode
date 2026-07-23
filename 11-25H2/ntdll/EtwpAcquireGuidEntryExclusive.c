/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x18010D3C0
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180044BF0 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x180044EB0 (EtwpEventApiCallback.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800F3094 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18010D324 (EtwpDereferenceUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

void *__fastcall EtwpAcquireGuidEntryExclusive(__int64 a1)
{
  void *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 48) = (_DWORD)result;
  return result;
}
