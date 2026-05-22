/*
 * XREFs of ?GetRunState@Edge@@QEBA?AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ @ 0x1801A9D8C
 * Callers:
 *     ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1801A9A2C (-GetCandidate@Edges@@QEAA_NPEBV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@st.c)
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x1801A9DCC (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x1801AA068 (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 */

__int64 __fastcall Edge::GetRunState(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // rcx

  if ( (unsigned __int8)Edge::IsClientPresent(a1, 1LL) )
    return *(unsigned int *)(v1 + 48);
  if ( (unsigned __int8)Edge::IsClientPresent(v1, 2LL) )
    return 0LL;
  return *(_BYTE *)(v3 + 52) != 0 ? 4 : 0;
}
