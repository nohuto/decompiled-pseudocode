/*
 * XREFs of _CmGetInstallerClassCompoundFiltersWorker @ 0x14081EF50
 * Callers:
 *     _CmGetInstallerClassCompoundFilters @ 0x1409AE104 (_CmGetInstallerClassCompoundFilters.c)
 * Callees:
 *     _CmGetDeclarativeFilterList @ 0x14081EC9C (_CmGetDeclarativeFilterList.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14097EF98 (_PnpCtxRegQueryInfoKey.c)
 *     _CmMergeFilterLists @ 0x1409AADB4 (_CmMergeFilterLists.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1409AE2B4 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetInstallerClassCompoundFiltersWorker(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  wchar_t *v13; // rsi
  wchar_t *v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // r15
  const wchar_t *v19; // r12
  __int64 Pool2; // rax
  int ObjectProperty; // ebx
  int v22; // ebx
  int InstallerClassMappedPropertyFromRegProp; // eax
  int v24; // eax
  void *v25; // rax
  int DeclarativeFilterList; // eax
  __int64 v28; // [rsp+68h] [rbp-29h] BYREF
  __int64 *v29; // [rsp+70h] [rbp-21h] BYREF
  PVOID v30; // [rsp+78h] [rbp-19h]
  __int64 *v31; // [rsp+80h] [rbp-11h]
  PVOID P; // [rsp+88h] [rbp-9h]

  LODWORD(v29) = 0;
  v28 = 0LL;
  v13 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v30 = 0LL;
  if ( (int)PnpCtxRegQueryInfoKey(a1, a4, (unsigned int)&v29, 0, 0LL, 0LL, 0LL) < 0 || !(_DWORD)v29 )
    return (unsigned int)-1073741275;
  if ( *(_DWORD *)(a5 + 16) != 20 )
    goto LABEL_8;
  v15 = *(_QWORD *)a5 - DEVPKEY_DeviceClass_CompoundUpperFilters;
  if ( *(_QWORD *)a5 == DEVPKEY_DeviceClass_CompoundUpperFilters )
    v15 = *(_QWORD *)(a5 + 8) - 0x4B88D2ECD9DBB9A9LL;
  if ( v15 )
  {
LABEL_8:
    v16 = DEVPKEY_DeviceClass_LowerFilterCache;
    v17 = DEVPKEY_DeviceClass_LowerFilterLevels;
    v18 = DEVPKEY_DeviceClass_LowerFilterDefaultLevel;
    v19 = L"*Lower";
  }
  else
  {
    v16 = DEVPKEY_DeviceClass_UpperFilterCache;
    v17 = DEVPKEY_DeviceClass_UpperFilterLevels;
    v18 = (__int64 *)&DEVPKEY_DeviceClass_UpperFilterDefaultLevel;
    v19 = (const wchar_t *)L"*Upper";
  }
  v29 = v17;
  v31 = v16;
  if ( (unsigned int)PnpGetObjectProperty(a1, a2, 2, a3, 0LL, (__int64)v16, (__int64)&v28 + 4, 0LL, 0, (__int64)&v28, 0) == -1073741789
    && HIDWORD(v28) == 8210 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)v28, 0x52504E50u);
    v14 = (wchar_t *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       2,
                       a3,
                       0LL,
                       (__int64)v31,
                       (__int64)&v28 + 4,
                       Pool2,
                       v28,
                       (__int64)&v28,
                       0);
    if ( ObjectProperty < 0 )
      goto LABEL_48;
    v22 = a3;
    goto LABEL_15;
  }
  v24 = PnpGetObjectProperty(a1, a2, 2, a3, 0LL, (__int64)v18, (__int64)&v28 + 4, 0LL, 0, (__int64)&v28, 0);
  ObjectProperty = v24;
  if ( v24 != -1073741789 )
  {
    if ( v24 == -1073741275 )
    {
      v13 = (wchar_t *)v19;
      goto LABEL_29;
    }
    goto LABEL_53;
  }
  if ( HIDWORD(v28) != 18 )
  {
LABEL_53:
    if ( HIDWORD(v28) == 8210 && v24 != -1073739509 && v24 )
      return (unsigned int)ObjectProperty;
    return (unsigned int)-1073741275;
  }
  v13 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v28, 0x52504E50u);
  if ( !v13 )
    return (unsigned int)-1073741801;
  ObjectProperty = PnpGetObjectProperty(
                     a1,
                     a2,
                     2,
                     a3,
                     0LL,
                     (__int64)v18,
                     (__int64)&v28 + 4,
                     (__int64)v13,
                     v28,
                     (__int64)&v28,
                     0);
  if ( ObjectProperty < 0 )
    goto LABEL_45;
  if ( (unsigned int)PnpGetObjectProperty(a1, a2, 2, a3, 0LL, (__int64)v29, (__int64)&v28 + 4, 0LL, 0, (__int64)&v28, 0) != -1073741789 )
  {
    ObjectProperty = -1073741275;
    goto LABEL_45;
  }
  v25 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v28, 0x52504E50u);
  v30 = v25;
  if ( !v25 )
  {
    ObjectProperty = -1073741801;
    goto LABEL_45;
  }
  ObjectProperty = PnpGetObjectProperty(
                     a1,
                     a2,
                     2,
                     a3,
                     0LL,
                     (__int64)v29,
                     (__int64)&v28 + 4,
                     (__int64)v25,
                     v28,
                     (__int64)&v28,
                     0);
  if ( ObjectProperty >= 0 )
  {
LABEL_29:
    DeclarativeFilterList = CmGetDeclarativeFilterList(
                              a1,
                              a4,
                              (wchar_t *)v30,
                              v13,
                              (__int64)v19,
                              0LL,
                              0,
                              (unsigned int *)&v28);
    ObjectProperty = DeclarativeFilterList;
    if ( !DeclarativeFilterList )
    {
      ObjectProperty = -1073741762;
      goto LABEL_44;
    }
    if ( DeclarativeFilterList != -1073741789 )
    {
LABEL_44:
      if ( !v13 )
        goto LABEL_47;
      goto LABEL_45;
    }
    v14 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v28, 0x52504E50u);
    if ( !v14 )
      goto LABEL_33;
    ObjectProperty = CmGetDeclarativeFilterList(
                       a1,
                       a4,
                       (wchar_t *)v30,
                       v13,
                       (__int64)v19,
                       v14,
                       v28,
                       (unsigned int *)&v28);
    if ( ObjectProperty < 0 )
      goto LABEL_44;
    v22 = a3;
    PnpSetObjectProperty(a1, a2, 2, 0LL, (__int64)v31, 8210, (__int64)v14, v28, 0);
LABEL_15:
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                a1,
                                                a2,
                                                v22,
                                                a6,
                                                (__int64)&v28 + 4,
                                                0LL,
                                                0,
                                                (__int64)&v28);
    ObjectProperty = InstallerClassMappedPropertyFromRegProp;
    if ( InstallerClassMappedPropertyFromRegProp == -1073741275 )
    {
      LODWORD(v28) = 0;
LABEL_41:
      ObjectProperty = CmMergeFilterLists(v14, (wchar_t *)P, a9, a10);
      if ( (int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789 )
        *a7 = 8210;
      goto LABEL_44;
    }
    if ( InstallerClassMappedPropertyFromRegProp != -1073741789 )
      goto LABEL_44;
    if ( !(_DWORD)v28 || !a9 )
      goto LABEL_41;
    P = (PVOID)ExAllocatePool2(0x100uLL, (unsigned int)v28, 0x52504E50u);
    if ( P )
    {
      ObjectProperty = CmGetInstallerClassMappedPropertyFromRegProp(
                         a1,
                         a2,
                         a3,
                         a6,
                         (__int64)&v28 + 4,
                         (__int64)P,
                         v28,
                         (__int64)&v28);
      if ( ObjectProperty < 0 )
        goto LABEL_44;
      goto LABEL_41;
    }
LABEL_33:
    ObjectProperty = -1073741801;
    goto LABEL_44;
  }
LABEL_45:
  if ( v13 != v19 )
    ExFreePoolWithTag(v13, 0);
LABEL_47:
  if ( v14 )
LABEL_48:
    ExFreePoolWithTag(v14, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  return (unsigned int)ObjectProperty;
}
