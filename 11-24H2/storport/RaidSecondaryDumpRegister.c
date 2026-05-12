/*
 * XREFs of RaidSecondaryDumpRegister @ 0x1400BD6A4
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x14004DDC4 (RaUnitDeviceUsageNotificationIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSecondaryDumpRegister(__int64 a1)
{
  __int64 result; // rax

  if ( SecondaryDumpCallbackRegistered )
    return 3221225473LL;
  unk_14017136C = 0;
  if ( KeRegisterBugCheckReasonCallback(
         (PKBUGCHECK_REASON_CALLBACK_RECORD)&WPP_MAIN_CB.Reserved,
         RaidStandardSecondaryDumpCallback,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"PortDriverStandard") != 1 )
    return 3221225473LL;
  SecondaryDumpCallbackRegistered = 1;
  result = 0LL;
  BootDriveExtension = a1;
  return result;
}
