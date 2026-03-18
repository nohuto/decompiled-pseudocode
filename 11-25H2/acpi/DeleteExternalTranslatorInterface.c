/*
 * XREFs of DeleteExternalTranslatorInterface @ 0x14009D528
 * Callers:
 *     AcpiExternalInterfaceUnload @ 0x14009D2A0 (AcpiExternalInterfaceUnload.c)
 *     NotifyExternalTranslationInterfaceChange @ 0x14009D7A0 (NotifyExternalTranslationInterfaceChange.c)
 * Callees:
 *     <none>
 */

__int64 DeleteExternalTranslatorInterface()
{
  PVOID v0; // rsi
  wchar_t *Buffer; // rbx
  PVOID v2; // rdi

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&ExternalTranslatorInterfaceLock, 1u);
  v0 = ExternalTranslationInterface;
  ExternalTranslationInterface = 0LL;
  Buffer = CurrentExternalTranslationProvider.Buffer;
  RtlInitUnicodeString(&CurrentExternalTranslationProvider, 0LL);
  v2 = ExternalTranslatorNotificationEntry;
  ExternalTranslatorNotificationEntry = 0LL;
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  if ( v0 )
  {
    if ( v2 )
      IoUnregisterPlugPlayNotification(v2);
    ExFreePoolWithTag(v0, 0x58706341u);
  }
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x58706341u);
  return 0LL;
}
