/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1408E6250
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x140A6AE40 (RtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x14030F8DC (UpcaseUnicodeToUTF8NHelper.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140310D10 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14041A690 (UpcaseUnicodeToMultiByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x1408E7140 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  CHAR *v5; // r14
  ULONG v6; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int16 v11; // r8
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF

  v5 = OemString;
  LOBYTE(OemString) = 1;
  v6 = BytesInUnicodeString >> 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(OemString) )
    return UpcaseUnicodeToUTF8NHelper(v5, MaxBytesInOemString, BytesInOemString, (__int64)UnicodeString, v6);
  _InterlockedOr(v13, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( WORD2(CurrentServerSiloGlobals[69].Flink) == v11 )
    return UpcaseUnicodeToSingleByteNHelper(
             v5,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             v6,
             (__int64)CurrentServerSiloGlobals[71].Flink,
             (__int64)CurrentServerSiloGlobals[70].Blink);
  else
    return UpcaseUnicodeToMultiByteNHelper(
             v5,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             v6);
}
