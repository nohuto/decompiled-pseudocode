/*
 * XREFs of RtlStringFromGUIDEx @ 0x1800EB410
 * Callers:
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800B441C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlStringFromGUID @ 0x1800FB070 (RtlStringFromGUID.c)
 *     RtlpConstructCrossVmObjectPath @ 0x180144E4C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     swprintf_s @ 0x18012F8B0 (swprintf_s.c)
 */

NTSTATUS __cdecl RtlStringFromGUIDEx(PGUID Guid, PUNICODE_STRING GuidString, BOOLEAN AllocateGuidString)
{
  wchar_t *Atom; // rax
  unsigned __int64 MaximumLength; // rdx

  if ( AllocateGuidString )
  {
    GuidString->MaximumLength = 78;
    Atom = (wchar_t *)RtlpAllocateAtom(0x4EuLL);
    GuidString->Buffer = Atom;
    if ( Atom )
    {
LABEL_3:
      MaximumLength = GuidString->MaximumLength;
      GuidString->Length = 76;
      swprintf_s(
        GuidString->Buffer,
        MaximumLength >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        Guid->Data1,
        Guid->Data2,
        Guid->Data3,
        Guid->Data4[0],
        Guid->Data4[1],
        Guid->Data4[2],
        Guid->Data4[3],
        Guid->Data4[4],
        Guid->Data4[5],
        Guid->Data4[6],
        Guid->Data4[7]);
      return 0;
    }
    return -1073741801;
  }
  else
  {
    if ( GuidString->MaximumLength >= 0x4Eu )
      goto LABEL_3;
    return -1073741789;
  }
}
