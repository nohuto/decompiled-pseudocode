/*
 * XREFs of ?RmpGetIoPoolSize@@YAKPEA_K@Z @ 0x1800860A0
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180086D24 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGetIoPoolSize(unsigned __int64 *a1)
{
  unsigned int v2; // ebx
  HKEY hKey; // [rsp+30h] [rbp-10h] BYREF
  DWORD cbData; // [rsp+58h] [rbp+18h] BYREF
  DWORD Type; // [rsp+60h] [rbp+20h] BYREF
  unsigned int Data; // [rsp+68h] [rbp+28h] BYREF

  Data = 0;
  Type = 0;
  cbData = 0;
  hKey = 0LL;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SYSTEM\\ResourceManager\\Pools", 0, 0x20019u, &hKey)
    || (cbData = 4, RegQueryValueExW(hKey, L"IoCounters", 0LL, &Type, (LPBYTE)&Data, &cbData)) )
  {
    *a1 = -1LL;
LABEL_7:
    v2 = 0;
    goto LABEL_9;
  }
  if ( Type == 4 && cbData == 4 )
  {
    *a1 = Data;
    goto LABEL_7;
  }
  v2 = 1009;
LABEL_9:
  if ( hKey )
    RegCloseKey(hKey);
  return v2;
}
