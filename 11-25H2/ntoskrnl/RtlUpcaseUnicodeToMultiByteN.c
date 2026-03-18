/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x1408E6D40
 * Callers:
 *     toupper @ 0x1404FD420 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14076DEB0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x14030F8DC (UpcaseUnicodeToUTF8NHelper.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140310D10 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14041A690 (UpcaseUnicodeToMultiByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x1408E7140 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = BytesInUnicodeString >> 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
    return UpcaseUnicodeToUTF8NHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (__int64)UnicodeString,
             v6);
  _InterlockedOr(v12, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( WORD2(CurrentServerSiloGlobals[65].Flink) )
    return UpcaseUnicodeToMultiByteNHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6);
  else
    return UpcaseUnicodeToSingleByteNHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6,
             (__int64)CurrentServerSiloGlobals[67].Flink,
             (__int64)CurrentServerSiloGlobals[66].Blink);
}
