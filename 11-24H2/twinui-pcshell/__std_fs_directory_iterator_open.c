/*
 * XREFs of __std_fs_directory_iterator_open @ 0x1802D4244
 * Callers:
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x1802A30C4 (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall _std_fs_directory_iterator_open(LPCWSTR lpFileName, HANDLE *a2, void *a3)
{
  HANDLE FirstFile; // rax

  if ( *a2 != (HANDLE)-1LL && !FindClose(*a2) )
    abort();
  FirstFile = FindFirstFileExW(lpFileName, FindExInfoBasic, a3, FindExSearchNameMatch, 0LL, 0);
  *a2 = FirstFile;
  if ( FirstFile == (HANDLE)-1LL )
    return GetLastError();
  else
    return 0;
}
