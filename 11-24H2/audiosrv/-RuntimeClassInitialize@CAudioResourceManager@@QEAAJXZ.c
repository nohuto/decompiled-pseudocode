/*
 * XREFs of ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x1800BF370
 * Callers:
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x1800B5570 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCAudioRenderEndpointChangeDelegator@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAudioRenderEndpointChangeDelegator@@@Z @ 0x1800B54D8 (--$MakeAndInitialize@VCAudioRenderEndpointChangeDelegator@@V1@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ?Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z @ 0x1800EC4D8 (-Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioResourceManager::RuntimeClassInitialize(CAudioResourceManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 7);
  v2 = CConstraintModelResourceManager::Create(
         (struct IAudioResourceControl *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
         (struct CConstraintModelResourceManager **)this + 7);
  if ( v2 < 0 )
  {
    v3 = 1135LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v5 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CAudioRenderEndpointChangeDelegator,CAudioRenderEndpointChangeDelegator,>((CAudioRenderEndpointChangeDelegator **)this + 9);
  if ( v2 < 0 )
  {
    v3 = 1136LL;
    goto LABEL_3;
  }
  return 0LL;
}
