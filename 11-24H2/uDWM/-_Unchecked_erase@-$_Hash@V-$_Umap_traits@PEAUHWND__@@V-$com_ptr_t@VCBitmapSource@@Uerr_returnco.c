/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800E5F5C
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800E612C (-clear@-$_Hash@V-$_Umap_traits@PEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@w.c)
 * Callees:
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x180080EEC (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800E5AF4 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@PEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uer.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  bool v14; // bl
  _QWORD *v15; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  bool v19; // bl
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v5 = a1[3];
    v6 = *(_QWORD **)(a2 + 8);
    v7 = (_QWORD *)a1[1];
    v20 = a1 + 1;
    v21 = v6;
    v22 = a2;
    v8 = std::_Hash_representation<HWND__ *>(a2 + 16);
    v11 = 2 * (*(_QWORD *)(v10 + 48) & v8);
    v12 = *(_QWORD *)(v5 + 16 * (*(_QWORD *)(v10 + 48) & v8) + 8);
    v13 = *(_QWORD *)(v5 + 8 * v11);
    v24 = *(_QWORD *)(v5 + 8 * v11 + 8);
    while ( 1 )
    {
      v14 = v9 == v12;
      std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(&v20);
      if ( v14 )
        break;
      v9 = v22;
      v12 = v24;
      if ( v22 == a3 )
      {
        if ( v13 == a2 )
LABEL_6:
          *(_QWORD *)(v5 + 8 * v11) = v9;
        goto LABEL_7;
      }
    }
    if ( v13 == a2 )
    {
      *(_QWORD *)(v5 + 8 * v11) = v7;
      v6 = v7;
    }
    for ( *(_QWORD *)(v5 + 8 * v11 + 8) = v6; ; *(_QWORD *)(v5 + 8 * v11 + 8) = v7 )
    {
      v9 = v22;
      if ( v22 == a3 )
        break;
      v17 = std::_Hash_representation<HWND__ *>(v22 + 16);
      v11 = 2 * (a1[6] & v17);
      v18 = *(_QWORD *)(v5 + 16 * (a1[6] & v17) + 8);
      while ( 1 )
      {
        v19 = v9 == v18;
        std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(&v20);
        if ( v19 )
          break;
        v9 = v22;
        if ( v22 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v5 + 8 * v11) = v7;
    }
LABEL_7:
    v15 = v21;
    *v21 = v9;
    *(_QWORD *)(v9 + 8) = v15;
  }
  return a3;
}
