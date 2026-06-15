/*
 * XREFs of ?GetStreamEndpointInstance@CPipeInstance@@QEAAPEAVCEndpointInstance@@XZ @ 0x140058470
 * Callers:
 *     ?PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z @ 0x140041884 (-PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z.c)
 *     ?SetSpatialStreamGrantCountInternal@@YAJPEAUIStreamInstanceInternal@@I_J@Z @ 0x14006EC08 (-SetSpatialStreamGrantCountInternal@@YAJPEAUIStreamInstanceInternal@@I_J@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000471C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 */

struct CEndpointInstance *__fastcall CPipeInstance::GetStreamEndpointInstance(CPipeInstance *this)
{
  return *(struct CEndpointInstance **)(*(_QWORD *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)this + 2)
                                      + 32LL);
}
