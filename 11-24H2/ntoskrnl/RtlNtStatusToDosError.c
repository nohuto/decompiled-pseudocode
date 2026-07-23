/*
 * XREFs of RtlNtStatusToDosError @ 0x14086B8C0
 * Callers:
 *     EtwStartAutoLogger @ 0x1407AE248 (EtwStartAutoLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AF2E8 (EtwpEnumerateAutologgerPath.c)
 *     LocalConvertAclToString @ 0x140864F2C (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408673C8 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1408684DC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x14086B0D4 (LocalGetSidForString.c)
 *     LocalGetStringForSid @ 0x140A66038 (LocalGetStringForSid.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A741F0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateKeyProviders @ 0x140A953C0 (EtwpEnumerateKeyProviders.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x140437E90 (RtlNtStatusToDosErrorNoTeb.c)
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
