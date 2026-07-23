/*
 * XREFs of RtlPcToFilePath @ 0x140A15C50
 * Callers:
 *     KitLogFeatureUsage @ 0x140658180 (KitLogFeatureUsage.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 * Callees:
 *     MmLockLoadedDataTableEntryShared @ 0x1402BA46C (MmLockLoadedDataTableEntryShared.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1404AEB90 (MmUnlockLoadedDataTableEntryShared.c)
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
