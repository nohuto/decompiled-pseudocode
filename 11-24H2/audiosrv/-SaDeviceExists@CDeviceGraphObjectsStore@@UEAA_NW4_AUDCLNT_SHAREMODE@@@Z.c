/*
 * XREFs of ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x18005E8C0
 * Callers:
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x18005E770 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18005E950 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CDeviceGraphObjectsStore::SaDeviceExists(CDeviceGraphObjectsStore *this, enum _AUDCLNT_SHAREMODE a2)
{
  bool v4; // bl
  __int64 v5; // rcx
  __int64 (__fastcall **v7)(); // [rsp+20h] [rbp-48h] BYREF
  enum _AUDCLNT_SHAREMODE v8; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall ***v9)(); // [rsp+58h] [rbp-10h]
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
  v7 = off_180178680;
  v8 = a2;
  v9 = &v7;
  v4 = (int)CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(this, &v7, &v10) >= 0;
  v5 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
