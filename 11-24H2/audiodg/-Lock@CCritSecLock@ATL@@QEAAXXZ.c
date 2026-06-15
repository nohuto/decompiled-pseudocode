/*
 * XREFs of ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000ABEC
 * Callers:
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x1400090D0 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400094D0 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009830 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000A020 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000A7D0 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x14000ABC4 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC50 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x140027170 (-AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400303A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x1400359F0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z @ 0x140035F40 (-DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z.c)
 *     ?AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x14003E690 (-AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CCritSecLock::Lock(LPCRITICAL_SECTION *this)
{
  EnterCriticalSection(*this);
  *((_BYTE *)this + 8) = 1;
}
