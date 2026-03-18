/*
 * XREFs of CmSetAcpiHwProfile @ 0x1407D25A4
 * Callers:
 *     IopExecuteHardwareProfileChange @ 0x140739DD4 (IopExecuteHardwareProfileChange.c)
 *     CmpCreateHardwareProfiles @ 0x140C463E8 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x140480894 (RtlUnicodeStringPrintf.c)
 *     swprintf_s @ 0x140502E50 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     CmpOpenDevicesControlSet @ 0x1407CC5D0 (CmpOpenDevicesControlSet.c)
 *     CmpAddAcpiAliasEntry @ 0x1407D2DE4 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     CmpFilterAcpiDockingState @ 0x1407D3B3C (CmpFilterAcpiDockingState.c)
 *     CmpGetAcpiProfileInformation @ 0x1407D3D9C (CmpGetAcpiProfileInformation.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4598 (CmpMoveBiosAliasTable.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmSetAcpiHwProfile(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4, _BYTE *a5)
{
  void *Pool2; // rdi
  int AcpiProfileInformation; // ebx
  HANDLE v8; // r15
  int v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r14d
  unsigned int v15; // edx
  HANDLE v16; // rcx
  NTSTATUS v17; // eax
  _DWORD *v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  int Length; // [rsp+20h] [rbp-E0h]
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v33; // [rsp+68h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v35; // [rsp+74h] [rbp-8Ch] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE v39; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v40; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE v41; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE v42; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE *v43; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING v44; // [rsp+E0h] [rbp-20h] BYREF
  int KeyValueInformation; // [rsp+F0h] [rbp-10h] BYREF
  int v46; // [rsp+F4h] [rbp-Ch]
  unsigned int v47; // [rsp+F8h] [rbp-8h]
  size_t Size; // [rsp+FCh] [rbp-4h]
  wchar_t Dst[128]; // [rsp+1F0h] [rbp+F0h] BYREF

  v42 = 0LL;
  KeyHandle = 0LL;
  v33 = 0LL;
  Handle = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  Pool2 = 0LL;
  ResultLength = 0;
  v29 = 0;
  v35 = 0;
  Data = 0;
  Disposition = 0;
  v40 = 0LL;
  P = 0LL;
  *a5 = 0;
  v43 = a4;
  v44 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  AcpiProfileInformation = CmpOpenDevicesControlSet((__int64)a1, &v42, &v44);
  if ( AcpiProfileInformation >= 0 )
  {
    v8 = v42;
    ObjectAttributes.RootDirectory = v42;
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
                               (int)&v40,
                               (int)Dst,
                               &KeyValueInformation);
    if ( AcpiProfileInformation >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
      ObjectAttributes.RootDirectory = v8;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      AcpiProfileInformation = ZwOpenKey(&v33, 0x20019u, &ObjectAttributes);
      if ( AcpiProfileInformation < 0 )
      {
        v33 = 0LL;
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
        || v46 != 4 )
      {
        goto LABEL_36;
      }
      v9 = *(int *)((char *)&KeyValueInformation + v47);
      RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
      if ( ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValueFullInformation,
             &KeyValueInformation,
             0x100u,
             &ResultLength) >= 0
        && v46 == 3 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          AcpiProfileInformation = -1073741670;
          goto LABEL_37;
        }
        memmove(Pool2, (char *)&KeyValueInformation + v47, (unsigned int)Size);
      }
      RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValueFullInformation,
             &KeyValueInformation,
             0x100u,
             &ResultLength) < 0
        || v46 != 4 )
      {
LABEL_36:
        AcpiProfileInformation = -1073741492;
        goto LABEL_37;
      }
      v10 = *(int *)((char *)&KeyValueInformation + v47);
      AcpiProfileInformation = CmpFilterAcpiDockingState((_DWORD)a1, v9, (_DWORD)Pool2, v10, (__int64)P, (__int64)v40);
      if ( AcpiProfileInformation < 0 )
        goto LABEL_37;
      v12 = guard_dispatch_icall_no_overrides(P, &v35, 0LL, v11);
      AcpiProfileInformation = v12;
      if ( v35 != -1 )
      {
        if ( v12 < 0 )
          goto LABEL_37;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
        ObjectAttributes.RootDirectory = v8;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        AcpiProfileInformation = ZwOpenKey(&v39, 0x20019u, &ObjectAttributes);
        if ( AcpiProfileInformation < 0 )
        {
          v39 = 0LL;
          goto LABEL_37;
        }
        v13 = 32LL * v35;
        v14 = *(_DWORD *)((char *)P + v13 + 32);
        v15 = *(_DWORD *)((char *)P + v13 + 28);
        Data = v15;
        if ( (v14 & 8) != 0 )
        {
          AcpiProfileInformation = CmpMoveBiosAliasTable(KeyHandle, Handle, v10, v15, Dst);
          if ( AcpiProfileInformation < 0 )
            goto LABEL_37;
          v15 = Data;
        }
        if ( (v14 & 4) != 0 || v15 != v10 )
        {
          v16 = Handle;
          *a5 = 1;
          ZwClose(v16);
          Handle = 0LL;
          if ( (v14 & 4) != 0 )
          {
            LOWORD(Length) = *a1;
            v17 = CmpCloneHwProfile(KeyHandle, v39, v33, Data, Length, &v33, &Data);
          }
          else
          {
            ZwClose(v33);
            swprintf_s(Dst, 0x80uLL, L"%04d", Data);
            RtlInitUnicodeString(&DestinationString, Dst);
            ObjectAttributes.RootDirectory = v39;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v17 = ZwOpenKey(&v33, 0x20019u, &ObjectAttributes);
          }
          AcpiProfileInformation = v17;
          if ( v17 < 0 )
          {
            v33 = 0LL;
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
        v29 = *a1;
        RtlInitUnicodeString(&DestinationString, L"DockingState");
        ZwSetValueKey(Handle, &DestinationString, 0, 4u, &v29, 4u);
        RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
        AcpiProfileInformation = ZwSetValueKey(Handle, &DestinationString, 0, 3u, a1 + 2, a1[1]);
        if ( (v14 & 2) == 0 )
          AcpiProfileInformation = CmpAddAcpiAliasEntry(KeyHandle, a1, Data, Dst);
        if ( Data != v10 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
          ObjectAttributes.RootDirectory = v8;
          ObjectAttributes.Attributes = 832;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ZwCreateKey(&v41, 0x20u, &ObjectAttributes, 0, 0LL, 8u, &Disposition);
          *(_QWORD *)&DestinationString.Length = 0x1000000LL;
          DestinationString.Buffer = Dst;
          RtlUnicodeStringPrintf(
            &DestinationString,
            L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
            &v44,
            Data);
          AcpiProfileInformation = ZwSetValueKey(
                                     v41,
                                     &CmSymbolicLinkValueName,
                                     0,
                                     6u,
                                     DestinationString.Buffer,
                                     DestinationString.Length);
        }
      }
      if ( AcpiProfileInformation >= 0 )
      {
        *v43 = v33;
        goto LABEL_39;
      }
    }
  }
LABEL_37:
  if ( v33 )
    ZwClose(v33);
LABEL_39:
  if ( v41 )
    ZwClose(v41);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v39 )
    ZwClose(v39);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v18 = P;
  if ( P )
  {
    v19 = 0;
    v29 = 0;
    if ( *((_DWORD *)P + 1) )
    {
      v20 = 0LL;
      do
      {
        v21 = 8 * v20;
        if ( *(_QWORD *)&v18[v21 + 4] )
        {
          ExFreePoolWithTag(*(PVOID *)&v18[v21 + 4], 0);
          v19 = v29;
          v18 = P;
        }
        v29 = ++v19;
        v20 = v19;
      }
      while ( v19 < v18[1] );
    }
    ExFreePoolWithTag(v18, 0);
  }
  v22 = v40;
  if ( v40 )
  {
    v23 = 0;
    v29 = 0;
    if ( *((_DWORD *)v40 + 1) )
    {
      v24 = 0LL;
      do
      {
        v25 = 3 * (v24 + 1);
        if ( *(_QWORD *)&v22[2 * v25] )
        {
          ExFreePoolWithTag(*(PVOID *)&v22[2 * v25], 0);
          v23 = v29;
          v22 = v40;
        }
        v29 = ++v23;
        v24 = v23;
      }
      while ( v23 < v22[1] );
    }
    ExFreePoolWithTag(v22, 0);
  }
  return (unsigned int)AcpiProfileInformation;
}
