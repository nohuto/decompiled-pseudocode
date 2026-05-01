/*
 * XREFs of CanSetGamingFullScreenExperience @ 0x18000ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007100 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x18000E7F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     IsGamingFullScreenExperienceSupported @ 0x18000F290 (IsGamingFullScreenExperienceSupported.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 CanSetGamingFullScreenExperience()
{
  int v0; // eax
  __int64 v1; // r8
  const char *v2; // r9
  HRESULT v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  LPVOID v6; // rbx
  __int64 (__fastcall *v7)(LPVOID, SID *, GUID *, _QWORD **); // rdi
  _QWORD *v8; // rcx
  unsigned int v9; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int8 v12; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp+18h] BYREF

  v0 = IsGamingFullScreenExperienceSupported();
  try
  {
    if ( !v0
      || !wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
    {
      return 0LL;
    }
    v13 = 0LL;
    ppv = 0LL;
    v3 = CoCreateInstance(&CLSID_AgileImmersiveShellBroker, 0LL, 4u, &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c, &ppv);
    v4 = retaddr;
    if ( v3 < 0 )
    {
      v5 = 307LL;
LABEL_12:
      wil::details::in1diag3::_Log_Hr(
        v4,
        (void *)v5,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
        (const char *)(unsigned int)v3);
      if ( v13 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      return 0LL;
    }
    v6 = ppv;
    v7 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, _QWORD **))(*(_QWORD *)ppv + 96LL);
    v8 = v13;
    v13 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
    v3 = v7(v6, &SID_GamingPostureBroker, &GUID_65a90a52_2944_5eb7_aaa6_65b56afe4cbc, &v13);
    v4 = retaddr;
    if ( v3 < 0 )
    {
      v5 = 308LL;
      goto LABEL_12;
    }
    v12 = 0;
    v3 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int8 *))(*v13 + 48LL))(v13, &v12);
    v4 = retaddr;
    if ( v3 < 0 )
    {
      v5 = 311LL;
      goto LABEL_12;
    }
    v9 = v12;
    if ( v13 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    if ( ppv )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 16LL))(ppv, *(_QWORD *)ppv);
    result = v9;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(retaddr, (void *)0x147, v1, v2);
    return 0LL;
  }
  return result;
}
