/*
 * XREFs of RtlIdnToUnicode @ 0x1407844D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIdnToUnicodeWorker @ 0x1405EBF3C (RtlpIdnToUnicodeWorker.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  WCHAR *Pool2; // rdi
  NTSTATUS v11; // ebx
  BOOLEAN v12; // [rsp+30h] [rbp-18h]

  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, 0x3FEuLL, 0x456E6449u);
  if ( !Pool2 )
    return -1073741801;
  v11 = RtlpIdnToUnicodeWorker(
          Flags,
          SourceString,
          SourceStringLength,
          DestinationString,
          DestinationStringLength,
          Pool2,
          v12);
  ExFreePoolWithTag(Pool2, 0);
  return v11;
}
