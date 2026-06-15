/*
 * XREFs of ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180071164
 * Callers:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180141578 (--0CSpatialAudioTech@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x1800A0BA0 (--$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VAtmosCheck@@@12@XZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180150BEC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
struct AtmosCheck *CSpatialAudioTech::GetAtmosCheck(void)
{
  char *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  char v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+10h]

  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  v8 = &CSpatialAudioTech::s_atmosLock;
  if ( ++CSpatialAudioTech::s_uAtmosRefCount == 1 )
  {
    v0 = (char *)Microsoft::WRL::Details::Make<AtmosCheck,>(&v7);
    v1 = 0LL;
    if ( &v6 != v0 )
    {
      v1 = *(_QWORD *)v0;
      *(_QWORD *)v0 = 0LL;
    }
    v2 = CSpatialAudioTech::s_spAtmosCheck;
    CSpatialAudioTech::s_spAtmosCheck = v1;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( CSpatialAudioTech::s_spAtmosCheck && (int)AtmosCheck::Initialize() < 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&CSpatialAudioTech::s_spAtmosCheck);
LABEL_12:
      CSpatialAudioTech::s_uAtmosRefCount = 0;
    }
  }
  else if ( !CSpatialAudioTech::s_spAtmosCheck )
  {
    goto LABEL_12;
  }
  v4 = CSpatialAudioTech::s_spAtmosCheck;
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  return (struct AtmosCheck *)v4;
}
