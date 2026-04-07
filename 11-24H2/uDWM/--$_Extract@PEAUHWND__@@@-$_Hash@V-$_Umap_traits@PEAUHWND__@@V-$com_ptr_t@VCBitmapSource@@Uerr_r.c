/*
 * XREFs of ??$_Extract@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBQEAUHWND__@@@Z @ 0x1800E4458
 * Callers:
 *     ?PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800E53C8 (-PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW.c)
 * Callees:
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x180080EEC (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 *     ??$_Find_last@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@_K@Z @ 0x1800873FC (--$_Find_last@PEAUHWND__@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Extract<HWND__ *>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // r10
  _QWORD *result; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::_Hash_representation<HWND__ *>(a2);
  result = (_QWORD *)std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Find_last<HWND__ *>(
                       a1,
                       v9,
                       v4,
                       v3)[1];
  if ( result )
  {
    v6 = a1[3];
    v7 = 2 * (v3 & a1[6]);
    if ( *(_QWORD **)(v6 + 16 * (v3 & a1[6]) + 8) == result )
    {
      if ( *(_QWORD **)(v6 + 16 * (v3 & a1[6])) == result )
      {
        v8 = a1[1];
        *(_QWORD *)(v6 + 16 * (v3 & a1[6])) = v8;
      }
      else
      {
        v8 = result[1];
      }
      *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
    }
    else if ( *(_QWORD **)(v6 + 16 * (v3 & a1[6])) == result )
    {
      *(_QWORD *)(v6 + 16 * (v3 & a1[6])) = *result;
    }
    *(_QWORD *)result[1] = *result;
    *(_QWORD *)(*result + 8LL) = result[1];
    --a1[2];
  }
  return result;
}
