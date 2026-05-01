/*
 * XREFs of ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@_K@Z @ 0x18001994C
 * Callers:
 *     ??0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x180437494 (--0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@Uwp.c)
 * Callees:
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019118 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180019520 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_eb4780c1661a573af0d01df637dfa0a8___ @ 0x18001A508 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_eb4780c1661a573af0d01df637dfa0a8.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001A5F8 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x18001A78C (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z @ 0x18001AF20 (--$ViewWrapperCreated@IPEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEAPEBG1@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 UwpWindowWrapperBase::Initialize(va_list a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // rsi
  int v7; // eax
  DWORD CurrentThreadId; // eax
  __int64 v9; // rcx
  int v10; // eax
  va_list v11; // rbx
  __int64 v12; // rax
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-40h] BYREF
  va_list v15; // [rsp+28h] [rbp-38h]
  va_list v16; // [rsp+30h] [rbp-30h]
  va_list v17; // [rsp+38h] [rbp-28h]
  __int64 (__fastcall ***v18)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v20; // [rsp+80h] [rbp+20h] BYREF
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+98h] [rbp+38h]
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF
  va_list va1; // [rsp+A0h] [rbp+40h]
  __int64 v25; // [rsp+A8h] [rbp+48h]
  __int64 v26; // [rsp+B0h] [rbp+50h]
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF
  va_list va2; // [rsp+B8h] [rbp+58h]
  const WCHAR *v29; // [rsp+C0h] [rbp+60h] BYREF
  va_list va3; // [rsp+C0h] [rbp+60h]
  __int64 v31; // [rsp+C8h] [rbp+68h] BYREF
  va_list va4; // [rsp+C8h] [rbp+68h]
  __int64 (__fastcall ***v33)(); // [rsp+D0h] [rbp+70h] BYREF
  va_list va5; // [rsp+D0h] [rbp+70h]
  va_list va6; // [rsp+D8h] [rbp+78h] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, _QWORD);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v27 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v29 = va_arg(va4, const WCHAR *);
  va_copy(va5, va4);
  v31 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v33 = va_arg(va6, __int64 (__fastcall ***)());
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2);
  RmActivityImportanceInitialize(a1 + 252);
  v6 = *((_QWORD *)a1 + 14);
  *((_QWORD *)a1 + 14) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_DWORD *)a1 + 82) = v23;
  *((_DWORD *)a1 + 88) = v25;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)a1 + 16,
    v26);
  *((_QWORD *)a1 + 69) = v33;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)a1 + 35,
    a2);
  v7 = Windows::Internal::String::Initialize<unsigned short const *>((HSTRING *)a1 + 40, (const WCHAR **)va3);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      (int)v14);
  v14 = off_18071F9F0;
  v15 = a1;
  v18 = &v14;
  v33 = &v14;
  std::function<void (bool)>::operator=(a1 + 384, &v14);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(&v14);
  v14 = (__int64 (__fastcall **)())a1;
  va_copy(v15, va);
  va_copy(v16, va2);
  va_copy(v17, va4);
  CurrentThreadId = GetCurrentThreadId();
  v10 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_eb4780c1661a573af0d01df637dfa0a8___(
          v9,
          CurrentThreadId,
          &v14);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC0,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v10,
      (int)v14);
  v11 = a1 + 16;
  v33 = (__int64 (__fastcall ***)())(*(__int64 (__fastcall **)(va_list))(*(_QWORD *)v11 + 280LL))(v11);
  v20 = (*(__int64 (__fastcall **)(va_list))(*(_QWORD *)v11 + 272LL))(v11);
  v12 = (*(__int64 (__fastcall **)(va_list, __int64 *))(*(_QWORD *)v11 + 288LL))(v11, (__int64 *)va1);
  ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int,unsigned short const *,unsigned short const *>(
    v12,
    &v20,
    (__int64 (__fastcall ****)())va5);
  return 0LL;
}
