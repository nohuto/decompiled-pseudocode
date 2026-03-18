/*
 * XREFs of PiDevCfgResetDeviceKeyCallback @ 0x14071F600
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     PiDevCfgCopyDeviceProperties @ 0x1406EF120 (PiDevCfgCopyDeviceProperties.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14094C678 (PiDevCfgCopyDeviceKeys.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeyCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, __int64 a6)
{
  int v8; // [rsp+20h] [rbp-18h]

  if ( *(_DWORD *)(a3 + 16) != 16 || wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceKeys(a5, a6, a3, 0LL);
  else
    return PiDevCfgCopyDeviceProperties(a5, a6, *(_QWORD *)(a2 + 8), 1LL, v8, 0LL);
}
