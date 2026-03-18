/*
 * XREFs of SepCapabilitiesHasAppSiloBaseSID @ 0x14036B2D0
 * Callers:
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
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
