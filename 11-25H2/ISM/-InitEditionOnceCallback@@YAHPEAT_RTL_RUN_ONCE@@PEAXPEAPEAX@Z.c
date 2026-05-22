/*
 * XREFs of ?InitEditionOnceCallback@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180077E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitEditionOnceCallback(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  char IsMultiSessionSku; // al
  DWORD Type; // [rsp+30h] [rbp-10h] BYREF
  BYTE Data[4]; // [rsp+34h] [rbp-Ch] BYREF
  HKEY hKey; // [rsp+38h] [rbp-8h] BYREF
  DWORD cbData; // [rsp+68h] [rbp+28h] BYREF

  RtlGetDeviceFamilyInfoEnum(0LL, &gdwDeviceFamily, 0LL);
  IsMultiSessionSku = RtlIsMultiSessionSku();
  if ( gdwDeviceFamily == 6 && !IsMultiSessionSku )
    gdwDeviceFamily = 16;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", 0, 1u, &hKey) )
  {
    if ( hKey )
    {
      *(_DWORD *)Data = 0;
      Type = 0;
      cbData = 4;
      RegQueryValueExW(hKey, L"OneCoreNoBootDWM", 0LL, &Type, Data, &cbData);
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"OneCoreNoDWMRawGameController", 0LL, &Type, Data, &cbData)
        && Type == 4
        && cbData == 4 )
      {
        gbIsDWMNoRawGameController = *(_DWORD *)Data == 1;
      }
    }
  }
  return 1LL;
}
