/*
 * XREFs of ??A?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAAEAPEAVCConnectionNode@@_K@Z @ 0x140031234
 * Callers:
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140005DC0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400306A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::operator[](_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    ATL::AtlThrowImpl(-2147024809);
  return *a1 + 8 * a2;
}
