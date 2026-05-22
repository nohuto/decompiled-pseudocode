/*
 * XREFs of ??0PenHapticInterface@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x18018A1CC
 * Callers:
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801885DC (-Initialize@PenInterface@@QEAAJXZ.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000CC20 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180067C94 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$list@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@1@@Z @ 0x18009A49C (--0-$list@U-$pair@$$CBKPEAVInputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKPEAVInputInfoVali.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C39B8 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@PenHapticInterface@@QEAAJXZ @ 0x18018A8D8 (-Initialize@PenHapticInterface@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=9
PenHapticInterface *__fastcall PenHapticInterface::PenHapticInterface(PenHapticInterface *this, _QWORD *a2, __int64 a3)
{
  char *v6; // rdi
  _QWORD *v7; // rax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &PenHapticInterface::`vftable';
  *((_WORD *)this + 8) = 0;
  v6 = (char *)this + 24;
  *((_DWORD *)this + 6) = 0;
  std::list<std::pair<unsigned long const,InputInfoValidator *>>::list<std::pair<unsigned long const,InputInfoValidator *>>((_QWORD *)this + 4);
  *((_QWORD *)v6 + 3) = 0LL;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)v6 + 6) = 7LL;
  *((_QWORD *)v6 + 7) = 8LL;
  *(_DWORD *)v6 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)(v6 + 24),
    0x10uLL,
    *((_QWORD *)v6 + 1));
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v7 = v7;
  v7[1] = v7;
  *((_QWORD *)this + 12) = v7;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 18) = 8LL;
  *((_DWORD *)this + 22) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)this + 112,
    0x10uLL,
    *((_QWORD *)this + 12));
  *((_QWORD *)this + 19) = 0LL;
  std::wstring::wstring((__int64)this + 224, a2);
  *((_QWORD *)this + 32) = a3;
  *((_BYTE *)this + 264) = 0;
  v8 = PenHapticInterface::Initialize(this);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      22LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
      (const char *)(unsigned int)v8,
      v10);
  return this;
}
