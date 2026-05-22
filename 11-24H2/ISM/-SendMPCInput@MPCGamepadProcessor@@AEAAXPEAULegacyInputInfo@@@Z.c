/*
 * XREFs of ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C045C
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801BFD10 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068824 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006885C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1DFC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x1800B7968 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800BA3D0 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800BA680 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800BFA08 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5E7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?ShouldCancel@MPCGestureCancelTracker@@QEAA_NXZ @ 0x1801C5190 (-ShouldCancel@MPCGestureCancelTracker@@QEAA_NXZ.c)
 *     ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801C51A8 (-StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C51E8 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::SendMPCInput(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rcx
  char v5; // r12
  _QWORD *ButtonHoldHelper; // rax
  char v7; // cl
  _QWORD *v8; // rax
  char v9; // r15
  char v10; // bl
  MPCGestureCancelTracker *v11; // rcx
  int v12; // ebx
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v14; // rcx
  _BYTE *v15; // rbp
  MPCGestureHandlerManager *v16; // rbx
  __int64 *v17; // rax
  const char *v18; // r9
  struct MPCHolographicInputManager *v19; // rax
  const char *v20; // r9
  int v21; // eax
  struct MPCHolographicInputManager *v22; // rax
  const char *v23; // r9
  int v24; // eax
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  std::_Ref_count_base *v28; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v30; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v30) = 0;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)this, (__int64)a2, 0);
  v5 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(v4 + 4288), &v25) + 10LL);
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  ButtonHoldHelper = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 536), &v27);
  v7 = 1;
  if ( *(_BYTE *)(*ButtonHoldHelper + 10LL)
    || (v8 = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 536), &v25), v7 = 3, *(_BYTE *)(*v8 + 12LL)) )
  {
    v9 = 1;
    if ( (v7 & 2) == 0 )
      goto LABEL_9;
  }
  else
  {
    v9 = 0;
  }
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
LABEL_9:
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  v10 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 536), &v27) + 8LL);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  if ( v10 )
    MPCGestureCancelTracker::TrackPosition(
      (MPCGamepadProcessor *)((char *)this + 4296),
      (MPCGamepadProcessor *)((char *)this + 4204));
  if ( v9 )
  {
    v11 = (MPCGamepadProcessor *)((char *)this + 4296);
    v12 = v5 != 0;
    if ( v5 )
    {
      MPCGestureCancelTracker::StartTracking(v11, (MPCGamepadProcessor *)((char *)this + 4204), 0.025);
    }
    else if ( MPCGestureCancelTracker::ShouldCancel(v11) )
    {
      *((_WORD *)this + 2156) = 0;
      v12 = 2;
      *((_QWORD *)this + 540) = 0LL;
    }
    Instance = MPCHolographicInputManager::GetInstance();
    v14 = *((_QWORD *)this + 455);
    if ( !v14 )
      v14 = *((_QWORD *)this + 456);
    v15 = (char *)a2 + 240;
    MPCHolographicInputManager::InjectInteractionState(
      (__int64)Instance,
      v12,
      **((_DWORD **)this + 7),
      (__int64)a2 + 240,
      v14);
  }
  else
  {
    v15 = (char *)a2 + 240;
  }
  if ( (*((_BYTE *)this + 3708) & 1) == 0 && (*((_BYTE *)this + 3704) & 1) != 0 )
    MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, 4u, 1u);
  if ( *v15 && *((_BYTE *)a2 + 242) && !*((_DWORD *)this + 1046) && v9 )
  {
    *((_DWORD *)a2 + 214) = 2 - (v5 != 0);
    v16 = MPCGestureHandlerManager::GetInstance();
    v17 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v30,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
    MPCGestureHandlerManager::DownLevelTo2D(v16, a2, v17, v18);
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 535) + 12LL) )
  {
    v19 = MPCHolographicInputManager::GetInstance();
    v21 = MPCHolographicInputManager::InjectRightClick((__int64)v19, 1, *((_DWORD *)a2 + 68), v20, *((float *)a2 + 62));
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v21);
    v22 = MPCHolographicInputManager::GetInstance();
    v24 = MPCHolographicInputManager::InjectRightClick((__int64)v22, 0, *((_DWORD *)a2 + 68), v23, *((float *)a2 + 62));
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v24);
  }
}
