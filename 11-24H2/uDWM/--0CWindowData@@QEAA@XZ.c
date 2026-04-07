/*
 * XREFs of ??0CWindowData@@QEAA@XZ @ 0x1800077FC
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000728C (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D5B40 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EECB0 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@2@@Z @ 0x18004CD94 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     IsOpenThemeDataPresent @ 0x18009CA90 (IsOpenThemeDataPresent.c)
 */

// Hidden C++ exception states: #wind=6
CWindowData *__fastcall CWindowData::CWindowData(CWindowData *this)
{
  _QWORD *v2; // rax

  *((_QWORD *)this + 2) = (char *)this + 868;
  *((_OWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 40) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 82) = 96;
  *((_QWORD *)this + 57) = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CWindowData *)((char *)this + 496));
  CBitmapSourceArray::CBitmapSourceArray((CWindowData *)((char *)this + 536));
  CBitmapSourceArray::CBitmapSourceArray((CWindowData *)((char *)this + 568));
  CBitmapSourceArray::CBitmapSourceArray((CWindowData *)((char *)this + 608));
  *((_DWORD *)this + 168) = 0;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(32LL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 85) = v2;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 7LL;
  *((_QWORD *)this + 91) = 8LL;
  *((_DWORD *)this + 168) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>>>>>::_Assign_grow(
    (char *)this + 696,
    16LL,
    *((_QWORD *)this + 85));
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  *((_BYTE *)this + 736) = *((_BYTE *)this + 736) & 0xF7 | ((unsigned __int8)IsOpenThemeDataPresent() != 0 ? 8 : 0);
  *((_DWORD *)this + 83) = 1065353216;
  *((_DWORD *)this + 53) = 1065353216;
  *((_DWORD *)this + 54) = 1065353216;
  *((_BYTE *)this + 408) = -1;
  *((_BYTE *)this + 737) |= 0x40u;
  *((_DWORD *)this + 186) = 4095;
  *((_BYTE *)this + 740) |= 0x10u;
  *(_QWORD *)((char *)this + 196) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  return this;
}
