/*
 * XREFs of ?GetInputSiteForContainer@@YA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18005501C
 * Callers:
 *     ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180145260 (-OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualPro.c)
 *     ?OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180145E60 (-OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall GetInputSiteForContainer(__int64 *a1, __int64 **a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbp
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // r15
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // r12
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = a2[1];
  while ( 1 )
  {
    if ( v3 == v4 )
    {
      *a1 = 0LL;
      return a1;
    }
    v5 = *v3;
    v6 = 0LL;
    v12 = 0LL;
    v7 = *(_QWORD *)(v5 + 488);
    v8 = *(_QWORD *)(v5 + 496);
    if ( v7 != v8 )
    {
      while ( 1 )
      {
        v9 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v7 + 8);
        v10 = **v9;
        if ( v6 )
        {
          v12 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        if ( v10(v9, &GUID_8ddffe9c_458e_6d51_c227_1374408f672c, &v12) >= 0 )
          break;
        v7 += 16LL;
        if ( v7 == v8 )
          break;
        v6 = v12;
      }
      if ( v12 )
        break;
    }
    ++v3;
  }
  *a1 = *v3;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  return a1;
}
