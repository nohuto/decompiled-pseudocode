/*
 * XREFs of ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x18004E3A4
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004CDA8 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RIMRawInputProvider::RegisterWaitHandler(
        RIMRawInputProvider *this,
        void *a2,
        int (*a3)(void *, unsigned int, void *),
        void *a4)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 4);
  if ( !v4 )
  {
    v5 = -2147418113;
    v6 = 271LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v5,
      v8);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64 (__fastcall *)(RIMDeviceCollection *, int, void *), void *))(*(_QWORD *)v4 + 272LL))(
         v4,
         a2,
         RIMDeviceCollection::OnReadCallbackStatic,
         a4);
  if ( v5 < 0 )
  {
    v6 = 274LL;
    goto LABEL_3;
  }
  return 0LL;
}
