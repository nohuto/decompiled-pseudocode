/*
 * XREFs of RtlNtStatusToDosError @ 0x140867430
 * Callers:
 *     EtwStartAutoLogger @ 0x1407ADDF8 (EtwStartAutoLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AEE98 (EtwpEnumerateAutologgerPath.c)
 *     LocalConvertAclToString @ 0x140860920 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140862DB8 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140863ECC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140866AC4 (LocalGetSidForString.c)
 *     LocalGetStringForSid @ 0x140A6C7F0 (LocalGetStringForSid.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A79EF0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateKeyProviders @ 0x140A99E54 (EtwpEnumerateKeyProviders.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x140441550 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *Teb; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( Teb )
    Teb[1172] = Status;
  return RtlNtStatusToDosErrorNoTeb(Status);
}
