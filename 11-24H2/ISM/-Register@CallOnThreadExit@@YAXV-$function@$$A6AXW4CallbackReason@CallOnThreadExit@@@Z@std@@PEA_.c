/*
 * XREFs of ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_K@Z @ 0x180131240
 * Callers:
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@@Z @ 0x1801311E4 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@@Z.c)
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18000AB8C (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x18008393C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180084CA0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A279C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x180130B40 (--$_Emplace@$$V@-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadEx.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef@@@details@wil@@QEAA_NXZ @ 0x1801315A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CallOnThreadExit::Register(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  HANDLE CurrentProcess; // rbx
  HANDLE CurrentThread; // rax
  const char *v11; // r9
  const char *v12; // r9
  struct _TP_WAIT *ThreadpoolWait; // rax
  const char *v14; // r9
  struct _TP_WAIT *v15; // rcx
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  std::_Mutex_base::lock((std::_Mutex_base *)&unk_180250E60);
  std::list<CallOnThreadExit::CallbackData>::_Emplace<>(v4, qword_180250E50);
  v6 = *(_QWORD *)(qword_180250E50 + 8) + 16LL;
  if ( v6 != a1 )
  {
    std::_Func_class<void,>::~_Func_class<void,>(*(_QWORD *)(qword_180250E50 + 8) + 16LL, v5);
    v7 = *(_QWORD *)(a1 + 56);
    if ( v7 )
    {
      if ( v7 == a1 )
      {
        *(_QWORD *)(v6 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, v6);
        std::_Func_class<void,>::~_Func_class<void,>(a1, v8);
      }
      else
      {
        *(_QWORD *)(v6 + 56) = v7;
        *(_QWORD *)(a1 + 56) = 0LL;
      }
    }
  }
  *(_QWORD *)(v6 + 64) = ++qword_1802519C8;
  *(_DWORD *)(v6 + 72) = GetCurrentThreadId();
  CurrentProcess = GetCurrentProcess();
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(v6 + 88),
    0LL);
  CurrentThread = GetCurrentThread();
  if ( !DuplicateHandle(CurrentProcess, CurrentThread, CurrentProcess, (LPHANDLE)(v6 + 88), 0, 0, 2u) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x5D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\callonthreadexit\\callonthreadexit.cpp",
      v11);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef>::GetImpl'::`2'::impl)
    && !GetModuleHandleExW(4u, (LPCWSTR)CallOnThreadExit::CallOnThreadExitStatic, (HMODULE *)(v6 + 80)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\callonthreadexit\\callonthreadexit.cpp",
      v12);
  }
  ThreadpoolWait = CreateThreadpoolWait((PTP_WAIT_CALLBACK)CallOnThreadExit::CallOnThreadExitStatic, (PVOID)v6, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
    (struct _TP_WAIT **)(v6 + 96),
    ThreadpoolWait);
  v15 = *(struct _TP_WAIT **)(v6 + 96);
  if ( !v15 )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x6F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\callonthreadexit\\callonthreadexit.cpp",
      v14);
  SetThreadpoolWait(v15, *(HANDLE *)(v6 + 88), 0LL);
  *a2 = *(_QWORD *)(v6 + 64);
  _Mtx_unlock((_Mtx_t)&unk_180250E60);
  return std::_Func_class<void,>::~_Func_class<void,>(a1, v16);
}
