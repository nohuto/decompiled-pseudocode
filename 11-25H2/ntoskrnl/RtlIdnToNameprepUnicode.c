/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1407752C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x14077538C (RtlpNameprepAsciiWorker.c)
 */

NTSTATUS __stdcall RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(
           Flags,
           (_DWORD)SourceString,
           SourceStringLength,
           (_DWORD)DestinationString,
           (__int64)DestinationStringLength,
           0);
}
