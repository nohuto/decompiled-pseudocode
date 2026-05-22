/*
 * XREFs of ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801B5964
 * Callers:
 *     _lambda_2ab80ba63dcc212dafbb4e4695138308_::operator() @ 0x1801B3E54 (_lambda_2ab80ba63dcc212dafbb4e4695138308_--operator().c)
 *     wistd::__function::__func__lambda_8a62f5b69e88a23bdde8affb13e85828__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1801B3FC0 (wistd--__function--__func__lambda_8a62f5b69e88a23bdde8affb13e85828__void___cdecl(en_ea_1801B3FC0.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18000F4FC (--$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007B1D4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800B59C8 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x1801B2868 (--$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000.c)
 *     _lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator() @ 0x1801B3EF0 (_lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_--operator().c)
 */

void MPCSixDofProcessor::UpdateRegistryTuneables(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  const char *v3; // r9
  struct MPCConstantManager *Instance; // rax
  struct MPCConstantManager *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  struct MPCConstantManager *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  const char *v14; // r9
  struct MPCConstantManager *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  const char *v19; // r9
  struct MPCConstantManager *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  const char *v24; // r9
  struct MPCConstantManager *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  const char *v29; // r9
  struct MPCConstantManager *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  const char *v34; // r9
  struct MPCConstantManager *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  const char *v39; // r9
  struct MPCConstantManager *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  const char *v44; // r9
  struct MPCConstantManager *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  const char *v49; // r9
  struct MPCConstantManager *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  const char *v54; // r9
  struct MPCConstantManager *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  const char *v59; // r9
  struct MPCConstantManager *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  const char *v64; // r9
  struct MPCConstantManager *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  const char *v69; // r9
  struct MPCConstantManager *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  const char *v74; // r9
  struct MPCConstantManager *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  const char *v79; // r9
  struct MPCConstantManager *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  const char *v84; // r9
  struct MPCConstantManager *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  const char *v89; // r9
  struct MPCConstantManager *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  const char *v94; // r9
  struct MPCConstantManager *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  const char *v99; // r9
  struct MPCConstantManager *v100; // rax
  __m128i v101; // [rsp+A0h] [rbp-39h] BYREF
  float v102; // [rsp+B0h] [rbp-29h] BYREF
  float v103; // [rsp+B4h] [rbp-25h] BYREF
  float v104; // [rsp+B8h] [rbp-21h] BYREF
  float v105; // [rsp+BCh] [rbp-1Dh] BYREF
  float v106; // [rsp+C0h] [rbp-19h] BYREF
  float v107; // [rsp+C4h] [rbp-15h] BYREF
  float v108; // [rsp+C8h] [rbp-11h] BYREF
  float v109; // [rsp+CCh] [rbp-Dh] BYREF
  float v110; // [rsp+D0h] [rbp-9h] BYREF
  float v111; // [rsp+D4h] [rbp-5h] BYREF
  float v112; // [rsp+D8h] [rbp-1h] BYREF
  float v113; // [rsp+DCh] [rbp+3h] BYREF
  float v114; // [rsp+E0h] [rbp+7h] BYREF
  float v115; // [rsp+E4h] [rbp+Bh] BYREF
  float v116; // [rsp+E8h] [rbp+Fh] BYREF
  float v117; // [rsp+ECh] [rbp+13h] BYREF
  float v118; // [rsp+F0h] [rbp+17h] BYREF
  float v119[15]; // [rsp+F4h] [rbp+1Bh] BYREF
  int pvData; // [rsp+140h] [rbp+67h] BYREF
  DWORD pcbData; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v122; // [rsp+150h] [rbp+77h] BYREF
  float Static; // [rsp+158h] [rbp+7Fh] BYREF

  pcbData = 4;
  v101.m128i_i64[0] = (__int64)&pvData;
  v101.m128i_i64[1] = (__int64)&pcbData;
  pvData = 0;
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxLinearVelocity_X",
    (__int64)L"HomeMaximumLinearVelocity_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxLinearVelocity_Y",
    (__int64)L"HomeMaximumLinearVelocity_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxLinearVelocity_Z",
    (__int64)L"HomeMaximumLinearVelocity_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxAngularVelocity_X",
    (__int64)L"HomeMaximumAngularVelocity_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxAngularVelocity_Y",
    (__int64)L"HomeMaximumAngularVelocity_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxAngularVelocity_Z",
    (__int64)L"HomeMaximumAngularVelocity_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxLinearAcceleration_X",
    (__int64)L"HomeMaximumLinearAcceleration_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxLinearAcceleration_Y",
    (__int64)L"HomeMaximumLinearAcceleration_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxLinearAcceleration_Z",
    (__int64)L"HomeMaximumLinearAcceleration_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxAngularAcceleration_X",
    (__int64)L"HomeMaximumAngularAcceleration_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxAngularAcceleration_Y",
    (__int64)L"HomeMaximumAngularAcceleration_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxAngularAcceleration_Z",
    (__int64)L"HomeMaximumAngularAcceleration_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxWeightedDistance_X",
    (__int64)L"HomeMaximumWeightedDistance_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxWeightedDistance_Y",
    (__int64)L"HomeMaximumWeightedDistance_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeMaxWeightedDistance_Z",
    (__int64)L"HomeMaximumWeightedDistance_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeDistanceWeight",
    (__int64)L"HomeDistanceWeight");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeAllowTimeBetweenClicksInMS",
    (__int64)L"HomeAllowTimeBetweenClicksInSec");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeSecondClickLinearMultiplier",
    (__int64)L"HomeSecondClickLinearMultiplier");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v101,
    L"HomeSecondClickAngularMultiplier",
    (__int64)L"HomeSecondClickAngularMultiplier");
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\ISM\\6dof",
          L"HomeCancelExceedThresholdMaxCount",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
  {
    Instance = MPCConstantManager::GetInstance(v1, v0, v2, v3);
    v101.m128i_i64[0] = (__int64)L"HomeCancelExceedThresholdMaxCount";
    v101.m128i_i64[1] = 33LL;
    LODWORD(v122) = pvData;
    BYTE4(v122) = 0;
    MPCConstantManager::ChangeConstant((__int64)Instance, 0x2000, &v101, v122);
  }
  v5 = MPCConstantManager::GetInstance(v1, v0, v2, v3);
  v101.m128i_i64[0] = (__int64)L"HomeCancelExceedThresholdMaxCount";
  v101.m128i_i64[1] = 33LL;
  LODWORD(v122) = MPCConstantManager::GetStaticConstant<unsigned long>((__int64)v5, 0x2000LL, (__int128 *)v101.m128i_i8);
  v10 = MPCConstantManager::GetInstance(v7, v6, v8, v9);
  v101.m128i_i64[0] = (__int64)L"HomeSecondClickAngularMultiplier";
  v101.m128i_i64[1] = 32LL;
  Static = MPCConstantManager::GetStaticConstant<float>((__int64)v10, 0x2000, (__int128 *)v101.m128i_i8);
  v15 = MPCConstantManager::GetInstance(v12, v11, v13, v14);
  v101.m128i_i64[0] = (__int64)L"HomeSecondClickLinearMultiplier";
  v101.m128i_i64[1] = 31LL;
  v102 = MPCConstantManager::GetStaticConstant<float>((__int64)v15, 0x2000, (__int128 *)v101.m128i_i8);
  v20 = MPCConstantManager::GetInstance(v17, v16, v18, v19);
  v101.m128i_i64[1] = 31LL;
  v101.m128i_i64[0] = (__int64)L"HomeAllowTimeBetweenClicksInSec";
  v103 = MPCConstantManager::GetStaticConstant<float>((__int64)v20, 0x2000, (__int128 *)v101.m128i_i8);
  v25 = MPCConstantManager::GetInstance(v22, v21, v23, v24);
  v101.m128i_i64[0] = (__int64)L"HomeDistanceWeight";
  v101.m128i_i64[1] = 18LL;
  v104 = MPCConstantManager::GetStaticConstant<float>((__int64)v25, 0x2000, (__int128 *)v101.m128i_i8);
  v30 = MPCConstantManager::GetInstance(v27, v26, v28, v29);
  v101.m128i_i64[0] = (__int64)L"HomeMaximumWeightedDistance_Z";
  v101.m128i_i64[1] = 29LL;
  v105 = MPCConstantManager::GetStaticConstant<float>((__int64)v30, 0x2000, (__int128 *)v101.m128i_i8);
  v35 = MPCConstantManager::GetInstance(v32, v31, v33, v34);
  v101.m128i_i64[1] = 29LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumWeightedDistance_Y";
  v106 = MPCConstantManager::GetStaticConstant<float>((__int64)v35, 0x2000, (__int128 *)v101.m128i_i8);
  v40 = MPCConstantManager::GetInstance(v37, v36, v38, v39);
  v101.m128i_i64[1] = 29LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumWeightedDistance_X";
  v107 = MPCConstantManager::GetStaticConstant<float>((__int64)v40, 0x2000, (__int128 *)v101.m128i_i8);
  v45 = MPCConstantManager::GetInstance(v42, v41, v43, v44);
  v101.m128i_i64[1] = 31LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumLinearAcceleration_Z";
  v108 = MPCConstantManager::GetStaticConstant<float>((__int64)v45, 0x2000, (__int128 *)v101.m128i_i8);
  v50 = MPCConstantManager::GetInstance(v47, v46, v48, v49);
  v101.m128i_i64[1] = 31LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumLinearAcceleration_Y";
  v109 = MPCConstantManager::GetStaticConstant<float>((__int64)v50, 0x2000, (__int128 *)v101.m128i_i8);
  v55 = MPCConstantManager::GetInstance(v52, v51, v53, v54);
  v101.m128i_i64[1] = 31LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumLinearAcceleration_X";
  v110 = MPCConstantManager::GetStaticConstant<float>((__int64)v55, 0x2000, (__int128 *)v101.m128i_i8);
  v60 = MPCConstantManager::GetInstance(v57, v56, v58, v59);
  v101.m128i_i64[1] = 32LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumAngularAcceleration_Z";
  v111 = MPCConstantManager::GetStaticConstant<float>((__int64)v60, 0x2000, (__int128 *)v101.m128i_i8);
  v65 = MPCConstantManager::GetInstance(v62, v61, v63, v64);
  v101.m128i_i64[1] = 32LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumAngularAcceleration_Y";
  v112 = MPCConstantManager::GetStaticConstant<float>((__int64)v65, 0x2000, (__int128 *)v101.m128i_i8);
  v70 = MPCConstantManager::GetInstance(v67, v66, v68, v69);
  v101.m128i_i64[1] = 32LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumAngularAcceleration_X";
  v113 = MPCConstantManager::GetStaticConstant<float>((__int64)v70, 0x2000, (__int128 *)v101.m128i_i8);
  v75 = MPCConstantManager::GetInstance(v72, v71, v73, v74);
  v101.m128i_i64[0] = (__int64)L"HomeMaximumLinearVelocity_Z";
  v101.m128i_i64[1] = 27LL;
  v114 = MPCConstantManager::GetStaticConstant<float>((__int64)v75, 0x2000, (__int128 *)v101.m128i_i8);
  v80 = MPCConstantManager::GetInstance(v77, v76, v78, v79);
  v101.m128i_i64[1] = 27LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumLinearVelocity_Y";
  v115 = MPCConstantManager::GetStaticConstant<float>((__int64)v80, 0x2000, (__int128 *)v101.m128i_i8);
  v85 = MPCConstantManager::GetInstance(v82, v81, v83, v84);
  v101.m128i_i64[1] = 27LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumLinearVelocity_X";
  v116 = MPCConstantManager::GetStaticConstant<float>((__int64)v85, 0x2000, (__int128 *)v101.m128i_i8);
  v90 = MPCConstantManager::GetInstance(v87, v86, v88, v89);
  v101.m128i_i64[0] = (__int64)L"HomeMaximumAngularVelocity_Z";
  v101.m128i_i64[1] = 28LL;
  v117 = MPCConstantManager::GetStaticConstant<float>((__int64)v90, 0x2000, (__int128 *)v101.m128i_i8);
  v95 = MPCConstantManager::GetInstance(v92, v91, v93, v94);
  v101.m128i_i64[1] = 28LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumAngularVelocity_Y";
  v118 = MPCConstantManager::GetStaticConstant<float>((__int64)v95, 0x2000, (__int128 *)v101.m128i_i8);
  v100 = MPCConstantManager::GetInstance(v97, v96, v98, v99);
  v101.m128i_i64[1] = 28LL;
  v101.m128i_i64[0] = (__int64)L"HomeMaximumAngularVelocity_X";
  v119[0] = MPCConstantManager::GetStaticConstant<float>((__int64)v100, 0x2000, (__int128 *)v101.m128i_i8);
  ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged<float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,unsigned long>(
    v119,
    &v118,
    &v117,
    &v116,
    &v115,
    &v114,
    &v113,
    &v112,
    &v111,
    &v110,
    &v109,
    &v108,
    &v107,
    &v106,
    &v105,
    &v104,
    &v103,
    &v102,
    &Static,
    (unsigned int *)&v122);
}
