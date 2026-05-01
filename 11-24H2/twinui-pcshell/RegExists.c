/*
 * XREFs of RegExists @ 0x1801FE998
 * Callers:
 *     ?LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180289C94 (-LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Int.c)
 *     ?IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ @ 0x1802BCB80 (-IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegExists(HKEY a1, const WCHAR *a2, const WCHAR *a3)
{
  unsigned int v3; // ebx
  LSTATUS Value; // eax
  BOOL v8; // esi
  HKEY hKey; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  hKey = 0LL;
  if ( !a1 )
  {
    SetLastError(0x57u);
    return 0LL;
  }
  if ( !a2 )
  {
    hKey = a1;
    goto LABEL_8;
  }
  if ( !RegOpenKeyExW(a1, a2, 0, 0x20019u, &hKey) )
  {
    a1 = hKey;
    if ( hKey )
    {
LABEL_8:
      if ( a3 )
      {
        Value = RegQueryValueExW(a1, a3, 0LL, 0LL, 0LL, 0LL);
        a1 = hKey;
        v8 = Value == 0;
      }
      else
      {
        v8 = 1;
      }
      if ( a2 )
        RegCloseKey(a1);
      v3 = v8;
    }
  }
  SetLastError(0);
  return v3;
}
