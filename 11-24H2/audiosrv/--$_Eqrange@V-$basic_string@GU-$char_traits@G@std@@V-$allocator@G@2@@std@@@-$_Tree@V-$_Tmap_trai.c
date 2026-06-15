/*
 * XREFs of ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800D1CAC
 * Callers:
 *     ?ProviderFinalRelease@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ @ 0x1800D5E38 (-ProviderFinalRelease@BluetoothVolumeAndMute@BluetoothControls@@QEAAXXZ.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180042DA0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>>>,0>>::_Eqrange<std::wstring>(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 *v4; // rsi
  __int64 v7; // rbx
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned __int16 *v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // eax
  unsigned __int16 *v15; // rcx
  __int64 *v16; // r11
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // r10
  unsigned __int64 v22; // rsi
  unsigned __int16 *v23; // rax
  unsigned __int64 v24; // r11
  __int64 v25; // r8
  int v26; // eax
  __int64 *v27; // r10
  unsigned __int64 v28; // r11
  __int64 *result; // rax

  v3 = qword_1801DB6A0;
  v4 = (__int64 *)(a3 + 16);
  v7 = qword_1801DB6A0;
  v8 = *(_QWORD *)(qword_1801DB6A0 + 8);
  if ( !*(_BYTE *)(v8 + 25) )
  {
    v10 = (unsigned __int16 *)std::wstring::c_str(a3, (__int64)a2);
    do
    {
      v11 = *(_QWORD *)(v9 + 48);
      v12 = std::wstring::c_str(v9 + 32, (__int64)a2);
      v13 = *v4;
      if ( *v4 >= v11 )
        v13 = v11;
      v14 = std::_WChar_traits<unsigned short>::compare(v12, v10, v13);
      if ( v14 )
      {
        if ( v14 >= 0 )
          goto LABEL_7;
      }
      else if ( v11 >= *v4 )
      {
LABEL_7:
        if ( *(_BYTE *)(v7 + 25) )
        {
          v17 = *v4;
          if ( v11 < *v4 )
            v17 = v11;
          v18 = std::_WChar_traits<unsigned short>::compare((__int64)v10, v15, v17);
          if ( v18 )
          {
            if ( v18 < 0 )
LABEL_16:
              v7 = (__int64)v16;
          }
          else if ( *v4 < v11 )
          {
            goto LABEL_16;
          }
        }
        v3 = (__int64)v16;
        v9 = *v16;
        continue;
      }
      v9 = v16[2];
    }
    while ( !*(_BYTE *)(v9 + 25) );
  }
  if ( !*(_BYTE *)(v7 + 25) )
    v8 = *(_QWORD *)v7;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    v20 = std::wstring::c_str(a3, (__int64)a2);
    do
    {
      v22 = *(_QWORD *)(v21 + 48);
      v23 = (unsigned __int16 *)std::wstring::c_str(v21 + 32, v19);
      v25 = v24;
      if ( v22 < v24 )
        v25 = v22;
      v26 = std::_WChar_traits<unsigned short>::compare(v20, v23, v25);
      if ( v26 )
      {
        if ( v26 < 0 )
          goto LABEL_31;
      }
      else if ( v28 < v22 )
      {
LABEL_31:
        v7 = (__int64)v27;
        v21 = *v27;
        continue;
      }
      v21 = v27[2];
    }
    while ( !*(_BYTE *)(v21 + 25) );
  }
  result = a2;
  *a2 = v3;
  a2[1] = v7;
  return result;
}
