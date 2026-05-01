/*
 * XREFs of SdbShouldBlockPackageLaunch @ 0x18003F648
 * Callers:
 *     ?HampSystemAppCompatIsPackageBlocked@@YAKPEBGK@Z @ 0x18003F550 (-HampSystemAppCompatIsPackageBlocked@@YAKPEBGK@Z.c)
 * Callees:
 *     CompatCacheLookupPackage @ 0x18003FF3C (CompatCacheLookupPackage.c)
 *     RtlStringCchCopyW @ 0x1800636A8 (RtlStringCchCopyW.c)
 *     Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage @ 0x18006FF00 (Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage.c)
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     StringCchCatW @ 0x1800920B4 (StringCchCatW.c)
 *     StringCchCopyW @ 0x180092140 (StringCchCopyW.c)
 *     SdbReleaseDatabase @ 0x180092CE8 (SdbReleaseDatabase.c)
 *     SdbInitDatabase @ 0x18009499C (SdbInitDatabase.c)
 *     SdbTagRefToTagID @ 0x180095158 (SdbTagRefToTagID.c)
 *     SdbpApphelpExeInfo @ 0x180095564 (SdbpApphelpExeInfo.c)
 *     SdbpEscapeQuoteInMsg @ 0x1800959C0 (SdbpEscapeQuoteInMsg.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbShouldBlockPackageLaunch(const wchar_t *a1, int a2, _DWORD *a3, int a4)
{
  HMODULE v4; // r12
  int v6; // esi
  unsigned int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r14
  int ValueW; // eax
  unsigned int *v12; // rsi
  HMODULE Library; // rax
  const char *v15; // r9
  int v16; // r8d
  const char *v17; // r9
  int v18; // r8d
  FARPROC ProcAddress; // rax
  size_t v20; // rdx
  wchar_t *v21; // rcx
  const wchar_t *v22; // r8
  __int64 inited; // rax
  __int64 v24; // rcx
  int v25; // r14d
  int v26; // r14d
  const wchar_t *v27; // r8
  __int64 v28; // r11
  LSTATUS v29; // eax
  LSTATUS v30; // eax
  LSTATUS v31; // eax
  LSTATUS v32; // eax
  LSTATUS v33; // eax
  char phkResult; // [rsp+20h] [rbp-E0h]
  HKEY hkey; // [rsp+50h] [rbp-B0h] BYREF
  DWORD cbData; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp-A0h] BYREF
  DWORD v39; // [rsp+64h] [rbp-9Ch] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  _DWORD *v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  int v45; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h] BYREF
  STRSAFE_LPCWSTR pszSrc; // [rsp+A0h] [rbp-60h]
  _BYTE v48[56]; // [rsp+B0h] [rbp-50h] BYREF
  int v49; // [rsp+E8h] [rbp-18h]
  __int64 v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+120h] [rbp+20h]
  int v53; // [rsp+124h] [rbp+24h]
  BYTE v54[100]; // [rsp+140h] [rbp+40h] BYREF
  BYTE v55[100]; // [rsp+1A4h] [rbp+A4h] BYREF
  BYTE Data[4]; // [rsp+208h] [rbp+108h] BYREF
  BYTE pvData[4]; // [rsp+20Ch] [rbp+10Ch] BYREF
  BYTE v58[4]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v59[524]; // [rsp+214h] [rbp+114h] BYREF
  wchar_t pszDest[400]; // [rsp+420h] [rbp+320h] BYREF

  v4 = 0LL;
  v42 = a3;
  pszSrc = a1;
  v6 = (int)a1;
  P = 0LL;
  v45 = 0;
  v46 = 0LL;
  v37 = 0;
  v7 = 0;
  v40 = a4;
  v8 = 0LL;
  memset_0(v48, 0, 0x88uLL);
  memset_0(v54, 0, 0x2D4uLL);
  hkey = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  cbData = 4;
  pcbData = 100;
  v39 = 100;
  v9 = 0LL;
  v10 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  *v42 = 0;
  Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage();
  ValueW = CompatCacheLookupPackage((unsigned int)&P, (unsigned int)&v45, v6, a2);
  if ( ValueW < 0 )
  {
    v17 = "CompatCacheLookupPackage failed [%x]";
    v18 = 453;
  }
  else
  {
    v12 = (unsigned int *)P;
    if ( !P || !*((_DWORD *)P + 41) )
    {
      v7 = 1;
      goto LABEL_4;
    }
    if ( !_InterlockedCompareExchange(&dword_1800E8758, 0, 1) )
    {
LABEL_33:
      StringCchCatW(pszDest, 0x190uLL, &::pszDest);
      ValueW = StringCchCatW(pszDest, 0x190uLL, pszSrc);
      if ( ValueW < 0 )
      {
        v17 = "StringCchCatW failed [%x]";
        v18 = 503;
        goto LABEL_21;
      }
      if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, pszDest, 0, 0xF003Fu, &hkey) )
      {
        if ( !hkey )
        {
          ValueW = RegCreateKeyExW(HKEY_LOCAL_MACHINE, pszDest, 0, 0LL, 0, 0xF003Fu, 0LL, &hkey, 0LL);
          if ( ValueW )
          {
            v17 = "RegCreateKeyEx failed %d";
            v18 = 595;
            goto LABEL_21;
          }
        }
        inited = SdbInitDatabase();
        v8 = inited;
        if ( !inited )
        {
          v15 = "SdbInitDatabase failed";
          v16 = 606;
          goto LABEL_28;
        }
        if ( !(unsigned int)SdbTagRefToTagID(inited, v12[41], &v46, &v37)
          || !v46
          || !(unsigned int)SdbpApphelpExeInfo(v24, v46, v37, v48) )
        {
          goto LABEL_22;
        }
        v25 = v49;
        *v42 = v49 == 2;
        v41 = SdbpEscapeQuoteInMsg(v50);
        v43 = SdbpEscapeQuoteInMsg(v51);
        v26 = v25 - 1;
        if ( v26 )
        {
          if ( v26 == 1 )
            *(_DWORD *)Data = 2;
        }
        else
        {
          *(_DWORD *)Data = 1;
        }
        LODWORD(v10) = 0;
        v27 = &word_1800C1FFC;
        if ( v41 )
          v27 = (const wchar_t *)v41;
        if ( (int)RtlStringCchCopyW(v54, 50LL, v27) < 0 )
        {
          v15 = "AppName is too long";
          v16 = 648;
          goto LABEL_28;
        }
        if ( v43 )
          v28 = v43;
        LODWORD(v10) = 0;
        if ( (int)RtlStringCchCopyW(v55, 50LL, v28) < 0 )
        {
          v15 = "VendorName is too long";
          v16 = 656;
          goto LABEL_28;
        }
        *(_DWORD *)pvData = v52;
        *(_DWORD *)v58 = v53;
        v29 = RegSetValueExW(hkey, L"dwBlock", 0, 4u, Data, cbData);
        if ( v29 )
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbShouldBlockPackageLaunch",
            670,
            (unsigned int)"RegSetValueEx failed %d",
            v29);
        v30 = RegSetValueExW(hkey, L"dwFwLinkNumber", 0, 4u, pvData, cbData);
        if ( v30 )
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbShouldBlockPackageLaunch",
            680,
            (unsigned int)"RegSetValueEx failed %d",
            v30);
        v31 = RegSetValueExW(hkey, L"dwKbNumber", 0, 4u, v58, cbData);
        if ( v31 )
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbShouldBlockPackageLaunch",
            690,
            (unsigned int)"RegSetValueEx failed %d",
            v31);
        v32 = RegSetValueExW(hkey, L"AppName", 0, 1u, v54, pcbData);
        if ( v32 )
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbShouldBlockPackageLaunch",
            700,
            (unsigned int)"RegSetValueEx failed %d",
            v32);
        v33 = RegSetValueExW(hkey, L"VendorName", 0, 1u, v55, v39);
        if ( v33 )
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbShouldBlockPackageLaunch",
            710,
            (unsigned int)"RegSetValueEx failed %d",
            v33);
        if ( !v40 )
          goto LABEL_87;
      }
      else
      {
        ValueW = RegGetValueW(hkey, 0LL, L"dwBlock", 0x18u, 0LL, Data, &cbData);
        if ( ValueW )
        {
          v18 = 521;
LABEL_38:
          v17 = "RegGetValue failed %d";
          goto LABEL_21;
        }
        if ( !*(_DWORD *)Data )
        {
          v7 = 1;
          v9 = 0LL;
          goto LABEL_4;
        }
        if ( *(_DWORD *)Data == 2 )
          *v42 = 1;
        if ( !v40 )
        {
LABEL_87:
          v7 = 1;
          goto LABEL_23;
        }
        ValueW = RegGetValueW(hkey, 0LL, L"dwFwLinkNumber", 0x18u, 0LL, pvData, &cbData);
        if ( ValueW )
        {
          v18 = 543;
          goto LABEL_38;
        }
        ValueW = RegGetValueW(hkey, 0LL, L"dwKbNumber", 0x18u, 0LL, v58, &cbData);
        if ( ValueW )
        {
          v18 = 555;
          goto LABEL_38;
        }
        ValueW = RegGetValueW(hkey, 0LL, L"AppName", 2u, 0LL, v54, &pcbData);
        if ( ValueW )
        {
          v18 = 567;
          goto LABEL_38;
        }
        ValueW = RegGetValueW(hkey, 0LL, L"VendorName", 2u, 0LL, v55, &v39);
        if ( ValueW )
        {
          v18 = 579;
          goto LABEL_38;
        }
      }
      if ( *(_DWORD *)Data )
      {
        if ( (int)RtlStringCchCopyW(v59, 256LL, pszSrc) < 0 )
        {
          v15 = "PackageFullName is too long";
          v16 = 719;
          goto LABEL_28;
        }
        ValueW = RtlPublishWnfStateData(WNF_CMPT_BLOCKED_APP, 0LL, v54, 724LL, 0LL);
        if ( ValueW < 0 )
        {
          v17 = "RtlPublishWnfStateData failed, 0x%x";
          v18 = 732;
          goto LABEL_21;
        }
      }
      goto LABEL_87;
    }
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    v4 = Library;
    if ( !Library )
    {
      v15 = "Load ntdll failed";
      v16 = 470;
LABEL_28:
      AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", v16, (_DWORD)v15, phkResult);
      goto LABEL_22;
    }
    ProcAddress = GetProcAddress(Library, "RtlGetPersistedStateLocation");
    if ( !ProcAddress )
    {
      v15 = "Get RtlGetPersistedStateLocation failed";
      v16 = 477;
      goto LABEL_28;
    }
    if ( ((int (__fastcall *)(const wchar_t *, _QWORD, _QWORD, _QWORD, wchar_t *, int, _QWORD))ProcAddress)(
           L"AppCompatFlags",
           0LL,
           0LL,
           0LL,
           &::pszDest,
           240,
           0LL) >= 0
      || (ValueW = StringCchCopyW(v21, v20, v22), ValueW >= 0) )
    {
      StringCchCatW(&::pszDest, 0x78uLL, L"\\PackagedApps\\");
      goto LABEL_33;
    }
    v17 = "StringCchCopyW failed [%x]";
    v18 = 492;
  }
LABEL_21:
  AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", v18, (_DWORD)v17, ValueW);
LABEL_22:
  *v42 = v10;
LABEL_23:
  if ( v8 )
    SdbReleaseDatabase(v8);
  v10 = v43;
  v9 = v41;
LABEL_4:
  if ( hkey )
  {
    RegCloseKey(hkey);
    hkey = 0LL;
  }
  if ( v4 )
    FreeLibrary(v4);
  if ( v9 )
    AslFree(NtCurrentPeb()->ProcessHeap, v9);
  if ( v10 )
    AslFree(NtCurrentPeb()->ProcessHeap, v10);
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return v7;
}
