/*
 * XREFs of ?Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x180024534
 * Callers:
 *     ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180024070 (-UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x180024438 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0DWMLegacyInputTarget@@IEAA@KKK_K@Z @ 0x180024EC4 (--0DWMLegacyInputTarget@@IEAA@KKK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DWMLegacyInputTarget::Create(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        struct IInputTarget **a5)
{
  DWMLegacyInputTarget *v9; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a5 )
  {
    *a5 = 0LL;
    v9 = (DWMLegacyInputTarget *)RefCountedObject::operator new(0x50uLL);
    if ( v9 )
      v9 = DWMLegacyInputTarget::DWMLegacyInputTarget(v9, a1, a2, a3, a4);
    if ( v9 )
    {
      *a5 = v9;
      return 0LL;
    }
    v11 = -2147024882;
    v12 = 63LL;
  }
  else
  {
    v11 = -2147467261;
    v12 = 50LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
    (const char *)v11,
    v13);
  return v11;
}
