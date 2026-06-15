/*
 * XREFs of ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1800567C8
 * Callers:
 *     _lambda_e84e538cea589f9d2d4ff5de0c6f63fc_::operator() @ 0x180105AD8 (_lambda_e84e538cea589f9d2d4ff5de0c6f63fc_--operator().c)
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18000CB20 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x1800569FC (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     _lambda_2810286c7b554c127490620b0e2ca0e2_::operator() @ 0x180056AB4 (_lambda_2810286c7b554c127490620b0e2ca0e2_--operator().c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180056F88 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180057010 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180060E88 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180065D1C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800806B8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall s_adPublishApoTelemetry(const unsigned __int16 *a1, struct _GUID *a2)
{
  LPCRITICAL_SECTION v3; // rbx
  int v4; // eax
  unsigned int DebugInfo; // edi
  RPC_BINDING_HANDLE v7; // rbx
  int ADGProcessBindingHandle; // eax
  LPCRITICAL_SECTION v9; // rbx
  bool v10; // zf
  int v11; // eax
  LPCRITICAL_SECTION v12; // rbx
  LPCRITICAL_SECTION v13; // rbx
  RPC_BINDING_HANDLE v14; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v15[8]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v16[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  const unsigned __int16 *v18; // [rsp+70h] [rbp+20h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+80h] [rbp+30h] BYREF
  RPC_BINDING_HANDLE v20; // [rsp+88h] [rbp+38h] BYREF

  v18 = a1;
  v20 = 0LL;
  v3 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  Binding = v3;
  v4 = LODWORD(v3[1].DebugInfo) + 1;
  LODWORD(v3[1].DebugInfo) = v4;
  if ( v4 == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer((CAudioDGProcess *)v3);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v3);
  }
  DebugInfo = (unsigned int)v3[1].DebugInfo;
  LeaveCriticalSection(v3);
  if ( (DebugInfo & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x359,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)DebugInfo);
    if ( !v20 )
      return DebugInfo;
    Binding = v20;
LABEL_6:
    RpcBindingFree(&Binding);
    return DebugInfo;
  }
  BYTE1(Binding) = 1;
  v7 = v20;
  if ( v20 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)v15);
    v14 = v7;
    RpcBindingFree(&v14);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v15);
  }
  v20 = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&v20);
  DebugInfo = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessBindingHandle);
    v9 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    Binding = v9;
    v10 = LODWORD(v9[1].DebugInfo)-- == 1;
    if ( v10 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v9);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&Binding);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20);
    return DebugInfo;
  }
  v16[0] = &v20;
  v16[1] = &v18;
  v16[2] = a2;
  v11 = lambda_2810286c7b554c127490620b0e2ca0e2_::operator()(v16);
  DebugInfo = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)v11);
    v12 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    v10 = LODWORD(v12[1].DebugInfo)-- == 1;
    if ( v10 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v12);
    LeaveCriticalSection(v12);
    if ( !v20 )
      return DebugInfo;
    Binding = v20;
    goto LABEL_6;
  }
  v13 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v10 = LODWORD(v13[1].DebugInfo)-- == 1;
  if ( v10 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v13);
  LeaveCriticalSection(v13);
  if ( v20 )
  {
    Binding = v20;
    RpcBindingFree(&Binding);
  }
  return 0LL;
}
