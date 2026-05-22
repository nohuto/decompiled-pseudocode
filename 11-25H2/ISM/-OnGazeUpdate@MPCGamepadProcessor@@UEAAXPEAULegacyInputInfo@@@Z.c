/*
 * XREFs of ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801B7A00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18001118C (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180068984 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068A34 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068AA0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180069474 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180098E64 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B4350 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x1800B4BC8 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z @ 0x1800B4C18 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C1290 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C7CBC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801B74A8 (-ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801B7548 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801B84AC (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801B9270 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801B94D8 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

void __fastcall MPCGamepadProcessor::OnGazeUpdate(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  MPCGamepadInputHelper *Instance; // rax
  MPCGamepadProcessor *v5; // rsi
  struct MPCGestureHandlerManager *v6; // rbx
  _QWORD *v7; // rax
  MPCGamepadInputHelper *v8; // rax
  char ShouldUseGazeAndCommit; // al
  __int64 v10; // r15
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // xmm1
  struct MPCGestureHandlerManager *v15; // rbx
  __int64 *v16; // rax
  char IsInjecting; // bl
  _OWORD *v18; // rcx
  char *v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  __int64 v28; // rax
  MPCGestureHandlerManager *v29; // rbx
  __int64 *v30; // rax
  const char *v31; // r9
  struct MPCGestureHandlerManager *v32; // rbx
  __int64 *v33; // rax
  struct MPCGestureHandlerManager *v34; // rbx
  _QWORD *v35; // rax
  float v36; // xmm2_4
  float v37; // xmm3_4
  float v38; // xmm5_4
  float v39; // xmm4_4
  float v40; // xmm1_4
  struct MPCHolographicInputManager *v41; // rax
  float v42; // xmm7_4
  float v43; // xmm11_4
  float v44; // xmm12_4
  float v45; // xmm13_4
  float v46; // xmm14_4
  float v47; // xmm15_4
  float v48; // xmm8_4
  float v49; // xmm6_4
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  const char *v53; // r9
  struct MPCConstantManager *v54; // rax
  unsigned __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  const char *v59; // r9
  float v60; // xmm6_4
  struct MPCConstantManager *v61; // rax
  float v62; // xmm7_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  float v65; // xmm7_4
  float v66; // xmm6_4
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  const char *v70; // r9
  struct MPCConstantManager *v71; // rax
  float v72; // xmm0_4
  float v73; // xmm6_4
  struct MPCConstantManager *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  const char *v78; // r9
  float v79; // xmm6_4
  struct MPCConstantManager *v80; // rax
  float v81; // xmm0_4
  float v82; // xmm6_4
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  const char *v86; // r9
  struct MPCConstantManager *v87; // rax
  float v88; // xmm6_4
  struct MPCConstantManager *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  const char *v93; // r9
  float v94; // xmm6_4
  struct MPCConstantManager *v95; // rax
  float v96; // xmm4_4
  float v97; // xmm6_4
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  const char *v101; // r9
  struct MPCConstantManager *v102; // rax
  float v103; // xmm6_4
  struct MPCConstantManager *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  const char *v108; // r9
  float v109; // xmm6_4
  struct MPCConstantManager *v110; // rax
  int v111; // eax
  __int64 v112; // xmm1_8
  struct MPCGestureHandlerManager *v113; // rbx
  __int64 *v114; // rax
  _QWORD v115[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v116; // [rsp+40h] [rbp-C8h]
  _QWORD v117[2]; // [rsp+48h] [rbp-C0h] BYREF
  float v118[10]; // [rsp+58h] [rbp-B0h] BYREF
  float v119; // [rsp+80h] [rbp-88h]
  _OWORD v120[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v121[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v122; // [rsp+E8h] [rbp-20h]
  __int128 v123; // [rsp+F8h] [rbp-10h]
  __int128 v124; // [rsp+108h] [rbp+0h]
  __int128 v125; // [rsp+118h] [rbp+10h]
  char v126; // [rsp+1C8h] [rbp+C0h] BYREF
  int v127; // [rsp+430h] [rbp+328h]
  int v128; // [rsp+440h] [rbp+338h]
  int v129; // [rsp+444h] [rbp+33Ch]

  *(_DWORD *)(*(_QWORD *)(this + 3664) + 8LL) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(*(_QWORD *)(this + 3664) + 16LL) = *((_QWORD *)a2 + 2);
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCButtonHoldHelper ***)(this + 4256),
    (*(_DWORD *)(this + 3676) & 4) != 0,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 61),
    *((float *)a2 + 62),
    *((float *)a2 + 76));
  Instance = MPCGamepadInputHelper::GetInstance();
  if ( MPCGamepadInputHelper::ShouldHandleMPCInput(Instance) )
  {
    v8 = MPCGamepadInputHelper::GetInstance();
    ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(v8, a2);
    *(_BYTE *)(this + 4156) = ShouldUseGazeAndCommit;
    if ( ShouldUseGazeAndCommit && *((_BYTE *)a2 + 240) && MPCInputProviderBase::IsPrimary(this)
      || *(_DWORD *)(this + 4152) )
    {
      v10 = 3LL;
      if ( *((_BYTE *)a2 + 240) )
      {
        v11 = (_OWORD *)(this + 3736);
        v12 = (_OWORD *)((char *)a2 + 240);
        v13 = 3LL;
        do
        {
          *v11 = *v12;
          v11[1] = v12[1];
          v11[2] = v12[2];
          v11[3] = v12[3];
          v11[4] = v12[4];
          v11[5] = v12[5];
          v11[6] = v12[6];
          v11 += 8;
          v14 = v12[7];
          v12 += 8;
          *(v11 - 1) = v14;
          --v13;
        }
        while ( v13 );
        *v11 = *v12;
        v11[1] = v12[1];
      }
      if ( *((_BYTE *)a2 + 242) || *(_DWORD *)(this + 4152) )
      {
        MPCGamepadProcessor::UpdateScroll((MPCGamepadProcessor *)(this - 32), a2);
        MPCGamepadProcessor::UpdateZoom((MPCGamepadProcessor *)(this - 32), a2);
        if ( !*(_DWORD *)(this + 4152) )
        {
          if ( *((_BYTE *)a2 + 240) )
          {
            v15 = MPCGestureHandlerManager::GetInstance();
            v16 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v117,
                    this & -(__int64)(this != 32));
            IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v15, v16);
            memset_0(v121, 0, 0xBC0uLL);
            v18 = (_OWORD *)((char *)a2 + 240);
            DWORD2(v122) = 3008;
            v19 = &v126;
            do
            {
              v20 = v18[1];
              *(_OWORD *)v19 = *v18;
              v21 = v18[2];
              *((_OWORD *)v19 + 1) = v20;
              v22 = v18[3];
              *((_OWORD *)v19 + 2) = v21;
              v23 = v18[4];
              *((_OWORD *)v19 + 3) = v22;
              v24 = v18[5];
              *((_OWORD *)v19 + 4) = v23;
              v25 = v18[6];
              *((_OWORD *)v19 + 5) = v24;
              v26 = v18[7];
              v18 += 8;
              *((_OWORD *)v19 + 6) = v25;
              v19 += 128;
              *((_OWORD *)v19 - 1) = v26;
              --v10;
            }
            while ( v10 );
            v27 = v18[1];
            *(_OWORD *)v19 = *v18;
            *((_OWORD *)v19 + 1) = v27;
            MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v18, (__int64)v121, 4);
            if ( IsInjecting )
            {
              v28 = *(_QWORD *)(this + 4256);
              v127 = 7;
              if ( !*(_BYTE *)(v28 + 13) )
              {
                v128 = *(_DWORD *)(v28 + 4);
                v129 = *(_DWORD *)(v28 + 8);
              }
            }
            v29 = MPCGestureHandlerManager::GetInstance();
            v30 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v117,
                    this & -(__int64)(this != 32));
            MPCGestureHandlerManager::DownLevelTo2D(v29, (struct LegacyInputInfo *)v121, v30, v31);
          }
        }
      }
    }
    else
    {
      v32 = MPCGestureHandlerManager::GetInstance();
      v33 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v117,
              this & -(__int64)(this != 32));
      if ( MPCGestureHandlerManager::IsInjecting((__int64)v32, v33) && (*(_BYTE *)(this + 3676) & 4) == 0
        || (v34 = MPCGestureHandlerManager::GetInstance(),
            v35 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v117,
                    this & -(__int64)(this != 32)),
            MPCGestureHandlerManager::IsHovering((__int64)v34, v35)) )
      {
        MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
      }
    }
    v36 = 0.0;
    if ( (*(_DWORD *)(this + 3676) & 0x400) != 0 )
      v37 = FLOAT_N1_0;
    else
      v37 = 0.0;
    if ( (*(_DWORD *)(this + 3676) & 0x800) != 0 )
      v36 = FLOAT_1_0;
    v38 = (float)(*(float *)(this + 3688) + *(float *)(this + 4184)) * 0.5;
    v39 = (float)(*(float *)(this + 3692) + *(float *)(this + 4188)) * 0.5;
    v40 = (float)((float)(COERCE_FLOAT(*(_DWORD *)(this + 3684) ^ _xmm) + *(float *)(this + 3680))
                + *(float *)(this + 4192))
        * 0.5;
    *(float *)(this + 4196) = (float)((float)(v36 + v37) + *(float *)(this + 4196)) * 0.5;
    *(float *)(this + 4184) = v38;
    *(float *)(this + 4188) = v39;
    *(float *)(this + 4192) = v40;
    v41 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v121, v41, 0xCD0uLL);
    v120[0] = v122;
    v120[1] = v123;
    v120[2] = v124;
    v120[3] = v125;
    MPCMath::OrientToGravity(v118, v120);
    v42 = v119;
    v43 = v118[4];
    v44 = v118[5];
    v45 = v118[6];
    v46 = v118[8];
    v47 = v118[9];
    *(float *)v117 = v119;
    MPCGamepadProcessor::ComputeTimeScale((MPCGamepadProcessor *)(this - 32), a2);
    v48 = *(float *)(this + 4232);
    LODWORD(v49) = *(_DWORD *)(this + 4184) & _xmm;
    v54 = MPCConstantManager::GetInstance(v51, v50, v52, v53);
    v115[1] = L"ThumbstickDeadzone";
    v116 = 18LL;
    v55 = this & -(__int64)(this != 32);
    if ( v49 >= MPCConstantManager::GetConstant<float>((__int64)v54, v55, (__int128 *)&v115[1]) )
    {
      v60 = *(float *)(this + 4184);
      v61 = MPCConstantManager::GetInstance(v57, v56, v58, v59);
      v115[1] = L"PointScaleFactor";
      v116 = 16LL;
      v62 = MPCConstantManager::GetConstant<float>((__int64)v61, v55, (__int128 *)&v115[1]) * v60;
      v63 = v62 * v118[1];
      v64 = (float)((float)(v62 * v118[0]) * v48) + *(float *)(this + 4172);
      v65 = (float)(v62 * v118[2]) * v48;
      *(float *)(this + 4172) = v64;
      *(float *)(this + 4176) = (float)(v63 * v48) + *(float *)(this + 4176);
      *(float *)(this + 4180) = v65 + *(float *)(this + 4180);
      v66 = *(float *)(this + 4184);
      v71 = MPCConstantManager::GetInstance(v68, v67, v69, v70);
      v115[1] = L"PointScaleFactor";
      v116 = 16LL;
      v72 = MPCConstantManager::GetConstant<float>((__int64)v71, v55, (__int128 *)&v115[1]);
      v42 = *(float *)v117;
      *(float *)(this + 4200) = (float)((float)(v72 * v66) * v48) + *(float *)(this + 4200);
    }
    LODWORD(v73) = *(_DWORD *)(this + 4188) & _xmm;
    v74 = MPCConstantManager::GetInstance(v57, v56, v58, v59);
    v115[1] = L"ThumbstickDeadzone";
    v116 = 18LL;
    if ( v73 >= MPCConstantManager::GetConstant<float>((__int64)v74, v55, (__int128 *)&v115[1]) )
    {
      v79 = *(float *)(this + 4188);
      v80 = MPCConstantManager::GetInstance(v76, v75, v77, v78);
      v115[1] = L"PointScaleFactor";
      v116 = 16LL;
      v81 = MPCConstantManager::GetConstant<float>((__int64)v80, v55, (__int128 *)&v115[1]);
      *(float *)(this + 4172) = (float)((float)((float)(v81 * v79) * v43) * v48) + *(float *)(this + 4172);
      *(float *)(this + 4176) = (float)((float)((float)(v81 * v79) * v44) * v48) + *(float *)(this + 4176);
      *(float *)(this + 4180) = (float)((float)((float)(v81 * v79) * v45) * v48) + *(float *)(this + 4180);
      v82 = *(float *)(this + 4188);
      v87 = MPCConstantManager::GetInstance(v84, v83, v85, v86);
      v115[1] = L"PointScaleFactor";
      v116 = 16LL;
      *(float *)(this + 4204) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  (__int64)v87,
                                                  v55,
                                                  (__int128 *)&v115[1])
                                              * v82)
                                      * v48)
                              + *(float *)(this + 4204);
    }
    LODWORD(v88) = *(_DWORD *)(this + 4192) & _xmm;
    v89 = MPCConstantManager::GetInstance(v76, v75, v77, v78);
    v115[1] = L"ThumbstickDeadzone";
    v116 = 18LL;
    if ( v88 >= MPCConstantManager::GetConstant<float>((__int64)v89, v55, (__int128 *)&v115[1]) )
    {
      v94 = *(float *)(this + 4192);
      v95 = MPCConstantManager::GetInstance(v91, v90, v92, v93);
      v115[1] = L"PointScaleFactor";
      v116 = 16LL;
      v96 = COERCE_FLOAT(COERCE_UNSIGNED_INT(MPCConstantManager::GetConstant<float>((__int64)v95, v55, (__int128 *)&v115[1])) ^ _xmm)
          * v94;
      *(float *)(this + 4172) = (float)((float)(v96 * v46) * v48) + *(float *)(this + 4172);
      *(float *)(this + 4176) = (float)((float)(v96 * v47) * v48) + *(float *)(this + 4176);
      *(float *)(this + 4180) = (float)((float)(v96 * v42) * v48) + *(float *)(this + 4180);
      v97 = *(float *)(this + 4192);
      v102 = MPCConstantManager::GetInstance(v99, v98, v100, v101);
      v115[1] = L"PointScaleFactor";
      v116 = 16LL;
      *(float *)(this + 4208) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  (__int64)v102,
                                                  v55,
                                                  (__int128 *)&v115[1])
                                              * v97)
                                      * v48)
                              + *(float *)(this + 4208);
    }
    LODWORD(v103) = *(_DWORD *)(this + 4196) & _xmm;
    v104 = MPCConstantManager::GetInstance(v91, v90, v92, v93);
    v115[1] = L"ThumbstickDeadzone";
    v116 = 18LL;
    if ( v103 >= MPCConstantManager::GetConstant<float>(
                   (__int64)v104,
                   this & -(__int64)(this != 32),
                   (__int128 *)&v115[1]) )
    {
      v109 = *(float *)(this + 4196);
      v110 = MPCConstantManager::GetInstance(v106, v105, v107, v108);
      v115[1] = L"PointScaleFactor";
      v116 = 16LL;
      *(float *)(this + 4212) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  (__int64)v110,
                                                  this & -(__int64)(this != 32),
                                                  (__int128 *)&v115[1])
                                              * v109)
                                      * v48)
                              + *(float *)(this + 4212);
    }
    v111 = *(_DWORD *)(this + 3700);
    v112 = *(_QWORD *)(this + 3692);
    *(_OWORD *)(this + 3704) = *(_OWORD *)(this + 3676);
    *(_QWORD *)(this + 3720) = v112;
    *(_DWORD *)(this + 3728) = v111;
    v113 = MPCGestureHandlerManager::GetInstance();
    v114 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
             v117,
             this & -(__int64)(this != 32));
    MPCGestureHandlerManager::OnGazeUpdate((__int64)v113, v114);
  }
  else
  {
    if ( *(_DWORD *)(this + 4152) )
    {
      v5 = (MPCGamepadProcessor *)(this - 32);
    }
    else
    {
      v5 = (MPCGamepadProcessor *)(this - 32);
      v6 = MPCGestureHandlerManager::GetInstance();
      v7 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
             v117,
             this & -(__int64)(this != 32));
      if ( !MPCGestureHandlerManager::IsHovering((__int64)v6, v7) )
        return;
    }
    MPCGamepadProcessor::EndGesture(v5);
  }
}
