/*
 * XREFs of RtlEqualDomainName @ 0x1800BEC70
 * Callers:
 *     RtlEqualComputerName @ 0x18013D990 (RtlEqualComputerName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlCanonicalizeDomainName @ 0x1800BF430 (RtlCanonicalizeDomainName.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualDomainName(PUNICODE_STRING String1, PUNICODE_STRING String2)
{
  BOOLEAN v2; // si
  wchar_t *Buffer; // rbx
  _UNICODE_STRING v5; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  if ( (int)RtlCanonicalizeDomainName(&v5) >= 0 )
  {
    if ( (int)RtlCanonicalizeDomainName(&DestinationString) >= 0 )
    {
      Buffer = DestinationString.Buffer;
      if ( v5.Length == DestinationString.Length )
        v2 = memcmp(v5.Buffer, DestinationString.Buffer, v5.Length) == 0;
      if ( Buffer )
        RtlpSysVolFree(Buffer);
    }
    if ( v5.Buffer )
      RtlpSysVolFree(v5.Buffer);
  }
  return v2;
}
