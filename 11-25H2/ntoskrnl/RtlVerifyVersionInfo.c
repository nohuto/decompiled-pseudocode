/*
 * XREFs of RtlVerifyVersionInfo @ 0x140466150
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140792730 (WdipSemLoadScenarioTable.c)
 *     AslpFileGetVersionBlock @ 0x1407FEA10 (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlpVerCompare @ 0x14046646C (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x140466544 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlGetVersion @ 0x140A0B990 (RtlGetVersion.c)
 */

NTSTATUS __stdcall RtlVerifyVersionInfo(PRTL_OSVERSIONINFOEXW VersionInfo, ULONG TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  char v8; // al
  int v9; // edi
  bool v10; // zf
  unsigned int v11; // eax
  char v12; // cl
  ULONGLONG v13; // r10
  int v14; // eax
  int wSuiteMask; // r11d
  unsigned int i; // r10d
  int v17; // eax
  unsigned __int16 v18; // r9
  int v19; // eax
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v22; // [rsp+154h] [rbp+54h]
  unsigned __int16 v23; // [rsp+156h] [rbp+56h]
  unsigned __int16 v24; // [rsp+158h] [rbp+58h]
  unsigned __int8 v25; // [rsp+15Ah] [rbp+5Ah]

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  result = RtlGetVersion(&VersionInformation);
  if ( result )
    return result;
  if ( (v4 & 0x40) != 0 )
  {
    wSuiteMask = VersionInfo->wSuiteMask;
    if ( (_WORD)wSuiteMask )
    {
      for ( i = 0; i < 0x10; ++i )
      {
        if ( (wSuiteMask & (1 << i)) != 0 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            return -1073741811;
          v17 = RtlpVerGetConditionMask(ConditionMask, 64LL) - 6;
          if ( v17 )
          {
            if ( v17 != 1 )
              return -1073741811;
            if ( (v24 & v18) != 0 )
              v6 = 1;
          }
          else if ( (v24 & v18) == 0 )
          {
            return -1073741735;
          }
        }
      }
      if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
        return -1073741735;
    }
  }
  v8 = 1;
  v20[0] = 1;
  v9 = 1;
  if ( (v4 & 2) != 0 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
      v9 = (unsigned __int8)(ConditionMask >> 4);
    else
      v9 = RtlpVerGetConditionMask(ConditionMask, 2LL);
    v10 = (unsigned __int8)RtlpVerCompare(
                             v9,
                             VersionInfo->dwMajorVersion,
                             VersionInformation.dwMajorVersion,
                             (unsigned int)v20,
                             0) == 0;
    v8 = v20[0];
    if ( v10 )
    {
      if ( !v20[0] )
        return -1073741735;
    }
    else if ( !v20[0] )
    {
      goto LABEL_14;
    }
  }
  if ( (v4 & 1) == 0 )
    goto LABEL_10;
  if ( v9 == 1 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
      v9 = RtlpVerGetConditionMask(ConditionMask, 1LL);
    else
      v9 = (unsigned __int8)(ConditionMask >> 2);
  }
  v10 = (unsigned __int8)RtlpVerCompare(
                           v9,
                           VersionInfo->dwMinorVersion,
                           VersionInformation.dwMinorVersion,
                           (unsigned int)v20,
                           1) == 0;
  v8 = v20[0];
  if ( v10 )
  {
    if ( !v20[0] )
      return -1073741735;
  }
  else
  {
LABEL_10:
    if ( !v8 )
      goto LABEL_14;
  }
  if ( (v4 & 0x20) == 0 )
    goto LABEL_12;
  if ( v9 == 1 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
      v9 = RtlpVerGetConditionMask(ConditionMask, 32LL);
    else
      v9 = 0;
  }
  if ( !(unsigned __int8)RtlpVerCompare(v9, VersionInfo->wServicePackMajor, v22, (unsigned int)v20, 0) )
  {
    if ( v20[0] )
      goto LABEL_13;
    return -1073741735;
  }
  v8 = v20[0];
LABEL_12:
  if ( v8 )
  {
LABEL_13:
    if ( (v4 & 0x10) != 0 )
    {
      if ( v9 == 1 )
      {
        if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
          v9 = RtlpVerGetConditionMask(ConditionMask, 16LL);
        else
          v9 = 0;
      }
      if ( !(unsigned __int8)RtlpVerCompare(v9, VersionInfo->wServicePackMinor, v23, (unsigned int)v20, 1) )
        return -1073741735;
    }
  }
LABEL_14:
  v11 = 4;
  if ( (v4 & 4) != 0 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
    {
      LODWORD(v13) = BYTE2(ConditionMask);
    }
    else
    {
      v12 = 0;
      do
      {
        ++v12;
        v11 >>= 1;
      }
      while ( v11 );
      v13 = (ConditionMask >> (3 * v12 - 3)) & 7;
    }
    if ( !(unsigned __int8)RtlpVerCompare(
                             v13,
                             VersionInfo->dwBuildNumber,
                             VersionInformation.dwBuildNumber,
                             (unsigned int)v20,
                             0) )
      return -1073741735;
  }
  if ( (v4 & 8) != 0 )
  {
    v19 = (ConditionMask & 0x8000000000000000uLL) != 0LL ? RtlpVerGetConditionMask(ConditionMask, 8LL) : 0;
    if ( !(unsigned __int8)RtlpVerCompare(
                             v19,
                             VersionInfo->dwPlatformId,
                             VersionInformation.dwPlatformId,
                             (unsigned int)v20,
                             0) )
      return -1073741735;
  }
  if ( v4 >= 0 )
    return 0;
  if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
    v14 = RtlpVerGetConditionMask(ConditionMask, 128LL);
  else
    v14 = 0;
  return (unsigned __int8)RtlpVerCompare(v14, VersionInfo->wProductType, v25, (unsigned int)v20, 0) == 0
       ? 0xC0000059
       : 0;
}
