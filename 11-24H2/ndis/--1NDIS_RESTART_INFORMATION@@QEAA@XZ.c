/*
 * XREFs of ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x140154450
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140154AB0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(NDIS_RESTART_INFORMATION *this)
{
  unsigned int *SupportedOidList; // rcx
  unsigned __int8 *p; // rcx

  SupportedOidList = this->General.SupportedOidList;
  if ( SupportedOidList )
    ExFreePoolWithTag(SupportedOidList, 0);
  p = this->FilterInstanceBuffer._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->FilterInstanceBuffer._p = 0LL;
    *(_QWORD *)&this->FilterInstanceBuffer.m_bufferSize = 0LL;
  }
}
