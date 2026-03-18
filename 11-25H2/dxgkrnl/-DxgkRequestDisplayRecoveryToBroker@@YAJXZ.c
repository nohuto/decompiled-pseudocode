/*
 * XREFs of ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401BB804
 * Callers:
 *     ?WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1400599C0 (-WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPE.c)
 *     ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401BF110 (-TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116__&DxgkSampleDisplayState_ @ 0x14006CE94 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116__-D.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E8070 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 */

__int64 __fastcall DxgkRequestDisplayRecoveryToBroker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PORT_MESSAGE *v4; // rbx
  unsigned int v5; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v7[3]; // [rsp+50h] [rbp-18h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // [rsp+70h] [rbp+8h] BYREF
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  v9 = operator new[](0x68uLL, 0x4B677844u, 256LL, a4);
  v4 = (struct _PORT_MESSAGE *)v9;
  if ( v9 )
  {
    LOBYTE(v7[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v7, 0LL, 0x49u, 0);
    v8 = v7[1];
    DisplayScenarioContextHolding(&v8);
    InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116___DxgkSampleDisplayState_(
      v4,
      v8);
    v5 = DxgkSendDisplayBrokerMessage(0x10000u, v4, 0LL, 0LL, 0LL, 0LL, 0LL);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v7);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2252;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Cannot allocate buffer to hold the RequestDisplayRecovery ALPC message",
      2252LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v5 = -1073741801;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v9);
  return v5;
}
