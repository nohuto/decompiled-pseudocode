/*
 * XREFs of HamIpcChannelInitialize @ 0x180004D08
 * Callers:
 *     HamConnectForStateChangeNotifications @ 0x180002E60 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForServicing @ 0x180004240 (HamConnectForServicing.c)
 *     HamConnectForExtendedExecution @ 0x180004330 (HamConnectForExtendedExecution.c)
 *     HampConnectionCreate @ 0x180004470 (HampConnectionCreate.c)
 * Callees:
 *     memset_0 @ 0x18001C1CE (memset_0.c)
 */

__int64 (__fastcall *__fastcall HamIpcChannelInitialize(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4))()
{
  __int64 (__fastcall *result)(); // rax

  memset_0(a4, 0, 0x50uLL);
  a4[4] = 0LL;
  RtlInitializeSRWLock(a4 + 1);
  a4[6] = a4 + 5;
  a4[5] = a4 + 5;
  a4[7] = &HampConnectionDeliverPayload;
  a4[8] = HampConnectionObjectCompareToObject;
  result = HampConnectionObjectCompareToMessage;
  a4[9] = HampConnectionObjectCompareToMessage;
  return result;
}
