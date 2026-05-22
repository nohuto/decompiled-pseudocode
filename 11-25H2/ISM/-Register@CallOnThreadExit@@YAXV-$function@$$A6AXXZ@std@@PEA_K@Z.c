/*
 * XREFs of ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@PEA_K@Z @ 0x18012EC04
 * Callers:
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18008D580 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18000A430 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800158C4 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x18008391C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180084C80 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A23CC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x18012EA60 (--$_Emplace@$$V@-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadEx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  struct _TP_WAIT *ThreadpoolWait; // rax
  const char *v13; // r9
  struct _TP_WAIT *v14; // rcx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  std::_Mutex_base::lock((std::_Mutex_base *)&unk_180246E98);
  std::list<CallOnThreadExit::CallbackData>::_Emplace<>(v4, qword_180246E88);
  v6 = *(_QWORD *)(qword_180246E88 + 8) + 16LL;
  if ( v6 != a1 )
  {
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(*(_QWORD *)(qword_180246E88 + 8) + 16LL, v5);
    v7 = *(_QWORD *)(a1 + 56);
    if ( v7 )
    {
      if ( v7 == a1 )
      {
        *(_QWORD *)(v6 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, v6);
        std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a1, v8);
      }
      else
      {
        *(_QWORD *)(v6 + 56) = v7;
        *(_QWORD *)(a1 + 56) = 0LL;
      }
    }
  }
  *(_QWORD *)(v6 + 64) = ++qword_180247990;
  *(_DWORD *)(v6 + 72) = GetCurrentThreadId();
  CurrentProcess = GetCurrentProcess();
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(v6 + 80),
    0LL);
  CurrentThread = GetCurrentThread();
  if ( !DuplicateHandle(CurrentProcess, CurrentThread, CurrentProcess, (LPHANDLE)(v6 + 80), 0, 0, 2u) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x47,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\callonthreadexit\\callonthreadexit.cpp",
      v11);
  ThreadpoolWait = CreateThreadpoolWait((PTP_WAIT_CALLBACK)CallOnThreadExit::CallOnThreadExitStatic, (PVOID)v6, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
    (struct _TP_WAIT **)(v6 + 88),
    ThreadpoolWait);
  v14 = *(struct _TP_WAIT **)(v6 + 88);
  if ( !v14 )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\callonthreadexit\\callonthreadexit.cpp",
      v13);
  SetThreadpoolWait(v14, *(HANDLE *)(v6 + 80), 0LL);
  *a2 = *(_QWORD *)(v6 + 64);
  _Mtx_unlock((_Mtx_t)&unk_180246E98);
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a1, v15);
}
