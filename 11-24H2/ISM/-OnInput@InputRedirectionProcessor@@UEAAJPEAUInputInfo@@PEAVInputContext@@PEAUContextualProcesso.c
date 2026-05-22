/*
 * XREFs of ?OnInput@InputRedirectionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AFB80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputRedirectionProcessor::OnInput(
        InputRedirectionProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4;
  v7 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  v8 = v7(v6, &GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13, &v13);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1CB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib\\in"
           "putredirectionprocessor.cpp",
      (const char *)(unsigned int)v8,
      v11[0]);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) )
  {
    (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v13 + 24LL))(v13, a2);
    *((_DWORD *)a4 + 2) = 4;
  }
  else
  {
    *((_DWORD *)a4 + 2) = 2;
    v9 = v13;
    v11[0] = v13;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v11);
    v11[0] = *((_QWORD *)a4 + 10);
    *((_QWORD *)a4 + 10) = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return 0LL;
}
