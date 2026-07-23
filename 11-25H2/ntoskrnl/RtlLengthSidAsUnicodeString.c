/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x140917060
 * Callers:
 *     AdtpBuildSidListString @ 0x140801258 (AdtpBuildSidListString.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A61294 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 * Callees:
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 */

NTSTATUS __cdecl RtlLengthSidAsUnicodeString(PSID Sid, PULONG StringLength)
{
  int v4; // edx

  if ( RtlValidSid(Sid) != 1 )
    return -1073741704;
  if ( *((_BYTE *)Sid + 2) || (v4 = 28, *((_BYTE *)Sid + 3)) )
    v4 = 36;
  *StringLength = v4 + 22 * *((unsigned __int8 *)Sid + 1);
  return 0;
}
