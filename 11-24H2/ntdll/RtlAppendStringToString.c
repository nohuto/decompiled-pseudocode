/*
 * XREFs of RtlAppendStringToString @ 0x18013A810
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlAppendStringToString(PSTRING Destination, PSTRING Source)
{
  int Length; // edi
  __int64 v4; // rcx

  Length = Source->Length;
  if ( (_WORD)Length )
  {
    v4 = Destination->Length;
    if ( (int)v4 + Length > (unsigned int)Destination->MaximumLength )
      return -1073741789;
    memmove(&Destination->Buffer[v4], Source->Buffer, Source->Length);
    Destination->Length += Length;
  }
  return 0;
}
