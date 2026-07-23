/*
 * XREFs of CmpCloneHwProfile @ 0x1407D354C
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407D2A94 (CmSetAcpiHwProfile.c)
 *     CmpCreateHardwareProfiles @ 0x140C48538 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     _wtoi @ 0x1404FBFD0 (_wtoi.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x1406AA0B0 (ZwQuerySecurityObject.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407D3D50 (CmpCreateHwProfileFriendlyName.c)
 *     CmpCopySyncTree @ 0x1407E2380 (CmpCopySyncTree.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExUuidCreate @ 0x14085C0B0 (ExUuidCreate.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpRebuildKcbCache @ 0x14087F358 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCloneHwProfile(
        void *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        unsigned __int16 a5,
        PHANDLE KeyHandle,
        unsigned int *a7)
{
  PVOID v8; // r12
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  void *Pool2; // rdi
  ULONG v13; // edi
  int v14; // eax
  ULONG v15; // ebx
  HANDLE v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rsi
  __int64 v19; // rax
  ULONG_PTR v20; // rcx
  __int64 CellFlat; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  ULONG_PTR v24; // rcx
  __int64 CellPaged; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v31; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v34; // [rsp+68h] [rbp-98h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v39; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING GuidString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v43; // [rsp+E8h] [rbp-18h] BYREF
  _KAFFINITY_EX v44; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t Dst[64]; // [rsp+220h] [rbp+120h] BYREF

  v31 = a3;
  Length = 0;
  *KeyHandle = 0LL;
  *a7 = a4;
  v8 = a3;
  DestinationString = 0LL;
  v34 = 0LL;
  ValueName = 0LL;
  Disposition = 0;
  *(_OWORD *)Object = 0LL;
  Data = 0;
  GuidString = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes, 0, 44);
  v39 = 0LL;
  Handle = 0LL;
  v43 = 0LL;
  memset(&v44, 0, 40);
  CmpInitializeDelayDerefContext(&v43);
  CmpInitializeThreadInfo(&v44);
  while ( *a7 < 0xC8 )
  {
    ++*a7;
    swprintf_s(Dst, 0x40uLL, L"%04d");
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenKey(KeyHandle, 0x2001Fu, &ObjectAttributes);
    v11 = v10;
    if ( v10 < 0 )
    {
      if ( v10 != -1073741772 )
        goto LABEL_61;
      break;
    }
    ZwClose(*KeyHandle);
  }
  if ( ZwQuerySecurityObject(v8, 4u, 0LL, 0, &Length) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, Length, 0x20204D43u);
    if ( Pool2 && ZwQuerySecurityObject(v8, 4u, Pool2, Length, &Length) < 0 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
  }
  else
  {
    Pool2 = 0LL;
  }
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = Pool2;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v11 = ZwCreateKey(KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v11 >= 0 )
  {
    if ( Disposition == 1 )
    {
      swprintf_s(Dst, 0x40uLL, L"Hardware Profiles\\%04d", *a7);
      RtlInitUnicodeString(&ValueName, Dst);
      ObjectAttributes.RootDirectory = a1;
      ObjectAttributes.ObjectName = &ValueName;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwCreateKey(&v34, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      if ( v11 >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Hardware Profiles");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwOpenKey(&v39, 0x20019u, &ObjectAttributes);
        if ( v11 >= 0 )
        {
          v11 = ZwQueryKey(v39, KeyFullInformation, &v44.StaticBitmap[4], 0x100u, &ResultLength);
          if ( v11 >= 0 )
          {
            v13 = HIDWORD(v44.StaticBitmap[6]);
            v14 = -1;
            Data = -1;
            v15 = 0;
            if ( HIDWORD(v44.StaticBitmap[6]) )
            {
              do
              {
                if ( ZwEnumerateKey(v39, v15, KeyBasicInformation, &v44.StaticBitmap[4], 0xFEu, &ResultLength) < 0 )
                  break;
                *((_WORD *)&v44.StaticBitmap[6] + ((unsigned __int64)HIDWORD(v44.StaticBitmap[5]) >> 1)) = 0;
                if ( wtoi((const wchar_t *)&v44.StaticBitmap[6]) && wtoi((const wchar_t *)&v44.StaticBitmap[6]) != *a7 )
                {
                  ValueName.Length = WORD2(v44.StaticBitmap[5]);
                  ObjectAttributes.Length = 48;
                  ValueName.MaximumLength = WORD2(v44.StaticBitmap[5]) + 2;
                  ObjectAttributes.Attributes = 576;
                  ValueName.Buffer = (wchar_t *)&v44.StaticBitmap[6];
                  ObjectAttributes.RootDirectory = v39;
                  ObjectAttributes.ObjectName = &ValueName;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                  {
                    RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
                    if ( ZwQueryValueKey(
                           Handle,
                           &ValueName,
                           KeyValueFullInformation,
                           &v44.StaticBitmap[4],
                           0x100u,
                           &ResultLength) >= 0
                      && HIDWORD(v44.StaticBitmap[4]) == 4
                      && (*(_DWORD *)((char *)&v44.StaticBitmap[4] + LODWORD(v44.StaticBitmap[5])) > Data || Data == -1) )
                    {
                      Data = *(_DWORD *)((char *)&v44.StaticBitmap[4] + LODWORD(v44.StaticBitmap[5]));
                    }
                    ZwClose(Handle);
                  }
                  Handle = 0LL;
                }
                ++v15;
              }
              while ( v15 < v13 );
              v14 = Data;
              v8 = v31;
            }
            Data = v14 + 1;
            RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
            ZwSetValueKey(v34, &ValueName, 0, 4u, &Data, 4u);
            if ( (int)CmpCreateHwProfileFriendlyName(a1, a5, *a7, Object) >= 0 )
            {
              RtlInitUnicodeString(&ValueName, L"FriendlyName");
              ZwSetValueKey(v34, &ValueName, 0, 1u, Object[1], LOWORD(Object[0]) + 2);
              RtlFreeAnsiString((PUNICODE_STRING)Object);
            }
            Data = 0;
            RtlInitUnicodeString(&ValueName, L"Aliasable");
            ZwSetValueKey(v34, &ValueName, 0, 4u, &Data, 4u);
            Data = 1;
            RtlInitUnicodeString(&ValueName, L"Cloned");
            ZwSetValueKey(v34, &ValueName, 0, 4u, &Data, 4u);
            if ( ExUuidCreate((UUID *)&v44.StaticBitmap[2]) >= 0
              && RtlStringFromGUIDEx((PGUID)&v44.StaticBitmap[2], &GuidString, 1u) >= 0 )
            {
              RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
              ZwSetValueKey(v34, &ValueName, 0, 1u, GuidString.Buffer, GuidString.MaximumLength);
              RtlFreeAnsiString(&GuidString);
            }
            Object[0] = 0LL;
            v11 = ObReferenceObjectByHandle(v8, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, Object, 0LL);
            if ( v11 >= 0 )
            {
              v16 = *KeyHandle;
              v31 = 0LL;
              v11 = ObReferenceObjectByHandle(v16, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &v31, 0LL);
              if ( v11 >= 0 )
              {
                CmpLockRegistryExclusive();
                v17 = v31;
                v18 = Object[0];
                v11 = CmpCopySyncTree(
                        *(_QWORD *)(*((_QWORD *)Object[0] + 1) + 32LL),
                        *(_DWORD *)(*((_QWORD *)Object[0] + 1) + 40LL),
                        *(_QWORD *)(*((_QWORD *)v31 + 1) + 32LL),
                        *(_DWORD *)(*((_QWORD *)v31 + 1) + 40LL),
                        2,
                        0);
                if ( v11 >= 0 )
                {
                  v19 = v18[1];
                  v31 = (PVOID)0xFFFFFFFFLL;
                  Object[0] = (PVOID)0xFFFFFFFFLL;
                  v20 = *(_QWORD *)(v19 + 32);
                  if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
                    CellFlat = HvpGetCellFlat(v20, *(unsigned int *)(v19 + 40));
                  else
                    CellFlat = HvpGetCellPaged(v20);
                  v22 = CellFlat;
                  if ( CellFlat )
                  {
                    v23 = v17[1];
                    v24 = *(_QWORD *)(v23 + 32);
                    if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
                      CellPaged = HvpGetCellFlat(v24, *(unsigned int *)(v23 + 40));
                    else
                      CellPaged = HvpGetCellPaged(v24);
                    if ( CellPaged )
                    {
                      *(_WORD *)(CellPaged + 52) = *(_WORD *)(v22 + 52);
                      *(_DWORD *)(CellPaged + 56) = *(_DWORD *)(v22 + 56);
                      CmpRebuildKcbCache(v17[1]);
                      v26 = *(_QWORD *)(v17[1] + 32LL);
                      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v26, Object);
                      else
                        HvpReleaseCellPaged(v26, Object);
                      v11 = 0;
                    }
                    else
                    {
                      v11 = -1073741670;
                    }
                    v27 = *(_QWORD *)(v18[1] + 32LL);
                    if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v27, &v31);
                    else
                      HvpReleaseCellPaged(v27, &v31);
                  }
                  else
                  {
                    v11 = -1073741670;
                  }
                }
                CmpDrainDelayDerefContext((_QWORD **)&v43);
                CmpUnlockRegistry(v28);
              }
            }
          }
        }
        else
        {
          v39 = 0LL;
        }
      }
      else
      {
        v34 = 0LL;
      }
    }
    else
    {
      v11 = 0;
    }
  }
LABEL_61:
  ZwClose(v8);
  if ( v34 )
    ZwClose(v34);
  if ( v39 )
    ZwClose(v39);
  if ( v11 < 0 && *KeyHandle )
    ZwClose(*KeyHandle);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v44);
  return (unsigned int)v11;
}
