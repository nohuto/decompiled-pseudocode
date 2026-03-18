/*
 * XREFs of RIMEndAllActiveContacts @ 0x1400C7A70
 * Callers:
 *     RIMResetPointerDevices @ 0x1400545C0 (RIMResetPointerDevices.c)
 *     RIMSetDeviceOutputConfig @ 0x1400C7244 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     rimEndAllActiveContactsWorker @ 0x1400568CC (rimEndAllActiveContactsWorker.c)
 *     ?EndAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400C8E0C (-EndAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1400C95A8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 */

void __fastcall RIMEndAllActiveContacts(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::RIM::EndAllActiveContacts(*(const struct RIMDEV **)(a2 + 16));
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7, (struct RIMLOCK *)(a1 + 104));
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6, (struct RIMLOCK *)(a1 + 760));
  rimEndAllActiveContactsWorker((struct RawInputManagerObject *)a1, a2, a3);
  if ( v6 )
    RIMUnlockExclusive(v6);
  if ( v7 )
    RIMUnlockExclusive(v7);
}
