/*
 * XREFs of s_adGetDeviceGraphWnfStateName @ 0x1800AB7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18001F6B8 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001F740 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180020274 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180021D9C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180053478 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1800592FC (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006E098 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 *     _lambda_1eb851544ffb42b511f3612ab49dd320_::operator() @ 0x1800AAC30 (_lambda_1eb851544ffb42b511f3612ab49dd320_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_adGetDeviceGraphWnfStateName(__int64 a1, __int64 a2, _QWORD *a3)
{
  LPCRITICAL_SECTION v4; // rbx
  int v5; // eax
  int DebugInfo; // ebx
  RPC_BINDING_HANDLE v7; // rbx
  int ADGProcessBindingHandle; // eax
  int v9; // edi
  LPCRITICAL_SECTION v10; // rbx
  bool v11; // zf
  int v12; // eax
  LPCRITICAL_SECTION v13; // rbx
  RPC_BINDING_HANDLE Binding; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v16[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+68h] [rbp+28h] BYREF
  RPC_BINDING_HANDLE v19; // [rsp+78h] [rbp+38h] BYREF

  v18 = a2;
  v19 = 0LL;
  v4 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  Binding = v4;
  v5 = LODWORD(v4[1].DebugInfo) + 1;
  LODWORD(v4[1].DebugInfo) = v5;
  if ( v5 == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v4);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v4);
  }
  DebugInfo = (int)v4[1].DebugInfo;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&Binding);
  if ( DebugInfo >= 0 )
  {
    v7 = v19;
    if ( v19 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)v16);
      Binding = v7;
      RpcBindingFree(&Binding);
      wil::last_error_context::~last_error_context((wil::last_error_context *)v16);
    }
    ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&v19);
    v9 = ADGProcessBindingHandle;
    if ( ADGProcessBindingHandle >= 0 )
    {
      v16[0] = &v19;
      v16[1] = &v18;
      v12 = lambda_1eb851544ffb42b511f3612ab49dd320_::operator()(v16);
      v9 = v12;
      if ( v12 >= 0 )
      {
        *a3 = *(_QWORD *)&g_ADGProcess[2].LockCount;
        DebugInfo = 0;
        goto LABEL_16;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x340,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)(unsigned int)v12);
      v13 = g_ADGProcess;
      EnterCriticalSection(g_ADGProcess);
      v16[0] = &v13->DebugInfo;
      v11 = LODWORD(v13[1].DebugInfo)-- == 1;
      if ( v11 )
        CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x337,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)(unsigned int)ADGProcessBindingHandle);
      v10 = g_ADGProcess;
      EnterCriticalSection(g_ADGProcess);
      v16[0] = &v10->DebugInfo;
      v11 = LODWORD(v10[1].DebugInfo)-- == 1;
      if ( v11 )
        CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v10);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v16);
    DebugInfo = v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)DebugInfo);
  }
LABEL_16:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v19);
  return (unsigned int)DebugInfo;
}
