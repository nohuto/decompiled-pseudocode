/*
 * XREFs of ?IsSpatialFormatOwner@CPolicyConfig@@UEAAHU_GUID@@PEBG@Z @ 0x180106580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x18013BFE8 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ?IsSpatialFormatOwner@AtmosCheck@@QEAAJAEBU_GUID@@PEBGPEA_N@Z @ 0x180151484 (-IsSpatialFormatOwner@AtmosCheck@@QEAAJAEBU_GUID@@PEBGPEA_N@Z.c)
 */

_BOOL8 __fastcall CPolicyConfig::IsSpatialFormatOwner(
        CPolicyConfig *this,
        struct _GUID *a2,
        const unsigned __int16 *a3)
{
  bool v3; // bl
  bool v7; // [rsp+20h] [rbp-18h] BYREF
  struct AtmosCheck *v8[2]; // [rsp+28h] [rbp-10h] BYREF

  v3 = 0;
  v7 = 0;
  v8[0] = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v8);
  if ( (int)CSpatialAudioTech::GetAtmosCheckInstance(v8) >= 0 && v8[0] )
  {
    AtmosCheck::IsSpatialFormatOwner(v8[0], a2, a3, &v7);
    v3 = v7;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v8);
  return v3;
}
