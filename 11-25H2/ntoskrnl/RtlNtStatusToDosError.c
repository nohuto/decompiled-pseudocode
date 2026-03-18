/*
 * XREFs of RtlNtStatusToDosError @ 0x140919300
 * Callers:
 *     EtwStartAutoLogger @ 0x14079EA28 (EtwStartAutoLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079FAC8 (EtwpEnumerateAutologgerPath.c)
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140918994 (LocalGetSidForString.c)
 *     LocalConvertAclToString @ 0x1409E6840 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1409E8690 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1409E8CD0 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetStringForSid @ 0x1409EA58C (LocalGetStringForSid.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A78080 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateKeyProviders @ 0x140A9438C (EtwpEnumerateKeyProviders.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x1404418E0 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *Teb; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->ApcStateIndex != 1 )
  {
    Teb = CurrentThread->Teb;
    if ( Teb )
      Teb[1172] = Status;
  }
  return RtlNtStatusToDosErrorNoTeb(Status);
}
