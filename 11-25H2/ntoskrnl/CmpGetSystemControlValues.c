/*
 * XREFs of CmpGetSystemControlValues @ 0x140C377A8
 * Callers:
 *     CmInitSystem0 @ 0x140C370C8 (CmInitSystem0.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpFindControlSet @ 0x1407D1DE4 (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x1407D3A6C (CmpWalkPath.c)
 *     CmpFindValueByName @ 0x1408695FC (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpInitSecurityCache @ 0x140A34BA4 (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x140A34BE0 (HvHiveInitialize.c)
 *     CmpFindSubKeyByName @ 0x140A366A8 (CmpFindSubKeyByName.c)
 *     HvHiveStartMemoryBacked @ 0x140A9F924 (HvHiveStartMemoryBacked.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C37164 (CmSelectQualifiedInstallLanguage.c)
 *     CmpConvertLangId @ 0x140C37744 (CmpConvertLangId.c)
 *     CmpGetBootValueData @ 0x140C3B824 (CmpGetBootValueData.c)
 */

__int64 __fastcall CmpGetSystemControlValues(_DWORD *a1, __int64 a2, char a3)
{
  wchar_t **v3; // rbx
  int started; // eax
  unsigned int v7; // edi
  __int64 CellFlat; // rax
  __int64 v9; // rdi
  unsigned int SubKeyByName; // r15d
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
  __int64 result; // rax
  __int64 v28; // [rsp+88h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-78h] BYREF
  __int64 v30; // [rsp+98h] [rbp-70h] BYREF
  int v31; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _KAFFINITY_EX v33; // [rsp+B8h] [rbp-50h] BYREF

  v3 = CmControlVector;
  LOWORD(v28) = 0;
  v31 = 0;
  v30 = 0xFFFFFFFFLL;
  v29 = 0xFFFFFFFFLL;
  *(_OWORD *)&v33.Count = 0LL;
  DestinationString = 0LL;
  memset_0(&v33.StaticBitmap[2], 0, 0x1A8uLL);
  CmpInitializeThreadInfo(&v33);
  memset_0(&CmControlHive, 0, 0x12D8uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  HvHiveInitialize(&CmControlHive);
  v33.StaticBitmap[1] = (unsigned __int64)&CmControlHive;
  qword_14100C608 = (__int64)&v33.StaticBitmap[1];
  started = HvHiveStartMemoryBacked(
              (ULONG_PTR)&CmControlHive,
              4u,
              1,
              0,
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
              (__int64)&v33.StaticBitmap[1]);
  if ( started < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, started);
  qword_14100C608 = 0LL;
  v7 = a1[9];
  if ( a3 == 1 )
  {
    if ( (byte_14100C65C & 1) != 0 )
      CellFlat = HvpGetCellFlat((ULONG_PTR)&CmControlHive, v7, &v29);
    else
      CellFlat = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v7, &v29);
    v9 = CellFlat;
    if ( !CellFlat )
      goto LABEL_72;
    RtlInitUnicodeString(&DestinationString, L"ControlSetOverride");
    SubKeyByName = CmpFindSubKeyByName((ULONG_PTR)&CmControlHive, v9, &DestinationString.Length);
    if ( SubKeyByName == -1 )
      goto LABEL_72;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"current");
    ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v7, (__int64)&DestinationString, (_BYTE *)&v28 + 1);
    if ( ControlSet == -1 )
      KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
    if ( (byte_14100C65C & 1) != 0 )
      CellPaged = HvpGetCellFlat((ULONG_PTR)&CmControlHive, ControlSet, &v29);
    else
      CellPaged = HvpGetCellPaged((ULONG_PTR)&CmControlHive, ControlSet, &v29);
    v14 = CellPaged;
    if ( !CellPaged )
      goto LABEL_72;
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((ULONG_PTR)&CmControlHive, v14, &DestinationString.Length);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v14, (ULONG_PTR)&DestinationString);
  }
  if ( (byte_14100C65C & 1) != 0 )
    HvpReleaseCellFlat((__int64)&CmControlHive, &v29);
  else
    HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v29);
  while ( *v3 )
  {
    if ( a3 != 1 || *((_BYTE *)v3 + 40) )
    {
      v15 = -1;
      v16 = CmpWalkPath((ULONG_PTR)&CmControlHive, SubKeyByName, *v3);
      if ( v16 != -1 )
      {
        if ( (byte_14100C65C & 1) != 0 )
          v17 = HvpGetCellFlat((ULONG_PTR)&CmControlHive, v16, &v29);
        else
          v17 = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v16, &v29);
        if ( !v17 )
          goto LABEL_72;
        RtlInitUnicodeString(&DestinationString, v3[1]);
        ValueByName = CmpFindValueByName((ULONG_PTR)&CmControlHive);
        if ( (byte_14100C65C & 1) != 0 )
          HvpReleaseCellFlat((__int64)&CmControlHive, &v29);
        else
          HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v29);
        if ( ValueByName != -1 )
        {
          v19 = (unsigned int *)v3[3];
          if ( v19 )
            v20 = *v19;
          else
            v20 = 4;
          if ( (byte_14100C65C & 1) != 0 )
            v21 = HvpGetCellFlat((ULONG_PTR)&CmControlHive, ValueByName, &v30);
          else
            v21 = HvpGetCellPaged((ULONG_PTR)&CmControlHive, ValueByName, &v30);
          v22 = v21;
          if ( !v21 )
            goto LABEL_72;
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
              HvpReleaseCellFlat((__int64)&CmControlHive, &v30);
            else
              HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v30);
            goto LABEL_72;
          }
          v24 = v3[4];
          if ( v24 )
            *(_DWORD *)v24 = *(_DWORD *)(v22 + 12);
          if ( (byte_14100C65C & 1) != 0 )
            HvpReleaseCellFlat((__int64)&CmControlHive, &v30);
          else
            HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v30);
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
LABEL_72:
  result = *(_QWORD *)&v33.Count;
  KeGetCurrentThread()[1].UserAffinity = *(_KAFFINITY_EX **)&v33.Count;
  return result;
}
