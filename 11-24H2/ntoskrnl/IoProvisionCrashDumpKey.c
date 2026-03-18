/*
 * XREFs of IoProvisionCrashDumpKey @ 0x140591CF0
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     SecureDump_GetSecureDumpSettings @ 0x1404F70B8 (SecureDump_GetSecureDumpSettings.c)
 *     SecureDump_ReInitialize @ 0x1405A248C (SecureDump_ReInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoProvisionCrashDumpKey()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+28h] [rbp-38h]
  _QWORD v6[3]; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+48h] [rbp-18h]
  int v8; // [rsp+4Ch] [rbp-14h]
  char v9; // [rsp+50h] [rbp-10h]
  __int16 v10; // [rsp+51h] [rbp-Fh]
  char v11; // [rsp+53h] [rbp-Dh]

  v4 = 0LL;
  v5 = 0;
  if ( ForceDumpDisabled || !AllowCrashDump )
    return 3221225659LL;
  result = SecureDump_ReInitialize();
  if ( (int)result >= 0 )
  {
    result = SecureDump_GetSecureDumpSettings((__int64)&v4);
    if ( (int)result >= 0 )
    {
      if ( (_BYTE)v4 )
      {
        if ( qword_140E65F38 )
        {
          v7 = HIDWORD(v4);
          v8 = v5;
          v9 = BYTE1(v4);
          v6[1] = SecureDump_Get_SecureDumpHeader;
          v6[2] = SecureDump_Encrypt_DmpData;
          v6[0] = 40LL;
          v10 = 0;
          v11 = 0;
          return guard_dispatch_icall_no_overrides(v6, v1, v2, v3);
        }
        else
        {
          return 3221225473LL;
        }
      }
    }
  }
  return result;
}
