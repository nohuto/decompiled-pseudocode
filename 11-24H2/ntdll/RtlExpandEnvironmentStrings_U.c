/*
 * XREFs of RtlExpandEnvironmentStrings_U @ 0x180006E20
 * Callers:
 *     RtlpLookupSafeCurDirList @ 0x18010F9B4 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlExpandEnvironmentStrings @ 0x180006EC0 (RtlExpandEnvironmentStrings.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings_U(
        PVOID Environment,
        PUNICODE_STRING Source,
        PUNICODE_STRING Destination,
        PULONG ReturnedLength)
{
  unsigned __int64 MaximumLength; // rax
  unsigned __int64 Length; // r8
  wchar_t *Buffer; // rdx
  WCHAR *v9; // r9
  NTSTATUS result; // eax
  int v11; // ecx
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  MaximumLength = Destination->MaximumLength;
  Length = Source->Length;
  Buffer = Source->Buffer;
  v9 = Destination->Buffer;
  ReturnLength = 0LL;
  result = RtlExpandEnvironmentStrings(Environment, Buffer, Length >> 1, v9, MaximumLength >> 1, &ReturnLength);
  v11 = ReturnLength;
  if ( ReturnLength > 0x7FFF )
  {
    result = -1073741823;
    if ( ReturnedLength )
      *ReturnedLength = 0;
  }
  else
  {
    if ( result >= 0 )
      Destination->Length = 2 * (ReturnLength - 1);
    if ( ReturnedLength )
      *ReturnedLength = 2 * v11;
  }
  return result;
}
