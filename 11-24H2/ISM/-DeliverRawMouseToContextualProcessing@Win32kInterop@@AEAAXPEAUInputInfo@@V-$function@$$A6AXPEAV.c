/*
 * XREFs of ?DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x180035FCC
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180034A30 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180021EFC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x18002CD70 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180030F80 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ??R?$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z @ 0x180036178 (--R-$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@1@AEBK@Z @ 0x18004D954 (--$find@X@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDev.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Win32kInterop::DeliverRawMouseToContextualProcessing(
        __int64 a1,
        const struct InputInfo *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v8; // r14
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // eax
  __int64 *v17; // [rsp+20h] [rbp-58h]
  _QWORD v18[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+90h] [rbp+18h]
  __int64 v22; // [rsp+98h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  InputTraceLogging::ContextualProcessing::ReceiveInput(a2);
  v8 = (_QWORD *)(a1 + 200);
  if ( *(_BYTE *)(a1 + 192) )
  {
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::find<void>(
      a1 + 64,
      v18,
      (char *)a2 + 4);
    v15 = v18[0];
    if ( v18[0] == *(_QWORD *)(a1 + 72) )
    {
      v14 = 0LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 200));
    v16 = InputContext::Create((struct InputContext **)(a1 + 200));
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6C5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v16,
        (int)v17);
    v20 = 0LL;
    v17 = &v20;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 48) + 64LL))(
           *(_QWORD *)(a1 + 48),
           *(_QWORD *)(v15 + 24),
           *v8,
           (a1 + 8) & -(__int64)(a1 != 0)) >= 0 )
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(a1 + 208), &v20);
    *(_BYTE *)(a1 + 192) = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  }
  std::_Func_class<void,InputContext *>::operator()(a3, *v8);
  v9 = *(_QWORD *)(a1 + 208);
  if ( !v9 )
  {
    v14 = *(_QWORD *)(*v8 + 16LL);
LABEL_11:
    result = std::_Func_class<void,InputContext *>::operator()(a4, v14);
    goto LABEL_5;
  }
  result = (*(__int64 (__fastcall **)(__int64, const struct InputInfo *))(*(_QWORD *)v9 + 24LL))(v9, a2);
  if ( (_DWORD)result != -2147417853 && (int)result < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6DD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)result,
      (int)v17);
LABEL_5:
  v12 = *(_QWORD *)(a3 + 56);
  if ( v12 )
  {
    LOBYTE(v11) = v12 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  v13 = *(_QWORD *)(a4 + 56);
  if ( v13 )
  {
    LOBYTE(v11) = v13 != a4;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v11);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return result;
}
