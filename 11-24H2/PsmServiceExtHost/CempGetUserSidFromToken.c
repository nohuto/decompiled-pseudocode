/*
 * XREFs of CempGetUserSidFromToken @ 0x18003E338
 * Callers:
 *     CempRpcQueryClientInformation @ 0x18003E148 (CempRpcQueryClientInformation.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

int __fastcall CempGetUserSidFromToken(HANDLE TokenHandle, PSID DestinationSid)
{
  int result; // eax
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-88h] BYREF
  PSID TokenInformation[12]; // [rsp+40h] [rbp-78h] BYREF

  ReturnLength[0] = 0;
  memset_0(TokenInformation, 0, 0x58uLL);
  result = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, ReturnLength);
  if ( result >= 0 )
    return RtlCopySid(0x44u, DestinationSid, TokenInformation[0]);
  return result;
}
