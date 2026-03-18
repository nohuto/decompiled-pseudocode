/*
 * XREFs of RtlAppendStringToString @ 0x140A7D0B0
 * Callers:
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x1407CCAF8 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x1407CCEE4 (CmpInitBackupHive.c)
 *     MiFormFullImageName @ 0x1407D7718 (MiFormFullImageName.c)
 *     EmInitSystem @ 0x140C4F21C (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
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
