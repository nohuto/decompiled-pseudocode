/*
 * XREFs of ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18004CCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004CDA8 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x1800900D0 (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall RIMRawInputProvider::Create(
        struct IRawInputClient *a1,
        unsigned int a2,
        struct IRawInputProvider **a3)
{
  RIMRawInputProvider *v6; // rax
  RIMRawInputProvider *v7; // rbx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // esi
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 || !a3 )
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)0x80070057LL,
      v12);
    return v8;
  }
  v6 = (RIMRawInputProvider *)RefCountedObject::operator new(0x110uLL);
  if ( v6 )
    v7 = RIMRawInputProvider::RIMRawInputProvider(v6, a1);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)0x8007000ELL,
      v12);
    return v8;
  }
  v9 = RIMRawInputProvider::Initialize(v7, a2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *a3 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v9,
      v12);
    (*(void (__fastcall **)(RIMRawInputProvider *))(*(_QWORD *)v7 + 16LL))(v7);
    return v10;
  }
}
