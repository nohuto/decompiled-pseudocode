/*
 * XREFs of ?_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z @ 0x180063198
 * Callers:
 *     ?_Get_any_status@filesystem@std@@YA?AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_flags@@@Z @ 0x180063114 (-_Get_any_status@filesystem@std@@YA-AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_fla.c)
 *     ?_Get_any_status@directory_entry@filesystem@std@@AEBA?AU_File_status_and_error@23@W4__std_fs_stats_flags@@@Z @ 0x18029CBDC (-_Get_any_status@directory_entry@filesystem@std@@AEBA-AU_File_status_and_error@23@W4__std_fs_sta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::filesystem::file_status::_Refresh(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d
  int v4; // r9d
  __int64 result; // rax
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v3 = 0;
  if ( !a2 )
  {
    v4 = *(_DWORD *)(a3 + 16);
    result = (v4 & 1) != 0 ? 365 : 511;
    a1[1] = result;
    if ( (v4 & 0x400) != 0 )
    {
      if ( *(_DWORD *)(a3 + 20) == -1610612724 )
      {
        v3 = 4;
        goto LABEL_13;
      }
      if ( *(_DWORD *)(a3 + 20) == -1610612733 )
      {
        v3 = 10;
        goto LABEL_13;
      }
    }
    v3 = (v4 & 0x10 | 0x20u) >> 4;
    goto LABEL_13;
  }
  a1[1] = 0xFFFF;
  v6 = a2 - 2;
  if ( !v6 || (v7 = v6 - 1) == 0 || (v8 = v7 - 50) == 0 || v8 == 70 )
    v3 = 1;
LABEL_13:
  *a1 = v3;
  return result;
}
