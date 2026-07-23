/*
 * XREFs of LdrpOpenKey @ 0x1800E61E0
 * Callers:
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180099E20 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x18013E330 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1801488A4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180149744 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
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
