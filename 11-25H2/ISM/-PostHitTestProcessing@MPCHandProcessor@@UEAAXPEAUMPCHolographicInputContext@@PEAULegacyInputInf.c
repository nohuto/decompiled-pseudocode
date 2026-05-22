/*
 * XREFs of ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800C2BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068A34 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068AA0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180098E64 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B4350 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C12DC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800C1B60 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C7CBC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

void __fastcall MPCHandProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  char v3; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  struct MPCConstantManager *Instance; // rax
  unsigned int v11; // r12d
  char v12; // di
  char v13; // bl
  char v14; // di
  MPCButtonHoldHelper **v15; // rax
  int v16; // xmm1_4
  char v17; // bl
  int v18; // eax
  _DWORD *v19; // rcx
  MPCButtonHoldHelper **v20; // rsi
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  __int64 v24; // rdi
  struct MPCGestureHandlerManager *v25; // rbx
  __int64 *v26; // rax
  char IsInjecting; // al
  struct MPCGestureHandlerManager *v28; // rbx
  __int64 *v29; // rax
  char v30; // bl
  std::_Ref_count_base *v31; // rcx
  const void *v32; // rdx
  MPCGestureHandlerManager *v33; // rbx
  __int64 *v34; // rax
  const char *v35; // r9
  std::_Ref_count_base *v36[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v37; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v38; // [rsp+48h] [rbp-38h]
  _DWORD *v39; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v40; // [rsp+C8h] [rbp+48h] BYREF

  v3 = 0;
  LODWORD(v39) = 0;
  if ( !MPCInputProviderBase::IsPrimary(this) )
    return;
  Instance = MPCConstantManager::GetInstance(v7, v6, v8, v9);
  v36[1] = (std::_Ref_count_base *)21;
  v36[0] = (std::_Ref_count_base *)L"DisableInputInjection";
  if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                          (__int64)Instance,
                          this & -(__int64)(this != 24),
                          (__int128 *)v36) )
    return;
  v11 = 0;
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCButtonHoldHelper ***)(this + 3656),
    *((_BYTE *)a3 + 651) != 0,
    *((_QWORD *)a3 + 2),
    *((float *)a3 + 61),
    *((float *)a3 + 62),
    1.0);
  if ( !*((_BYTE *)a3 + 650)
    || !*((_BYTE *)a3 + 652)
    || (v3 = 1, v12 = 1, *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(this + 3656), v36) + 12LL)) )
  {
    v12 = 0;
  }
  if ( (v3 & 1) != 0 )
  {
    v3 &= ~1u;
    if ( v36[1] )
      std::_Ref_count_base::_Decref(v36[1]);
  }
  if ( v12 )
    goto LABEL_46;
  v13 = v3 | 2;
  if ( *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(this + 3656), &v37) + 8LL)
    || (v13 = 4, *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(this + 3656), v36) + 12LL)) )
  {
    v14 = 1;
    if ( (v13 & 4) == 0 )
      goto LABEL_17;
  }
  else
  {
    v14 = 0;
  }
  if ( v36[1] )
    std::_Ref_count_base::_Decref(v36[1]);
LABEL_17:
  if ( v38 )
    std::_Ref_count_base::_Decref(v38);
  if ( v14 )
  {
    v15 = *(MPCButtonHoldHelper ***)(this + 3656);
    if ( !*((_BYTE *)v15 + 13) )
    {
      v16 = *((_DWORD *)v15 + 2);
      *((_DWORD *)a3 + 61) = *((_DWORD *)v15 + 1);
      *((_DWORD *)a3 + 62) = v16;
    }
    v17 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(this + 3656), &v37) + 8LL);
    if ( v38 )
      std::_Ref_count_base::_Decref(v38);
    if ( v17 )
    {
      memcpy_0((void *)(this + 3672), a3, 0xBC0uLL);
LABEL_47:
      v11 = 7;
      goto LABEL_48;
    }
    goto LABEL_35;
  }
  if ( !*((_BYTE *)a3 + 240) )
    goto LABEL_48;
  v18 = *(_DWORD *)a3 & 0x662600;
  if ( !*(_BYTE *)(this + 3640) )
  {
    v19 = (_DWORD *)((char *)a3 + 64);
    if ( v18 )
    {
      if ( *v19 == 3 )
        goto LABEL_35;
      if ( *v19 == 2 )
      {
        v39 = (_DWORD *)((char *)a3 + 64);
        goto LABEL_38;
      }
      v19 = (_DWORD *)((char *)a3 + 64);
    }
    v39 = v19;
    v28 = MPCGestureHandlerManager::GetInstance();
    v29 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v40,
            this & -(__int64)(this != 24));
    if ( MPCGestureHandlerManager::IsInjecting((__int64)v28, v29) )
    {
LABEL_38:
      v20 = *(MPCButtonHoldHelper ***)(this + 3648);
      v21 = *((float *)a3 + 76);
      v22 = *((float *)a3 + 62);
      v23 = *((float *)a3 + 61);
      v24 = *((_QWORD *)a3 + 2);
      v25 = MPCGestureHandlerManager::GetInstance();
      v26 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v40,
              this & -(__int64)(this != 24));
      IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v25, v26);
      MPCSlateDeadzoneHelper::UpdateState(v20, IsInjecting, v24, v23, v22, v21);
      if ( ((*(_DWORD *)a3 & 0x662600) == 0 || *v39 != 2) && !*(_BYTE *)(*(_QWORD *)(this + 3648) + 13LL) )
        goto LABEL_48;
      goto LABEL_47;
    }
    if ( (*(_DWORD *)a3 & 0x662600) == 0 || *((_DWORD *)a3 + 16) != 6 )
      goto LABEL_48;
LABEL_46:
    v11 = 4;
    goto LABEL_48;
  }
  if ( v18 )
  {
    if ( *((_DWORD *)a3 + 16) == 2 )
    {
      v11 = 1;
      goto LABEL_48;
    }
    if ( *((_DWORD *)a3 + 16) != 3 )
      goto LABEL_48;
LABEL_35:
    v11 = 2;
  }
LABEL_48:
  v30 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*(_QWORD *)(this + 3656), &v37) + 12LL);
  v31 = v38;
  if ( v38 )
    std::_Ref_count_base::_Decref(v38);
  if ( v30 )
  {
    a3 = (struct LegacyInputInfo *)(this + 3672);
  }
  else if ( !*((_BYTE *)a3 + 240) && *(_DWORD *)(this + 7536) == 4 )
  {
    a3 = (struct LegacyInputInfo *)(this + 6680);
    v11 = 0;
  }
  if ( *(_QWORD *)(this + 3600) && *(_BYTE *)(this + 3624) && !*((_BYTE *)a3 + 240) )
  {
    a3 = (struct LegacyInputInfo *)(this + 6680);
    v11 = 7;
  }
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v31, a3, v11);
  if ( *((_BYTE *)a3 + 240) )
  {
    memcpy_0((void *)(this + 6680), v32, 0xBC0uLL);
    v33 = MPCGestureHandlerManager::GetInstance();
    v34 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v39,
            this & -(__int64)(this != 24));
    MPCGestureHandlerManager::DownLevelTo2D(v33, a3, v34, v35);
  }
}
