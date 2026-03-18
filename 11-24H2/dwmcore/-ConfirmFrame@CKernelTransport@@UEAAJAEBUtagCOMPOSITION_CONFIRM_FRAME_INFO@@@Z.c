/*
 * XREFs of ?ConfirmFrame@CKernelTransport@@UEAAJAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1800F3AF0
 * Callers:
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x1800F36C0 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKernelTransport::ConfirmFrame(
        CKernelTransport *this,
        const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // r8
  int v6; // eax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *))(*(_QWORD *)v5 + 32LL))(
           *((_QWORD *)this + 3),
           a2);
    v9 = v8;
    if ( v8 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  else
  {
    v6 = NtDCompositionConfirmFrame(*((_QWORD *)this + 1), a2);
    if ( v6 >= 0 )
      return 0LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xCD,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
             (const char *)(unsigned int)v6,
             a5);
  }
}
