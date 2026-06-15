/*
 * XREFs of ?CreateSpatialAudioLicenseServer@@YAJPEAPEAUISpatialAudioLicenseServer@@@Z @ 0x180073F60
 * Callers:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x1800576C8 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateSpatialAudioLicenseServer(struct ISpatialAudioLicenseServer **a1)
{
  HRESULT v2; // ebx
  LPVOID v3; // rcx
  struct ISpatialAudioLicenseServer *v4; // rax
  LPVOID v5; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  ppv = 0LL;
  v2 = CoCreateInstance(
         &CLSID_SpatialAudioLicenseServerInteractiveUser,
         0LL,
         4u,
         &GUID_cdc99663_5f31_45ee_89fa_a4a0d64f6d1c,
         &ppv);
  if ( v2 == -2147024891 )
  {
    v3 = ppv;
    ppv = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v3 + 16LL))(v3);
    v2 = CoCreateInstance(
           &CLSID_SpatialAudioLicenseServerAsActivator,
           0LL,
           4u,
           &GUID_cdc99663_5f31_45ee_89fa_a4a0d64f6d1c,
           &ppv);
  }
  if ( v2 < 0 )
  {
    v5 = ppv;
  }
  else
  {
    v4 = (struct ISpatialAudioLicenseServer *)ppv;
    v5 = 0LL;
    ppv = 0LL;
    *a1 = v4;
  }
  if ( v5 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v2;
}
