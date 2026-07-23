/*
 * XREFs of RtlFormatMessage @ 0x14077EDB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFormatMessageEx @ 0x140A685FC (RtlFormatMessageEx.c)
 */

NTSTATUS __cdecl RtlFormatMessage(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  return RtlFormatMessageEx(
           MessageFormat,
           MaximumWidth,
           IgnoreInserts,
           ArgumentsAreAnsi,
           ArgumentsAreAnArray,
           Arguments,
           Buffer,
           Length,
           ReturnLength,
           0LL);
}
