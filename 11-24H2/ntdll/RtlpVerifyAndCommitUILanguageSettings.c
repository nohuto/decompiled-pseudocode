/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x180141330
 * Callers:
 *     <none>
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800EAE54 (RtlUpdateProcessRegistryInfo.c)
 *     RtlAdjustPrivilege @ 0x1800F1D00 (RtlAdjustPrivilege.c)
 *     RtlpGetInstalledLanguageType @ 0x18013FF38 (RtlpGetInstalledLanguageType.c)
 *     NtFlushInstallUILanguage @ 0x180163A80 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x180163C60 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x180164800 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x180165540 (ZwShutdownSystem.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  int v5; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 v6; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v7; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-C8h] BYREF
  const wchar_t *v10; // [rsp+48h] [rbp-C0h]
  _BYTE v11[688]; // [rsp+58h] [rbp-B0h] BYREF

  v8 = 0LL;
  LODWORD(v7) = 0;
  v6 = 0;
  v9[1] = 0;
  memset_thunk_772440563353939046(v11, 0, 0x2B0uLL);
  v2 = NtQueryInstallUILanguage(&v6);
  if ( v2 >= 0 )
  {
    v10 = (const wchar_t *)v11;
    v9[0] = 11141120;
    if ( (unsigned __int8)RtlLCIDToCultureName(v6, (__int64)v9)
      && (int)RtlpCreateProcessRegistryInfo(&v8, v3) >= 0
      && v8
      && (int)RtlpGetInstalledLanguageType(v8, v10, (int *)&v7, 0LL) >= 0
      && (_DWORD)v7 != 4 )
    {
      v2 = NtFlushInstallUILanguage(v6, 1LL);
      if ( v2 >= 0 )
      {
        ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  if ( a1 && v2 )
  {
    LOBYTE(v5) = 0;
    if ( (unsigned int)RtlAdjustPrivilege(0x13u, 1, 1, (bool *)&v5) == -1073741700 )
      RtlAdjustPrivilege(0x13u, 1, 0, (bool *)&v5);
    v2 = ZwShutdownSystem(2LL);
    if ( v2 < 0 )
      return (unsigned int)-1073741616;
  }
  return (unsigned int)v2;
}
