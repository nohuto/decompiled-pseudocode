/*
 * XREFs of __std_fs_get_stats @ 0x180193700
 * Callers:
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x18019366C (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?status@directory_entry@filesystem@std@@QEBA?AVfile_status@23@XZ @ 0x180645868 (-status@directory_entry@filesystem@std@@QEBA-AVfile_status@23@XZ.c)
 *     ?last_write_time@filesystem@std@@YA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@2@AEBVpath@12@@Z @ 0x1806F7044 (-last_write_time@filesystem@std@@YA-AV-$time_point@U_File_time_clock@filesystem@std@@V-$duration.c)
 *     __std_fs_create_directory @ 0x1807375B0 (__std_fs_create_directory.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

DWORD __fastcall _std_fs_get_stats(LPCWSTR lpFileName, __int64 a2, int a3, int a4)
{
  unsigned int LastError; // ebx
  unsigned __int8 v7; // di
  __int64 v8; // rcx
  __int64 v9; // rcx
  DWORD result; // eax
  HANDLE FileW; // rdi
  _DWORD v12[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v13[4]; // [rsp+48h] [rbp-38h] BYREF
  int FileInformation; // [rsp+4Ch] [rbp-34h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  unsigned int v18; // [rsp+68h] [rbp-18h]
  unsigned int v19; // [rsp+6Ch] [rbp-14h]

  LastError = a3 & 0xFFFFFFFE;
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 4) != 0 )
      return 87;
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  if ( (a3 & 2) != 0 && a4 != -1 && ((a4 & 0x400) == 0 || !v7) )
  {
    LastError = a3 & 0xFFFFFFFC;
    *(_DWORD *)(a2 + 16) = a4;
  }
  if ( !LastError )
    return 0;
  if ( (LastError & 0x2A) != 0 && (a4 == -1 || (a4 & 0x400) == 0 || !v7) )
  {
    if ( !GetFileAttributesExW(lpFileName, GetFileExInfoStandard, &FileInformation) )
      return GetLastError();
    if ( !v7 || (FileInformation & 0x400) == 0 )
    {
      v8 = v18;
      *(_DWORD *)(a2 + 16) = FileInformation;
      v9 = v19 + (v8 << 32);
      *(_QWORD *)a2 = v17;
      *(_QWORD *)(a2 + 8) = v9;
      LastError &= 0xFFFFFFD5;
      if ( !LastError )
        return 0;
    }
  }
  FileW = CreateFileW(lpFileName, 0x80u, 7u, 0LL, 3u, ((v7 ^ 1u) + 16) << 21, 0LL);
  if ( FileW != (HANDLE)-1LL || (result = GetLastError()) == 0 )
  {
    if ( LastError != 6 && (LastError & 0x22) != 0 )
    {
      if ( !GetFileInformationByHandleEx(FileW, FileBasicInfo, v13, 0x28u) )
      {
        LastError = GetLastError();
        if ( FileW != (HANDLE)-1LL && !CloseHandle(FileW) )
        {
          _o_terminate();
          __debugbreak();
          return GetLastError();
        }
        return LastError;
      }
      LastError &= 0xFFFFFFDD;
      *(_DWORD *)(a2 + 16) = v18;
      *(_QWORD *)a2 = v16;
    }
    if ( (LastError & 6) != 0 )
    {
      if ( !GetFileInformationByHandleEx(FileW, FileAttributeTagInfo, v12, 8u) )
      {
        LastError = GetLastError();
        if ( FileW == (HANDLE)-1LL || CloseHandle(FileW) )
          return LastError;
        _o_terminate();
        __debugbreak();
      }
      LastError &= 0xFFFFFFF9;
      *(_DWORD *)(a2 + 16) = v12[0];
      *(_DWORD *)(a2 + 20) = v12[1];
    }
    if ( (LastError & 0x18) == 0 )
      goto LABEL_45;
    if ( GetFileInformationByHandleEx(FileW, FileStandardInfo, v13, 0x18u) )
    {
LABEL_44:
      LastError &= 0xFFFFFFE7;
      *(_QWORD *)(a2 + 8) = v15;
      *(_DWORD *)(a2 + 24) = v16;
LABEL_45:
      if ( LastError )
      {
        if ( FileW == (HANDLE)-1LL || CloseHandle(FileW) )
          return 50;
      }
      else if ( FileW == (HANDLE)-1LL || CloseHandle(FileW) )
      {
        return 0;
      }
      _o_terminate();
      __debugbreak();
      return 50;
    }
    LastError = GetLastError();
    if ( FileW != (HANDLE)-1LL && !CloseHandle(FileW) )
    {
      _o_terminate();
      __debugbreak();
      goto LABEL_44;
    }
    return LastError;
  }
  return result;
}
