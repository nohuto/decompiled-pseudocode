/*
 * XREFs of ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x180315264
 * Callers:
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x180314210 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 *     ?_Check_convert_result@std@@YAHU__std_fs_convert_result@@@Z @ 0x180319A48 (-_Check_convert_result@std@@YAHU__std_fs_convert_result@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0runtime_error@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803151E8 (--0runtime_error@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180319E14 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?message@error_code@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18031A160 (-message@error_code@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 */

__int64 __fastcall std::system_error::system_error(__int64 a1, __int128 *a2)
{
  const char *v4; // rax
  __int128 v5; // xmm0
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[32]; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&v7 = a1;
  v7 = *a2;
  v4 = (const char *)std::error_code::message(&v7, v8);
  std::runtime_error::runtime_error((std::exception *)a1, v4);
  std::string::_Tidy_deallocate(v8);
  v5 = *a2;
  *(_QWORD *)a1 = &std::_System_error::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 24) = v5;
  return result;
}
