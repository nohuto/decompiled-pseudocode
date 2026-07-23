/*
 * XREFs of RtlVerifyVersionInfo @ 0x140445A20
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1407A1C18 (WdipSemLoadScenarioTable.c)
 *     AslpFileGetVersionBlock @ 0x14080ECC0 (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlpVerCompare @ 0x140445E0C (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x140445EE8 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlGetVersion @ 0x140A04F30 (RtlGetVersion.c)
 */

NTSTATUS __stdcall RtlVerifyVersionInfo(PRTL_OSVERSIONINFOEXW VersionInfo, ULONG TypeMask, ULONGLONG ConditionMask)
{
  int v3; // ebx
  char v5; // r14
  char v7; // si
  NTSTATUS result; // eax
  unsigned int v9; // eax
  char v10; // cl
  ULONGLONG v11; // rsi
  char v12; // cl
  signed int dwMajorVersion; // r8d
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int wProductType; // edx
  int v17; // ebx
  bool v18; // al
  int v19; // eax
  char v20; // cl
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  bool v24; // al
  char v25; // cl
  ULONGLONG v26; // r10
  int wSuiteMask; // r11d
  unsigned int i; // r10d
  int v29; // eax
  unsigned __int16 v30; // r9
  char v31; // al
  int v32; // eax
  int v33; // eax
  int v34; // eax
  _BYTE v35[16]; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v37; // [rsp+154h] [rbp+54h]
  unsigned __int16 v38; // [rsp+156h] [rbp+56h]
  unsigned __int16 v39; // [rsp+158h] [rbp+58h]
  unsigned __int8 v40; // [rsp+15Ah] [rbp+5Ah]

  v3 = 0;
  v5 = TypeMask;
  v7 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  result = RtlGetVersion(&VersionInformation);
  if ( !result )
  {
    if ( (v5 & 0x40) != 0 )
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
            v29 = RtlpVerGetConditionMask(ConditionMask, 64LL) - 6;
            if ( v29 )
            {
              if ( v29 != 1 )
                return -1073741811;
              if ( (v39 & v30) != 0 )
                v7 = 1;
            }
            else if ( (v39 & v30) == 0 )
            {
              return -1073741735;
            }
          }
        }
        if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v7 )
          return -1073741735;
      }
    }
    v9 = 2;
    v10 = 1;
    v35[0] = 1;
    LODWORD(v11) = 1;
    if ( (v5 & 2) == 0 )
      goto LABEL_23;
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
    {
      LODWORD(v11) = (unsigned __int8)(ConditionMask >> 4);
    }
    else
    {
      v12 = 0;
      do
      {
        ++v12;
        v9 >>= 1;
      }
      while ( v9 );
      v11 = (ConditionMask >> (3 * v12 - 3)) & 7;
    }
    dwMajorVersion = VersionInfo->dwMajorVersion;
    v10 = dwMajorVersion == VersionInformation.dwMajorVersion;
    v35[0] = dwMajorVersion == VersionInformation.dwMajorVersion;
    if ( (_DWORD)v11 == 1 )
    {
      if ( VersionInformation.dwMajorVersion == dwMajorVersion )
        goto LABEL_11;
    }
    else
    {
      switch ( (_DWORD)v11 )
      {
        case 2:
          v18 = (signed int)VersionInformation.dwMajorVersion > dwMajorVersion;
          break;
        case 3:
          v18 = (signed int)VersionInformation.dwMajorVersion >= dwMajorVersion;
          break;
        case 4:
          v18 = (signed int)VersionInformation.dwMajorVersion < dwMajorVersion;
          break;
        case 5:
          v18 = (signed int)VersionInformation.dwMajorVersion <= dwMajorVersion;
          break;
        default:
          goto LABEL_22;
      }
      if ( v18 )
      {
LABEL_11:
        if ( dwMajorVersion != VersionInformation.dwMajorVersion )
        {
LABEL_12:
          v14 = 4;
          if ( (v5 & 4) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            {
              LODWORD(v26) = BYTE2(ConditionMask);
            }
            else
            {
              v25 = 0;
              do
              {
                ++v25;
                v14 >>= 1;
              }
              while ( v14 );
              v26 = (ConditionMask >> (3 * v25 - 3)) & 7;
            }
            if ( !(unsigned __int8)RtlpVerCompare(
                                     v26,
                                     VersionInfo->dwBuildNumber,
                                     VersionInformation.dwBuildNumber,
                                     (unsigned int)v35,
                                     0) )
              return -1073741735;
          }
          if ( (v5 & 8) != 0 )
          {
            v34 = (ConditionMask & 0x8000000000000000uLL) != 0LL ? RtlpVerGetConditionMask(ConditionMask, 8LL) : 0;
            if ( !(unsigned __int8)RtlpVerCompare(
                                     v34,
                                     VersionInfo->dwPlatformId,
                                     VersionInformation.dwPlatformId,
                                     (unsigned int)v35,
                                     0) )
              return -1073741735;
          }
          v15 = 128;
          if ( v5 >= 0 )
            return 0;
          if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
          {
            v20 = 0;
            do
            {
              ++v20;
              v15 >>= 1;
            }
            while ( v15 );
            v3 = (ConditionMask >> (3 * v20 - 3)) & 7;
          }
          wProductType = VersionInfo->wProductType;
          v17 = v3 - 1;
          if ( v17 )
          {
            v21 = v17 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  if ( v23 != 1 )
                    return -1073741735;
                  v24 = v40 <= wProductType;
                }
                else
                {
                  v24 = v40 < wProductType;
                }
              }
              else
              {
                v24 = v40 >= wProductType;
              }
            }
            else
            {
              v24 = v40 > wProductType;
            }
            return !v24 ? 0xC0000059 : 0;
          }
          if ( v40 == wProductType )
            return 0;
          return -1073741735;
        }
LABEL_23:
        if ( (v5 & 1) == 0 )
          goto LABEL_24;
        if ( (_DWORD)v11 == 1 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
            v32 = RtlpVerGetConditionMask(ConditionMask, 1LL);
          else
            v32 = (unsigned __int8)(ConditionMask >> 2);
          LODWORD(v11) = v32;
        }
        v31 = RtlpVerCompare(v11, VersionInfo->dwMinorVersion, VersionInformation.dwMinorVersion, (unsigned int)v35, 1);
        v10 = v35[0];
        if ( v31 )
        {
LABEL_24:
          if ( !v10 )
            goto LABEL_12;
        }
        else if ( !v35[0] )
        {
          return -1073741735;
        }
        if ( (v5 & 0x20) != 0 )
        {
          if ( (_DWORD)v11 == 1 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
              v33 = RtlpVerGetConditionMask(ConditionMask, 32LL);
            else
              v33 = 0;
            LODWORD(v11) = v33;
          }
          if ( !(unsigned __int8)RtlpVerCompare(v11, VersionInfo->wServicePackMajor, v37, (unsigned int)v35, 0) )
          {
            if ( !v35[0] )
              return -1073741735;
            goto LABEL_27;
          }
          v10 = v35[0];
        }
        if ( !v10 )
          goto LABEL_12;
LABEL_27:
        if ( (v5 & 0x10) != 0 )
        {
          if ( (_DWORD)v11 == 1 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
              v19 = RtlpVerGetConditionMask(ConditionMask, 16LL);
            else
              v19 = 0;
            LODWORD(v11) = v19;
          }
          if ( !(unsigned __int8)RtlpVerCompare(v11, VersionInfo->wServicePackMinor, v38, (unsigned int)v35, 1) )
            return -1073741735;
        }
        goto LABEL_12;
      }
    }
LABEL_22:
    if ( dwMajorVersion != VersionInformation.dwMajorVersion )
      return -1073741735;
    goto LABEL_23;
  }
  return result;
}
