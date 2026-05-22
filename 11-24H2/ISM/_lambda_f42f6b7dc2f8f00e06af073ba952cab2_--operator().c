/*
 * XREFs of _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180066EFC
 * Callers:
 *     std::call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___ @ 0x180097048 (std--call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x180067190 (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x1800673B4 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??$_Erase_tree_and_orphan@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x180067BA8 (--$_Erase_tree_and_orphan@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009D680 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator()(_QWORD *a1)
{
  float v2; // xmm7_4
  float v3; // xmm8_4
  float v4; // xmm9_4
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 v7; // di
  __int64 v8; // r8
  const char *v9; // r9
  struct MPCConstantManager *Instance; // rbx
  char *v11[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v13[32]; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+68h] [rbp-A0h]
  char v15; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v16[32]; // [rsp+70h] [rbp-98h] BYREF
  int v17; // [rsp+90h] [rbp-78h]
  char v18; // [rsp+94h] [rbp-74h]
  _BYTE v19[40]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v20[32]; // [rsp+C0h] [rbp-48h] BYREF
  int v21; // [rsp+E0h] [rbp-28h]
  char v22; // [rsp+E4h] [rbp-24h]
  _BYTE v23[32]; // [rsp+E8h] [rbp-20h] BYREF
  int v24; // [rsp+108h] [rbp+0h]
  char v25; // [rsp+10Ch] [rbp+4h]
  _BYTE v26[32]; // [rsp+110h] [rbp+8h] BYREF
  float v27; // [rsp+130h] [rbp+28h]
  char v28; // [rsp+134h] [rbp+2Ch]
  _BYTE v29[32]; // [rsp+138h] [rbp+30h] BYREF
  float v30; // [rsp+158h] [rbp+50h]
  char v31; // [rsp+15Ch] [rbp+54h]
  _BYTE v32[32]; // [rsp+160h] [rbp+58h] BYREF
  float v33; // [rsp+180h] [rbp+78h]
  char v34; // [rsp+184h] [rbp+7Ch]
  _BYTE v35[32]; // [rsp+188h] [rbp+80h] BYREF
  float v36; // [rsp+1A8h] [rbp+A0h]
  char v37; // [rsp+1ACh] [rbp+A4h]
  _BYTE v38[32]; // [rsp+1B0h] [rbp+A8h] BYREF
  int v39; // [rsp+1D0h] [rbp+C8h]
  char v40; // [rsp+1D4h] [rbp+CCh]
  _BYTE v41[32]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v42; // [rsp+1F8h] [rbp+F0h]
  char v43; // [rsp+1FCh] [rbp+F4h]
  char v44; // [rsp+200h] [rbp+F8h] BYREF

  v2 = FLOAT_0_5;
  v3 = FLOAT_0_40000001;
  v4 = FLOAT_0_18000001;
  v7 = IsEdition(10LL);
  if ( v7 )
  {
    v2 = FLOAT_1_5700001;
    v3 = FLOAT_0_5;
    v4 = FLOAT_0_5;
  }
  Instance = MPCConstantManager::GetInstance(v6, v5, v8, v9);
  std::wstring::wstring(v13, L"ActivationDelta");
  v14 = v7 != 0 ? 0x9C4 : 0;
  v15 = 0;
  std::wstring::wstring(v16, L"MouseParams_DeltaToRadiansRatio");
  v17 = 1142292480;
  v18 = 2;
  std::wstring::wstring(v19, L"MouseParams_UseHitTestMouseReference");
  v19[32] = 0;
  v19[36] = 1;
  std::wstring::wstring(v20, L"MouseParams_DeltaToRadiansRatio_NoHitTestSensitivityCompensationFactor");
  v21 = 1053609165;
  v22 = 2;
  std::wstring::wstring(v23, L"MouseParams_ResetCursorDirectionThresholdSeconds");
  v24 = 1056964608;
  v25 = 2;
  std::wstring::wstring(v26, L"MouseParams_ResetHorizontalAngleRadians");
  v27 = v2;
  v28 = 2;
  std::wstring::wstring(v29, L"MouseParams_ResetVerticalAngleRadians");
  v30 = v2;
  v31 = 2;
  std::wstring::wstring(v32, L"MouseParams_ClampHorizontalAngleRadians");
  v33 = v3;
  v34 = 2;
  std::wstring::wstring(v35, L"MouseParams_ClampVerticalAngleRadians");
  v36 = v4;
  v37 = 2;
  std::wstring::wstring(v38, L"MouseParams_PointScaleFactorXY");
  v39 = 982355657;
  v40 = 2;
  std::wstring::wstring(v41, L"MouseParams_PointScaleFactorWheel");
  v42 = 977574822;
  v43 = 2;
  v12[0] = v13;
  v12[1] = &v44;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    v11,
    v12);
  MPCConstantManager::AddAndPopulateInputType(
    Instance,
    (*a1 + 40LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    v11);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Erase_tree_and_orphan<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *>>>(
    v11,
    v11,
    *((_QWORD *)v11[0] + 1));
  std::_Deallocate<16,0>(v11[0], (const struct std::nothrow_t *)0x48);
  `eh vector destructor iterator'(
    v13,
    0x28uLL,
    0xBuLL,
    std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
