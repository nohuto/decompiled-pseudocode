/*
 * XREFs of BiGetFirmwareType @ 0x140A27F84
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x140804BAC (BiExportStoreAlterationsToFirmware.c)
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140A27ED0 (BiIsLinkedToFirmwareVariable.c)
 *     BcdGetSystemStorePath @ 0x140A28A88 (BcdGetSystemStorePath.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall BiGetFirmwareType(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  SystemInformation = 0LL;
  v5 = 0LL;
  if ( byte_140EEF808 )
  {
    v2 = dword_140E0EC08;
  }
  else
  {
    v2 = 1;
    if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL) >= 0 )
    {
      v2 = 0;
      qword_140E62038 = *((_QWORD *)&v5 + 1);
      if ( (int)v5 < 3 )
        v2 = v5;
    }
    dword_140E0EC08 = v2;
    byte_140EEF808 = 1;
  }
  if ( a1 )
    *a1 = qword_140E62038;
  return v2;
}
