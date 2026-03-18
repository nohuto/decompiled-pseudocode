/*
 * XREFs of ?BeginFrame@CKernelTransport@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1801EA840
 * Callers:
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x1800AE6D0 (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKernelTransport::BeginFrame(
        CKernelTransport *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // r9
  int v6; // eax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct COMPOSITION_FRAME_INFO *, unsigned __int64 *))(*(_QWORD *)v5 + 16LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
    v9 = v8;
    if ( v8 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  else
  {
    v6 = NtDCompositionBeginFrame(*((_QWORD *)this + 1), a2, a3);
    if ( v6 >= 0 )
      return 0LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xBE,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
             (const char *)(unsigned int)v6,
             a5);
  }
}
