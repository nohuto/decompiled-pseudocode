/*
 * XREFs of CmSelectQualifiedInstallLanguage @ 0x140C4A598
 * Callers:
 *     CmpGetSystemControlValues @ 0x140C4ABDC (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404ABF0C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1404B3408 (DownLevelLanguageNameToLangID.c)
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpWalkPath @ 0x1407E389C (CmpWalkPath.c)
 *     CmpValueToData @ 0x1407E3B14 (CmpValueToData.c)
 *     CmpFindValueByName @ 0x14086EAC4 (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpCopyCompressedName @ 0x140882750 (CmpCopyCompressedName.c)
 *     CmpFindSubKeyByNumber @ 0x140888160 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmSelectQualifiedInstallLanguage(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  char v7; // r12
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int ValueByName; // eax
  unsigned int v12; // esi
  ULONG_PTR v13; // rax
  PVOID v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  bool v17; // si
  _DWORD *v18; // r13
  unsigned int v20; // r15d
  int v21; // r14d
  __int64 CellFlat; // rax
  __int64 v23; // r14
  unsigned int v24; // eax
  unsigned int v25; // r15d
  ULONG_PTR v26; // rax
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // esi
  unsigned __int64 v30; // rax
  unsigned __int16 v31; // ax
  int v32; // esi
  char v33; // [rsp+30h] [rbp-D0h]
  char v34; // [rsp+31h] [rbp-CFh]
  int v35; // [rsp+34h] [rbp-CCh]
  unsigned int v36[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38[2]; // [rsp+48h] [rbp-B8h] BYREF
  size_t Size; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h]
  unsigned int v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v45; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Str2[88]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v48[176]; // [rsp+150h] [rbp+50h] BYREF
  wchar_t Str1[88]; // [rsp+200h] [rbp+100h] BYREF

  v35 = a4;
  LODWORD(BugCheckParameter4) = 0;
  v38[1] = 0;
  v38[0] = -1;
  v36[0] = -1;
  v41[0] = -1;
  v37[0] = -1;
  v44 = 0xFFFFFFFFLL;
  v43 = 0xFFFFFFFFLL;
  v45 = a3;
  DestinationString = 0LL;
  v36[1] = 0;
  v7 = 0;
  v41[1] = 0;
  v37[1] = 0;
  v33 = 0;
  v34 = 0;
  v40 = 0;
  Size = 0LL;
  memset_0(v48, 0, 0xAAuLL);
  memset_0(Str2, 0, 0xAAuLL);
  memset_0(Str1, 0, 0xAAuLL);
  if ( !a3 )
    return 1LL;
  *a3 = 0;
  if ( a4 )
  {
    v8 = 70;
    if ( !(unsigned int)DownLevelLangIDToLanguageName(a4, Str1, 85, 0) )
      v35 = 0;
  }
  else
  {
    v8 = 38;
  }
  v9 = CmpWalkPath((ULONG_PTR)&CmControlHive, a2, L"MUI\\Settings");
  if ( v9 != -1 )
  {
    if ( (byte_14100D65C & 1) != 0
       ? HvpGetCellFlat((ULONG_PTR)&CmControlHive, v9, v36)
       : HvpGetCellPaged((ULONG_PTR)&CmControlHive, v9, v36) )
    {
      RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
      ValueByName = CmpFindValueByName((ULONG_PTR)&CmControlHive);
      v12 = ValueByName;
      if ( ValueByName != -1 )
      {
        v13 = (byte_14100D65C & 1) != 0
            ? HvpGetCellFlat((ULONG_PTR)&CmControlHive, ValueByName, v38)
            : HvpGetCellPaged((ULONG_PTR)&CmControlHive, ValueByName, v38);
        if ( v13 )
        {
          if ( *(_DWORD *)(v13 + 12) == 7 )
          {
            v14 = CmpValueToData((ULONG_PTR)&CmControlHive, v12, v13, (__int64)&Size, (__int64)&v43);
            if ( v14 )
            {
              if ( (unsigned int)Size < 0xA8 )
              {
                memmove(v48, v14, (unsigned int)Size);
                PsMachineUILanguageId = DownLevelLanguageNameToLangID(v48, 0);
              }
              if ( (byte_14100D65C & 1) != 0 )
                HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)&v43);
              else
                HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v43);
            }
          }
          if ( (byte_14100D65C & 1) != 0 )
            HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v38);
          else
            HvpReleaseCellPaged((__int64)&CmControlHive, v38);
        }
      }
      if ( (byte_14100D65C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v36);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, v36);
    }
  }
  v15 = CmpWalkPath((ULONG_PTR)&CmControlHive, a2, L"MUI\\UILanguages");
  if ( v15 == -1 )
    return v8;
  v16 = (byte_14100D65C & 1) != 0
      ? HvpGetCellFlat((ULONG_PTR)&CmControlHive, v15, v41)
      : HvpGetCellPaged((ULONG_PTR)&CmControlHive, v15, v41);
  v17 = 0;
  v18 = (_DWORD *)v16;
  if ( !v16 )
    return v8;
  v8 &= ~2u;
  v20 = 0;
LABEL_36:
  v21 = v35;
  while ( 1 )
  {
    CmpFindSubKeyByNumber((ULONG_PTR)&CmControlHive, v18, v20++, (int *)&BugCheckParameter4);
    v36[0] = v20;
    if ( (_DWORD)BugCheckParameter4 == -1 )
      break;
    if ( (byte_14100D65C & 1) != 0 )
      CellFlat = HvpGetCellFlat((ULONG_PTR)&CmControlHive, (unsigned int)BugCheckParameter4, v37);
    else
      CellFlat = HvpGetCellPaged((ULONG_PTR)&CmControlHive, BugCheckParameter4, v37);
    v23 = CellFlat;
    if ( !CellFlat )
      goto LABEL_36;
    RtlInitUnicodeString(&DestinationString, L"Type");
    v24 = CmpFindValueByName((ULONG_PTR)&CmControlHive);
    v25 = v24;
    if ( v24 == -1 )
      goto LABEL_81;
    v26 = (byte_14100D65C & 1) != 0
        ? HvpGetCellFlat((ULONG_PTR)&CmControlHive, v24, v38)
        : HvpGetCellPaged((ULONG_PTR)&CmControlHive, v24, v38);
    if ( !v26 )
      goto LABEL_81;
    if ( *(_DWORD *)(v26 + 12) == 4 )
    {
      v27 = *(_DWORD *)CmpValueToData((ULONG_PTR)&CmControlHive, v25, v26, (__int64)&Size, (__int64)&v44);
      HIDWORD(Size) = v27;
      if ( (v27 & 3) != 0 )
        v17 = (v27 & 0x10) != 0;
      if ( (byte_14100D65C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)&v44);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v44);
    }
    if ( (byte_14100D65C & 1) != 0 )
      HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v38);
    else
      HvpReleaseCellPaged((__int64)&CmControlHive, v38);
    if ( !v17 )
    {
LABEL_81:
      if ( (byte_14100D65C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v37);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, v37);
      v20 = v36[0];
      v21 = v35;
      goto LABEL_37;
    }
    v28 = *(unsigned __int16 *)(v23 + 72);
    if ( (*(_BYTE *)(v23 + 2) & 0x20) != 0 )
    {
      v29 = (unsigned __int16)(2 * v28);
      if ( v29 > 0xA8 )
        goto LABEL_81;
      CmpCopyCompressedName((unsigned __int64)Str2, v29, v23 + 76, v28);
    }
    else
    {
      v29 = *(unsigned __int16 *)(v23 + 72);
      if ( v28 > 0xA8 )
        goto LABEL_81;
      memmove(Str2, (const void *)(v23 + 76), *(unsigned __int16 *)(v23 + 72));
    }
    if ( (byte_14100D65C & 1) != 0 )
      HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v37);
    else
      HvpReleaseCellPaged((__int64)&CmControlHive, v37);
    v30 = v29 & 0xFFFFFFFE;
    if ( v30 >= 0xAA )
      _report_rangecheckfailure();
    *(wchar_t *)((char *)Str2 + v30) = 0;
    v31 = DownLevelLanguageNameToLangID(Str2, 0);
    v20 = v36[0];
    v21 = v35;
    v32 = v31;
    if ( v31 && v31 != 127 )
    {
      if ( v35 && !v34 && !wcsicmp(Str1, Str2) )
      {
        v34 = 1;
        v8 &= ~0x40u;
      }
      v20 = v36[0];
      if ( v33 )
      {
        if ( !v7 && (Size & 0x200000000LL) != 0 )
        {
          v7 = 1;
          v40 = v32;
        }
      }
      else if ( !v7 )
      {
        v40 = v32;
        if ( (Size & 0x200000000LL) != 0 )
          v7 = 1;
        else
          v33 = 1;
      }
    }
LABEL_37:
    v17 = 0;
  }
  if ( (byte_14100D65C & 1) != 0 )
    HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v41);
  else
    HvpReleaseCellPaged((__int64)&CmControlHive, v41);
  if ( v33 || v7 )
    v8 &= ~4u;
  if ( v34 )
  {
    *v45 = v21;
    return 0;
  }
  if ( v7 || v33 )
  {
    *v45 = v40;
    return 0;
  }
  return v8;
}
