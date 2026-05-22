/*
 * XREFs of _lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator() @ 0x1801BE4E8
 * Callers:
 *     std::call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___ @ 0x1801BE1C8 (std--call_once__lambda_aa4734cb05b2f20ab38c0941f0d86b7b___.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x180067190 (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x1800673B4 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18009B0A8 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@KU-$les.c)
 *     ??$?0AEAY0BD@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BD@$$CBG$$QEAM@Z @ 0x18009C364 (--$-0AEAY0BD@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009D680 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$?0AEAY0BA@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BA@$$CBG$$QEAM@Z @ 0x1801B9CB0 (--$-0AEAY0BA@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator()(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct MPCConstantManager *Instance; // rdi
  __int64 v6; // rdx
  _DWORD v7[4]; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v8; // [rsp+30h] [rbp-D0h] BYREF
  char *v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v10[40]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[40]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v12[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v13; // [rsp+C0h] [rbp-40h]
  char v14; // [rsp+C4h] [rbp-3Ch]
  _BYTE v15[32]; // [rsp+C8h] [rbp-38h] BYREF
  int v16; // [rsp+E8h] [rbp-18h]
  char v17; // [rsp+ECh] [rbp-14h]
  _BYTE v18[32]; // [rsp+F0h] [rbp-10h] BYREF
  int v19; // [rsp+110h] [rbp+10h]
  char v20; // [rsp+114h] [rbp+14h]
  _BYTE v21[40]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v22[40]; // [rsp+140h] [rbp+40h] BYREF
  char v23; // [rsp+168h] [rbp+68h] BYREF

  Instance = MPCConstantManager::GetInstance((__int64)a1, a2, a3, a4);
  v7[0] = 1045220557;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v10,
    L"ThumbstickDeadzone",
    v7);
  v7[0] = 1036831949;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v11,
    v6,
    v7);
  std::wstring::wstring((__int64)v12, L"ScrollingScale");
  v13 = 1088421888;
  v14 = 2;
  std::wstring::wstring((__int64)v15, L"ZoomingScale");
  v16 = 1022739087;
  v17 = 2;
  std::wstring::wstring((__int64)v18, L"PointScaleFactor");
  v19 = 1025087898;
  v20 = 2;
  v7[0] = 1097859072;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v21,
    L"SelectXYDeadzone1M",
    v7);
  v7[0] = 0x40000000;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v22,
    L"SelectTemporalDeadzoneSec",
    v7);
  v8.m128i_i64[0] = (__int64)v10;
  v8.m128i_i64[1] = (__int64)&v23;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    v9,
    &v8);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)Instance,
    (*a1 + 32LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    (__int64)v9);
  std::_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>(v9);
  `eh vector destructor iterator'(
    v10,
    40LL,
    7LL,
    (void (__fastcall *)(char *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
