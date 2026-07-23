/*
 * XREFs of RtlCreateRegistryKey @ 0x18013CCE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180083108 (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

NTSTATUS __cdecl RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      NtClose(Handle);
    return 0;
  }
  return result;
}
