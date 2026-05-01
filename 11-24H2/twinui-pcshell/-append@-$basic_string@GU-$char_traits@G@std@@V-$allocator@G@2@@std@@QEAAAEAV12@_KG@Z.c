/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800BBE6C
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1800BAF60 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x1800BCF10 (-CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1800BE900 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1801837A0 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1801BF8D0 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801EEFA0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x1800491A8 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x1800BC454 (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z.c)
 *     wmemset @ 0x1801C9614 (wmemset.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 */

wchar_t *__fastcall std::wstring::append(wchar_t *a1, size_t a2, wchar_t a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // r14
  size_t v8; // rdi
  unsigned __int64 v9; // rbx
  size_t size_of; // rax
  __int64 v11; // rcx
  void *v12; // r15
  wchar_t *v13; // rbx
  wchar_t *v15; // r10
  __int64 v16; // r10
  __int64 v17; // r11

  v3 = *((_QWORD *)a1 + 3);
  v5 = *((_QWORD *)a1 + 2);
  if ( a2 <= v3 - v5 )
  {
    v15 = a1;
    *((_QWORD *)a1 + 2) = v5 + a2;
    if ( v3 > 7 )
      v15 = *(wchar_t **)a1;
    wmemset(&v15[v5], a3, a2);
    *(_WORD *)(v16 + 2 * v17) = 0;
  }
  else
  {
    if ( 0x7FFFFFFFFFFFFFFELL - v5 < a2 )
      std::_Xlen_string();
    v8 = v5 + a2;
    v9 = std::wstring::_Calculate_growth(v5 + a2, *((_QWORD *)a1 + 3), 0x7FFFFFFFFFFFFFFEuLL);
    size_of = std::_Get_size_of_n<2>(v9 + 1);
    v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *((_QWORD *)a1 + 2) = v8;
    *((_QWORD *)a1 + 3) = v9;
    if ( v3 <= 7 )
    {
      _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v11, v12, a1, v5, a2, a3);
    }
    else
    {
      v13 = *(wchar_t **)a1;
      _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v11, v12, *(_QWORD *)a1, v5, a2, a3);
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(2 * v3 + 2));
    }
    *(_QWORD *)a1 = v12;
  }
  return a1;
}
