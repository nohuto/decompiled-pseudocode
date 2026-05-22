/*
 * XREFs of ?Create@InputServiceProcessor@@SAJPEAPEAV1@@Z @ 0x18008E7A8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsPreloadKeyboardLayoutsPresent @ 0x18009ECAC (IsPreloadKeyboardLayoutsPresent.c)
 */

__int64 __fastcall InputServiceProcessor::Create(struct InputServiceProcessor **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  struct InputServiceProcessor *v4; // rax
  struct InputServiceProcessor *v5; // rbx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
  {
    v2 = -2147024809;
    v3 = 46LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\li"
                    "b\\inputserviceprocessor.cpp",
      (const char *)v2,
      v7);
    return v2;
  }
  v4 = (struct InputServiceProcessor *)RefCountedObject::operator new(0x18uLL);
  v5 = v4;
  if ( !v4 )
  {
    v2 = -2147024882;
    v3 = 49LL;
    goto LABEL_8;
  }
  *(_QWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)v4 + 4) = 1;
  *(_QWORD *)v4 = &InputServiceProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)v4 + 1) = &InputServiceProcessor::`vftable'{for `RefCountedObject'};
  if ( (unsigned __int8)IsPreloadKeyboardLayoutsPresent() )
    PreloadKeyboardLayouts();
  *a1 = v5;
  return 0LL;
}
