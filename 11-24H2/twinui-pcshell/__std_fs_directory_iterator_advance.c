/*
 * XREFs of __std_fs_directory_iterator_advance @ 0x1802D41F4
 * Callers:
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x1802A30C4 (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 *     ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x1802B8584 (-_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAV-.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall _std_fs_directory_iterator_advance(void *a1, struct _WIN32_FIND_DATAW *a2)
{
  if ( FindNextFileW(a1, a2) )
    return 0;
  else
    return GetLastError();
}
