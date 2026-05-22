/*
 * XREFs of ?OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z @ 0x1800C9700
 * Callers:
 *     ?OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DFAF0 (-OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007F9D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B3454 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B586C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800C7DFC (--$_Try_emplace@AEBK$$V@-$map@KUHapticInterfaceInfo@HapticProcessor@@U-$less@K@std@@V-$allocator.c)
 *     ?GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z @ 0x1800C94C0 (-GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z.c)
 *     ?TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800CA3A8 (-TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HapticProcessor::OnHapticInterfaceArrival(
        HapticProcessor *this,
        unsigned int a2,
        unsigned __int16 *a3)
{
  int DeviceNodeParent; // eax
  int v6; // ebx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 *v12; // r9
  __int64 v13; // rax
  unsigned int v14; // r10d
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v20[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int64 v22[4]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v19 = a2;
  v18 = 0;
  DeviceNodeParent = HapticProcessor::GetDeviceNodeParent(this, a3, &v18);
  v6 = DeviceNodeParent;
  if ( DeviceNodeParent >= 0 )
  {
    v20[0] = 0LL;
    v20[1] = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v20[0]) = 0;
    v21 = 0LL;
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    std::wstring::assign((char *)v20, a3, v7);
    LODWORD(v21) = v18;
    v9 = *(_QWORD *)std::map<unsigned long,HapticProcessor::HapticInterfaceInfo>::_Try_emplace<unsigned long const &,>(
                      (__int64 *)this + 4,
                      (__int64)v22,
                      &v19,
                      v8);
    std::wstring::operator=((void *)(v9 + 40), v20);
    *(_DWORD *)(v9 + 72) = v21;
    v12 = (__int64 *)*((_QWORD *)this + 2);
    v13 = *v12;
    v22[0] = *v12;
    v14 = v18;
    while ( (__int64 *)v13 != v12 )
    {
      v15 = v13 + 32;
      if ( v14 == *(_DWORD *)(v13 + 64) )
      {
        std::wstring::wstring((__int64)v22, a3);
        v6 = HapticProcessor::TryAttachHapticMouse(v16, v19, v15, v22);
        std::wstring::_Tidy_deallocate((__int64)v22);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8E,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
            (const char *)(unsigned int)v6);
          goto LABEL_12;
        }
        break;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
        v22,
        v10,
        v11,
        (__int64)v12);
      v13 = v22[0];
    }
    v6 = 0;
LABEL_12:
    std::wstring::_Tidy_deallocate((__int64)v20);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
      (const char *)(unsigned int)DeviceNodeParent);
  }
  return (unsigned int)v6;
}
