/*
 * XREFs of TelpReadOfflineSoftwareRegistryString @ 0x180004FF4
 * Callers:
 *     TelpReadOfflineOsPolicySetting @ 0x180004C98 (TelpReadOfflineOsPolicySetting.c)
 * Callees:
 *     __security_check_cookie @ 0x180001460 (__security_check_cookie.c)
 *     memset_0 @ 0x180001F2A (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180003290 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     TelpReadRegistryString @ 0x180003710 (TelpReadRegistryString.c)
 */

__int64 __fastcall TelpReadOfflineSoftwareRegistryString(__int64 a1, __int64 a2, void *a3, DWORD *a4)
{
  int ValueW; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  LSTATUS RegistryString; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  LSTATUS KeyW; // eax
  DWORD pcbData; // [rsp+40h] [rbp-248h] BYREF
  DWORD v15[3]; // [rsp+44h] [rbp-244h] BYREF
  WCHAR File[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  if ( !a3 )
  {
    ValueW = -2147024809;
    v7 = 2100LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v7, (__int64)a3, (const char *)(unsigned int)ValueW);
    return (unsigned int)ValueW;
  }
  if ( !a4 )
  {
    ValueW = -2147024809;
    v7 = 2101LL;
    goto LABEL_16;
  }
  memset_0(File, 0, 0x208uLL);
  v15[0] = 260;
  RegistryString = TelpReadRegistryString(v8, L"Software\\Microsoft\\RecoveryEnvironment", L"TargetOS", File, v15);
  ValueW = RegistryString;
  if ( RegistryString < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x7E2, v11, (const char *)(unsigned int)RegistryString);
    v7 = 2107LL;
    goto LABEL_16;
  }
  ValueW = StringCchCatW(File, v10, (char *)L"\\System32\\config\\SOFTWARE");
  if ( ValueW < 0 )
  {
    v7 = 2110LL;
    goto LABEL_16;
  }
  KeyW = RegLoadKeyW(HKEY_LOCAL_MACHINE, L"OFFLINE_AUTH", File);
  ValueW = KeyW;
  if ( KeyW > 0 )
    ValueW = (unsigned __int16)KeyW | 0x80070000;
  if ( ValueW >= 0 )
  {
    pcbData = 2 * *a4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"OFFLINE_AUTH\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess",
               L"ActivePolicyCode",
               0x10002u,
               0LL,
               a3,
               &pcbData);
    *a4 = pcbData >> 1;
    if ( ValueW > 0 )
      ValueW = (unsigned __int16)ValueW | 0x80070000;
  }
  RegUnLoadKeyW(HKEY_LOCAL_MACHINE, L"OFFLINE_AUTH");
  if ( ValueW < 0 )
  {
    v7 = 2140LL;
    goto LABEL_16;
  }
  return (unsigned int)ValueW;
}
