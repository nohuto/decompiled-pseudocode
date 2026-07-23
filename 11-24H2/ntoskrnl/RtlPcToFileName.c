/*
 * XREFs of RtlPcToFileName @ 0x1403F9FF0
 * Callers:
 *     KiLogSingleDpcSoftTimeoutEvent @ 0x1405B1C40 (KiLogSingleDpcSoftTimeoutEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x14064E0B4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x140658180 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14023165C (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402316B0 (MmUnlockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall RtlPcToFileName(unsigned __int64 a1, UNICODE_STRING *a2)
{
  unsigned __int8 v4; // di
  __int64 *DataTableEntryByAddress; // rax
  unsigned int v6; // ebx

  v4 = MmLockLoadedModuleListShared();
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  v6 = 0;
  if ( DataTableEntryByAddress )
    RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(DataTableEntryByAddress + 11));
  else
    v6 = -1073741275;
  MmUnlockLoadedModuleListShared(v4);
  return v6;
}
