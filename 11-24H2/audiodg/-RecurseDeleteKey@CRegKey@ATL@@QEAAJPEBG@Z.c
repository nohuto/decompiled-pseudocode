/*
 * XREFs of ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x14008B138
 * Callers:
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x14008B138 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008B5A0 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ?Close@CRegKey@ATL@@QEAAJXZ @ 0x14008A250 (-Close@CRegKey@ATL@@QEAAJXZ.c)
 *     ?DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x14008A66C (-DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x14008AA94 (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x14008B138 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall ATL::CRegKey::RecurseDeleteKey(HKEY *this, const unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  DWORD cchName; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hKey[3]; // [rsp+48h] [rbp-B8h] BYREF
  struct _FILETIME ftLastWriteTime; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Name[256]; // [rsp+70h] [rbp-90h] BYREF

  memset(hKey, 0, sizeof(hKey));
  v4 = ATL::CRegKey::Open(hKey, *this, a2, 0x2001Fu);
  if ( !v4 )
  {
    ftLastWriteTime = 0LL;
    while ( 1 )
    {
      cchName = 256;
      if ( RegEnumKeyExW(hKey[0], 0, Name, &cchName, 0LL, 0LL, 0LL, &ftLastWriteTime) )
        break;
      v4 = ATL::CRegKey::RecurseDeleteKey((ATL::CRegKey *)hKey, Name);
      if ( v4 )
        goto LABEL_7;
    }
    ATL::CRegKey::Close(hKey);
    v4 = ATL::CRegKey::DeleteSubKey((ATL::CRegKey *)this, a2);
  }
LABEL_7:
  ATL::CRegKey::Close(hKey);
  return v4;
}
