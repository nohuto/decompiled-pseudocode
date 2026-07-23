/*
 * XREFs of RtlSwitchedVVI @ 0x18000A980
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerGetConditionMask @ 0x18000A4C0 (RtlpVerGetConditionMask.c)
 *     SwitchedRtlGetVersion @ 0x18000AE00 (SwitchedRtlGetVersion.c)
 *     RtlpVerCompare @ 0x18000BE50 (RtlpVerCompare.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

DWORD __cdecl RtlSwitchedVVI(PRTL_OSVERSIONINFOEXW VersionInfo, DWORD TypeMask, ULONGLONG ConditionMask)
{
  char v3; // di
  char v5; // bl
  DWORD result; // eax
  DWORD v8; // ebp
  char v9; // cl
  ULONGLONG v10; // rdi
  unsigned int v11; // eax
  char v12; // cl
  signed int dwMajorVersion; // edx
  bool v14; // al
  char v15; // al
  unsigned int v16; // eax
  char v17; // cl
  int v18; // esi
  int wSuiteMask; // r14d
  int v20; // r12d
  unsigned int v21; // r10d
  int v22; // eax
  int v23; // r11d
  int v24; // eax
  int v25; // eax
  _BYTE v26[16]; // [rsp+30h] [rbp-168h] BYREF
  int v27; // [rsp+40h] [rbp-158h] BYREF
  _DWORD v28[68]; // [rsp+44h] [rbp-154h] BYREF
  unsigned __int16 v29; // [rsp+154h] [rbp-44h]
  unsigned __int16 v30; // [rsp+156h] [rbp-42h]
  unsigned __int16 v31; // [rsp+158h] [rbp-40h]
  unsigned __int8 v32; // [rsp+15Ah] [rbp-3Eh]

  v3 = 0;
  v5 = TypeMask;
  if ( !TypeMask )
    return -1073741811;
  memset_thunk_772440563353939046(v28, 0, 0x118uLL);
  v27 = 284;
  result = SwitchedRtlGetVersion(&v27);
  if ( result )
    return result;
  v8 = 0;
  if ( (v5 & 0x40) == 0 )
    goto LABEL_4;
  wSuiteMask = VersionInfo->wSuiteMask;
  if ( !(_WORD)wSuiteMask )
    goto LABEL_4;
  v20 = v31;
  v21 = 0;
  while ( v21 < 0x10 )
  {
    if ( (wSuiteMask & (1 << v21)) == 0 )
      goto LABEL_50;
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
      return -1073741811;
    v22 = RtlpVerGetConditionMask(ConditionMask, 0x40u) - 6;
    if ( !v22 )
    {
      if ( (v20 & v23) == 0 )
        return -1073741735;
      goto LABEL_50;
    }
    if ( v22 != 1 )
      return -1073741811;
    if ( (v20 & v23) != 0 )
    {
      v3 = 1;
      ++v21;
    }
    else
    {
LABEL_50:
      ++v21;
    }
  }
  if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 0x40u) == 7 && !v3 )
    return -1073741735;
LABEL_4:
  v9 = 1;
  LODWORD(v10) = 1;
  v26[0] = 1;
  if ( (v5 & 2) == 0 )
    goto LABEL_26;
  if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
  {
    LODWORD(v10) = (unsigned __int8)(ConditionMask >> 4);
  }
  else
  {
    v11 = 2;
    v12 = 0;
    do
    {
      v11 >>= 1;
      ++v12;
    }
    while ( v11 );
    v10 = (ConditionMask >> (3 * v12 - 3)) & 7;
  }
  dwMajorVersion = VersionInfo->dwMajorVersion;
  v9 = dwMajorVersion == v28[0];
  v26[0] = dwMajorVersion == v28[0];
  if ( (_DWORD)v10 != 3 )
  {
    switch ( (_DWORD)v10 )
    {
      case 1:
        v14 = v28[0] == dwMajorVersion;
        break;
      case 2:
        v14 = v28[0] > dwMajorVersion;
        break;
      case 4:
        v14 = v28[0] < dwMajorVersion;
        break;
      case 5:
        v14 = v28[0] <= dwMajorVersion;
        break;
      default:
LABEL_16:
        if ( dwMajorVersion != v28[0] )
          return -1073741735;
        goto LABEL_26;
    }
    if ( v14 )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( v28[0] < dwMajorVersion )
    goto LABEL_16;
LABEL_20:
  if ( dwMajorVersion != v28[0] )
  {
LABEL_21:
    if ( (v5 & 4) != 0 )
    {
      v24 = (ConditionMask & 0x8000000000000000uLL) == 0LL
          ? BYTE2(ConditionMask)
          : RtlpVerGetConditionMask(ConditionMask, 4u);
      if ( !(unsigned __int8)RtlpVerCompare(v24, VersionInfo->dwBuildNumber, v28[2], (unsigned int)v26, 0) )
        return -1073741735;
    }
    if ( (v5 & 8) != 0 )
    {
      v25 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 8u);
      if ( !(unsigned __int8)RtlpVerCompare(v25, VersionInfo->dwPlatformId, v28[3], (unsigned int)v26, 0) )
        return -1073741735;
    }
    if ( v5 >= 0 )
      return 0;
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
    {
      v18 = 0;
    }
    else
    {
      v16 = 128;
      v17 = 0;
      do
      {
        v16 >>= 1;
        ++v17;
      }
      while ( v16 );
      v18 = (ConditionMask >> (3 * v17 - 3)) & 7;
    }
    if ( !(unsigned __int8)RtlpVerCompare(v18, VersionInfo->wProductType, v32, (unsigned int)v26, 0) )
      return -1073741735;
    return v8;
  }
LABEL_26:
  if ( (v5 & 1) == 0 )
    goto LABEL_29;
  if ( (_DWORD)v10 == 1 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
      LODWORD(v10) = (unsigned __int8)(ConditionMask >> 2);
    else
      LODWORD(v10) = RtlpVerGetConditionMask(ConditionMask, 1u);
  }
  v15 = RtlpVerCompare(v10, VersionInfo->dwMinorVersion, v28[1], (unsigned int)v26, 1);
  v9 = v26[0];
  if ( !v15 )
  {
    if ( !v26[0] )
      return -1073741735;
  }
  else
  {
LABEL_29:
    if ( !v9 )
      goto LABEL_21;
  }
  if ( (v5 & 0x20) != 0 )
  {
    if ( (_DWORD)v10 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        LODWORD(v10) = 0;
      else
        LODWORD(v10) = RtlpVerGetConditionMask(ConditionMask, 0x20u);
    }
    if ( (unsigned __int8)RtlpVerCompare(v10, VersionInfo->wServicePackMajor, v29, (unsigned int)v26, 0) )
    {
      v9 = v26[0];
      goto LABEL_34;
    }
    if ( !v26[0] )
      return -1073741735;
  }
  else
  {
LABEL_34:
    if ( !v9 )
      goto LABEL_21;
  }
  if ( (v5 & 0x10) == 0 )
    goto LABEL_21;
  if ( (_DWORD)v10 == 1 )
  {
    if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
      LODWORD(v10) = 0;
    else
      LODWORD(v10) = RtlpVerGetConditionMask(ConditionMask, 0x10u);
  }
  if ( (unsigned __int8)RtlpVerCompare(v10, VersionInfo->wServicePackMinor, v30, (unsigned int)v26, 1) )
    goto LABEL_21;
  return -1073741735;
}
