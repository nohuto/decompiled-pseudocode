/*
 * XREFs of ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180319BB8
 * Callers:
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x1803150FC (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801BA298 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     __std_fs_code_page @ 0x1802D405C (__std_fs_code_page.c)
 *     ??$_Convert_wide_to_narrow_replace_chars@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x180314210 (--$_Convert_wide_to_narrow_replace_chars@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@.c)
 *     ??$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@@Z @ 0x18031492C (--$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@-$basic_string@DU-$char_t.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180319E14 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180319EE0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x18031A1B0 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::filesystem::filesystem_error::_Pretty_message(_QWORD *Src, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  UINT v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  void *v11; // rbx
  __int64 v12; // rdx
  __int128 v14; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-49h]
  __int64 v16; // [rsp+48h] [rbp-41h] BYREF
  __int64 v17; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v18[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v19; // [rsp+78h] [rbp-11h]
  _QWORD Srca[3]; // [rsp+88h] [rbp-1h] BYREF

  v15 = Src;
  *(_OWORD *)Src = 0LL;
  Src[2] = 0LL;
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  v8 = _std_fs_code_page();
  v14 = *(_OWORD *)std::wstring::operator std::basic_string_view<unsigned short>(a3, &v16);
  std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
    Srca,
    v8,
    (__int64)&v14);
  v14 = *(_OWORD *)std::wstring::operator std::basic_string_view<unsigned short>(a4, &v17);
  std::filesystem::_Convert_wide_to_narrow_replace_chars<std::char_traits<char>,std::allocator<char>>(
    v18,
    v8,
    (__int64)&v14);
  v9 = v19 + Srca[2] + *(_QWORD *)(a2 + 8) + (v19 != 0 ? 8LL : 4LL);
  v10 = Src[2];
  if ( v10 <= v9 && Src[3] != v9 )
  {
    if ( Src[3] >= v9 )
    {
      if ( v9 <= 0xF && Src[3] > 0xFuLL )
      {
        v11 = (void *)*Src;
        memcpy_0(Src, (const void *)*Src, v10 + 1);
        std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(Src[3] + 1LL));
        Src[3] = 15LL;
      }
    }
    else
    {
      std::string::_Reallocate_grow_by<_lambda_9013ee9e23efe4882b67eff5b0ecf103_,>((void **)Src, v9 - v10);
      Src[2] = v10;
    }
  }
  std::string::append(Src);
  std::string::append(Src);
  std::string::append(Src);
  if ( v19 )
  {
    std::string::append(Src);
    std::string::append(Src);
  }
  LOBYTE(v12) = 34;
  std::string::push_back(Src, v12);
  std::string::_Tidy_deallocate(v18);
  std::string::_Tidy_deallocate(Srca);
  return Src;
}
