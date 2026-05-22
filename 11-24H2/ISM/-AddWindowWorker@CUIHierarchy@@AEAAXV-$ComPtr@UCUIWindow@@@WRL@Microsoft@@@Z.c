/*
 * XREFs of ?AddWindowWorker@CUIHierarchy@@AEAAXV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z @ 0x1800A8E64
 * Callers:
 *     ?AddWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0_N@Z @ 0x1800A8DCC (-AddWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0_N@Z.c)
 *     ?ReparentWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z @ 0x1800A9FB0 (-ReparentWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180064A80 (--4-$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800A86E4 (--$_Emplace_reallocate@AEBV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UCUIWindow@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CUIHierarchy::AddWindowWorker(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 *v4; // r14
  __int64 *v5; // r15
  _QWORD *v6; // rbx
  __int64 *v7; // rdx
  __int64 v8; // rbp
  __int64 *v9; // rdx
  __int64 *v10; // rdx
  _QWORD *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+10h]

  v13 = a2;
  v3 = a1 + 16;
  v4 = *(__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 24);
  while ( v4 != v5 )
  {
    v12 = (_QWORD *)*v4;
    v6 = v12;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v12);
    if ( v6[2] == *(_QWORD *)(*a2 + 24) )
    {
      Microsoft::WRL::ComPtr<CUIWindow>::operator=((__int64 *)(*a2 + 56), &v12);
      v7 = (__int64 *)v6[9];
      if ( v7 == (__int64 *)v6[10] )
      {
        std::vector<Microsoft::WRL::ComPtr<CUIWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CUIWindow> const &>(
          (__int64)(v6 + 8),
          v7,
          a2);
      }
      else
      {
        *v7 = *a2;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v7);
        v6[9] += 8LL;
      }
    }
    if ( v6[3] == *(_QWORD *)(*a2 + 16) )
    {
      Microsoft::WRL::ComPtr<CUIWindow>::operator=(v6 + 7, a2);
      v8 = *a2;
      v9 = *(__int64 **)(*a2 + 72);
      if ( v9 == *(__int64 **)(*a2 + 80) )
      {
        std::vector<Microsoft::WRL::ComPtr<CUIWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CUIWindow> const &>(
          v8 + 64,
          v9,
          (__int64 *)&v12);
      }
      else
      {
        *v9 = (__int64)v6;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v9);
        *(_QWORD *)(v8 + 72) += 8LL;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
    ++v4;
  }
  v10 = *(__int64 **)(v3 + 8);
  if ( v10 == *(__int64 **)(v3 + 16) )
  {
    std::vector<Microsoft::WRL::ComPtr<CUIWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CUIWindow> const &>(
      v3,
      v10,
      a2);
  }
  else
  {
    *v10 = *a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v10);
    *(_QWORD *)(v3 + 8) += 8LL;
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
}
