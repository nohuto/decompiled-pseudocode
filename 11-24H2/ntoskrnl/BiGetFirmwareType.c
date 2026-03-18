/*
 * XREFs of BiGetFirmwareType @ 0x14085DE80
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x140814724 (BiExportStoreAlterationsToFirmware.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14085DDCC (BiIsLinkedToFirmwareVariable.c)
 *     BcdGetSystemStorePath @ 0x14085F5F8 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall BiGetFirmwareType(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  v4 = 0LL;
  v5 = 0LL;
  if ( byte_140EEFAA8 )
  {
    v2 = dword_140E0EE18;
  }
  else
  {
    v2 = 1;
    if ( (int)ZwQuerySystemInformation(90LL, (__int64)&v4) >= 0 )
    {
      v2 = 0;
      qword_140E62278 = *((_QWORD *)&v5 + 1);
      if ( (int)v5 < 3 )
        v2 = v5;
    }
    dword_140E0EE18 = v2;
    byte_140EEFAA8 = 1;
  }
  if ( a1 )
    *a1 = qword_140E62278;
  return v2;
}
