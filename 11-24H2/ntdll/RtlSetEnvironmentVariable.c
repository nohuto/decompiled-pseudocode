/*
 * XREFs of RtlSetEnvironmentVariable @ 0x180004E90
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetEnvironmentVar @ 0x180004ED0 (RtlSetEnvironmentVar.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVariable(PVOID *Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  wchar_t *Buffer; // r9
  SIZE_T ValueLength; // rax

  Buffer = 0LL;
  if ( Value )
  {
    Buffer = Value->Buffer;
    ValueLength = (unsigned __int64)Value->Length >> 1;
  }
  else
  {
    ValueLength = 0LL;
  }
  return RtlSetEnvironmentVar(Environment, Name->Buffer, (unsigned __int64)Name->Length >> 1, Buffer, ValueLength);
}
