/*
 * XREFs of ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x18019D5A0
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x18008E904 (--1-$unique_ptr@VComboButtonProcessor@@U-$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x18019D6C0 (-Initialize@ComboButtonProcessor@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ComboButtonProcessor::Create(struct ComboButtonProcessor **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  int v6; // eax
  unsigned __int64 v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+38h] [rbp+10h]

  v10 = 0LL;
  if ( !a1 )
  {
    v2 = -2147024809;
    v3 = 28LL;
LABEL_8:
    v7 = v2;
    goto LABEL_9;
  }
  v4 = RefCountedObject::operator new(0x170uLL);
  v5 = v4;
  v11 = v4;
  if ( !v4 )
  {
    v10 = 0LL;
    v2 = -2147024882;
    v3 = 35LL;
    goto LABEL_8;
  }
  memset_0(v4, 0, 0x170uLL);
  v5[1] = &RefCountedObject::`vftable';
  *((_DWORD *)v5 + 4) = 1;
  *v5 = &ComboButtonProcessor::`vftable'{for `IContextualProcessor'};
  v5[1] = &ComboButtonProcessor::`vftable'{for `RefCountedObject'};
  v5[3] = 0LL;
  v5[4] = 0LL;
  v5[5] = 0LL;
  v5[6] = 0LL;
  v10 = v5;
  v6 = ComboButtonProcessor::Initialize((ComboButtonProcessor *)v5);
  v2 = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v3 = 38LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\com"
               "bobuttonprocessor.cpp",
      (const char *)v7);
    goto LABEL_10;
  }
  v10 = 0LL;
  *a1 = (struct ComboButtonProcessor *)v5;
  v2 = 0;
LABEL_10:
  std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(&v10);
  return v2;
}
