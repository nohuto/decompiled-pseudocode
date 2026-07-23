/*
 * XREFs of SepCapabilitiesHasAppSiloBaseSID @ 0x1403EB1A0
 * Callers:
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
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
