/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x1408C4E80
 * Callers:
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetInstallerClassRegProp @ 0x14097F09C (_CmGetInstallerClassRegProp.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409AA710 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _CmDevicePropertyRead @ 0x140434BB0 (_CmDevicePropertyRead.c)
 *     _CmClassPropertyRead @ 0x14044F170 (_CmClassPropertyRead.c)
 *     _CmDevicePropertyWrite @ 0x140483440 (_CmDevicePropertyWrite.c)
 *     McTemplateK0zjdd_EtwWriteTransfer @ 0x1405A39B4 (McTemplateK0zjdd_EtwWriteTransfer.c)
 *     _CmClassPropertyWrite @ 0x14069D150 (_CmClassPropertyWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406F8C14 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListRemoveObject @ 0x1406F8D1C (PiDmListRemoveObject.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x1407241C4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x140724208 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140724228 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140724288 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140724334 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140724478 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140724728 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiDmListRemoveList @ 0x140724BA4 (PiDmListRemoveList.c)
 *     PiDmListAddObject @ 0x1408B0CE4 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1408B2B9C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x1408B2D60 (PiDmLookupObject.c)
 *     PnpIsValidGuidString @ 0x1408B5960 (PnpIsValidGuidString.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x1408B63E8 (_CmIsRootEnumeratedDevice.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408C9D00 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD070 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 *     PnpIsNullGuid @ 0x1408D0B80 (PnpIsNullGuid.c)
 *     _CmGetInstallerClassRegProp @ 0x14097F09C (_CmGetInstallerClassRegProp.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1409C3E70 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1409C4380 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1409C479C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x1409C4A08 (PiDmGetCmObjectListFromCache.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1409C4A60 (PiDmObjectGetCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409C4C50 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmListAddList @ 0x140A80DA0 (PiDmListAddList.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB4894 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(void *a1, WCHAR *a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // r15d
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
  ULONG_PTR v23; // rax
  void *Pool2; // r13
  __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  unsigned int v29; // r9d
  __int64 v30; // rcx
  int DeviceRegProp; // eax
  int v32; // esi
  bool v33; // sf
  _DWORD *v34; // rsi
  int v35; // r13d
  __int64 v36; // rax
  void *v37; // r15
  unsigned int v38; // eax
  __int64 v39; // rdx
  void *v40; // r8
  int v41; // r9d
  unsigned int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rcx
  WCHAR *v48; // rsi
  char IsNullGuid; // al
  __int64 v50; // r8
  __int64 *v51; // rdx
  size_t *v52; // rcx
  _QWORD *v53; // rax
  _DWORD *v54; // rdx
  ULONG_PTR *v55; // rsi
  ULONG_PTR v56; // rdx
  ULONG_PTR v57; // rdx
  ULONG_PTR v58; // rdx
  unsigned int v59; // r15d
  __int64 v60; // rdx
  int v61; // ebx
  void *v62; // r8
  int v63; // eax
  int v64; // eax
  char v65; // r14
  int Object; // r15d
  PVOID v67; // rsi
  ULONG_PTR *v68; // rsi
  ULONG_PTR v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  ULONG_PTR v72; // rdx
  __int64 v73; // [rsp+20h] [rbp-69h]
  char v74[8]; // [rsp+50h] [rbp-39h] BYREF
  PVOID P; // [rsp+58h] [rbp-31h] BYREF
  int v76; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  __int64 v78; // [rsp+78h] [rbp-11h]
  char i; // [rsp+80h] [rbp-9h]
  int v80; // [rsp+81h] [rbp-8h]
  __int16 v81; // [rsp+85h] [rbp-4h]
  char v82; // [rsp+87h] [rbp-2h]
  size_t Size[2]; // [rsp+88h] [rbp-1h] BYREF

  v6 = a3;
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
        if ( (_DWORD)a3 == 5 )
        {
          v68 = *(ULONG_PTR **)(a6 + 8);
          if ( *(int *)a6 >= 0 )
          {
            v69 = v68[1];
            v74[0] = 0;
            if ( v69 )
            {
              if ( *v68 )
              {
                PiDmListRemoveObject(3, v69, *v68, (__int64)v74);
                if ( v74[0] )
                  PiDmListRemoveList(v70, v68[1], v71, *v68);
              }
            }
          }
        }
        else
        {
          if ( (_DWORD)a3 != 6 )
            return 0;
          v68 = *(ULONG_PTR **)(a6 + 8);
          if ( *(int *)a6 >= 0 )
          {
            v72 = v68[1];
            if ( v72 )
            {
              if ( *v68 )
                PiDmListRemoveObject(5, v72, *v68, (__int64)v74);
            }
          }
        }
        PiPnpRtlFreePanelRemoveInfo((void **)v68);
        return 0;
      }
      if ( (_DWORD)a3 == 5 )
      {
        v46 = *(_QWORD *)(a6 + 24);
        P = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(v46, (__int64)a2, (void ***)&P);
      }
      else
      {
        if ( (_DWORD)a3 != 6 )
          return v9;
        v47 = *(_QWORD *)(a6 + 24);
        P = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherPanelRemoveInfo(v47, (__int64)a2, (void ***)&P);
      }
      goto LABEL_121;
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
    v65 = 1;
    if ( a5 != 1 )
      return v9;
    if ( (_DWORD)a3 == 5 )
    {
      if ( (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v80 = 0;
      v81 = 0;
      v82 = 0;
      P = 0LL;
      Object = PiDmGetObject(5LL, a2, &P);
      if ( Object < 0 )
        goto LABEL_179;
      v67 = P;
      DestinationString.Buffer = *(wchar_t **)(a6 + 24);
      v78 = *(_QWORD *)(a6 + 32);
      *(_QWORD *)&DestinationString.Length = v8;
      for ( i = 1; v65; v65 = i )
      {
        i = 0;
        Object = PiDmListEnumObjectsWithCallback(3LL, v67, PiPnpRtlEnumDevicesCallback, &DestinationString, v73);
        if ( Object < 0 )
          break;
      }
    }
    else
    {
      if ( (_DWORD)a3 != 6 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v80 = 0;
      v81 = 0;
      v82 = 0;
      P = 0LL;
      Object = PiDmGetObject(6LL, a2, &P);
      if ( Object < 0 )
        goto LABEL_179;
      v67 = P;
      DestinationString.Buffer = *(wchar_t **)(a6 + 24);
      v78 = *(_QWORD *)(a6 + 32);
      *(_QWORD *)&DestinationString.Length = v8;
      for ( i = 1; v65; v65 = i )
      {
        i = 0;
        Object = PiDmListEnumObjectsWithCallback(5LL, v67, PiPnpRtlEnumDevicesCallback, &DestinationString, v73);
        if ( Object < 0 )
          break;
      }
    }
    if ( v67 )
      PiDmObjectRelease(v67);
LABEL_179:
    *(_DWORD *)a6 = Object;
    return (unsigned int)-1073741536;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 )
      return 0;
    if ( (_DWORD)a3 == 5 )
    {
      if ( *(int *)a6 < 0 )
        return 0;
      Size[0] = 0LL;
      v34 = 0LL;
      v74[0] = 0;
      v35 = 0;
      PiDmObjectManagerAcquireSharedLock((struct _ERESOURCE *)&PiDmDeviceContainerManager);
      v36 = PiDmLookupObject((__int64)&PiDmDeviceContainerManager, a2);
      v37 = (void *)v36;
      if ( v36 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v36 + 8), 1u);
        v34 = (_DWORD *)Size[0];
      }
      else
      {
        v35 = -1073741772;
      }
      PiDmObjectManagerReleaseLock((struct _ERESOURCE *)&PiDmDeviceContainerManager);
      if ( v35 >= 0 )
      {
        v43 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), Size);
        v34 = (_DWORD *)Size[0];
        if ( v43 >= 0 )
        {
          PiDmListAddObject(3, (ULONG_PTR)v37, Size[0], (__int64)v74);
          if ( !v74[0] )
            PiDmListAddList(v44, v37, v45, v34);
        }
      }
    }
    else
    {
      if ( (_DWORD)a3 != 6 || *(int *)a6 < 0 )
        return 0;
      Size[0] = 0LL;
      P = 0LL;
      v34 = 0LL;
      v63 = PiDmGetObject(6LL, a2, Size);
      v37 = (void *)Size[0];
      if ( v63 >= 0 )
      {
        v64 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &P);
        v34 = P;
        if ( v64 >= 0 )
          PiDmListAddObject(5, (ULONG_PTR)v37, (ULONG_PTR)P, (__int64)v74);
      }
    }
    if ( v37 )
      PiDmObjectRelease(v37);
    if ( !v34 )
      return 0;
LABEL_90:
    PiDmObjectRelease(v34);
    return 0;
  }
  v10 = a4 - 2;
  if ( !v10 )
  {
    if ( a5 == 1 )
    {
      v26 = CmMapCmObjectTypeToPnpObjectType((unsigned int)a3);
      v28 = PiDmAddCacheReferenceForObject(v26, v27, 0LL);
      *(_DWORD *)a6 = v28;
      return (v28 >> 31) & 0xC0000120;
    }
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v38 = CmMapCmObjectTypeToPnpObjectType((unsigned int)a3);
      PiDmRemoveCacheReferenceForObject(v38, v39, v40);
      return 0;
    }
    P = 0LL;
    v59 = CmMapCmObjectTypeToPnpObjectType((unsigned int)a3);
    if ( (int)PiDmGetObject(v59, v60, &P) < 0 )
      return 0;
    v34 = P;
    KsepCacheLock((unsigned __int64 *)P);
    v61 = v34[8];
    v34[8] = v61 | 1;
    PiDmObjectReleaseLock((ULONG_PTR)v34);
    if ( (v61 & 1) != 0 )
      PiDmRemoveCacheReferenceForObject(v59, (__int64)a2, v62);
    goto LABEL_90;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 == 1 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        P = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherDeviceDeleteInfo(a2, (__int64 *)&P);
      }
      else
      {
        if ( (_DWORD)a3 != 3 )
          return v9;
        P = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo((__int64)a2, (void ***)&P);
      }
LABEL_121:
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList >= 0 )
      {
        *(_QWORD *)(a6 + 8) = P;
        return v9;
      }
      goto LABEL_28;
    }
    if ( (_DWORD)a3 != 1 )
    {
      if ( (_DWORD)a3 == 3 )
      {
        v55 = *(ULONG_PTR **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v55 )
        {
          v56 = v55[1];
          if ( v56 )
            PiDmListRemoveObject(0, v56, *v55, 0LL);
          v57 = v55[2];
          if ( v57 )
            PiDmListRemoveObject(1, v57, *v55, 0LL);
          v58 = v55[3];
          if ( v58 )
            PiDmListRemoveObject(2, v58, *v55, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo((void **)v55);
      }
      return 0;
    }
    v48 = *(WCHAR **)(a6 + 8);
    DestinationString = 0LL;
    *(_OWORD *)Size = 0LL;
    RtlInitUnicodeString(&DestinationString, v48 + 2);
    if ( RtlGUIDFromString(&DestinationString, (GUID *)Size) < 0 )
      *(_OWORD *)Size = 0LL;
    if ( *(int *)a6 < 0 )
    {
      if ( (byte_140EEFF62 & 0x20) != 0 )
      {
        IsNullGuid = PnpIsNullGuid(Size);
        v51 = KMPnPEvt_DeviceDelete_Failure;
        goto LABEL_131;
      }
    }
    else if ( (byte_140EEFF62 & 0x10) != 0 )
    {
      IsNullGuid = PnpIsNullGuid(Size);
      v51 = KMPnPEvt_DeviceDelete_Success;
LABEL_131:
      v52 = Size;
      if ( IsNullGuid )
        v52 = 0LL;
      McTemplateK0zjdd_EtwWriteTransfer(
        (__int64)v52,
        (const EVENT_DESCRIPTOR *)v51,
        v50,
        a2,
        (__int64)v52,
        *(_DWORD *)v48,
        *(_DWORD *)a6);
    }
    if ( *(int *)a6 >= 0 )
    {
      if ( v48[2] )
      {
        P = (PVOID)MEMORY[0xFFFFF78000000014];
        PnpSetObjectProperty(
          (__int64)v8,
          (__int64)(v48 + 2),
          2,
          0LL,
          0LL,
          (__int64)DEVPKEY_DeviceClass_LastDeleteDate,
          16,
          (__int64)&P,
          8u,
          0);
      }
      if ( CmIsRootEnumeratedDevice(a2) )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        if ( DestinationString.Length >= 2u )
        {
          if ( *DestinationString.Buffer )
          {
            v53 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
            if ( v53 )
            {
              v54 = (_DWORD *)v53[8];
              if ( v54 )
                *v54 |= 1u;
              ObfDereferenceObject(v53);
            }
          }
        }
      }
    }
    PiPnpRtlFreeDeviceDeleteInfo(v48);
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
                                      (_DWORD)a2,
                                      a3,
                                      *(_DWORD *)(a6 + 24),
                                      *(_QWORD *)(a6 + 32),
                                      *(_QWORD *)(a6 + 40),
                                      *(_QWORD *)(a6 + 48));
      if ( FilteredDeviceInterfaceList < 0
        && FilteredDeviceInterfaceList != -1073741275
        && FilteredDeviceInterfaceList != -1073741789
        && FilteredDeviceInterfaceList != -1073741772 )
      {
        v8 = P;
        v9 = 0;
LABEL_14:
        if ( !*(_QWORD *)(a6 + 16) )
        {
          v15 = CmMapCmObjectTypeToPnpObjectType(v6);
          PiPnpRtlCacheObjectBaseKey(v8, a2, v15);
        }
        return v9;
      }
      goto LABEL_28;
    }
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
        PiDmObjectUpdateCachedCmProperty((unsigned int)a3, a2, a3, *(unsigned int *)(a6 + 24), 0, 0LL, 0);
    }
    else
    {
      PiDmObjectUpdateCachedCmProperty(
        (unsigned int)a3,
        a2,
        a3,
        *(unsigned int *)(a6 + 24),
        **(_DWORD **)(a6 + 32),
        *(_QWORD *)(a6 + 40),
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
LABEL_52:
      if ( *(_QWORD *)(a6 + 16) )
      {
LABEL_53:
        if ( v6 != 1 || *(_DWORD *)(a6 + 24) != 9 )
          return v9;
        v25 = 0LL;
        P = 0LL;
        if ( *(_DWORD *)(a6 + 28) == 1 && *(_DWORD *)(a6 + 40) == 78 && PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
          v25 = *(_QWORD *)(a6 + 32);
        FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v25, &P);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList >= 0 )
        {
          *(_QWORD *)(a6 + 8) = P;
          return v9;
        }
        goto LABEL_28;
      }
      v42 = CmMapCmObjectTypeToPnpObjectType(v6);
      PiPnpRtlCacheObjectBaseKey(v8, a2, v42);
      v33 = (v9 & 0x80000000) != 0;
LABEL_79:
      if ( v33 )
        return v9;
      goto LABEL_53;
    }
    v23 = *(unsigned int *)(a6 + 40);
    Pool2 = 0LL;
    v76 = 0;
    if ( !(_DWORD)v23 || (Pool2 = (void *)ExAllocatePool2(0x100uLL, v23, 0x47706E50u)) == 0LL )
    {
      if ( *(_DWORD *)(a6 + 40) )
      {
LABEL_51:
        v8 = P;
        goto LABEL_52;
      }
    }
    LODWORD(Size[0]) = *(_DWORD *)(a6 + 40);
    if ( v6 == 1 )
    {
      v29 = *(_DWORD *)(a6 + 24);
      if ( v29 - 1 <= 0x24 && CmDevicePropertyRead(v6 - 1, v29) && !CmDevicePropertyWrite(v30, v29) )
      {
LABEL_100:
        v32 = -1073741790;
        goto LABEL_75;
      }
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)a2,
                        *(_QWORD *)(a6 + 16),
                        v29,
                        (__int64)&v76,
                        (__int64)Pool2,
                        (__int64)Size,
                        0);
    }
    else
    {
      if ( v6 != 2 )
      {
LABEL_64:
        v9 = 0;
        goto LABEL_76;
      }
      v41 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v41 - 1) <= 0x24 && CmClassPropertyRead(v41) && !CmClassPropertyWrite(v41) )
        goto LABEL_100;
      DeviceRegProp = CmGetInstallerClassRegProp(
                        PiPnpRtlCtx,
                        (_DWORD)a2,
                        *(_QWORD *)(a6 + 16),
                        v41,
                        (__int64)&v76,
                        (__int64)Pool2,
                        (__int64)Size);
    }
    v32 = DeviceRegProp;
    if ( DeviceRegProp >= 0 )
    {
      if ( v76 != *(_DWORD *)(a6 + 28) || LODWORD(Size[0]) != *(_DWORD *)(a6 + 40) )
        goto LABEL_101;
      if ( !memcmp(Pool2, *(const void **)(a6 + 32), LODWORD(Size[0])) )
        goto LABEL_75;
    }
    if ( v32 == -1073741275 )
    {
      if ( *(_DWORD *)(a6 + 40) )
        goto LABEL_64;
LABEL_75:
      *(_DWORD *)a6 = v32;
      v9 = -1073741536;
LABEL_76:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x47706E50u);
      v33 = (v9 & 0x80000000) != 0;
      if ( v9 )
        goto LABEL_79;
      goto LABEL_51;
    }
LABEL_101:
    if ( v32 != -1073741790 )
      goto LABEL_64;
    goto LABEL_75;
  }
  if ( *(int *)a6 >= 0 )
  {
    PiDmObjectUpdateCachedCmProperty(
      (unsigned int)a3,
      a2,
      a3,
      *(unsigned int *)(a6 + 24),
      *(_DWORD *)(a6 + 28),
      *(_QWORD *)(a6 + 32),
      *(_DWORD *)(a6 + 40));
    v9 = 0;
  }
  if ( v6 == 1 && *(_DWORD *)(a6 + 24) == 9 )
  {
    v20 = *(ULONG_PTR **)(a6 + 8);
    if ( *(int *)a6 >= 0 && *v20 )
    {
      v21 = v20[1];
      if ( v21 )
        PiDmListRemoveObject(4, v21, *v20, 0LL);
      v22 = v20[2];
      if ( v22 )
        PiDmListAddObject(4, v22, *v20, 0LL);
    }
    PiPnpRtlFreeInstallerClassChangeInfo(v20);
  }
  return v9;
}
