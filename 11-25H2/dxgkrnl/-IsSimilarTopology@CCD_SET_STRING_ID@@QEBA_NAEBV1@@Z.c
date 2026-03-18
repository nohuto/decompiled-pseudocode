/*
 * XREFs of ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x14018842C
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14036ABE0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x140261DC4 (-_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::IsSimilarTopology(CCD_SET_STRING_ID *this, const struct CCD_SET_STRING_ID *a2)
{
  __int16 v2; // ax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  char v7; // di
  __int64 v8; // r9

  v2 = *((_WORD *)this + 16);
  if ( !v2 )
    return 0;
  v5 = *((unsigned __int16 *)a2 + 16);
  if ( v2 != (_WORD)v5 )
    return 0;
  v6 = 0;
  v7 = 1;
  while ( v6 < v5 )
  {
    v8 = *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * v6 + 4);
    if ( (_WORD)v8 || *(_WORD *)(*((_QWORD *)a2 + 3) + 8LL * v6 + 4) )
    {
      WdLogSingleEntry5(1LL, v6, this, v8, a2, *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 8LL * v6 + 4));
      WdLogGlobalForLineNumber = 1510;
      return 0;
    }
    ++v6;
  }
  if ( !CCD_SET_STRING_ID::_TryToMapCloneGroups(this, a2) || !CCD_SET_STRING_ID::_TryToMapCloneGroups(a2, this) )
    return 0;
  return v7;
}
