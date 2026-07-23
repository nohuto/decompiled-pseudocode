/*
 * XREFs of _CmGetDeviceCompoundFiltersWorker @ 0x140A7B2F8
 * Callers:
 *     _CmGetDeviceCompoundFilters @ 0x1409AD640 (_CmGetDeviceCompoundFilters.c)
 * Callees:
 *     _CmGetDeclarativeFilterList @ 0x14081EC9C (_CmGetDeclarativeFilterList.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _RegRtlQueryInfoKey @ 0x14097EFD8 (_RegRtlQueryInfoKey.c)
 *     _CmMergeFilterLists @ 0x1409AADB4 (_CmMergeFilterLists.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409ACEE0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceCompoundFiltersWorker(
        _QWORD *a1,
        WCHAR *a2,
        void *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        wchar_t *a8,
        unsigned int a9,
        unsigned int *a10)
{
  wchar_t *v13; // rsi
  wchar_t *v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // r15
  wchar_t *v19; // r12
  const wchar_t *Pool2; // rax
  int ObjectProperty; // ebx
  __int64 v22; // rbx
  int DeviceMappedPropertyFromRegProp; // eax
  int v24; // eax
  WCHAR *v25; // r15
  void *v26; // rbx
  void *v27; // rax
  int DeclarativeFilterList; // eax
  __int64 v30; // [rsp+30h] [rbp-69h]
  int v31; // [rsp+68h] [rbp-31h] BYREF
  __int64 *v32; // [rsp+70h] [rbp-29h] BYREF
  PVOID v33; // [rsp+78h] [rbp-21h]
  __int64 *v34; // [rsp+80h] [rbp-19h]
  PVOID P; // [rsp+88h] [rbp-11h]
  __int64 v36; // [rsp+E8h] [rbp+4Fh] BYREF
  WCHAR *v37; // [rsp+F0h] [rbp+57h]
  void *v38; // [rsp+F8h] [rbp+5Fh]
  __int64 v39; // [rsp+100h] [rbp+67h]

  v39 = (__int64)a4;
  v38 = a3;
  v37 = a2;
  v31 = 0;
  LODWORD(v32) = 0;
  P = 0LL;
  v33 = 0LL;
  LODWORD(v36) = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( (int)RegRtlQueryInfoKey(a4, &v32, 0LL, 0LL, 0LL, 0LL) < 0 || !(_DWORD)v32 )
    return (unsigned int)-1073741275;
  if ( *(_DWORD *)(a5 + 16) != 22 )
    goto LABEL_8;
  v15 = *(_QWORD *)a5 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a5 == DEVPKEY_Device_CompoundUpperFilters )
    v15 = *(_QWORD *)(a5 + 8) - 0x293B573F92A15394LL;
  if ( v15 )
  {
LABEL_8:
    v16 = DEVPKEY_Device_LowerFilterCache;
    v17 = DEVPKEY_Device_LowerFilterLevels;
    v18 = DEVPKEY_Device_LowerFilterDefaultLevel;
    v19 = L"*Lower";
  }
  else
  {
    v16 = DEVPKEY_Device_UpperFilterCache;
    v17 = DEVPKEY_Device_UpperFilterLevels;
    v18 = (__int64 *)&DEVPKEY_Device_UpperFilterDefaultLevel;
    v19 = (wchar_t *)L"*Upper";
  }
  v32 = v17;
  v34 = v16;
  if ( (unsigned int)PnpGetObjectProperty(a1, a2, 1u, a3, 0LL, (__int64)v16, &v31, 0LL, 0, (__int64)&v36, 0) == -1073741789
    && v31 == 8210 )
  {
    Pool2 = (const wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v36, 0x52504E50u);
    v14 = (wchar_t *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    ObjectProperty = PnpGetObjectProperty(a1, v37, 1u, a3, 0LL, (__int64)v34, &v31, Pool2, v36, (__int64)&v36, 0);
    if ( ObjectProperty < 0 )
      goto LABEL_48;
    v22 = (__int64)v38;
    goto LABEL_15;
  }
  v24 = PnpGetObjectProperty(a1, a2, 1u, a3, 0LL, (__int64)v18, &v31, 0LL, 0, (__int64)&v36, 0);
  ObjectProperty = v24;
  if ( v24 != -1073741789 )
  {
    if ( v24 == -1073741275 )
    {
      v13 = v19;
      goto LABEL_29;
    }
    goto LABEL_53;
  }
  if ( v31 != 18 )
  {
LABEL_53:
    if ( v31 == 8210 && v24 != -1073739509 && v24 )
      return (unsigned int)ObjectProperty;
    return (unsigned int)-1073741275;
  }
  v13 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v36, 0x52504E50u);
  if ( !v13 )
    return (unsigned int)-1073741801;
  v30 = (__int64)v18;
  v25 = v37;
  ObjectProperty = PnpGetObjectProperty(a1, v37, 1u, v38, 0LL, v30, &v31, v13, v36, (__int64)&v36, 0);
  if ( ObjectProperty < 0 )
    goto LABEL_45;
  v26 = v38;
  if ( (unsigned int)PnpGetObjectProperty(a1, v25, 1u, v38, 0LL, (__int64)v32, &v31, 0LL, 0, (__int64)&v36, 0) != -1073741789 )
  {
    ObjectProperty = -1073741275;
    goto LABEL_45;
  }
  v27 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v36, 0x52504E50u);
  v33 = v27;
  if ( !v27 )
  {
    ObjectProperty = -1073741801;
    goto LABEL_45;
  }
  ObjectProperty = PnpGetObjectProperty(
                     a1,
                     v37,
                     1u,
                     v26,
                     0LL,
                     (__int64)v32,
                     &v31,
                     (const wchar_t *)v27,
                     v36,
                     (__int64)&v36,
                     0);
  if ( ObjectProperty >= 0 )
  {
LABEL_29:
    DeclarativeFilterList = CmGetDeclarativeFilterList(
                              (__int64)a1,
                              v39,
                              (wchar_t *)v33,
                              v13,
                              (__int64)v19,
                              0LL,
                              0,
                              (unsigned int *)&v36);
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
    v14 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v36, 0x52504E50u);
    if ( !v14 )
      goto LABEL_33;
    ObjectProperty = CmGetDeclarativeFilterList(
                       (__int64)a1,
                       v39,
                       (wchar_t *)v33,
                       v13,
                       (__int64)v19,
                       v14,
                       v36,
                       (unsigned int *)&v36);
    if ( ObjectProperty < 0 )
      goto LABEL_44;
    v22 = (__int64)v38;
    PnpSetObjectProperty((__int64)a1, (__int64)v37, 1, (__int64)v38, 0LL, (__int64)v34, 8210, (__int64)v14, v36, 0);
LABEL_15:
    DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                        (__int64)a1,
                                        (__int64)v37,
                                        v22,
                                        a6,
                                        &v31,
                                        0LL,
                                        0,
                                        (unsigned int *)&v36,
                                        0);
    ObjectProperty = DeviceMappedPropertyFromRegProp;
    if ( DeviceMappedPropertyFromRegProp == -1073741275 )
    {
      LODWORD(v36) = 0;
LABEL_41:
      ObjectProperty = CmMergeFilterLists(v14, (wchar_t *)P, v19, a8, a9, a10);
      if ( (int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789 )
        *a7 = 8210;
      goto LABEL_44;
    }
    if ( DeviceMappedPropertyFromRegProp != -1073741789 )
      goto LABEL_44;
    if ( !(_DWORD)v36 || !a9 )
      goto LABEL_41;
    P = (PVOID)ExAllocatePool2(0x100uLL, (unsigned int)v36, 0x52504E50u);
    if ( P )
    {
      ObjectProperty = CmGetDeviceMappedPropertyFromRegProp(
                         (__int64)a1,
                         (__int64)v37,
                         (__int64)v38,
                         a6,
                         &v31,
                         (GUID *)P,
                         v36,
                         (unsigned int *)&v36,
                         0);
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
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  return (unsigned int)ObjectProperty;
}
