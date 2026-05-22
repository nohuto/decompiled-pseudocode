/*
 * XREFs of ?OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9904
 * Callers:
 *     ?Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x180197D68 (-Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007F9D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800C7EFC (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-_ea_1800C7EFC.c)
 *     ?GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z @ 0x1800C94C0 (-GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z.c)
 *     ?TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800CA3A8 (-TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticProcessor::OnMouseArrival(HapticProcessor *this, const struct DeviceInfo *a2)
{
  _WORD *v3; // r14
  int DeviceNodeParent; // ebx
  __int64 v5; // rdx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // r10d
  __int64 *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16[2]; // [rsp+28h] [rbp-38h] BYREF
  char v17[32]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v15 = 0;
  v3 = (_WORD *)((char *)a2 + 76);
  DeviceNodeParent = HapticProcessor::GetDeviceNodeParent(this, (unsigned __int16 *)a2 + 38, &v15);
  if ( DeviceNodeParent >= 0 )
  {
    v7 = v15;
    std::wstring::wstring((__int64)v17, v3);
    *(_DWORD *)(*(_QWORD *)std::map<std::wstring,unsigned long>::_Try_emplace<std::wstring,>(
                             (__int64 *)this + 2,
                             (__int64)v16,
                             v17,
                             v8)
              + 64LL) = v7;
    std::wstring::_Tidy_deallocate((__int64)v17);
    v11 = v15;
    if ( v15 )
    {
      v12 = (__int64 *)*((_QWORD *)this + 4);
      v13 = *v12;
      v16[0] = *v12;
      while ( (__int64 *)v13 != v12 )
      {
        if ( v11 == *(_DWORD *)(v13 + 72) )
        {
          std::wstring::wstring((__int64)v17, v3);
          DeviceNodeParent = HapticProcessor::TryAttachHapticMouse(v14, *(unsigned int *)(v13 + 32), v17, v13 + 40);
          std::wstring::_Tidy_deallocate((__int64)v17);
          if ( DeviceNodeParent >= 0 )
            return 0LL;
          v5 = 74LL;
          goto LABEL_3;
        }
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
          v16,
          v9,
          v10,
          (__int64)v12);
        v13 = v16[0];
      }
    }
    return 0LL;
  }
  else
  {
    v5 = 59LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
      (const char *)(unsigned int)DeviceNodeParent);
    return (unsigned int)DeviceNodeParent;
  }
}
