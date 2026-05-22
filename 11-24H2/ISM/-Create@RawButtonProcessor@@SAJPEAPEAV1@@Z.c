/*
 * XREFs of ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801B24D4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18004F884 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x18008EF84 (--1-$unique_ptr@VComboButtonProcessor@@U-$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ?Initialize@RawButtonProcessor@@AEAAJXZ @ 0x1801B27E4 (-Initialize@RawButtonProcessor@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RawButtonProcessor::Create(struct RawButtonProcessor **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  char *v4; // rax
  char *v5; // rdi
  int v6; // eax
  unsigned __int64 v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v10; // [rsp+30h] [rbp+8h] BYREF
  char *v11; // [rsp+38h] [rbp+10h]

  v10 = 0LL;
  if ( !a1 )
  {
    v2 = -2147024809;
    v3 = 33LL;
LABEL_8:
    v7 = v2;
    goto LABEL_9;
  }
  v4 = (char *)RefCountedObject::operator new(0x1A0uLL);
  v5 = v4;
  v11 = v4;
  if ( !v4 )
  {
    v10 = 0LL;
    v2 = -2147024882;
    v3 = 40LL;
    goto LABEL_8;
  }
  memset_0(v4, 0, 0x1A0uLL);
  *((_QWORD *)v5 + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)v5 + 4) = 1;
  *(_QWORD *)v5 = &RawButtonProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)v5 + 1) = &RawButtonProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)v5 + 3) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = 0LL;
  *(_OWORD *)(v5 + 360) = 0LL;
  *(_OWORD *)(v5 + 376) = 0LL;
  *((_QWORD *)v5 + 49) = 0LL;
  *((_QWORD *)v5 + 50) = &RawButtonProcessor::PrivateMessageSession::`vftable';
  v10 = v5;
  v6 = RawButtonProcessor::Initialize((RawButtonProcessor *)v5);
  v2 = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v3 = 43LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)v7);
    goto LABEL_10;
  }
  v10 = 0LL;
  *a1 = (struct RawButtonProcessor *)v5;
  v2 = 0;
LABEL_10:
  std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(&v10);
  return v2;
}
