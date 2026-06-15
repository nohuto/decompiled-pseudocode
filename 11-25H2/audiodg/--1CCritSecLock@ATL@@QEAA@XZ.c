/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140039274
 * Callers:
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x1400090A0 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400094A0 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009800 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009FF0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000A7A0 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC20 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x140027470 (-AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400306A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x140035CF0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x140076968 (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14008F820 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14008F940 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14008FA40 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z @ 0x14008FB50 (-GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14008FC40 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x140090DA0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 *     _CAudioProcessor::DeactivateAPO_::_1_::dtor$0 @ 0x140091D5D (_CAudioProcessor--DeactivateAPO_--_1_--dtor$0.c)
 *     _CAudioProcessor::CommitGraphChanges_::_1_::dtor$0 @ 0x140091E31 (_CAudioProcessor--CommitGraphChanges_--_1_--dtor$0.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$0 @ 0x140093B02 (_CAudioProcessor--ActivateAPO_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
