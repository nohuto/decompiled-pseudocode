/*
 * XREFs of RtlFirstFreeAce @ 0x1409AABA0
 * Callers:
 *     RtlAddAccessFilterAce @ 0x14077FB80 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14077FEA0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140780264 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1407966D8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140796914 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140796A74 (SddlAddScopedPolicyIDAce.c)
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
