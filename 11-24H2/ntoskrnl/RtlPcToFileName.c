/*
 * XREFs of RtlPcToFileName @ 0x1403FFB00
 * Callers:
 *     KiLogSingleDpcSoftTimeoutEvent @ 0x1405B4CB0 (KiLogSingleDpcSoftTimeoutEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x14064FA08 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x140659AE0 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14027C0CC (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x14027C120 (MmUnlockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x1402C724C (MmFindDataTableEntryByAddress.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
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
