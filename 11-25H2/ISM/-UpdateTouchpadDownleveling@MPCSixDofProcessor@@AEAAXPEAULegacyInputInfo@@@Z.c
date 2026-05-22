/*
 * XREFs of ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801B6064
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x180068750 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068A34 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180069408 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007F6A0 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     _o_sqrtf_0 @ 0x18009D35C (_o_sqrtf_0.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B4220 (-GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV-$com_ptr_t@UIMPCInputProviderBase@@Ue.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B4350 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B43D0 (-IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x1800BF0FC (--1-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C1240 (--$-4U-$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C1290 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C12DC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x1800C148C (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800C1B60 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1801B42F0 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  char v4; // r13
  MPCButtonHoldHelper *v5; // r12
  struct MPCGestureHandlerManager *Instance; // rbx
  __int64 *v7; // rax
  char v8; // dl
  char v9; // r12
  _QWORD *ButtonHoldHelper; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  struct MPCGestureHandlerManager *v14; // rbx
  __int64 *v15; // rax
  bool IsWorkspaceScrolling; // al
  char v17; // bl
  char v18; // r15
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rdx
  char v21; // bl
  __int64 v22; // r8
  const char *v23; // r9
  std::_Ref_count_base *v24; // rcx
  struct MPCConstantManager *v25; // rax
  struct MPCGestureHandlerManager *v26; // rbx
  __int64 *v27; // rax
  struct MPCConstantManager *v28; // rax
  __int64 v29; // rdx
  std::_Ref_count_base *v30; // rcx
  __int64 v31; // r8
  const char *v32; // r9
  char v33; // bl
  float v34; // xmm6_4
  struct MPCConstantManager *v35; // rax
  float v36; // xmm6_4
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  const char *v40; // r9
  struct MPCConstantManager *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  const char *v45; // r9
  struct MPCConstantManager *v46; // rax
  float v47; // xmm6_4
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  const char *v51; // r9
  struct MPCConstantManager *v52; // rax
  char v53; // r15
  float v54; // xmm0_4
  struct MPCGestureHandlerManager *v55; // rbx
  __int64 *v56; // rax
  struct MPCConstantManager *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  const char *v61; // r9
  struct MPCConstantManager *v62; // rax
  __int64 v63; // rax
  struct MPCGestureHandlerManager *v64; // rbx
  __int64 *v65; // rax
  __int64 v66; // rcx
  float v67; // xmm6_4
  __int64 v68; // rdx
  __int64 v69; // r8
  const char *v70; // r9
  struct MPCConstantManager *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  const char *v75; // r9
  unsigned int v76; // ebx
  struct MPCConstantManager *v77; // rax
  MPCGestureHandlerManager *v78; // rbx
  __int64 *v79; // rax
  const char *v80; // r9
  struct MPCGestureHandlerManager *v81; // rbx
  __int64 *v82; // rax
  struct MPCGestureHandlerManager *v83; // rbx
  __int64 *v84; // rax
  struct MPCGestureHandlerManager *v85; // rbx
  __int64 *v86; // rax
  float v87; // xmm6_4
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  const char *v91; // r9
  struct MPCConstantManager *v92; // rax
  __int64 *v93; // rax
  std::_Ref_count_base *v94[2]; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v95[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v96; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v97; // [rsp+98h] [rbp+48h] BYREF
  __int64 v98; // [rsp+A0h] [rbp+50h] BYREF

  LODWORD(v96) = 0;
  v4 = 0;
  v5 = (MPCButtonHoldHelper *)*((_QWORD *)this + 515);
  v97 = *((_QWORD *)a2 + 2);
  Instance = MPCGestureHandlerManager::GetInstance();
  v7 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         &v96,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v8 = !MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)Instance, v7) || *((_BYTE *)this + 3666);
  MPCButtonHoldHelper::UpdateState(v5, v8, v97);
  *((_DWORD *)a2 + 218) = *((_DWORD *)a2 + 61);
  *((_DWORD *)a2 + 219) = *((_DWORD *)a2 + 62);
  v9 = 0;
  *((_DWORD *)a2 + 214) = 0;
  ButtonHoldHelper = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), v94);
  LODWORD(v96) = 1;
  if ( !*(_BYTE *)(*ButtonHoldHelper + 8LL)
    || (v14 = MPCGestureHandlerManager::GetInstance(),
        v15 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v97,
                ((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
        IsWorkspaceScrolling = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v14, v15),
        v17 = 1,
        IsWorkspaceScrolling) )
  {
    v17 = 0;
  }
  v18 = 0;
  v19 = v94[1];
  if ( v94[1] )
    std::_Ref_count_base::_Decref(v94[1]);
  if ( v17 )
  {
    v21 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), v94) + 10LL);
    v24 = v94[1];
    if ( v94[1] )
      std::_Ref_count_base::_Decref(v94[1]);
    v25 = MPCConstantManager::GetInstance((__int64)v24, v20, v22, v23);
    v94[0] = (std::_Ref_count_base *)L"IsTouchpadClickingEnabled";
    v94[1] = (std::_Ref_count_base *)25;
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>((__int64)v25, (__int64)this + 24, (__int128 *)v94)
      && (v21 || *(_BYTE *)(*((_QWORD *)this + 519) + 13LL)) )
    {
      v26 = MPCGestureHandlerManager::GetInstance();
      v27 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v96,
              (__int64)this + 24);
      *((_DWORD *)a2 + 214) = MPCGestureHandlerManager::IsInjecting((__int64)v26, v27) != 0 ? 7 : 1;
LABEL_54:
      *((_BYTE *)this + 3666) = 1;
LABEL_55:
      *((_OWORD *)a2 + 55) = *(_OWORD *)((char *)a2 + 252);
      *((_DWORD *)a2 + 224) = *((_DWORD *)a2 + 68);
      v78 = MPCGestureHandlerManager::GetInstance();
      v79 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v96,
              ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
      MPCGestureHandlerManager::DownLevelTo2D(v78, a2, v79, v80);
      *((_BYTE *)this + 3677) = 1;
      return;
    }
    return;
  }
  v28 = MPCConstantManager::GetInstance((__int64)v19, v11, v12, v13);
  v94[0] = (std::_Ref_count_base *)L"IsTouchpadTouchScrollingEnabled";
  v94[1] = (std::_Ref_count_base *)31;
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>((__int64)v28, (__int64)this + 24, (__int128 *)v94)
    || !*((_BYTE *)this + 3676)
    || *((_DWORD *)this + 918) == 2
    || (v18 = 2, v33 = 1, *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), v95) + 12LL)) )
  {
    v33 = 0;
  }
  if ( (v18 & 2) != 0 )
  {
    v30 = v95[1];
    if ( v95[1] )
      std::_Ref_count_base::_Decref(v95[1]);
  }
  if ( v33 )
  {
    v34 = *((float *)this + 1056) + *((float *)this + 1071);
    v35 = MPCConstantManager::GetInstance((__int64)v30, v29, v31, v32);
    v94[0] = (std::_Ref_count_base *)L"TouchpadScrollTouchSpeedFactor";
    v94[1] = (std::_Ref_count_base *)30;
    *(_OWORD *)v95 = *(_OWORD *)v94;
    *((float *)a2 + 215) = MPCConstantManager::GetConstant<float>((__int64)v35, (__int64)this + 24, (__int128 *)v95)
                         * v34;
    v36 = *((float *)this + 1072) + *((float *)this + 1057);
    v41 = MPCConstantManager::GetInstance(v38, v37, v39, v40);
    v94[0] = (std::_Ref_count_base *)L"TouchpadScrollTouchSpeedFactor";
    v94[1] = (std::_Ref_count_base *)30;
    *(_OWORD *)v95 = *(_OWORD *)v94;
    *((float *)a2 + 216) = MPCConstantManager::GetConstant<float>((__int64)v41, (__int64)this + 24, (__int128 *)v95)
                         * v36;
    v46 = MPCConstantManager::GetInstance(v43, v42, v44, v45);
    v94[0] = (std::_Ref_count_base *)L"TouchpadScrollInvert";
    v94[1] = (std::_Ref_count_base *)20;
    *(_OWORD *)v95 = *(_OWORD *)v94;
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>((__int64)v46, (__int64)this + 24, (__int128 *)v95) )
      *((float *)a2 + 216) = *((float *)a2 + 216) * -1.0;
    v47 = o_sqrtf_0(
            (float)((float)(*((float *)this + 1057) + *((float *)this + 1072))
                  * (float)(*((float *)this + 1057) + *((float *)this + 1072)))
          + (float)((float)(*((float *)this + 1056) + *((float *)this + 1071))
                  * (float)(*((float *)this + 1056) + *((float *)this + 1071))));
    v52 = MPCConstantManager::GetInstance(v49, v48, v50, v51);
    v94[0] = (std::_Ref_count_base *)L"TouchpadScrollTouchVelocityMin";
    v94[1] = (std::_Ref_count_base *)30;
    *(_OWORD *)v95 = *(_OWORD *)v94;
    if ( v47 <= MPCConstantManager::GetConstant<float>((__int64)v52, (__int64)this + 24, (__int128 *)v95) )
    {
      v53 = 0;
      v54 = *((float *)this + 1057) + *((float *)this + 1072);
      *((float *)this + 1071) = *((float *)this + 1071) + *((float *)this + 1056);
      *((float *)this + 1072) = v54;
    }
    else
    {
      v53 = 1;
    }
    if ( v53
      && *((_DWORD *)this + 918) != 3
      && (float)((float)(*((float *)this + 1059) * *((float *)this + 1057))
               + (float)(*((float *)this + 1056) * *((float *)this + 1058))) >= 0.0 )
    {
      v9 = 1;
    }
    v55 = MPCGestureHandlerManager::GetInstance();
    v56 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v96,
            (__int64)this + 24);
    if ( !MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v55, v56) || v53 )
    {
      if ( !v9 )
        goto LABEL_41;
      *(_QWORD *)((char *)this + 4284) = 0LL;
      *((_BYTE *)this + 3666) = 0;
    }
    else
    {
      *(_QWORD *)((char *)a2 + 860) = 0LL;
      *((_BYTE *)this + 3666) = 1;
    }
    v4 = 1;
LABEL_41:
    *((_DWORD *)a2 + 214) = 5;
    *((_DWORD *)this + 917) = 0;
    if ( !v4 )
      return;
    goto LABEL_55;
  }
  v57 = MPCConstantManager::GetInstance((__int64)v30, v29, v31, v32);
  v94[0] = (std::_Ref_count_base *)L"IsTouchpadTouchScrollingEnabled";
  v94[1] = (std::_Ref_count_base *)31;
  *(_OWORD *)v95 = *(_OWORD *)v94;
  if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>((__int64)v57, (__int64)this + 24, (__int128 *)v95)
    && (v62 = MPCConstantManager::GetInstance(v59, v58, v60, v61),
        v94[0] = (std::_Ref_count_base *)L"IsTouchpadTouchScrollingStopEnabled",
        v94[1] = (std::_Ref_count_base *)35,
        *(_OWORD *)v95 = *(_OWORD *)v94,
        (unsigned __int8)MPCConstantManager::GetConstant<bool>((__int64)v62, (__int64)this + 24, (__int128 *)v95))
    && !*((_BYTE *)this + 3666)
    && *((_BYTE *)this + 3676)
    && (v63 = *((_QWORD *)this + 515), *(_BYTE *)(v63 + 8))
    && !*(_BYTE *)(v63 + 9)
    && (v64 = MPCGestureHandlerManager::GetInstance(),
        v65 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v96,
                (__int64)this + 24),
        !MPCGestureHandlerManager::IsInjecting((__int64)v64, v65)) )
  {
    ++*((_DWORD *)this + 917);
    v66 = (unsigned int)(int)o_sqrtf_0(
                               (float)((float)(*((float *)this + 1049) - *((float *)this + 1055))
                                     * (float)(*((float *)this + 1049) - *((float *)this + 1055)))
                             + (float)((float)(*((float *)this + 1048) - *((float *)this + 1054))
                                     * (float)(*((float *)this + 1048) - *((float *)this + 1054))));
    v67 = (float)(int)v66;
    v71 = MPCConstantManager::GetInstance(v66, v68, v69, v70);
    v94[0] = (std::_Ref_count_base *)L"TouchpadStopMaxDelta";
    v94[1] = (std::_Ref_count_base *)20;
    *(_OWORD *)v95 = *(_OWORD *)v94;
    if ( v67 > MPCConstantManager::GetConstant<float>((__int64)v71, (__int64)this + 24, (__int128 *)v95) )
      *((_DWORD *)this + 917) = 0;
    v76 = *((_DWORD *)this + 917);
    v77 = MPCConstantManager::GetInstance(v73, v72, v74, v75);
    v94[0] = (std::_Ref_count_base *)L"TouchpadNumFramesStopScroll";
    v94[1] = (std::_Ref_count_base *)27;
    *(_OWORD *)v95 = *(_OWORD *)v94;
    if ( v76 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                (__int64)v77,
                                ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                                (__int128 *)v95) )
    {
      *((_DWORD *)a2 + 214) = 1;
      goto LABEL_54;
    }
  }
  else
  {
    v81 = MPCGestureHandlerManager::GetInstance();
    v82 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v96,
            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    if ( MPCGestureHandlerManager::IsInjecting((__int64)v81, v82) || *((_BYTE *)this + 3677) )
    {
      v83 = MPCGestureHandlerManager::GetInstance();
      v84 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v96,
              (__int64)this + 24);
      LOBYTE(v83) = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v83, v84);
      MPCSixDofProcessor::EndGesture(this);
      if ( (_BYTE)v83 )
      {
        v85 = MPCGestureHandlerManager::GetInstance();
        v86 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v97,
                (__int64)this + 24);
        LODWORD(v87) = MPCGestureHandlerManager::GetLastScrollVelocityAvg((__int64)v85, v86).m128_u32[0] & _xmm;
        v92 = MPCConstantManager::GetInstance(v89, v88, v90, v91);
        v94[0] = (std::_Ref_count_base *)L"TouchpadNotScrollingMultiplier";
        v94[1] = (std::_Ref_count_base *)30;
        *(_OWORD *)v95 = *(_OWORD *)v94;
        *(float *)&v96 = MPCConstantManager::GetConstant<float>(
                           (__int64)v92,
                           ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                           (__int128 *)v95)
                       * v87;
        v93 = std::make_unique<MPCButtonHoldHelper,float,0>(&v98, (float *)&v96);
        std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(
          (__int64)this + 4120,
          v93);
        std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v98);
      }
    }
  }
}
