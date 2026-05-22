/*
 * XREFs of ?Create@InjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800DEEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InjectionRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x1800DEB68 (--0InjectionRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@InjectionRawInputProvider@@AEAAJXZ @ 0x1800DF1F4 (-Initialize@InjectionRawInputProvider@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InjectionRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  unsigned int v5; // ebx
  InjectionRawInputProvider *v6; // rax
  InjectionRawInputProvider *v7; // rbx
  int v8; // eax
  unsigned int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( InjectionRawInputProvider::s_rawInputProvider )
  {
    v5 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x80004005LL);
    return v5;
  }
  if ( !a1 || !a3 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x80070057LL);
    return v5;
  }
  v6 = (InjectionRawInputProvider *)RefCountedObject::operator new(0xA8uLL);
  if ( v6 )
    v7 = InjectionRawInputProvider::InjectionRawInputProvider(v6, a1);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x8007000ELL);
    return v5;
  }
  v8 = InjectionRawInputProvider::Initialize(v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    InjectionRawInputProvider::s_rawInputProvider = v7;
    *a3 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)(unsigned int)v8);
    InputContext::Release((InjectionRawInputProvider *)((char *)v7 + 8));
    return v9;
  }
}
