/*
 * XREFs of SetGamingFullScreenExperience @ 0x18000F4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005C04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x18000E7F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     IsGamingFullScreenExperienceSupported @ 0x18000F290 (IsGamingFullScreenExperienceSupported.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SetGamingFullScreenExperience(int a1)
{
  BOOL v2; // eax
  __int64 v3; // r8
  const char *v4; // r9
  HRESULT v5; // eax
  unsigned int v6; // ebx
  __int64 result; // rax
  LPVOID v8; // rbx
  __int64 (__fastcall *v9)(LPVOID, SID *, GUID *, _QWORD **); // rsi
  _QWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v17; // [rsp+48h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp+18h] BYREF

  v2 = IsGamingFullScreenExperienceSupported();
  try
  {
    if ( v2 )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
      {
        v17 = 0LL;
        ppv = 0LL;
        v5 = CoCreateInstance(
               &CLSID_AgileImmersiveShellBroker,
               0LL,
               4u,
               &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
               &ppv);
        v6 = v5;
        if ( v5 >= 0 )
        {
          v8 = ppv;
          v9 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, _QWORD **))(*(_QWORD *)ppv + 96LL);
          v10 = v17;
          v17 = 0LL;
          if ( v10 )
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*v10 + 16LL))(v10, *v10);
          v11 = v9(v8, &SID_GamingPostureBroker, &GUID_65a90a52_2944_5eb7_aaa6_65b56afe4cbc, &v17);
          v13 = v11;
          if ( v11 >= 0 )
          {
            LOBYTE(v12) = a1 != 0;
            v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v17 + 56LL))(v17, v12);
            v15 = v14;
            if ( v14 >= 0 )
            {
              if ( v17 )
                (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
              if ( ppv )
                (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x159,
                (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
                (const char *)(unsigned int)v14);
              if ( v17 )
                (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
              if ( ppv )
                (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 16LL))(ppv, *(_QWORD *)ppv);
              result = v15;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x158,
              (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
              (const char *)(unsigned int)v11);
            if ( v17 )
              (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
            if ( ppv )
              (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 16LL))(ppv, *(_QWORD *)ppv);
            result = v13;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x157,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
            (const char *)(unsigned int)v5);
          if ( v17 )
            (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
          if ( ppv )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
          result = v6;
        }
      }
      else
      {
        result = 2147942405LL;
      }
    }
    else
    {
      result = 2147942450LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(retaddr, (void *)0x168, v3, v4);
  }
  return result;
}
