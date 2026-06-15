/*
 * XREFs of _ATL::CAtlMap_IAudioStreamInfo___Sarm::CStreamResource_ATL::CElementTraits_IAudioStreamInfo____ATL::CElementTraits_Sarm::CStreamResource___::SetAt_::_1_::catch$0 @ 0x180167E29
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAtPos@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18011A300 (-RemoveAtPos@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudio.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_IAudioStreamInfo___Sarm::CStreamResource_ATL::CElementTraits_IAudioStreamInfo____ATL::CElementTraits_Sarm::CStreamResource___::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAtPos(
    *(_QWORD *)(a2 + 96),
    *(_QWORD *)(a2 + 120));
  throw;
}
