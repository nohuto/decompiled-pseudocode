/*
 * XREFs of SepIsAppSiloCapability @ 0x14047E93C
 * Callers:
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlIdentifierAuthoritySid @ 0x140A56B18 (RtlIdentifierAuthoritySid.c)
 */

char __fastcall SepIsAppSiloCapability(_BYTE *a1)
{
  PSID v1; // r9
  PSID_IDENTIFIER_AUTHORITY v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // r11d
  int v7; // r8d
  __int64 v8; // rdx

  if ( *a1 != *(_BYTE *)SeAppSiloSid || a1[1] <= *((_BYTE *)SeAppSiloSid + 1) )
    return 0;
  RtlIdentifierAuthoritySid(SeAppSiloSid);
  v2 = RtlIdentifierAuthoritySid(v1);
  v7 = *(_DWORD *)v2->Value - *(_DWORD *)v3;
  if ( *(_DWORD *)v2->Value == *(_DWORD *)v3 )
    v7 = *(unsigned __int16 *)&v2->Value[4] - *(unsigned __int16 *)(v3 + 4);
  v8 = 0LL;
  if ( v7 )
    return 0;
  while ( (unsigned int)v8 < v6 )
  {
    if ( *(_DWORD *)(v4 + 4 * v8 + 8) != *(_DWORD *)(v5 + 4 * v8 + 8) )
      return 0;
    v8 = (unsigned int)(v8 + 1);
  }
  return 1;
}
