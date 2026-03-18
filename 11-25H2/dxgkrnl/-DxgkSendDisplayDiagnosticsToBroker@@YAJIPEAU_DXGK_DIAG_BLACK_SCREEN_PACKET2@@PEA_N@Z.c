/*
 * XREFs of ?DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z @ 0x1401BB908
 * Callers:
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401BF034 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__&DxgkSampleDisplayState_ @ 0x140064E80 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36__-D.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E8070 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 */

__int64 __fastcall DxgkSendDisplayDiagnosticsToBroker(
        unsigned int a1,
        struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *a2,
        bool *a3,
        __int64 a4)
{
  __int16 v5; // bx
  struct _PORT_MESSAGE *v6; // rdi
  int v7; // ebx
  unsigned int v9; // [rsp+50h] [rbp-79h] BYREF
  union _LARGE_INTEGER v10; // [rsp+58h] [rbp-71h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp-69h] BYREF
  struct _PORT_MESSAGE *v12; // [rsp+68h] [rbp-61h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13[2]; // [rsp+70h] [rbp-59h] BYREF
  _QWORD v14[2]; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v15[88]; // [rsp+90h] [rbp-39h] BYREF
  struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *v16; // [rsp+138h] [rbp+6Fh] BYREF

  v16 = a2;
  v9 = a1;
  v5 = a1 + 104;
  v12 = (struct _PORT_MESSAGE *)operator new[](a1 + 104LL, 0x4B677844u, 256LL, a4);
  v6 = v12;
  if ( v12 )
  {
    memset(v15, 0, sizeof(v15));
    LOBYTE(v13[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v13, 0LL, 0x48u, 0);
    v14[0] = &v16;
    v14[1] = &v9;
    InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_1a822b8402b4296eae1670fc6ac77c36___DxgkSampleDisplayState_(
      v12,
      v13[1],
      (__int64)v14,
      v5 - 104);
    v10.QuadPart = -20000000LL;
    v11 = 88LL;
    v7 = DxgkSendDisplayBrokerMessage(0x20000u, v6, 0LL, (struct _PORT_MESSAGE *)v15, &v11, 0LL, &v10);
    if ( v7 >= 0 )
      *a3 = *(_DWORD *)&v15[80] == 3;
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v13);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2122;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Cannot allocate buffer to hold the SendDisplayDiagnostics ALPC message",
      2122LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v7 = -1073741801;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v12);
  return (unsigned int)v7;
}
