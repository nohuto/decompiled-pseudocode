/*
 * XREFs of ?GetSetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x14033E82C
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14031C570 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     _CcdRetrieveSetIdFromRegistry @ 0x140340478 (_CcdRetrieveSetIdFromRegistry.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetSetId(
        CCD_STORE::CONNECTED_SET_DESCRIPTOR *this)
{
  void *v2; // rcx
  const struct CCD_SET_STRING_ID *result; // rax
  int SetIdFromRegistry; // eax

  v2 = (void *)*((_QWORD *)this + 12);
  if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
    return this;
  SetIdFromRegistry = CcdRetrieveSetIdFromRegistry(v2);
  if ( SetIdFromRegistry >= 0 )
    return this;
  WdLogSingleEntry3(2LL, SetIdFromRegistry, this, *((_QWORD *)this + 12));
  result = 0LL;
  WdLogGlobalForLineNumber = 756;
  return result;
}
