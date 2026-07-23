/*
 * XREFs of RtlCheckSandboxedToken @ 0x1801101B0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlCheckSandboxedToken(HANDLE TokenHandle, PBOOLEAN IsSandboxed)
{
  NTSTATUS result; // eax
  int TokenInformation; // [rsp+40h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  ReturnLength = 0;
  TokenInformation = 0;
  *IsSandboxed = 0;
  if ( !TokenHandle )
    TokenHandle = (HANDLE)-6LL;
  result = NtQueryInformationToken(TokenHandle, 0x2Fu, &TokenInformation, 4u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( TokenInformation )
      *IsSandboxed = 1;
  }
  return result;
}
