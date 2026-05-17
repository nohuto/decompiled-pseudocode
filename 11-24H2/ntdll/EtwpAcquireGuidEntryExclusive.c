/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x18010AC5C
 * Callers:
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18001E990 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x18001EC50 (EtwpEventApiCallback.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800F1524 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18010ABC0 (EtwpDereferenceUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

void *__fastcall EtwpAcquireGuidEntryExclusive(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  void *result; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 40), a2, a3);
  result = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 48) = (_DWORD)result;
  return result;
}
