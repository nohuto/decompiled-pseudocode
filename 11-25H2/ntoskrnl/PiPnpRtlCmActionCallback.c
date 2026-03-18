/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x1408C95E0
 * Callers:
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     _CmOpenCommonClassRegKey @ 0x1408CA33C (_CmOpenCommonClassRegKey.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095A430 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409A013C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmGetInstallerClassRegProp @ 0x1409AC648 (_CmGetInstallerClassRegProp.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _CmClassPropertyRead @ 0x14045A8FC (_CmClassPropertyRead.c)
 *     McTemplateK0zjdd_EtwWriteTransfer @ 0x1405A3264 (McTemplateK0zjdd_EtwWriteTransfer.c)
 *     _CmClassPropertyWrite @ 0x140690D80 (_CmClassPropertyWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406EF194 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListRemoveObject @ 0x1406EF29C (PiDmListRemoveObject.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14071A6B4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x14071A6F8 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14071A718 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14071A778 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14071A824 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14071A968 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14071AC18 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiDmListRemoveList @ 0x14071B094 (PiDmListRemoveList.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     PnpIsNullGuid @ 0x140838480 (PnpIsNullGuid.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD1D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408D0B70 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmGetObject @ 0x1408D1680 (PiDmGetObject.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1408D1AE8 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14094E730 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14094FB0C (PiPnpRtlGetFilteredDeviceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x14094FF28 (PiDmGetCmObjectListFromCache.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14094FF80 (PiDmObjectGetCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140950170 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _CmIsRootEnumeratedDevice @ 0x140954D08 (_CmIsRootEnumeratedDevice.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     PnpIsValidGuidString @ 0x14095AE04 (PnpIsValidGuidString.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140968AC8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140968B58 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x14096AA08 (PiDmListAddObject.c)
 *     _CmGetInstallerClassRegProp @ 0x1409AC648 (_CmGetInstallerClassRegProp.c)
 *     _CmIsDeviceRegPropWritable @ 0x140A4FB50 (_CmIsDeviceRegPropWritable.c)
 *     PiDmListAddList @ 0x140A81AD0 (PiDmListAddList.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB53E8 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(void *a1, PCWSTR SourceString, unsigned int a3, int a4, int a5, __int64 a6)
{
  PVOID v8; // r13
  unsigned int v9; // esi
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int FilteredDeviceInterfaceList; // eax
  unsigned int v15; // eax
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  ULONG_PTR *v20; // r14
  ULONG_PTR v21; // rdx
  ULONG_PTR v22; // rdx
  int v23; // eax
  void *Pool2; // r13
  int v25; // eax
  unsigned int v26; // r10d
  int DeviceRegProp; // eax
  int v28; // esi
  bool v29; // sf
  __int64 v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // r9d
  __int64 v38; // rcx
  __int64 v39; // rcx
  WCHAR *v40; // rsi
  bool IsNullGuid; // al
  __int64 v42; // r8
  __int64 *v43; // rdx
  size_t *v44; // rcx
  _QWORD *v45; // rax
  _DWORD *v46; // rdx
  ULONG_PTR *v47; // rsi
  ULONG_PTR v48; // rdx
  ULONG_PTR v49; // rdx
  ULONG_PTR v50; // rdx
  unsigned int v51; // r15d
  __int64 v52; // rdx
  _DWORD *v53; // rsi
  int v54; // ebx
  int v55; // eax
  PVOID v56; // r15
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // eax
  int v61; // eax
  char v62; // r14
  int Object; // r15d
  PVOID v64; // rsi
  ULONG_PTR *v65; // rsi
  ULONG_PTR v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  ULONG_PTR v69; // rdx
  char v70[8]; // [rsp+50h] [rbp-39h] BYREF
  PVOID P; // [rsp+58h] [rbp-31h] BYREF
  int v72; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  __int64 v74; // [rsp+78h] [rbp-11h]
  char i; // [rsp+80h] [rbp-9h]
  int v76; // [rsp+81h] [rbp-8h]
  __int16 v77; // [rsp+85h] [rbp-4h]
  char v78; // [rsp+87h] [rbp-2h]
  size_t Size[2]; // [rsp+88h] [rbp-1h] BYREF

  P = a1;
  v8 = a1;
  v9 = -1073741822;
  if ( a4 > 13 )
  {
    v17 = a4 - 14;
    if ( !v17 )
    {
      if ( a5 != 1 )
      {
        if ( a3 == 5 )
        {
          v65 = *(ULONG_PTR **)(a6 + 8);
          if ( *(int *)a6 >= 0 )
          {
            v66 = v65[1];
            v70[0] = 0;
            if ( v66 )
            {
              if ( *v65 )
              {
                PiDmListRemoveObject(3, v66, *v65, (__int64)v70);
                if ( v70[0] )
                  PiDmListRemoveList(v67, v65[1], v68, *v65);
              }
            }
          }
        }
        else
        {
          if ( a3 != 6 )
            return 0;
          v65 = *(ULONG_PTR **)(a6 + 8);
          if ( *(int *)a6 >= 0 )
          {
            v69 = v65[1];
            if ( v69 )
            {
              if ( *v65 )
                PiDmListRemoveObject(5, v69, *v65, (__int64)v70);
            }
          }
        }
        PiPnpRtlFreePanelRemoveInfo((void **)v65);
        return 0;
      }
      if ( a3 == 5 )
      {
        v38 = *(_QWORD *)(a6 + 24);
        P = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(v38, (__int64)SourceString, (void ***)&P);
      }
      else
      {
        if ( a3 != 6 )
          return v9;
        v39 = *(_QWORD *)(a6 + 24);
        P = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherPanelRemoveInfo(v39, (__int64)SourceString, (void ***)&P);
      }
      goto LABEL_105;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 || a5 != 1 || (*(_DWORD *)(a6 + 80) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceInterfaceList(a6);
      }
      else
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceList(a6);
      }
LABEL_27:
      if ( FilteredDeviceInterfaceList == -1073741802 )
        return 0;
LABEL_28:
      *(_DWORD *)a6 = FilteredDeviceInterfaceList;
      return (unsigned int)-1073741536;
    }
    v62 = 1;
    if ( a5 != 1 )
      return v9;
    if ( a3 == 5 )
    {
      if ( (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      P = 0LL;
      Object = PiDmGetObject(5LL, SourceString, &P);
      if ( Object < 0 )
        goto LABEL_175;
      v64 = P;
      DestinationString.Buffer = *(wchar_t **)(a6 + 24);
      v74 = *(_QWORD *)(a6 + 32);
      *(_QWORD *)&DestinationString.Length = v8;
      for ( i = 1; v62; v62 = i )
      {
        i = 0;
        Object = PiDmListEnumObjectsWithCallback(3LL, v64, PiPnpRtlEnumDevicesCallback, &DestinationString);
        if ( Object < 0 )
          break;
      }
    }
    else
    {
      if ( a3 != 6 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      P = 0LL;
      Object = PiDmGetObject(6LL, SourceString, &P);
      if ( Object < 0 )
        goto LABEL_175;
      v64 = P;
      DestinationString.Buffer = *(wchar_t **)(a6 + 24);
      v74 = *(_QWORD *)(a6 + 32);
      *(_QWORD *)&DestinationString.Length = v8;
      for ( i = 1; v62; v62 = i )
      {
        i = 0;
        Object = PiDmListEnumObjectsWithCallback(5LL, v64, PiPnpRtlEnumDevicesCallback, &DestinationString);
        if ( Object < 0 )
          break;
      }
    }
    if ( v64 )
      PiDmObjectRelease(v64);
LABEL_175:
    *(_DWORD *)a6 = Object;
    return (unsigned int)-1073741536;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 )
      return 0;
    if ( a3 == 5 )
    {
      if ( *(int *)a6 < 0 )
        return 0;
      P = 0LL;
      Size[0] = 0LL;
      v53 = 0LL;
      v70[0] = 0;
      v55 = PiDmGetObject(5LL, SourceString, &P);
      v56 = P;
      if ( v55 >= 0 )
      {
        v57 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), Size);
        v53 = (_DWORD *)Size[0];
        if ( v57 >= 0 )
        {
          PiDmListAddObject(3LL, v56, Size[0], v70);
          if ( !v70[0] )
            PiDmListAddList(v58, v56, v59, v53);
        }
      }
    }
    else
    {
      if ( a3 != 6 || *(int *)a6 < 0 )
        return 0;
      P = 0LL;
      Size[0] = 0LL;
      v53 = 0LL;
      v60 = PiDmGetObject(6LL, SourceString, &P);
      v56 = P;
      if ( v60 >= 0 )
      {
        v61 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), Size);
        v53 = (_DWORD *)Size[0];
        if ( v61 >= 0 )
          PiDmListAddObject(5LL, v56, Size[0], v70);
      }
    }
    if ( v56 )
      PiDmObjectRelease(v56);
    if ( !v53 )
      return 0;
    goto LABEL_142;
  }
  v10 = a4 - 2;
  if ( !v10 )
  {
    if ( a5 == 1 )
    {
      v31 = CmMapCmObjectTypeToPnpObjectType(a3);
      v33 = PiDmAddCacheReferenceForObject(v31, v32, 0LL);
      *(_DWORD *)a6 = v33;
      return (v33 >> 31) & 0xC0000120;
    }
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v35 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiDmRemoveCacheReferenceForObject(v35, v36);
      return 0;
    }
    P = 0LL;
    v51 = CmMapCmObjectTypeToPnpObjectType(a3);
    if ( (int)PiDmGetObject(v51, v52, &P) < 0 )
      return 0;
    v53 = P;
    KsepCacheLock((unsigned __int64 *)P);
    v54 = v53[8];
    v53[8] = v54 | 1;
    PiDmObjectReleaseLock((ULONG_PTR)v53);
    if ( (v54 & 1) != 0 )
      PiDmRemoveCacheReferenceForObject(v51, SourceString);
LABEL_142:
    PiDmObjectRelease(v53);
    return 0;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 == 1 )
    {
      if ( a3 == 1 )
      {
        P = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherDeviceDeleteInfo(SourceString, (__int64 *)&P);
      }
      else
      {
        if ( a3 != 3 )
          return v9;
        P = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo((__int64)SourceString, (void ***)&P);
      }
LABEL_105:
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList >= 0 )
      {
        *(_QWORD *)(a6 + 8) = P;
        return v9;
      }
      goto LABEL_28;
    }
    if ( a3 != 1 )
    {
      if ( a3 == 3 )
      {
        v47 = *(ULONG_PTR **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v47 )
        {
          v48 = v47[1];
          if ( v48 )
            PiDmListRemoveObject(0, v48, *v47, 0LL);
          v49 = v47[2];
          if ( v49 )
            PiDmListRemoveObject(1, v49, *v47, 0LL);
          v50 = v47[3];
          if ( v50 )
            PiDmListRemoveObject(2, v50, *v47, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo((void **)v47);
      }
      return 0;
    }
    v40 = *(WCHAR **)(a6 + 8);
    DestinationString = 0LL;
    *(_OWORD *)Size = 0LL;
    RtlInitUnicodeString(&DestinationString, v40 + 2);
    if ( RtlGUIDFromString(&DestinationString, (GUID *)Size) < 0 )
      *(_OWORD *)Size = 0LL;
    if ( *(int *)a6 < 0 )
    {
      if ( (byte_140EEFA6A & 0x20) != 0 )
      {
        IsNullGuid = PnpIsNullGuid(Size);
        v43 = KMPnPEvt_DeviceDelete_Failure;
        goto LABEL_115;
      }
    }
    else if ( (byte_140EEFA6A & 0x10) != 0 )
    {
      IsNullGuid = PnpIsNullGuid(Size);
      v43 = KMPnPEvt_DeviceDelete_Success;
LABEL_115:
      v44 = Size;
      if ( IsNullGuid )
        v44 = 0LL;
      McTemplateK0zjdd_EtwWriteTransfer(
        (__int64)v44,
        (const EVENT_DESCRIPTOR *)v43,
        v42,
        SourceString,
        (__int64)v44,
        *(_DWORD *)v40,
        *(_DWORD *)a6);
    }
    if ( *(int *)a6 >= 0 )
    {
      if ( v40[2] )
      {
        P = (PVOID)MEMORY[0xFFFFF78000000014];
        PnpSetObjectProperty(
          (int)v8,
          (_DWORD)v40 + 4,
          2,
          0LL,
          (__int64)&DEVPKEY_DeviceClass_LastDeleteDate,
          16,
          (__int64)&P,
          8,
          0);
      }
      if ( (unsigned __int8)CmIsRootEnumeratedDevice(SourceString) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( DestinationString.Length >= 2u )
        {
          if ( *DestinationString.Buffer )
          {
            v45 = (_QWORD *)PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1953261124LL);
            if ( v45 )
            {
              v46 = (_DWORD *)v45[8];
              if ( v46 )
                *v46 |= 1u;
              ObfDereferenceObject(v45);
            }
          }
        }
      }
    }
    PiPnpRtlFreeDeviceDeleteInfo(v40);
    return 0;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v9;
    FilteredDeviceInterfaceList = PiDmGetCmObjectListFromCache(
                                    a3,
                                    *(_QWORD *)(a6 + 16),
                                    *(_QWORD *)(a6 + 24),
                                    *(_QWORD *)(a6 + 32),
                                    *(_DWORD *)(a6 + 40),
                                    *(_QWORD *)(a6 + 48));
    goto LABEL_27;
  }
  v13 = v12 - 5;
  if ( !v13 )
  {
    if ( a5 == 1 )
    {
      if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
        goto LABEL_14;
      FilteredDeviceInterfaceList = PiDmObjectGetCachedCmProperty(
                                      a3,
                                      (_DWORD)SourceString,
                                      a3,
                                      *(_DWORD *)(a6 + 24),
                                      *(_QWORD *)(a6 + 32),
                                      *(_QWORD *)(a6 + 40),
                                      *(_QWORD *)(a6 + 48));
      if ( FilteredDeviceInterfaceList < 0
        && FilteredDeviceInterfaceList != -1073741772
        && FilteredDeviceInterfaceList != -1073741275
        && FilteredDeviceInterfaceList != -1073741789 )
      {
        v9 = 0;
LABEL_14:
        if ( !*(_QWORD *)(a6 + 16) )
        {
          v15 = CmMapCmObjectTypeToPnpObjectType(a3);
          PiPnpRtlCacheObjectBaseKey(v8, SourceString, v15);
        }
        return v9;
      }
      goto LABEL_28;
    }
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
        PiDmObjectUpdateCachedCmProperty(a3, (int)SourceString, a3, *(_DWORD *)(a6 + 24), 0, 0LL, 0);
    }
    else
    {
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)SourceString,
        a3,
        *(_DWORD *)(a6 + 24),
        **(_DWORD **)(a6 + 32),
        *(PCWSTR *)(a6 + 40),
        **(_DWORD **)(a6 + 48));
    }
    return 0;
  }
  if ( v13 != 1 )
    return v9;
  if ( a5 == 1 )
  {
    v9 = 0;
    if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0 )
    {
LABEL_76:
      if ( *(_QWORD *)(a6 + 16) )
      {
LABEL_66:
        if ( a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
          return v9;
        v30 = 0LL;
        P = 0LL;
        if ( *(_DWORD *)(a6 + 28) == 1
          && *(_DWORD *)(a6 + 40) == 78
          && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
        {
          v30 = *(_QWORD *)(a6 + 32);
        }
        FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(SourceString, v30, &P);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList >= 0 )
        {
          *(_QWORD *)(a6 + 8) = P;
          return v9;
        }
        goto LABEL_28;
      }
      v34 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiPnpRtlCacheObjectBaseKey(v8, SourceString, v34);
      v29 = (v9 & 0x80000000) != 0;
LABEL_65:
      if ( v29 )
        return v9;
      goto LABEL_66;
    }
    v23 = *(_DWORD *)(a6 + 40);
    Pool2 = 0LL;
    v72 = 0;
    if ( !v23 || (Pool2 = (void *)ExAllocatePool2(0x100uLL)) == 0LL )
    {
      if ( *(_DWORD *)(a6 + 40) )
      {
LABEL_75:
        v8 = P;
        goto LABEL_76;
      }
    }
    v25 = *(_DWORD *)(a6 + 40);
    v70[0] = 1;
    LODWORD(Size[0]) = v25;
    if ( a3 == 1 )
    {
      if ( (int)CmIsDeviceRegPropWritable(a3 - 1, *(unsigned int *)(a6 + 24), v70) < 0 || v70[0] )
      {
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          SourceString,
                          *(_QWORD *)(a6 + 16),
                          v26,
                          (__int64)&v72,
                          (__int64)Pool2,
                          (__int64)Size,
                          0);
        goto LABEL_55;
      }
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_82;
      v37 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v37 - 1) > 0x24 || !CmClassPropertyRead(v37) || CmClassPropertyWrite(v37) )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          PiPnpRtlCtx,
                          (_DWORD)SourceString,
                          *(_QWORD *)(a6 + 16),
                          v37,
                          (__int64)&v72,
                          (__int64)Pool2,
                          (__int64)Size);
LABEL_55:
        v28 = DeviceRegProp;
        if ( DeviceRegProp >= 0 )
        {
          if ( v72 != *(_DWORD *)(a6 + 28) || LODWORD(Size[0]) != *(_DWORD *)(a6 + 40) )
            goto LABEL_89;
          if ( !memcmp(Pool2, *(const void **)(a6 + 32), LODWORD(Size[0])) )
          {
LABEL_61:
            *(_DWORD *)a6 = v28;
            v9 = -1073741536;
            goto LABEL_62;
          }
        }
        if ( v28 == -1073741275 )
        {
          if ( !*(_DWORD *)(a6 + 40) )
            goto LABEL_61;
LABEL_82:
          v9 = 0;
LABEL_62:
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x47706E50u);
          v29 = (v9 & 0x80000000) != 0;
          if ( v9 )
            goto LABEL_65;
          goto LABEL_75;
        }
LABEL_89:
        if ( v28 == -1073741790 )
          goto LABEL_61;
        goto LABEL_82;
      }
    }
    v28 = -1073741790;
    goto LABEL_61;
  }
  if ( *(int *)a6 >= 0 )
  {
    PiDmObjectUpdateCachedCmProperty(
      a3,
      (int)SourceString,
      a3,
      *(_DWORD *)(a6 + 24),
      *(_DWORD *)(a6 + 28),
      *(PCWSTR *)(a6 + 32),
      *(_DWORD *)(a6 + 40));
    v9 = 0;
  }
  if ( a3 == 1 && *(_DWORD *)(a6 + 24) == 9 )
  {
    v20 = *(ULONG_PTR **)(a6 + 8);
    if ( *(int *)a6 >= 0 && *v20 )
    {
      v21 = v20[1];
      if ( v21 )
        PiDmListRemoveObject(4, v21, *v20, 0LL);
      v22 = v20[2];
      if ( v22 )
        PiDmListAddObject(4LL, v22, *v20, 0LL);
    }
    PiPnpRtlFreeInstallerClassChangeInfo(v20);
  }
  return v9;
}
