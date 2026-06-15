/*
 * XREFs of ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800D1E48
 * Callers:
 *     ??$_Emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D1BC4 (--$_Emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_ptr_t@VBluetoot.c)
 *     BluetoothControls::GetOrCreateBluetoothVolumeAndMute @ 0x1800D466C (BluetoothControls--GetOrCreateBluetoothVolumeAndMute.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180042DA0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>>>,0>>::_Find_lower_bound<std::wstring>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int16 *v11; // rdx
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 *v14; // r11

  v4 = a2;
  v5 = *(_QWORD *)(qword_1801DB6A0 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)a2 = v5;
  *(_DWORD *)(a2 + 12) = 0;
  v6 = *(_QWORD *)a2;
  *(_QWORD *)(a2 + 16) = qword_1801DB6A0;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    *(_QWORD *)v4 = v6;
    v7 = std::wstring::c_str(a3, a2);
    v9 = *(_QWORD *)(v8 + 48);
    v10 = std::wstring::c_str(v8 + 32, v7);
    v12 = *(_QWORD *)(a3 + 16);
    if ( v12 >= v9 )
      v12 = v9;
    v13 = std::_WChar_traits<unsigned short>::compare(v10, v11, v12);
    if ( v13 )
    {
      if ( v13 >= 0 )
        goto LABEL_6;
LABEL_10:
      *(_DWORD *)(v4 + 8) = 0;
      v6 = v14[2];
    }
    else
    {
      if ( v9 < *(_QWORD *)(a3 + 16) )
        goto LABEL_10;
LABEL_6:
      *(_DWORD *)(v4 + 8) = 1;
      *(_QWORD *)(v4 + 16) = v14;
      v6 = *v14;
    }
  }
  return v4;
}
