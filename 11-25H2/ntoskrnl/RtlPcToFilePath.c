/*
 * XREFs of RtlPcToFilePath @ 0x140AA3620
 * Callers:
 *     KitLogFeatureUsage @ 0x14064DC40 (KitLogFeatureUsage.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x14036CEEC (MmUnlockLoadedDataTableEntryShared.c)
 *     MmLockLoadedDataTableEntryShared @ 0x14036D178 (MmLockLoadedDataTableEntryShared.c)
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
