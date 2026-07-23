/*
 * XREFs of LdrpOpenKey @ 0x1800EBDC0
 * Callers:
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180118410 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x180141830 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x18014BAA4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014C944 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

NTSTATUS __fastcall LdrpOpenKey(_UNICODE_STRING *a1, void *a2, ACCESS_MASK a3, HANDLE *a4)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a1;
  *a4 = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return NtOpenKey(a4, a3, &ObjectAttributes);
}
