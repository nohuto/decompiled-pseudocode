/*
 * XREFs of ??$_Construct_in_place@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@std@@YAXAEAU_Dir_enum_impl@filesystem@0@$$QEAU_Creator@120@AEBW4directory_options@20@@Z @ 0x1802B9350
 * Callers:
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x18021640C (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180056870 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Construct_in_place<std::filesystem::_Dir_enum_impl,std::filesystem::_Dir_enum_impl::_Creator,enum std::filesystem::directory_options const &>(
        std::filesystem::_Dir_enum_impl *this,
        __int64 a2)
{
  char *v4; // rcx
  __int64 v5; // rax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  v4 = (char *)this + 32;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *(_OWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_QWORD *)v4 + 3) = 7LL;
  *(_WORD *)v4 = 0;
  v5 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = -1LL;
  *((_QWORD *)this + 8) = v5;
  std::wstring::operator=((__int64)v4, a2);
  std::filesystem::_Dir_enum_impl::_Refresh(this, (const struct __std_fs_find_data *)(a2 + 40));
}
