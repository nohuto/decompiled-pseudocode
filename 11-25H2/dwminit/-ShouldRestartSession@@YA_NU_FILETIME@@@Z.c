/*
 * XREFs of ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000CA7C
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000AAF8 (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000B410 (-FallBackToBDD@@YA_NXZ.c)
 */

char __fastcall ShouldRestartSession(struct _FILETIME a1)
{
  char v2; // di
  char v3; // cl
  int v4; // eax
  bool v5; // zf
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  pcbData = 4;
  pvData = 0;
  v2 = 1;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\DWM",
    L"DisableSessionTermination",
    0x20000010u,
    0LL,
    &pvData,
    &pcbData);
  if ( pvData == 1 )
    return 0;
  pvData = 0;
  pcbData = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\DWM",
    L"ForceBasicDisplayAdapterOnDWMRestart",
    0x20000010u,
    0LL,
    &pvData,
    &pcbData);
  if ( pvData != 1 )
  {
    v3 = byte_180019D00;
    if ( !byte_180019D00 )
      goto LABEL_13;
    if ( (unsigned __int64)(*(_QWORD *)&a1 - qword_180019DF8) >= 0x23C34600 )
    {
      v3 = 0;
      byte_180019D00 = 0;
    }
    if ( v3 )
    {
      v4 = gDwmNumRetriesSoFar;
      if ( gDwmNumRetriesSoFar >= 7 )
      {
        v5 = !FallBackToBDD();
        v4 = gDwmNumRetriesSoFar;
        v2 = v5;
LABEL_15:
        gDwmNumRetriesSoFar = v4 + 1;
        return v2;
      }
    }
    else
    {
LABEL_13:
      byte_180019D00 = 1;
      v4 = 0;
      qword_180019DF8 = (__int64)a1;
    }
    v2 = 0;
    goto LABEL_15;
  }
  if ( FallBackToBDD() || byte_180019D30 )
  {
    v2 = 0;
    byte_180019D30 = 1;
  }
  return v2;
}
