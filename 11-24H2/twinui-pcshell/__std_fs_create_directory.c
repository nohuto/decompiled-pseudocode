/*
 * XREFs of __std_fs_create_directory @ 0x1802D4158
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x180061E24 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     __std_fs_get_stats @ 0x1802D42C0 (__std_fs_get_stats.c)
 */

__int64 __fastcall _std_fs_create_directory(LPCWSTR lpFileName)
{
  DWORD LastError; // ecx
  __int64 v4; // [rsp+58h] [rbp+18h]

  if ( CreateDirectoryW(lpFileName, 0LL) )
  {
    LOBYTE(v4) = 1;
    HIDWORD(v4) = 0;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError == 183 )
    {
      LastError = _std_fs_get_stats(lpFileName);
      if ( !LastError )
        LastError = 183;
    }
    LOBYTE(v4) = 0;
    HIDWORD(v4) = LastError;
  }
  *(_WORD *)((char *)&v4 + 1) = 0;
  BYTE3(v4) = 0;
  return v4;
}
