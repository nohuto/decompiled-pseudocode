/*
 * XREFs of ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x18008EED4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18004F884 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x18008EF84 (--1-$unique_ptr@VComboButtonProcessor@@U-$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemButtonProcessor::Create(struct SystemButtonProcessor **a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v8 = 0LL;
  if ( !a1 )
  {
    v1 = -2147024809;
    v3 = 21LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\systembutton\\system\\li"
                    "b\\systembuttonprocessor.cpp",
      (const char *)v1,
      v6);
    goto LABEL_7;
  }
  v4 = RefCountedObject::operator new(0x20uLL);
  if ( !v4 )
  {
    v1 = -2147024882;
    v3 = 27LL;
    goto LABEL_6;
  }
  *v4 = 0LL;
  v4[2] = 0LL;
  v4[3] = 0LL;
  v4[1] = &RefCountedObject::`vftable';
  *((_DWORD *)v4 + 4) = 1;
  *v4 = &SystemButtonProcessor::`vftable'{for `IContextualProcessor'};
  v4[1] = &SystemButtonProcessor::`vftable'{for `RefCountedObject'};
  v4[3] = 0LL;
  *a1 = (struct SystemButtonProcessor *)v4;
  v8 = 0LL;
LABEL_7:
  std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(&v8);
  return v1;
}
