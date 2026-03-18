/*
 * XREFs of CmpCloneHwProfile @ 0x1407D305C
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407D25A4 (CmSetAcpiHwProfile.c)
 *     CmpCreateHardwareProfiles @ 0x140C463E8 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     _wtoi @ 0x1404FE710 (_wtoi.c)
 *     swprintf_s @ 0x140502E50 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1406A66D0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1406A6A50 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x1406A9110 (ZwQuerySecurityObject.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407D3860 (CmpCreateHwProfileFriendlyName.c)
 *     CmpCopySyncTree @ 0x1407E1E30 (CmpCopySyncTree.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpRebuildKcbCache @ 0x14087B4A8 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     ExUuidCreate @ 0x1408EA880 (ExUuidCreate.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
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
  __int64 v16; // r8
  HANDLE v17; // rcx
  _QWORD *v18; // rdi
  _QWORD *v19; // rsi
  __int64 v20; // rax
  ULONG_PTR v21; // rcx
  __int64 CellFlat; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  ULONG_PTR v25; // rcx
  __int64 CellPaged; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v32; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v35; // [rsp+68h] [rbp-98h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v40; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  PVOID v42[2]; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v44; // [rsp+E8h] [rbp-18h] BYREF
  _KAFFINITY_EX v45; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t Dst[64]; // [rsp+220h] [rbp+120h] BYREF

  v32 = a3;
  Length = 0;
  *KeyHandle = 0LL;
  *a7 = a4;
  v8 = a3;
  DestinationString = 0LL;
  v35 = 0LL;
  ValueName = 0LL;
  Disposition = 0;
  *(_OWORD *)Object = 0LL;
  Data = 0;
  *(_OWORD *)v42 = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes, 0, 44);
  v40 = 0LL;
  Handle = 0LL;
  v44 = 0LL;
  memset(&v45, 0, 40);
  CmpInitializeDelayDerefContext(&v44);
  CmpInitializeThreadInfo(&v45);
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
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
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
      v11 = ZwCreateKey(&v35, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      if ( v11 >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Hardware Profiles");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwOpenKey(&v40, 0x20019u, &ObjectAttributes);
        if ( v11 >= 0 )
        {
          v11 = ZwQueryKey(v40, KeyFullInformation, &v45.StaticBitmap[4], 0x100u, &ResultLength);
          if ( v11 >= 0 )
          {
            v13 = HIDWORD(v45.StaticBitmap[6]);
            v14 = -1;
            Data = -1;
            v15 = 0;
            if ( HIDWORD(v45.StaticBitmap[6]) )
            {
              do
              {
                if ( ZwEnumerateKey(v40, v15, KeyBasicInformation, &v45.StaticBitmap[4], 0xFEu, &ResultLength) < 0 )
                  break;
                *((_WORD *)&v45.StaticBitmap[6] + ((unsigned __int64)HIDWORD(v45.StaticBitmap[5]) >> 1)) = 0;
                if ( wtoi((const wchar_t *)&v45.StaticBitmap[6]) && wtoi((const wchar_t *)&v45.StaticBitmap[6]) != *a7 )
                {
                  ValueName.Length = WORD2(v45.StaticBitmap[5]);
                  ObjectAttributes.Length = 48;
                  ValueName.MaximumLength = WORD2(v45.StaticBitmap[5]) + 2;
                  ObjectAttributes.Attributes = 576;
                  ValueName.Buffer = (wchar_t *)&v45.StaticBitmap[6];
                  ObjectAttributes.RootDirectory = v40;
                  ObjectAttributes.ObjectName = &ValueName;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                  {
                    RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
                    if ( ZwQueryValueKey(
                           Handle,
                           &ValueName,
                           KeyValueFullInformation,
                           &v45.StaticBitmap[4],
                           0x100u,
                           &ResultLength) >= 0
                      && HIDWORD(v45.StaticBitmap[4]) == 4
                      && (*(_DWORD *)((char *)&v45.StaticBitmap[4] + LODWORD(v45.StaticBitmap[5])) > Data || Data == -1) )
                    {
                      Data = *(_DWORD *)((char *)&v45.StaticBitmap[4] + LODWORD(v45.StaticBitmap[5]));
                    }
                    ZwClose(Handle);
                  }
                  Handle = 0LL;
                }
                ++v15;
              }
              while ( v15 < v13 );
              v14 = Data;
              v8 = v32;
            }
            Data = v14 + 1;
            RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
            ZwSetValueKey(v35, &ValueName, 0, 4u, &Data, 4u);
            if ( (int)CmpCreateHwProfileFriendlyName(a1, a5, *a7, Object) >= 0 )
            {
              RtlInitUnicodeString(&ValueName, L"FriendlyName");
              ZwSetValueKey(v35, &ValueName, 0, 1u, Object[1], LOWORD(Object[0]) + 2);
              RtlFreeAnsiString((PUNICODE_STRING)Object);
            }
            Data = 0;
            RtlInitUnicodeString(&ValueName, L"Aliasable");
            ZwSetValueKey(v35, &ValueName, 0, 4u, &Data, 4u);
            Data = 1;
            RtlInitUnicodeString(&ValueName, L"Cloned");
            ZwSetValueKey(v35, &ValueName, 0, 4u, &Data, 4u);
            if ( ExUuidCreate((UUID *)&v45.StaticBitmap[2]) >= 0 )
            {
              LOBYTE(v16) = 1;
              if ( (int)RtlStringFromGUIDEx(&v45.StaticBitmap[2], v42, v16) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
                ZwSetValueKey(v35, &ValueName, 0, 1u, v42[1], WORD1(v42[0]));
                RtlFreeAnsiString((PUNICODE_STRING)v42);
              }
            }
            Object[0] = 0LL;
            v11 = ObReferenceObjectByHandle(v8, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, Object, 0LL);
            if ( v11 >= 0 )
            {
              v17 = *KeyHandle;
              v32 = 0LL;
              v11 = ObReferenceObjectByHandle(v17, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &v32, 0LL);
              if ( v11 >= 0 )
              {
                CmpLockRegistryExclusive();
                v18 = v32;
                v19 = Object[0];
                v11 = CmpCopySyncTree(
                        *(_QWORD *)(*((_QWORD *)Object[0] + 1) + 32LL),
                        *(_DWORD *)(*((_QWORD *)Object[0] + 1) + 40LL),
                        *(_QWORD *)(*((_QWORD *)v32 + 1) + 32LL),
                        *(_DWORD *)(*((_QWORD *)v32 + 1) + 40LL),
                        2,
                        0);
                if ( v11 >= 0 )
                {
                  v20 = v19[1];
                  v32 = (PVOID)0xFFFFFFFFLL;
                  Object[0] = (PVOID)0xFFFFFFFFLL;
                  v21 = *(_QWORD *)(v20 + 32);
                  if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
                    CellFlat = HvpGetCellFlat(v21, *(unsigned int *)(v20 + 40));
                  else
                    CellFlat = HvpGetCellPaged(v21);
                  v23 = CellFlat;
                  if ( CellFlat )
                  {
                    v24 = v18[1];
                    v25 = *(_QWORD *)(v24 + 32);
                    if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
                      CellPaged = HvpGetCellFlat(v25, *(unsigned int *)(v24 + 40));
                    else
                      CellPaged = HvpGetCellPaged(v25);
                    if ( CellPaged )
                    {
                      *(_WORD *)(CellPaged + 52) = *(_WORD *)(v23 + 52);
                      *(_DWORD *)(CellPaged + 56) = *(_DWORD *)(v23 + 56);
                      CmpRebuildKcbCache(v18[1]);
                      v27 = *(_QWORD *)(v18[1] + 32LL);
                      if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v27, Object);
                      else
                        HvpReleaseCellPaged(v27, Object);
                      v11 = 0;
                    }
                    else
                    {
                      v11 = -1073741670;
                    }
                    v28 = *(_QWORD *)(v19[1] + 32LL);
                    if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v28, &v32);
                    else
                      HvpReleaseCellPaged(v28, &v32);
                  }
                  else
                  {
                    v11 = -1073741670;
                  }
                }
                CmpDrainDelayDerefContext((_QWORD **)&v44);
                CmpUnlockRegistry(v29);
              }
            }
          }
        }
        else
        {
          v40 = 0LL;
        }
      }
      else
      {
        v35 = 0LL;
      }
    }
    else
    {
      v11 = 0;
    }
  }
LABEL_61:
  ZwClose(v8);
  if ( v35 )
    ZwClose(v35);
  if ( v40 )
    ZwClose(v40);
  if ( v11 < 0 && *KeyHandle )
    ZwClose(*KeyHandle);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v45);
  return (unsigned int)v11;
}
