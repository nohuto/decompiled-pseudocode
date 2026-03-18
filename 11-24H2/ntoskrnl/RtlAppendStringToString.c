/*
 * XREFs of RtlAppendStringToString @ 0x140A80710
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x1407DC2B8 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x1407DC6A4 (CmpInitBackupHive.c)
 *     MiFormFullImageName @ 0x1407E75D0 (MiFormFullImageName.c)
 *     EmInitSystem @ 0x140C607D0 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendStringToString(PSTRING Destination, const STRING *Source)
{
  int Length; // edi
  __int64 v4; // rcx

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  v4 = Destination->Length;
  if ( (int)v4 + Length <= (unsigned int)Destination->MaximumLength )
  {
    memmove(&Destination->Buffer[v4], Source->Buffer, Source->Length);
    Destination->Length += Length;
    return 0;
  }
  return -1073741789;
}
