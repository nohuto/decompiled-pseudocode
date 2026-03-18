/*
 * XREFs of CmpGetSystemControlValues @ 0x140C48AB8
 * Callers:
 *     CmInitSystem0 @ 0x140C483D8 (CmInitSystem0.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpFindControlSet @ 0x1407E16C4 (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x1407E334C (CmpWalkPath.c)
 *     CmpFindValueByName @ 0x14086A794 (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpInitSecurityCache @ 0x140930FF4 (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x140931030 (HvHiveInitialize.c)
 *     HvHiveStartMemoryBacked @ 0x1409314FC (HvHiveStartMemoryBacked.c)
 *     CmpFindSubKeyByName @ 0x140A3D268 (CmpFindSubKeyByName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C48474 (CmSelectQualifiedInstallLanguage.c)
 *     CmpConvertLangId @ 0x140C48A54 (CmpConvertLangId.c)
 *     CmpGetBootValueData @ 0x140C4CB20 (CmpGetBootValueData.c)
 */

_KAFFINITY_EX *__fastcall CmpGetSystemControlValues(_DWORD *a1, __int64 a2, char a3)
{
  wchar_t **v3; // rbx
  int started; // eax
  unsigned int v7; // edi
  __int64 CellFlat; // rax
  __int64 v9; // rdi
  unsigned int SubKeyByName; // r14d
  __int64 v11; // rcx
  unsigned int ControlSet; // eax
  __int64 CellPaged; // rax
  ULONG_PTR v14; // rdi
  unsigned int v15; // edi
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int ValueByName; // esi
  unsigned int *v19; // r12
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // eax
  wchar_t *v24; // rcx
  unsigned int *v25; // rax
  unsigned int v26; // eax
  __int64 v28; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v29[2]; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v30[2]; // [rsp+98h] [rbp-70h] BYREF
  int v31; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _KAFFINITY_EX v33; // [rsp+B8h] [rbp-50h] BYREF

  v3 = CmControlVector;
  v30[1] = 0;
  LOWORD(v28) = 0;
  v31 = 0;
  v30[0] = -1;
  v29[0] = -1;
  v29[1] = 0;
  memset(&v33, 0, 24);
  DestinationString = 0LL;
  memset_0(&v33.StaticBitmap[4], 0, 0x1A8uLL);
  CmpInitializeThreadInfo(&v33);
  memset_0(&CmControlHive, 0, 0x12D8uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  HvHiveInitialize(&CmControlHive);
  v33.StaticBitmap[3] = (unsigned __int64)&CmControlHive;
  qword_14100C608 = (__int64)&v33.StaticBitmap[3];
  started = HvHiveStartMemoryBacked(
              (ULONG_PTR)&CmControlHive,
              4LL,
              1,
              0LL,
              a1,
              0LL,
              1,
              0LL,
              0,
              0LL,
              0LL,
              0LL,
              0LL,
              &v28,
              0LL,
              (__int64)&v33.StaticBitmap[3]);
  if ( started < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, started);
  qword_14100C608 = 0LL;
  v7 = a1[9];
  if ( a3 == 1 )
  {
    if ( (byte_14100C65C & 1) != 0 )
      CellFlat = HvpGetCellFlat((ULONG_PTR)&CmControlHive, v7, v29);
    else
      CellFlat = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v7, v29);
    v9 = CellFlat;
    if ( !CellFlat )
      return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v33);
    RtlInitUnicodeString(&DestinationString, L"ControlSetOverride");
    SubKeyByName = CmpFindSubKeyByName((ULONG_PTR)&CmControlHive, v9, &DestinationString.Length);
    if ( SubKeyByName == -1 )
      return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v33);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"current");
    ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v7, (__int64)&DestinationString, (_BYTE *)&v28 + 1);
    if ( ControlSet == -1 )
      KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
    if ( (byte_14100C65C & 1) != 0 )
      CellPaged = HvpGetCellFlat((ULONG_PTR)&CmControlHive, ControlSet, v29);
    else
      CellPaged = HvpGetCellPaged((ULONG_PTR)&CmControlHive, ControlSet, v29);
    v14 = CellPaged;
    if ( !CellPaged )
      return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v33);
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((ULONG_PTR)&CmControlHive, v14, &DestinationString.Length);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v14, (ULONG_PTR)&DestinationString);
  }
  if ( (byte_14100C65C & 1) != 0 )
    HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v29);
  else
    HvpReleaseCellPaged((__int64)&CmControlHive, v29);
  while ( *v3 )
  {
    if ( a3 != 1 || *((_BYTE *)v3 + 40) )
    {
      v15 = -1;
      v16 = CmpWalkPath((ULONG_PTR)&CmControlHive, SubKeyByName, *v3);
      if ( v16 != -1 )
      {
        if ( (byte_14100C65C & 1) != 0 )
          v17 = HvpGetCellFlat((ULONG_PTR)&CmControlHive, v16, v29);
        else
          v17 = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v16, v29);
        if ( !v17 )
          return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v33);
        RtlInitUnicodeString(&DestinationString, v3[1]);
        ValueByName = CmpFindValueByName((ULONG_PTR)&CmControlHive);
        if ( (byte_14100C65C & 1) != 0 )
          HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v29);
        else
          HvpReleaseCellPaged((__int64)&CmControlHive, v29);
        if ( ValueByName != -1 )
        {
          v19 = (unsigned int *)v3[3];
          if ( v19 )
            v20 = *v19;
          else
            v20 = 4;
          if ( (byte_14100C65C & 1) != 0 )
            v21 = HvpGetCellFlat((ULONG_PTR)&CmControlHive, ValueByName, v30);
          else
            v21 = HvpGetCellPaged((ULONG_PTR)&CmControlHive, ValueByName, v30);
          v22 = v21;
          if ( !v21 )
            return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v33);
          v23 = *(_DWORD *)(v21 + 4);
          LOBYTE(v28) = v23 >= 0x80000000;
          v15 = v23 + 0x80000000;
          if ( v23 < 0x80000000 )
            v15 = v23;
          if ( v20 < v15 )
            v15 = v20;
          if ( v15 && !(unsigned __int8)CmpGetBootValueData(0x80000000LL, v22, v3[2], v15) )
          {
            if ( (byte_14100C65C & 1) != 0 )
              HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v30);
            else
              HvpReleaseCellPaged((__int64)&CmControlHive, v30);
            return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v33);
          }
          v24 = v3[4];
          if ( v24 )
            *(_DWORD *)v24 = *(_DWORD *)(v22 + 12);
          if ( (byte_14100C65C & 1) != 0 )
            HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v30);
          else
            HvpReleaseCellPaged((__int64)&CmControlHive, v30);
        }
      }
      v25 = (unsigned int *)v3[3];
      if ( v25 )
        *v25 = v15;
    }
    v3 += 6;
  }
  if ( CmDefaultLanguageIdType == 1 )
  {
    PsDefaultSystemLocaleId = (unsigned __int16)CmpConvertLangId(
                                                  (__int64)CmDefaultLanguageId,
                                                  CmDefaultLanguageIdLength);
  }
  else if ( !a3 )
  {
    PsDefaultSystemLocaleId = 1033;
  }
  if ( CmInstallUILanguageIdType == 1 )
    PsInstallUILanguageId = CmpConvertLangId((__int64)CmInstallUILanguageId, CmInstallUILanguageIdLength);
  if ( !a3 )
  {
    v26 = CmSelectQualifiedInstallLanguage(v11, SubKeyByName, &v31, (unsigned __int16)PsInstallUILanguageId);
    if ( v26 )
    {
      if ( !psMUITest )
        KeBugCheckEx(0x12Au, 1uLL, v26, 0LL, 0LL);
      PsInstallUILanguageId = PsDefaultSystemLocaleId;
    }
    else if ( (unsigned __int16)PsInstallUILanguageId != v31 )
    {
      PsInstallUILanguageId = v31;
      CmInstallUILanguageFallbackToOOBm = 1;
    }
  }
  PsDefaultThreadLocaleId = PsDefaultSystemLocaleId;
  if ( !PsMachineUILanguageId || a3 == 1 )
    PsMachineUILanguageId = PsInstallUILanguageId;
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v33);
}
