/*
 * XREFs of ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800121C4
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800103C0 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180011B90 (-Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C0E70 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801B9B20 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BFF00 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C19E8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C3D60 (-Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C4A10 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800112A4 (-MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x1800117C4 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?Update@MPCGamepadInputHelper@@QEAAXPEAULegacyInputInfo@@@Z @ 0x180011888 (-Update@MPCGamepadInputHelper@@QEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800118EC (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z @ 0x180011C54 (-MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x180011CD0 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x180012948 (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInpu.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180013F10 (-UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x180013F70 (-UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800140A4 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x1800143FC (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18001444C (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z @ 0x180093190 (--4-$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800BB4A0 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHolographicInputManager::Process3DInput(
        MPCHolographicInputManager *this,
        struct LegacyInputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IMPCTarget **a4)
{
  const char *v8; // r9
  __int64 v9; // rax
  const char *v10; // r9
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, struct LegacyInputInfo *, __int64, struct IMPCTarget **); // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // cl
  unsigned int v16; // ebx
  MPCHolographicInputManager *v17; // rcx
  bool v18; // di
  MPCHolographicInputManager *v19; // rcx
  char *v20; // r8
  struct IMPCInputProviderBase *v21; // rdx
  const char *v22; // r9
  MPCGamepadInputHelper *Instance; // rax
  ISMTracing *v25; // rcx
  int v26; // eax
  int v27; // edi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  unsigned __int8 v30; // cl
  ISMTracing *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  struct ISystemInputRouter *v34; // rax
  struct LegacyInputInfo *v35; // rbx
  const char *v36; // r9
  _OWORD *v37; // rax
  _OWORD *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _OWORD *v41; // rax
  _OWORD *v42; // rcx
  _OWORD *v43; // rax
  _OWORD *v44; // rcx
  __int64 v45; // r8
  struct LegacyInputInfo *v46; // rbx
  int v47; // [rsp+20h] [rbp-E0h]
  __int64 (__fastcall **v48)(); // [rsp+38h] [rbp-C8h] BYREF
  struct LegacyInputInfo **v49; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall ***v50)(); // [rsp+70h] [rbp-90h]
  _BYTE v51[424]; // [rsp+78h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]
  struct LegacyInputInfo *v53; // [rsp+250h] [rbp+150h] BYREF

  if ( !*((_BYTE *)this + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x156,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
  if ( !*((_QWORD *)this + 412) )
  {
    v33 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 264LL))(a3);
    Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=((char *)this + 3296, v33);
    v34 = (struct ISystemInputRouter *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 412) + 72LL))(*((_QWORD *)this + 412));
    MPCHolographicInputManager::SetMPCInputRouter(this, v34);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 224LL))(a3, a2);
  if ( !*((_QWORD *)this + 410) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x161,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v8);
  MPCHolographicInputManager::UpdatePrimary(this);
  v9 = *(_QWORD *)a3;
  if ( *((_BYTE *)a2 + 3001) )
  {
    v35 = (struct LegacyInputInfo *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v9 + 240))(a3);
    v53 = v35;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v53);
    if ( !v35 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x16B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v36);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v53);
    *a4 = v35;
    v37 = (_OWORD *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 248LL))(a3);
    v38 = v51;
    v39 = 3LL;
    v40 = 3LL;
    do
    {
      *v38 = *v37;
      v38[1] = v37[1];
      v38[2] = v37[2];
      v38[3] = v37[3];
      v38[4] = v37[4];
      v38[5] = v37[5];
      v38[6] = v37[6];
      v38 += 8;
      *(v38 - 1) = v37[7];
      v37 += 8;
      --v40;
    }
    while ( v40 );
    *v38 = *v37;
    v38[1] = v37[1];
    v41 = (_OWORD *)((char *)a2 + 240);
    v42 = v51;
    do
    {
      *v41 = *v42;
      v41[1] = v42[1];
      v41[2] = v42[2];
      v41[3] = v42[3];
      v41[4] = v42[4];
      v41[5] = v42[5];
      v41[6] = v42[6];
      v41 += 8;
      *(v41 - 1) = v42[7];
      v42 += 8;
      --v39;
    }
    while ( v39 );
    *v41 = *v42;
    v41[1] = v42[1];
    goto LABEL_56;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(v9 + 72))(a3) )
  {
    if ( !*((_QWORD *)this + 418) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x173,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v10);
    v43 = (_OWORD *)((char *)a2 + 240);
    v44 = (_OWORD *)((char *)this + 504);
    v45 = 3LL;
    do
    {
      *v43 = *v44;
      v43[1] = v44[1];
      v43[2] = v44[2];
      v43[3] = v44[3];
      v43[4] = v44[4];
      v43[5] = v44[5];
      v43[6] = v44[6];
      v43 += 8;
      *(v43 - 1) = v44[7];
      v44 += 8;
      --v45;
    }
    while ( v45 );
    *v43 = *v44;
    v43[1] = v44[1];
    v46 = (struct LegacyInputInfo *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 418) + 232LL))(*((_QWORD *)this + 418));
    v53 = v46;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v53);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v53);
    *a4 = v46;
LABEL_56:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v53);
    goto LABEL_9;
  }
  *((_OWORD *)a2 + 180) = *((_OWORD *)this + 1);
  *((_OWORD *)a2 + 181) = *((_OWORD *)this + 2);
  *((_OWORD *)a2 + 182) = *((_OWORD *)this + 3);
  *((_OWORD *)a2 + 183) = *((_OWORD *)this + 4);
  MPCHolographicInputManager::PrepAndStabilizeTargetingRay(this, a2, a3);
  v11 = *((_QWORD *)this + 411);
  v12 = *(void (__fastcall **)(__int64, struct LegacyInputInfo *, __int64, struct IMPCTarget **))(*(_QWORD *)v11 + 64LL);
  v13 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 232LL))(a3);
  v12(v11, a2, v13, a4);
  if ( ISMTracing::IsEnabled(v15, v14) )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_Process3DInput_HitTestResult_(v25, a2);
  }
LABEL_9:
  v16 = 1;
  if ( *((_DWORD *)a2 + 16) == 4 )
    *((_BYTE *)a2 + 3000) = 1;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 200LL))(a3, *a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, char *))(*(_QWORD *)a3 + 216LL))(a3, (char *)a2 + 240);
  MPCHolographicInputManager::UpdateGazeCursor(this, a2);
  v53 = a2;
  if ( *((_DWORD *)a2 + 16) == 8 )
  {
    Instance = MPCGamepadInputHelper::GetInstance();
    MPCGamepadInputHelper::Update(Instance, v53);
    v48 = off_1801E0588;
    v49 = &v53;
    v50 = &v48;
    MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v48);
  }
  MPCHolographicInputManager::ProcessCapture(v17, a2, a3, a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 208LL))(a3, *a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 128LL))(
    a3,
    this,
    a2);
  v18 = !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 272LL))(**((_QWORD **)this + 450))
     && (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 72LL))(**((_QWORD **)this + 450))
     && a3 == *((struct IMPCInputProviderBase **)this + 418);
  if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) || v18 )
  {
    if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) )
      *((_BYTE *)this + 3272) = *((_BYTE *)a2 + 636) != 0;
    LOBYTE(v53) = 0;
    v48 = off_1801DCD48;
    v49 = &v53;
    v50 = &v48;
    MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v48);
    if ( !*((_BYTE *)a2 + 3000) )
    {
      if ( !MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v19, a3) )
        v16 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 328LL))(a3);
      if ( v18 )
      {
        v20 = (char *)this + 504;
        v21 = (struct IMPCInputProviderBase *)**((_QWORD **)this + 450);
      }
      else
      {
        v20 = (char *)a2 + 240;
        v21 = a3;
      }
      v47 = (_DWORD)a2 + 656;
      MPCHolographicInputManager::ProcessCursorData(this, v21, v20, v16);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 360LL))(a3)
      && (*((_QWORD *)this + 451) - *((_QWORD *)this + 450) == 8LL
       || (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 328LL))(a3) != 2) )
    {
      if ( *((_QWORD *)this + 462) != *((_QWORD *)this + 463) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1CE,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v22);
      if ( *((_QWORD *)this + 465) != *((_QWORD *)this + 466) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1CF,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v22);
      v48 = off_1801DCD78;
      v49 = (struct LegacyInputInfo **)this;
      v50 = &v48;
      MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v48);
      v26 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 422) + 80LL))(
              *((_QWORD *)this + 422),
              0xD37A6F4DE9BD37A7uLL * ((__int64)(*((_QWORD *)this + 463) - *((_QWORD *)this + 462)) >> 3));
      if ( v26 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1DD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v26,
          v47);
      v27 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 48LL))(a3);
      v28 = 0xD37A6F4DE9BD37A7uLL * ((__int64)(*((_QWORD *)this + 463) - *((_QWORD *)this + 462)) >> 3);
      if ( ISMTracing::IsEnabled(v30, v29) )
      {
        ISMTracing::Instance();
        ISMTracing::MPCHolographicInputManager_SendPoints_(v31, (unsigned int)v28, v27);
      }
      v32 = *((_QWORD *)this + 462);
      if ( v32 != *((_QWORD *)this + 463) )
        *((_QWORD *)this + 463) = v32;
    }
  }
  return 0LL;
}
