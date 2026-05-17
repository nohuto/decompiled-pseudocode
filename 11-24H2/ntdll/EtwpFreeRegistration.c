/*
 * XREFs of EtwpFreeRegistration @ 0x18001D368
 * Callers:
 *     EtwNotificationUnregister @ 0x18001D140 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x18001D450 (EtwNotificationRegister.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x180165A40 (RtlpInterlockedPushEntrySList.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpFreeRegistration(__int64 a1)
{
  __int64 result; // rax

  memset_thunk_772440563353939046((void *)(a1 + 88), 0, 0xA8uLL);
  result = RtlpInterlockedPushEntrySList(&EtwpFreeRegistrationList, a1);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
