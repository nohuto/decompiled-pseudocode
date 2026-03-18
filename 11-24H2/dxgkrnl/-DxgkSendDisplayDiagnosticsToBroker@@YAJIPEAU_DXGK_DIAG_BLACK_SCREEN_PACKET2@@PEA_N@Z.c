/*
 * XREFs of ?DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z @ 0x1401BE290
 * Callers:
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401C19E4 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__&DxgkSampleDisplayState_ @ 0x140064AA0 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__-D.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E1720 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 */

__int64 __fastcall DxgkSendDisplayDiagnosticsToBroker(
        unsigned int a1,
        struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *a2,
        bool *a3)
{
  __int16 v4; // bx
  struct _PORT_MESSAGE *v5; // rdi
  int v6; // ebx
  unsigned int v8; // [rsp+50h] [rbp-79h] BYREF
  union _LARGE_INTEGER v9; // [rsp+58h] [rbp-71h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp-69h] BYREF
  struct _PORT_MESSAGE *v11; // [rsp+68h] [rbp-61h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12[2]; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v13[2]; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v14[88]; // [rsp+90h] [rbp-39h] BYREF
  struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *v15; // [rsp+138h] [rbp+6Fh] BYREF

  v15 = a2;
  v8 = a1;
  v4 = a1 + 104;
  v11 = (struct _PORT_MESSAGE *)operator new[](a1 + 104LL, 0x4B677844u, 256LL);
  v5 = v11;
  if ( v11 )
  {
    memset(v14, 0, sizeof(v14));
    LOBYTE(v12[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v12, 0LL, 0x48u, 0);
    v13[0] = &v15;
    v13[1] = &v8;
    InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36___DxgkSampleDisplayState_(
      v11,
      v12[1],
      (__int64)v13,
      v4 - 104);
    v9.QuadPart = -20000000LL;
    v10 = 88LL;
    v6 = DxgkSendDisplayBrokerMessage(0x20000u, v5, 0LL, (struct _PORT_MESSAGE *)v14, &v10, 0LL, &v9);
    if ( v6 >= 0 )
      *a3 = *(_DWORD *)&v14[80] == 3;
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v12);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2101;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Cannot allocate buffer to hold the SendDisplayDiagnostics ALPC message",
      2101LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = -1073741801;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v11);
  return (unsigned int)v6;
}
