/*
 * XREFs of RtlPcToFilePath @ 0x140A8F850
 * Callers:
 *     KitLogFeatureUsage @ 0x140659AE0 (KitLogFeatureUsage.c)
 * Callees:
 *     MmLockLoadedDataTableEntryShared @ 0x1402C85E8 (MmLockLoadedDataTableEntryShared.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1404B4344 (MmUnlockLoadedDataTableEntryShared.c)
 */

__int64 __fastcall RtlPcToFilePath(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  v3 = MmLockLoadedDataTableEntryShared(a1);
  v4 = v3;
  if ( !v3 )
    return 3221226021LL;
  RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v3 + 72));
  MmUnlockLoadedDataTableEntryShared(v4);
  return 0LL;
}
