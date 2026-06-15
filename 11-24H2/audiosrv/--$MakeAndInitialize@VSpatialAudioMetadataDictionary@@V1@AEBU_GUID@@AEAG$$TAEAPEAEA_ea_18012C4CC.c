/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpatialAudioMetadataDictionary@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x18012C4CC
 * Callers:
 *     Create_SpatialAudioMetadataDictionaryFromData @ 0x18012D0F0 (Create_SpatialAudioMetadataDictionaryFromData.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionary,SpatialAudioMetadataDictionary,_GUID const &,unsigned short &,std::nullptr_t,unsigned char * &,unsigned int &>(
        __int64 *a1,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        const unsigned __int16 **a4,
        unsigned __int8 **a5,
        unsigned int *a6)
{
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionary,SpatialAudioMetadataDictionary,_GUID const &,unsigned short &,std::nullptr_t,unsigned char * &,unsigned int &>(
           (SpatialAudioMetadataDictionary **)a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
