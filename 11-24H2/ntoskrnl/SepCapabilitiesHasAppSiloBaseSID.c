/*
 * XREFs of SepCapabilitiesHasAppSiloBaseSID @ 0x140364188
 * Callers:
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 */

char __fastcall SepCapabilitiesHasAppSiloBaseSID(unsigned int a1, __int64 a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < a1; ++i )
  {
    if ( RtlEqualSid(SeAppSiloSid, *(PSID *)(a2 + 16LL * i)) )
      return 1;
  }
  return 0;
}
