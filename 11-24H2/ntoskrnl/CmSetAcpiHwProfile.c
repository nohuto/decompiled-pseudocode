/*
 * XREFs of CmSetAcpiHwProfile @ 0x1407D2A94
 * Callers:
 *     IopExecuteHardwareProfileChange @ 0x140737D04 (IopExecuteHardwareProfileChange.c)
 *     CmpCreateHardwareProfiles @ 0x140C48538 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpOpenDevicesControlSet @ 0x1407CCAC0 (CmpOpenDevicesControlSet.c)
 *     CmpAddAcpiAliasEntry @ 0x1407D32D4 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 *     CmpFilterAcpiDockingState @ 0x1407D402C (CmpFilterAcpiDockingState.c)
 *     CmpGetAcpiProfileInformation @ 0x1407D428C (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4A88 (CmpMoveBiosAliasTable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmSetAcpiHwProfile(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4, _BYTE *a5)
{
  void *Pool2; // rdi
  int AcpiProfileInformation; // ebx
  HANDLE v8; // r15
  int v9; // ebx
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r14d
  unsigned int v14; // edx
  HANDLE v15; // rcx
  NTSTATUS v16; // eax
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  int Length; // [rsp+20h] [rbp-E0h]
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v32; // [rsp+68h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-8Ch] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE v38; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v39; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE v40; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE v41; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE *v42; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING v43; // [rsp+E0h] [rbp-20h] BYREF
  int KeyValueInformation; // [rsp+F0h] [rbp-10h] BYREF
  int v45; // [rsp+F4h] [rbp-Ch]
  unsigned int v46; // [rsp+F8h] [rbp-8h]
  size_t Size; // [rsp+FCh] [rbp-4h]
  wchar_t Dst[128]; // [rsp+1F0h] [rbp+F0h] BYREF

  v41 = 0LL;
  KeyHandle = 0LL;
  v32 = 0LL;
  Handle = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  Pool2 = 0LL;
  ResultLength = 0;
  v28 = 0;
  v34 = 0;
  Data = 0;
  Disposition = 0;
  v39 = 0LL;
  P = 0LL;
  *a5 = 0;
  v42 = a4;
  v43 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  AcpiProfileInformation = CmpOpenDevicesControlSet((__int64)a1, &v41, &v43);
  if ( AcpiProfileInformation >= 0 )
  {
    v8 = v41;
    ObjectAttributes.RootDirectory = v41;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    AcpiProfileInformation = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( AcpiProfileInformation < 0 )
    {
      KeyHandle = 0LL;
      goto LABEL_37;
    }
    AcpiProfileInformation = CmpGetAcpiProfileInformation(
                               (int)KeyHandle,
                               (int)&P,
                               (int)&v39,
                               (int)Dst,
                               &KeyValueInformation);
    if ( AcpiProfileInformation >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
      ObjectAttributes.RootDirectory = v8;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      AcpiProfileInformation = ZwOpenKey(&v32, 0x20019u, &ObjectAttributes);
      if ( AcpiProfileInformation < 0 )
      {
        v32 = 0LL;
        goto LABEL_37;
      }
      RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      AcpiProfileInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( AcpiProfileInformation < 0 )
      {
        Handle = 0LL;
        goto LABEL_37;
      }
      RtlInitUnicodeString(&DestinationString, L"DockingState");
      if ( ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValueFullInformation,
             &KeyValueInformation,
             0x100u,
             &ResultLength) < 0
        || v45 != 4 )
      {
        goto LABEL_36;
      }
      v9 = *(int *)((char *)&KeyValueInformation + v46);
      RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
      if ( ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValueFullInformation,
             &KeyValueInformation,
             0x100u,
             &ResultLength) >= 0
        && v45 == 3 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)Size, 0x20204D43u);
        if ( !Pool2 )
        {
          AcpiProfileInformation = -1073741670;
          goto LABEL_37;
        }
        memmove(Pool2, (char *)&KeyValueInformation + v46, (unsigned int)Size);
      }
      RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValueFullInformation,
             &KeyValueInformation,
             0x100u,
             &ResultLength) < 0
        || v45 != 4 )
      {
LABEL_36:
        AcpiProfileInformation = -1073741492;
        goto LABEL_37;
      }
      v10 = *(int *)((char *)&KeyValueInformation + v46);
      AcpiProfileInformation = CmpFilterAcpiDockingState((_DWORD)a1, v9, (_DWORD)Pool2, v10, (__int64)P, (__int64)v39);
      if ( AcpiProfileInformation < 0 )
        goto LABEL_37;
      v11 = guard_dispatch_icall_no_overrides(P, &v34);
      AcpiProfileInformation = v11;
      if ( v34 != -1 )
      {
        if ( v11 < 0 )
          goto LABEL_37;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
        ObjectAttributes.RootDirectory = v8;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        AcpiProfileInformation = ZwOpenKey(&v38, 0x20019u, &ObjectAttributes);
        if ( AcpiProfileInformation < 0 )
        {
          v38 = 0LL;
          goto LABEL_37;
        }
        v12 = 32LL * v34;
        v13 = *(_DWORD *)((char *)P + v12 + 32);
        v14 = *(_DWORD *)((char *)P + v12 + 28);
        Data = v14;
        if ( (v13 & 8) != 0 )
        {
          AcpiProfileInformation = CmpMoveBiosAliasTable(KeyHandle, Handle, v10, v14, Dst);
          if ( AcpiProfileInformation < 0 )
            goto LABEL_37;
          v14 = Data;
        }
        if ( (v13 & 4) != 0 || v14 != v10 )
        {
          v15 = Handle;
          *a5 = 1;
          ZwClose(v15);
          Handle = 0LL;
          if ( (v13 & 4) != 0 )
          {
            LOWORD(Length) = *a1;
            v16 = CmpCloneHwProfile(KeyHandle, v38, v32, Data, Length, &v32, &Data);
          }
          else
          {
            ZwClose(v32);
            swprintf_s(Dst, 0x80uLL, L"%04d", Data);
            RtlInitUnicodeString(&DestinationString, Dst);
            ObjectAttributes.RootDirectory = v38;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v16 = ZwOpenKey(&v32, 0x20019u, &ObjectAttributes);
          }
          AcpiProfileInformation = v16;
          if ( v16 < 0 )
          {
            v32 = 0LL;
            goto LABEL_37;
          }
          RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          AcpiProfileInformation = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
          if ( AcpiProfileInformation < 0 )
          {
            Handle = 0LL;
            goto LABEL_37;
          }
          RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
          if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u) < 0 )
            goto LABEL_36;
        }
        v28 = *a1;
        RtlInitUnicodeString(&DestinationString, L"DockingState");
        ZwSetValueKey(Handle, &DestinationString, 0, 4u, &v28, 4u);
        RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
        AcpiProfileInformation = ZwSetValueKey(Handle, &DestinationString, 0, 3u, a1 + 2, a1[1]);
        if ( (v13 & 2) == 0 )
          AcpiProfileInformation = CmpAddAcpiAliasEntry(KeyHandle, a1, Data, Dst);
        if ( Data != v10 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
          ObjectAttributes.RootDirectory = v8;
          ObjectAttributes.Attributes = 832;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ZwCreateKey(&v40, 0x20u, &ObjectAttributes, 0, 0LL, 8u, &Disposition);
          *(_QWORD *)&DestinationString.Length = 0x1000000LL;
          DestinationString.Buffer = Dst;
          RtlUnicodeStringPrintf(
            &DestinationString,
            L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
            &v43,
            Data);
          AcpiProfileInformation = ZwSetValueKey(
                                     v40,
                                     &CmSymbolicLinkValueName,
                                     0,
                                     6u,
                                     DestinationString.Buffer,
                                     DestinationString.Length);
        }
      }
      if ( AcpiProfileInformation >= 0 )
      {
        *v42 = v32;
        goto LABEL_39;
      }
    }
  }
LABEL_37:
  if ( v32 )
    ZwClose(v32);
LABEL_39:
  if ( v40 )
    ZwClose(v40);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v38 )
    ZwClose(v38);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v17 = P;
  if ( P )
  {
    v18 = 0;
    v28 = 0;
    if ( *((_DWORD *)P + 1) )
    {
      v19 = 0LL;
      do
      {
        v20 = 8 * v19;
        if ( *(_QWORD *)&v17[v20 + 4] )
        {
          ExFreePoolWithTag(*(PVOID *)&v17[v20 + 4], 0);
          v18 = v28;
          v17 = P;
        }
        v28 = ++v18;
        v19 = v18;
      }
      while ( v18 < v17[1] );
    }
    ExFreePoolWithTag(v17, 0);
  }
  v21 = v39;
  if ( v39 )
  {
    v22 = 0;
    v28 = 0;
    if ( *((_DWORD *)v39 + 1) )
    {
      v23 = 0LL;
      do
      {
        v24 = 3 * (v23 + 1);
        if ( *(_QWORD *)&v21[2 * v24] )
        {
          ExFreePoolWithTag(*(PVOID *)&v21[2 * v24], 0);
          v22 = v28;
          v21 = v39;
        }
        v28 = ++v22;
        v23 = v22;
      }
      while ( v22 < v21[1] );
    }
    ExFreePoolWithTag(v21, 0);
  }
  return (unsigned int)AcpiProfileInformation;
}
