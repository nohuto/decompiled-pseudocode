/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x18013A1F8
 * Callers:
 *     AslRegistryGetStringExpand @ 0x180138500 (AslRegistryGetStringExpand.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1802CE2E0 (AslLogCallPrintf.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  NTSTATUS NativeSystemInformation; // ebx
  const char *v5; // r9
  int v6; // r8d
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  __int64 SystemInformation; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]

  v8 = 0LL;
  SystemInformation = 0LL;
  v9 = 0;
  v11 = 0;
  if ( !a1 )
  {
LABEL_6:
    if ( a2 )
    {
      NativeSystemInformation = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
      if ( NativeSystemInformation < 0 )
      {
        v5 = "ZwQuerySystemInformation failed [%x]";
        v6 = 1876;
        goto LABEL_4;
      }
      *a2 = SystemInformation;
    }
    return 0;
  }
  NativeSystemInformation = RtlGetNativeSystemInformation(1LL, &v8, 12LL, 0LL);
  if ( NativeSystemInformation >= 0 )
  {
    *a1 = v8;
    goto LABEL_6;
  }
  v5 = "RtlGetNativeSystemInformation failed [%x]";
  v6 = 1842;
LABEL_4:
  AslLogCallPrintf(1, (unsigned int)"AslEnvGetProcessWowInfo", v6, (_DWORD)v5);
  return (unsigned int)NativeSystemInformation;
}
