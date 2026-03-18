/*
 * XREFs of RtlFirstFreeAce @ 0x1409A71C0
 * Callers:
 *     RtlAddAccessFilterAce @ 0x140770930 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140770C50 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140771014 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140787308 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140787544 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1407876A4 (SddlAddScopedPolicyIDAce.c)
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
