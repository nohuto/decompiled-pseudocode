/*
 * XREFs of ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1800BC64C
 * Callers:
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180056870 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x1800BC5E8 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800BC950 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x1800BD1EC (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::filesystem::_Find_filename(std::filesystem *this, char *a2, const unsigned __int16 *a3)
{
  signed __int64 v3; // r8
  std::filesystem *v4; // rax

  v3 = (a2 - (char *)this) >> 1;
  if ( v3 >= 2 )
  {
    if ( (*(_DWORD *)this & 0xFFFFFFDF) - 3801153 >= 0x1A )
    {
      if ( *(_WORD *)this == 92 || *(_WORD *)this == 47 )
      {
        if ( v3 >= 4 )
        {
          if ( (*((_WORD *)this + 3) == 92 || *((_WORD *)this + 3) == 47)
            && (v3 == 4 || *((_WORD *)this + 4) != 92 && *((_WORD *)this + 4) != 47)
            && ((*((_WORD *)this + 1) == 92 || *((_WORD *)this + 1) == 47)
             && (*((_WORD *)this + 2) == 63 || *((_WORD *)this + 2) == 46)
             || *((_WORD *)this + 1) == 63 && *((_WORD *)this + 2) == 63) )
          {
            this = (std::filesystem *)((char *)this + 6);
            goto LABEL_4;
          }
        }
        else if ( (unsigned __int64)((a2 - (char *)this) >> 1) < 3 )
        {
          goto LABEL_4;
        }
        if ( (*((_WORD *)this + 1) == 92 || *((_WORD *)this + 1) == 47)
          && *((_WORD *)this + 2) != 92
          && *((_WORD *)this + 2) != 47 )
        {
          for ( this = (std::filesystem *)((char *)this + 6);
                this != (std::filesystem *)a2 && *(_WORD *)this != 92 && *(_WORD *)this != 47;
                this = (std::filesystem *)((char *)this + 2) )
          {
            ;
          }
        }
      }
    }
    else
    {
      this = (std::filesystem *)((char *)this + 4);
    }
  }
LABEL_4:
  while ( this != (std::filesystem *)a2 && (*(_WORD *)this == 92 || *(_WORD *)this == 47) )
    this = (std::filesystem *)((char *)this + 2);
  if ( this != (std::filesystem *)a2 )
  {
    do
    {
      v4 = (std::filesystem *)(a2 - 2);
      if ( *((_WORD *)a2 - 1) == 92 )
        break;
      if ( *(_WORD *)v4 == 47 )
        break;
      a2 -= 2;
    }
    while ( this != v4 );
  }
  return a2;
}
