/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x180006DB0
 * Callers:
 *     RtlpLookupSafeCurDirList @ 0x18010F9B4 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable_U(PVOID Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  unsigned __int64 MaximumLength; // rax
  NTSTATUS result; // eax
  __int16 v6; // cx
  ULONG_PTR v7; // [rsp+48h] [rbp+10h] BYREF

  MaximumLength = Value->MaximumLength;
  v7 = 0LL;
  result = RtlQueryEnvironmentVariable(
             Environment,
             Name->Buffer,
             (unsigned __int64)Name->Length >> 1,
             Value->Buffer,
             MaximumLength >> 1,
             &v7);
  v6 = v7;
  if ( v7 > 0x7FFF )
    return -1073741801;
  if ( result == -1073741789 )
    v6 = v7 - 1;
  Value->Length = 2 * v6;
  return result;
}
