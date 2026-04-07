/*
 * XREFs of ??0CCaptureManager@@QEAA@XZ @ 0x1800B815C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@2@@Z @ 0x18004CD94 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
CCaptureManager *__fastcall CCaptureManager::CCaptureManager(CCaptureManager *this, const struct std::nothrow_t *a2)
{
  char *v3; // rbx
  _QWORD *v4; // rax
  const struct std::nothrow_t *v5; // rdx
  _QWORD *v6; // rax
  const struct std::nothrow_t *v7; // rdx
  _QWORD *v8; // rax

  *(_QWORD *)this = &CCaptureManager::`vftable';
  v3 = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v4 = operator new[](0x40uLL, a2);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)v3 + 1) = v4;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 7LL;
  *((_QWORD *)v3 + 7) = 8LL;
  *(_DWORD *)v3 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>>>>>::_Assign_grow(
    (_QWORD *)v3 + 3,
    0x10uLL,
    *((_QWORD *)v3 + 1));
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v6 = operator new[](0x50uLL, v5);
  *v6 = v6;
  v6[1] = v6;
  *((_QWORD *)this + 10) = v6;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 7LL;
  *((_QWORD *)this + 16) = 8LL;
  *((_DWORD *)this + 18) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>>>>>::_Assign_grow(
    (_QWORD *)this + 12,
    0x10uLL,
    *((_QWORD *)this + 10));
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  v8 = operator new[](0x88uLL, v7);
  *v8 = v8;
  v8[1] = v8;
  *((_QWORD *)this + 18) = v8;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 7LL;
  *((_QWORD *)this + 24) = 8LL;
  *((_DWORD *)this + 34) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>>>>>::_Assign_grow(
    (_QWORD *)this + 20,
    0x10uLL,
    *((_QWORD *)this + 18));
  *((_BYTE *)this + 200) = 0;
  return this;
}
