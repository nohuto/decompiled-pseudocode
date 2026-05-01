/*
 * XREFs of ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x180314210
 * Callers:
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180319BB8 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     __std_fs_convert_wide_to_narrow_replace_chars @ 0x1802D4080 (__std_fs_convert_wide_to_narrow_replace_chars.c)
 *     ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1803149E0 (--$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@-$basic_string@DU-$char_t.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x180315264 (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     ?_Check_convert_result@std@@YAHU__std_fs_convert_result@@@Z @ 0x180319A48 (-_Check_convert_result@std@@YAHU__std_fs_convert_result@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
        _QWORD *Src,
        UINT CodePage,
        __int64 a3)
{
  int v5; // r14d
  const WCHAR *v6; // r15
  __int64 v7; // rax
  int v8; // eax
  int v9; // r12d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  char *v15; // rbx
  CHAR *v16; // r9
  __int64 v17; // rax
  int v19; // [rsp+40h] [rbp-68h] BYREF
  void ***v20; // [rsp+48h] [rbp-60h]
  _BYTE pExceptionObject[48]; // [rsp+50h] [rbp-58h] BYREF

  *(_OWORD *)Src = 0LL;
  Src[2] = 0LL;
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  if ( *(_QWORD *)(a3 + 8) )
  {
    if ( *(_QWORD *)(a3 + 8) > 0x7FFFFFFFuLL )
    {
      v19 = 22;
      v20 = &`std::_Immortalize_memcpy_image<std::_Generic_error_category>'::`2'::_Static;
      std::system_error::system_error(pExceptionObject, &v19);
      throw (std::system_error *)pExceptionObject;
    }
    v5 = *(_DWORD *)(a3 + 8);
    v6 = *(const WCHAR **)a3;
    v7 = _std_fs_convert_wide_to_narrow_replace_chars(CodePage, *(LPCWCH *)a3, v5, 0LL, 0);
    v8 = std::_Check_convert_result(v7);
    v9 = v8;
    v10 = v8;
    v11 = Src[2];
    if ( v8 > v11 )
    {
      v13 = v8 - v11;
      if ( v13 > Src[3] - v11 )
      {
        std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(Src);
      }
      else
      {
        Src[2] = v8;
        v14 = Src;
        if ( Src[3] > 0xFuLL )
          v14 = (_QWORD *)*Src;
        v15 = (char *)v14 + v11;
        memset_0((char *)v14 + v11, 0, v10 - v11);
        v15[v13] = 0;
      }
    }
    else
    {
      v12 = Src;
      if ( Src[3] > 0xFuLL )
        v12 = (_QWORD *)*Src;
      Src[2] = v8;
      *((_BYTE *)v12 + v8) = 0;
    }
    v16 = (CHAR *)Src;
    if ( Src[3] > 0xFuLL )
      v16 = (CHAR *)*Src;
    v17 = _std_fs_convert_wide_to_narrow_replace_chars(CodePage, v6, v5, v16, v9);
    std::_Check_convert_result(v17);
  }
  return Src;
}
