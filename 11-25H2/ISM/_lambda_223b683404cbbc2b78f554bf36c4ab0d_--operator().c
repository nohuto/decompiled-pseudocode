/*
 * XREFs of _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801B3754
 * Callers:
 *     std::call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___ @ 0x1801B2D40 (std--call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x1800673A0 (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x1800675C4 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067E10 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18009AF08 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$vari.c)
 *     ??$?0AEAY0BD@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BD@$$CBG$$QEAM@Z @ 0x18009C194 (--$-0AEAY0BD@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009D4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$?0AEAY0BA@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BA@$$CBG$$QEAM@Z @ 0x1801B2780 (--$-0AEAY0BA@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

// Hidden C++ exception states: #wind=50
void __fastcall lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator()(
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
  _BYTE v18[40]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v19[40]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v20[40]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v21[40]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v22[40]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v23[40]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v24[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v25[40]; // [rsp+208h] [rbp+108h] BYREF
  _BYTE v26[40]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v27[40]; // [rsp+258h] [rbp+158h] BYREF
  _BYTE v28[32]; // [rsp+280h] [rbp+180h] BYREF
  int v29; // [rsp+2A0h] [rbp+1A0h]
  char v30; // [rsp+2A4h] [rbp+1A4h]
  _BYTE v31[40]; // [rsp+2A8h] [rbp+1A8h] BYREF
  _BYTE v32[40]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v33[40]; // [rsp+2F8h] [rbp+1F8h] BYREF
  _BYTE v34[32]; // [rsp+320h] [rbp+220h] BYREF
  int v35; // [rsp+340h] [rbp+240h]
  char v36; // [rsp+344h] [rbp+244h]
  _BYTE v37[40]; // [rsp+348h] [rbp+248h] BYREF
  _BYTE v38[40]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v39[40]; // [rsp+398h] [rbp+298h] BYREF
  _BYTE v40[40]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _BYTE v41[32]; // [rsp+3E8h] [rbp+2E8h] BYREF
  int v42; // [rsp+408h] [rbp+308h]
  char v43; // [rsp+40Ch] [rbp+30Ch]
  _BYTE v44[40]; // [rsp+410h] [rbp+310h] BYREF
  _BYTE v45[40]; // [rsp+438h] [rbp+338h] BYREF
  _BYTE v46[40]; // [rsp+460h] [rbp+360h] BYREF
  _BYTE v47[40]; // [rsp+488h] [rbp+388h] BYREF
  _BYTE v48[40]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _BYTE v49[40]; // [rsp+4D8h] [rbp+3D8h] BYREF
  _BYTE v50[40]; // [rsp+500h] [rbp+400h] BYREF
  _BYTE v51[40]; // [rsp+528h] [rbp+428h] BYREF
  _BYTE v52[40]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v53[40]; // [rsp+578h] [rbp+478h] BYREF
  _BYTE v54[40]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v55[40]; // [rsp+5C8h] [rbp+4C8h] BYREF
  _BYTE v56[40]; // [rsp+5F0h] [rbp+4F0h] BYREF
  _BYTE v57[40]; // [rsp+618h] [rbp+518h] BYREF
  _BYTE v58[40]; // [rsp+640h] [rbp+540h] BYREF
  _BYTE v59[40]; // [rsp+668h] [rbp+568h] BYREF
  _BYTE v60[40]; // [rsp+690h] [rbp+590h] BYREF
  _BYTE v61[40]; // [rsp+6B8h] [rbp+5B8h] BYREF
  _BYTE v62[40]; // [rsp+6E0h] [rbp+5E0h] BYREF
  _BYTE v63[40]; // [rsp+708h] [rbp+608h] BYREF
  _BYTE v64[40]; // [rsp+730h] [rbp+630h] BYREF
  _BYTE v65[40]; // [rsp+758h] [rbp+658h] BYREF
  _BYTE v66[40]; // [rsp+780h] [rbp+680h] BYREF
  _BYTE v67[40]; // [rsp+7A8h] [rbp+6A8h] BYREF
  _BYTE v68[32]; // [rsp+7D0h] [rbp+6D0h] BYREF
  int v69; // [rsp+7F0h] [rbp+6F0h]
  char v70; // [rsp+7F4h] [rbp+6F4h]
  char v71; // [rsp+7F8h] [rbp+6F8h] BYREF

  Instance = MPCConstantManager::GetInstance((__int64)a1, a2, a3, a4);
  v7[0] = 1056964608;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v10,
    L"ThumbstickDeadzone",
    v7);
  v7[0] = 1036831949;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v11,
    v6,
    v7);
  std::wstring::wstring((__int64)v12, L"TriggerXYDeadzone1M");
  v13 = 1106247680;
  v14 = 2;
  std::wstring::wstring((__int64)v15, L"TriggerTemporalDeadzoneSec");
  v16 = 1065353216;
  v17 = 2;
  v7[0] = 1015222895;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v18,
    L"TouchpadReleasedTimeoutSeconds",
    v7);
  v7[0] = 1015222895;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v19,
    L"TouchpadTouchedTimeoutSeconds",
    v7);
  v7[0] = 0;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v20,
    L"TouchpadRailsTimeoutSeconds",
    v7);
  v7[0] = 1104936960;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v21,
    L"TouchpadRailsDirectionDegrees",
    v7);
  v7[0] = 1110704128;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v22,
    L"TouchpadRailsPressDegrees",
    v7);
  v7[0] = 1061997773;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v23,
    L"TouchpadRailsMinDistance",
    v7);
  v7[0] = 1022739087;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v24,
    L"TouchpadRailsMinDistanceTraveled",
    v7);
  std::wstring::wstring((__int64)v25, L"TouchpadScrollInvert");
  v25[32] = 1;
  v25[36] = 1;
  v7[0] = 1097859072;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v26,
    L"TouchpadXYDeadzone1M",
    v7);
  v7[0] = 1065353216;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v27,
    L"TouchpadTemporalDeadzoneSec",
    v7);
  std::wstring::wstring((__int64)v28, L"TouchpadDragSpeedFactor");
  v29 = 1133903872;
  v30 = 2;
  v7[0] = 1148846080;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v31,
    L"TouchpadScrollTouchSpeedFactor",
    v7);
  v7[0] = 981668463;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v32,
    L"TouchpadScrollTouchVelocityMin",
    v7);
  v7[0] = 1028443341;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v33,
    L"TouchpadNotScrollingMultiplier",
    v7);
  std::wstring::wstring((__int64)v34, L"TouchpadNumFramesStopScroll");
  v35 = 10;
  v36 = 0;
  v7[0] = 1016296636;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v37,
    L"TouchpadStopMaxDelta",
    v7);
  v7[0] = 1028443341;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v38,
    L"TouchpadAxesSmoothingFactor",
    v7);
  v7[0] = 1028443341;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v39,
    L"TouchpadDeltaSmoothingFactor",
    v7);
  v7[0] = 1036831949;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v40,
    L"TouchpadDeltaSmoothingTimeoutSec",
    v7);
  std::wstring::wstring((__int64)v41, L"TriggerSmoothingFactor");
  v42 = 1056964608;
  v43 = 2;
  v7[0] = 1050253722;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v44,
    L"HardTriggerPullDelta",
    v7);
  v7[0] = 1048576000;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v45,
    L"DragModeTriggerTimeInSec",
    v7);
  std::wstring::wstring((__int64)v46, L"IsTouchpadTouchScrollingEnabled");
  v46[32] = 1;
  v46[36] = 1;
  std::wstring::wstring((__int64)v47, L"IsTouchpadClickingEnabled");
  v47[32] = 1;
  v47[36] = 1;
  std::wstring::wstring((__int64)v48, L"IsTouchpadTouchScrollingStopEnabled");
  v48[32] = 0;
  v48[36] = 1;
  v7[0] = 1060320051;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v49,
    L"HomeMaximumLinearVelocity_X",
    v7);
  v7[0] = 1060320051;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v50,
    L"HomeMaximumLinearVelocity_Y",
    v7);
  v7[0] = 1050253722;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v51,
    L"HomeMaximumLinearVelocity_Z",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v52,
    L"HomeMaximumAngularVelocity_X",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v53,
    L"HomeMaximumAngularVelocity_Y",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v54,
    L"HomeMaximumAngularVelocity_Z",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v55,
    L"HomeMaximumLinearAcceleration_X",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v56,
    L"HomeMaximumLinearAcceleration_Y",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v57,
    L"HomeMaximumLinearAcceleration_Z",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v58,
    L"HomeMaximumAngularAcceleration_X",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v59,
    L"HomeMaximumAngularAcceleration_Y",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v60,
    L"HomeMaximumAngularAcceleration_Z",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v61,
    L"HomeMaximumWeightedDistance_X",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v62,
    L"HomeMaximumWeightedDistance_Y",
    v7);
  v7[0] = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v63,
    L"HomeMaximumWeightedDistance_Z",
    v7);
  v7[0] = 1056964608;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v64,
    L"HomeDistanceWeight",
    v7);
  v7[0] = 0;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v65,
    L"HomeAllowTimeBetweenClicksInSec",
    v7);
  v7[0] = 1120403456;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v66,
    L"HomeSecondClickLinearMultiplier",
    v7);
  v7[0] = 1120403456;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v67,
    L"HomeSecondClickAngularMultiplier",
    v7);
  std::wstring::wstring((__int64)v68, L"HomeCancelExceedThresholdMaxCount");
  v69 = 1;
  v70 = 0;
  v8.m128i_i64[0] = (__int64)v10;
  v8.m128i_i64[1] = (__int64)&v71;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    v9,
    &v8);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)Instance,
    (*a1 + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    (__int64)v9);
  std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>(v9);
  `eh vector destructor iterator'(
    v10,
    40LL,
    49LL,
    (void (__fastcall *)(char *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
