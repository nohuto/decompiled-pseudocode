/*
 * XREFs of RtlFirstFreeAce @ 0x1800DC8E0
 * Callers:
 *     RtlAddAccessFilterAce @ 0x18013C440 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013C6F0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013C870 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013CC00 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013CDD0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // r8

  v2 = 0;
  v3 = a1 + 8;
  *a2 = 0LL;
  while ( v2 < *(unsigned __int16 *)(a1 + 4) )
  {
    if ( v3 >= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      return 0;
    ++v2;
    v3 += *(unsigned __int16 *)(v3 + 2);
  }
  if ( v3 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    *a2 = v3;
  return 1;
}
