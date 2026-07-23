/*
 * XREFs of BiGetFirmwareType @ 0x140859BF0
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x140814E64 (BiExportStoreAlterationsToFirmware.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140859B3C (BiIsLinkedToFirmwareVariable.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     BcdGetSystemStorePath @ 0x140A57798 (BcdGetSystemStorePath.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall BiGetFirmwareType(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  SystemInformation = 0LL;
  v5 = 0LL;
  if ( byte_140EEFCF8 )
  {
    v2 = dword_140E0EEE8;
  }
  else
  {
    v2 = 1;
    if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL) >= 0 )
    {
      v2 = 0;
      qword_140E620F8 = *((_QWORD *)&v5 + 1);
      if ( (int)v5 < 3 )
        v2 = v5;
    }
    dword_140E0EEE8 = v2;
    byte_140EEFCF8 = 1;
  }
  if ( a1 )
    *a1 = qword_140E620F8;
  return v2;
}
