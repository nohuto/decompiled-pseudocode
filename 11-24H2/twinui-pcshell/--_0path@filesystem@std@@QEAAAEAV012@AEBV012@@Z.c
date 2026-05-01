/*
 * XREFs of ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180056F50
 * Callers:
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180056870 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x180056F08 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1800BE900 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x1802A30C4 (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180585C48 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?is_absolute@path@filesystem@std@@QEBA_NXZ @ 0x1800570A4 (-is_absolute@path@filesystem@std@@QEBA_NXZ.c)
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180057110 (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180057200 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x180057330 (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180057764 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

std::filesystem *__fastcall std::filesystem::path::operator/=(std::filesystem *Src, std::filesystem::path *this)
{
  const unsigned __int16 *v4; // r8
  std::filesystem *v5; // r14
  std::filesystem *v6; // r12
  const unsigned __int16 *v7; // rbp
  const unsigned __int16 *v8; // rsi
  const unsigned __int16 *v9; // r8
  const unsigned __int16 *root_name_end; // rax
  const unsigned __int16 *v11; // r11
  unsigned __int16 *v12; // r15

  if ( std::filesystem::path::is_absolute(this) )
    goto LABEL_17;
  v5 = Src;
  if ( *((_QWORD *)Src + 3) > 7uLL )
    v5 = *(std::filesystem **)Src;
  v6 = this;
  v7 = (const unsigned __int16 *)((char *)v5 + 2 * *((_QWORD *)Src + 2));
  if ( *((_QWORD *)this + 3) > 7uLL )
    v6 = *(std::filesystem **)this;
  v8 = (const unsigned __int16 *)((char *)v6 + 2 * *((_QWORD *)this + 2));
  std::filesystem::_Find_root_name_end(v5, v7, v4);
  root_name_end = std::filesystem::_Find_root_name_end(v6, v8, v9);
  v12 = (unsigned __int16 *)root_name_end;
  if ( v6 != (std::filesystem *)root_name_end )
  {
    if ( (unsigned int)std::_Traits_compare<std::char_traits<unsigned short>>(
                         v5,
                         ((char *)v11 - (char *)v5) >> 1,
                         v6,
                         ((char *)root_name_end - (char *)v6) >> 1) )
    {
LABEL_17:
      std::wstring::operator=(Src);
      return Src;
    }
  }
  if ( v12 != v8 && (*v12 == 92 || *v12 == 47) )
  {
    std::wstring::erase(Src, ((char *)v11 - (char *)v5) >> 1);
  }
  else
  {
    if ( v11 == v7 )
    {
      if ( (__int64)(((char *)v11 - (char *)v5) & 0xFFFFFFFFFFFFFFFEuLL) < 6 )
        goto LABEL_14;
    }
    else if ( *(v7 - 1) == 92 || *(v7 - 1) == 47 )
    {
      goto LABEL_14;
    }
    std::wstring::push_back(Src);
  }
LABEL_14:
  std::wstring::append(Src, v12, v8 - v12);
  return Src;
}
