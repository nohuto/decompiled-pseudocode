/*
 * XREFs of ?KeyboardHidUsageToVKey@HidUsageConverter@@SAXGAEAULampAttributes@@AEAI@Z @ 0x1800EB144
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E8A00 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@AEBG@Z @ 0x180084A40 (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@.c)
 */

void __fastcall HidUsageConverter::KeyboardHidUsageToVKey(USHORT a1, struct LampAttributes *a2, unsigned int *a3)
{
  __int64 v5; // rcx
  UINT v6; // eax
  __int64 v7; // rcx
  unsigned __int16 v8; // r10
  __int64 v9; // rax
  HKL KeyboardLayout; // rax
  unsigned __int16 v11; // r10
  _QWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  USHORT ChangedUsageList; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int16 InsertCodesContext; // [rsp+78h] [rbp+28h] BYREF
  _HIDP_KEYBOARD_MODIFIER_STATE ModifierState; // [rsp+80h] [rbp+30h] BYREF

  ChangedUsageList = a1;
  *((_DWORD *)a2 + 8) = 0;
  InsertCodesContext = 0;
  ModifierState.0 = 0;
  HidP_TranslateUsagesToI8042ScanCodes(
    &ChangedUsageList,
    1u,
    HidP_Keyboard_Make,
    &ModifierState,
    (PHIDP_INSERT_SCANCODES)HidUsageConverter::HidUsageToScanCode,
    &InsertCodesContext);
  v5 = InsertCodesContext;
  *a3 = InsertCodesContext;
  if ( (unsigned __int16)(ChangedUsageList - 89) > 9u )
  {
    std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_lower_bound<unsigned short>(
      v5,
      v12,
      &ChangedUsageList);
    v9 = v13;
    if ( *(_BYTE *)(v13 + 25) || v8 < *(_WORD *)(v13 + 28) )
      v9 = qword_180246E08;
    if ( v9 == qword_180246E08 )
    {
      KeyboardLayout = GetKeyboardLayout(0);
      v6 = MapVirtualKeyExW(*a3, 1u, KeyboardLayout);
    }
    else
    {
      std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_lower_bound<unsigned short>(
        v7,
        v12,
        &ChangedUsageList);
      if ( *(_BYTE *)(v13 + 25) || v11 < *(_WORD *)(v13 + 28) )
      {
        std::_Xout_of_range("invalid map<K, T> key");
        __debugbreak();
        JUMPOUT(0x1800EB262LL);
      }
      v6 = *(_DWORD *)(v13 + 32);
    }
  }
  else
  {
    v6 = (unsigned __int8)aAbcdefghi[ChangedUsageList - 89];
  }
  *((_DWORD *)a2 + 8) = v6;
}
