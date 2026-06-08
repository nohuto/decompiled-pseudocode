/*
 * XREFs of PopulateEnergyEstimationModel @ 0x14004527C
 * Callers:
 *     ProcLibGlobalInit @ 0x140044504 (ProcLibGlobalInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14000CB7C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     memset @ 0x14000E780 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x140024384 (GetRegistryDwordValueNoDefault.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x14004303C (ProcLibTraceInvalidPowerCurve.c)
 *     ReadEnergyEquation @ 0x1400453DC (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1400455E8 (ReadPowerCurve.c)
 */

int __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, int *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // r11
  unsigned int v7; // edx
  unsigned int i; // r8d
  unsigned int v9; // r10d
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  int v12; // edx
  int result; // eax
  int v14; // ecx
  int v15; // [rsp+20h] [rbp-1B8h]
  int v16[4]; // [rsp+30h] [rbp-1A8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-198h] BYREF

  v16[0] = 0;
  v3 = a1;
  memset(a2, 0, 0x100uLL);
  LOBYTE(v4) = v3;
  ReadEnergyEquation(v4, a2);
  LOBYTE(v5) = v3;
  if ( (int)ReadPowerCurve(v5, a2) >= 0 )
  {
    v6 = 0;
    v7 = ((unsigned int)a2[1] >> 1) & 0x7F;
    if ( v7 >= 2 && (unsigned __int8)a2[v7 + 1] <= 0x64u && (a2[2] & 0xFFFFFF00) <= 0x3E8000 )
    {
      for ( i = 1; i < v7; ++i )
      {
        v9 = a2[i + 1];
        v10 = a2[i + 2];
        if ( (unsigned __int8)v10 <= (unsigned __int8)v9 )
          goto LABEL_12;
        v11 = v10 >> 8;
        if ( v11 < v9 >> 8 || v11 > 0x3E80 )
          goto LABEL_12;
      }
      v6 = 1;
    }
LABEL_12:
    v12 = a2[1];
    if ( v6 )
      a2[1] = v12 | 1;
    else
      ProcLibTraceInvalidPowerCurve(v3, (unsigned __int8)v12 >> 1, a2 + 2);
  }
  v15 = v3;
  result = RtlStringCchPrintfW(
             pszDest,
             0xC0uLL,
             L"%s\\EfficiencyClass\\%d",
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
             v15);
  if ( result < 0
    || (result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)v16), result < 0)
    || (v14 = v16[0], result = v16[0] - 1, (unsigned int)(v16[0] - 1) > 0x3E7F) )
  {
    v14 = 750;
  }
  *a2 = v14;
  return result;
}
