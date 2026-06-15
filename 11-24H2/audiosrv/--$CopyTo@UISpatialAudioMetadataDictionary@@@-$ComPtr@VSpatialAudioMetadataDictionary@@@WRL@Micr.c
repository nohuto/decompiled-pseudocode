/*
 * XREFs of ??$CopyTo@UISpatialAudioMetadataDictionary@@@?$ComPtr@VSpatialAudioMetadataDictionary@@@WRL@Microsoft@@QEBAJPEAPEAUISpatialAudioMetadataDictionary@@@Z @ 0x18012C3A8
 * Callers:
 *     Create_SpatialAudioMetadataDictionaryFromData @ 0x18012D0F0 (Create_SpatialAudioMetadataDictionaryFromData.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioMetadataDictionary>::CopyTo<ISpatialAudioMetadataDictionary>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_7175fd87_aec9_42ed_ad43_364817a8ed7a, a2);
}
