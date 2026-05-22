/*
 * XREFs of ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180016410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180017140 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMInputRouter::GetTargetWithFocus(
        DWMInputRouter *this,
        struct DeviceInfo *a2,
        struct IInputTarget **a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget **v9; // rsi
  struct IInputTarget **v10; // rbx
  struct IInputTarget **v11; // rdi
  struct IInputTarget *v12; // rbx
  struct IInputTarget *v13; // rcx
  ContextualProcessorManager *v14; // rbx
  struct IInputTarget **v15; // rcx
  int v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = a5;
  if ( a5 )
  {
    v10 = (struct IInputTarget **)((char *)this + 272);
    if ( a2 )
    {
      a5 = 0LL;
      v11 = a3 + 2;
      v12 = *v10;
      if ( a3[2] != v12 )
      {
        if ( v12 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v12 + 8LL))(v12);
        v13 = *v11;
        *v11 = v12;
        if ( v13 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = (ContextualProcessorManager *)*((_QWORD *)this + 32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
      if ( (int)ContextualProcessorManager::OnFocusRequest(
                  v14,
                  a2,
                  (struct InputContext *)a3,
                  a4,
                  (struct IInputTarget **)&a5) < 0 )
      {
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v11);
        *v9 = *v11;
        v15 = a5;
      }
      else
      {
        v15 = a5;
        if ( a5 )
        {
          (*((void (__fastcall **)(struct IInputTarget **))*a5 + 1))(a5);
          v15 = a5;
        }
        *v9 = (struct IInputTarget *)v15;
      }
      if ( v15 )
      {
        a5 = 0LL;
        (*((void (__fastcall **)(struct IInputTarget **))*v15 + 2))(v15);
      }
    }
    else
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((char *)this + 272);
      *v9 = *v10;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6EF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004003LL,
      v17);
    return 2147500035LL;
  }
}
