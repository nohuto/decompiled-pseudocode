/*
 * XREFs of RtlPcToFileName @ 0x14036CC30
 * Callers:
 *     KiLogSingleDpcSoftTimeoutEvent @ 0x1405B1310 (KiLogSingleDpcSoftTimeoutEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x140643A68 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x14064DC40 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x140A686B0 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x14025D3B0 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14025D41C (MmLockLoadedModuleListShared.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 */

__int64 __fastcall RtlPcToFileName(__int64 a1, UNICODE_STRING *a2)
{
  unsigned __int8 v4; // di
  __int64 DataTableEntryByAddress; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx

  v4 = MmLockLoadedModuleListShared();
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  v8 = 0;
  if ( DataTableEntryByAddress )
    RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(DataTableEntryByAddress + 88));
  else
    v8 = -1073741275;
  MmUnlockLoadedModuleListShared(v4, v6, v7);
  return v8;
}
