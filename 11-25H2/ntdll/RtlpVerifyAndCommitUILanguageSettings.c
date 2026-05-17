/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x180142A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180086FD0 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlAdjustPrivilege @ 0x1800F3870 (RtlAdjustPrivilege.c)
 *     RtlpGetInstalledLanguageType @ 0x180141628 (RtlpGetInstalledLanguageType.c)
 *     NtFlushInstallUILanguage @ 0x180165010 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x1801651F0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x180165D90 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x180166AD0 (ZwShutdownSystem.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  int v6; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 v7; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v8; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-C8h] BYREF
  const wchar_t *v11; // [rsp+48h] [rbp-C0h]
  _BYTE v12[688]; // [rsp+58h] [rbp-B0h] BYREF

  v9 = 0LL;
  LODWORD(v8) = 0;
  v7 = 0;
  v10[1] = 0;
  memset_thunk_772440563353939046(v12, 0, 0x2B0uLL);
  v4 = NtQueryInstallUILanguage(&v7, v2, v3);
  if ( v4 >= 0 )
  {
    v11 = (const wchar_t *)v12;
    v10[0] = 11141120;
    if ( (unsigned __int8)RtlLCIDToCultureName(v7, (__int64)v10)
      && (int)RtlpCreateProcessRegistryInfo(&v9) >= 0
      && v9
      && (int)RtlpGetInstalledLanguageType(v9, v11, (int *)&v8, 0LL) >= 0
      && (_DWORD)v8 != 4 )
    {
      v4 = NtFlushInstallUILanguage(v7, 1LL);
      if ( v4 >= 0 )
      {
        ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      v4 = -1073741811;
    }
  }
  if ( a1 && v4 )
  {
    LOBYTE(v6) = 0;
    if ( (unsigned int)RtlAdjustPrivilege(0x13u, 1, 1, (bool *)&v6) == -1073741700 )
      RtlAdjustPrivilege(0x13u, 1, 0, (bool *)&v6);
    v4 = ZwShutdownSystem(2LL);
    if ( v4 < 0 )
      return (unsigned int)-1073741616;
  }
  return (unsigned int)v4;
}
