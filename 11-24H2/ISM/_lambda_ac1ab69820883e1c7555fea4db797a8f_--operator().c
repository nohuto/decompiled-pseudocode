/*
 * XREFs of _lambda_ac1ab69820883e1c7555fea4db797a8f_::operator() @ 0x1800BF6C0
 * Callers:
 *     std::call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___ @ 0x1800BF224 (std--call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x180067190 (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x1800673B4 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18009B0A8 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@KU-$les.c)
 *     ??$?0AEAY0BD@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BD@$$CBG$$QEAM@Z @ 0x18009C364 (--$-0AEAY0BD@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009D680 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_ac1ab69820883e1c7555fea4db797a8f_::operator()(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct MPCConstantManager *Instance; // rdi
  _DWORD v6[4]; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v7; // [rsp+30h] [rbp-D0h] BYREF
  char *v8[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v9[40]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[40]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v11[40]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v12[40]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v13[32]; // [rsp+F0h] [rbp-10h] BYREF
  int v14; // [rsp+110h] [rbp+10h]
  char v15; // [rsp+114h] [rbp+14h]
  _BYTE v16[40]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v17[32]; // [rsp+140h] [rbp+40h] BYREF
  int v18; // [rsp+160h] [rbp+60h]
  char v19; // [rsp+164h] [rbp+64h]
  char v20; // [rsp+168h] [rbp+68h] BYREF

  Instance = MPCConstantManager::GetInstance((__int64)a1, a2, a3, a4);
  std::wstring::wstring((__int64)v9, L"DisableInputInjection");
  v9[32] = 0;
  v9[36] = 1;
  v6[0] = 1063675494;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v10,
    L"HandGuidanceScoreForPrimary",
    v6);
  v6[0] = 1106247680;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v11,
    L"RayInjectionXYDeadzone1M",
    v6);
  v6[0] = 1065353216;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v12,
    L"RayInjectionTemporalDeadzoneSec",
    v6);
  std::wstring::wstring((__int64)v13, L"TouchXYDeadzone1M");
  v14 = 1120403456;
  v15 = 2;
  v6[0] = 1092616192;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v16,
    L"TouchTemporalDeadzoneSec",
    v6);
  std::wstring::wstring((__int64)v17, L"TouchInjectionContactAreaRadius");
  v18 = 25;
  v19 = 0;
  v7.m128i_i64[0] = (__int64)v9;
  v7.m128i_i64[1] = (__int64)&v20;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    v8,
    &v7);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)Instance,
    (*a1 + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    (__int64)v8);
  std::_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>(v8);
  `eh vector destructor iterator'(
    v9,
    40LL,
    7LL,
    (void (__fastcall *)(char *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
