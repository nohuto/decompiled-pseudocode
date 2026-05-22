/*
 * XREFs of ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800BC5D4
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801B8F2C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801BA4B8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800263B0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800957FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 *     _lambda_d868253b3e20bfbc6991bfd75a08498f_::operator() @ 0x1800BBB38 (_lambda_d868253b3e20bfbc6991bfd75a08498f_--operator().c)
 *     _lambda_e9c1fc9d7cbe0868cf685a076fd687ae_::operator() @ 0x1800BBC0C (_lambda_e9c1fc9d7cbe0868cf685a076fd687ae_--operator().c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BD4BC (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     _alloca_probe @ 0x1801C7C90 (_alloca_probe.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectInteractionState(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  const char *v9; // r9
  bool v11; // zf
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned int *v14; // rcx
  unsigned int v15; // edi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 WindowIdFromViewId; // rax
  int v18; // r8d
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  _BYTE Src[64]; // [rsp+80h] [rbp-80h] BYREF
  int v26; // [rsp+C0h] [rbp-40h]
  _BYTE v27[3008]; // [rsp+C40h] [rbp+B40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1828h] [rbp+1728h]
  __int64 v29; // [rsp+1830h] [rbp+1730h] BYREF

  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a5 + 32LL))(a5) )
  {
    v11 = *(_BYTE *)(a1 + 3368) == 0;
    v21[1] = (__int64)&a5;
    v29 = a1;
    v21[0] = a1;
    if ( v11 )
    {
      if ( a2 == 1 )
      {
LABEL_9:
        *(_BYTE *)(a1 + 3368) = 1;
        _InterlockedExchange(
          &MPCInputInfoHelper::m_nextArtificialSpectrumId,
          ((unsigned int)std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)&MPCInputInfoHelper::m_nextArtificialSpectrumId)
         + 1294967296)
        % 0x3B9AC9FF
        - 1294967295);
        *(_DWORD *)(a1 + 3372) = std::_Atomic_storage<enum GestureOperationState,4>::load(v14);
        if ( !*(_BYTE *)(a4 + 1) && *(_BYTE *)(a4 + 72) )
        {
          v15 = *(_DWORD *)(a4 + 376);
          ViewHierarchy = ISMStatics::GetViewHierarchy();
          WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy);
          MPCHolographicInputManager::RequestForegroundChange(a1, WindowIdFromViewId, v15, a3);
        }
        v18 = 2;
LABEL_17:
        v19 = *(_OWORD *)(a4 + 88);
        v22 = *(_OWORD *)(a4 + 72);
        v20 = *(_OWORD *)(a4 + 104);
        v23 = v19;
        v24 = v20;
        lambda_e9c1fc9d7cbe0868cf685a076fd687ae_::operator()(&v29, (__int64)Src, v18, a2, a3, &v22);
        if ( v26 == 3 )
        {
          v26 = 6;
          memcpy_0(v27, Src, sizeof(v27));
          lambda_d868253b3e20bfbc6991bfd75a08498f_::operator()(v21, (__int64)v27);
          v26 = 3;
        }
        memcpy_0(v27, Src, sizeof(v27));
        lambda_d868253b3e20bfbc6991bfd75a08498f_::operator()(v21, (__int64)v27);
        return 0LL;
      }
    }
    else if ( a2 == 1 )
    {
      v12 = *(_OWORD *)(a4 + 88);
      v22 = *(_OWORD *)(a4 + 72);
      v13 = *(_OWORD *)(a4 + 104);
      v23 = v12;
      v24 = v13;
      lambda_e9c1fc9d7cbe0868cf685a076fd687ae_::operator()(&v29, (__int64)Src, 4, 1, a3, &v22);
      memcpy_0(v27, Src, sizeof(v27));
      lambda_d868253b3e20bfbc6991bfd75a08498f_::operator()(v21, (__int64)v27);
      goto LABEL_9;
    }
    *(_BYTE *)(a1 + 3368) = 0;
    if ( a2 )
    {
      if ( a2 != 2 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x323,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v9);
      v18 = 4;
    }
    else
    {
      v18 = 3;
    }
    goto LABEL_17;
  }
  return 0LL;
}
