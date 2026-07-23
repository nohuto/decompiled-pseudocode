/*
 * XREFs of CmpGetAcpiProfileInformation @ 0x1407D428C
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407D2A94 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlUnicodeStringToInteger @ 0x14097E410 (RtlUnicodeStringToInteger.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpGetAcpiProfileInformation(
        void *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *KeyValueInformation)
{
  ULONG v5; // esi
  NTSTATUS v9; // ebx
  _DWORD *Pool2; // rax
  ULONG v11; // r14d
  ULONG v12; // esi
  void *v13; // rax
  unsigned int v14; // ecx
  size_t v15; // r8
  char *p_Src; // rdx
  ULONG v17; // ebx
  _DWORD *v18; // r10
  unsigned int i; // edx
  __int64 v20; // rbx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rbx
  __int128 v24; // xmm1
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // edx
  void *v29; // rcx
  _DWORD *v30; // rcx
  unsigned int v31; // edi
  void *v32; // rcx
  _DWORD *v33; // rcx
  unsigned int v34; // edi
  void *v35; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-B9h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-B1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A9h] BYREF
  HANDLE v40; // [rsp+50h] [rbp-99h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-91h] BYREF
  __int128 v42; // [rsp+60h] [rbp-89h]
  ULONG Value[4]; // [rsp+70h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-69h] BYREF
  __int128 Src; // [rsp+B0h] [rbp-39h] BYREF
  __int128 KeyInformation; // [rsp+C0h] [rbp-29h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-19h]
  __int128 v48; // [rsp+E0h] [rbp-9h]

  v5 = 0;
  *a2 = 0LL;
  v40 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  *(_QWORD *)a3 = 0LL;
  KeyInformation = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Hardware Profiles");
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    v9 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    if ( v9 >= 0 )
    {
      ResultLength = 32 * (DWORD1(v47) - 1) + 40;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, ResultLength, 0x20204D43u);
      *a2 = (__int64)Pool2;
      if ( Pool2 )
      {
        v11 = 0;
        *Pool2 = DWORD1(v47);
        *(_DWORD *)(*a2 + 4) = 0;
        while ( v11 < DWORD1(v47) )
        {
          DWORD1(v42) = 0;
          *(_QWORD *)Value = 0LL;
          if ( ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength) < 0 )
            break;
          KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
          DestinationString.Length = KeyValueInformation[6];
          DestinationString.MaximumLength = DestinationString.Length + 2;
          DestinationString.Buffer = KeyValueInformation + 8;
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
            break;
          RtlUnicodeStringToInteger(&DestinationString, 0, &Value[1]);
          RtlInitUnicodeString(&DestinationString, L"PreferenceOrder");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && *((_DWORD *)KeyValueInformation + 1) == 4 )
          {
            v12 = *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2));
          }
          else
          {
            v12 = -1;
          }
          Value[0] = v12;
          RtlInitUnicodeString(&DestinationString, L"FriendlyName");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && *((_DWORD *)KeyValueInformation + 1) == 1 )
          {
            v13 = (void *)ExAllocatePool2(0x100uLL, *((unsigned int *)KeyValueInformation + 3), 0x20204D43u);
            v14 = *((_DWORD *)KeyValueInformation + 3);
            LODWORD(v42) = v14;
            *((_QWORD *)&v42 + 1) = v13;
            if ( !v13 )
              goto LABEL_37;
            v15 = v14;
            p_Src = (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2);
          }
          else
          {
            Src = *(_OWORD *)L"-------";
            v13 = (void *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x20204D43u);
            LODWORD(v42) = 16;
            *((_QWORD *)&v42 + 1) = v13;
            if ( !v13 )
            {
LABEL_37:
              v9 = -1073741670;
LABEL_60:
              ZwClose(Handle);
              goto LABEL_61;
            }
            v15 = *((unsigned int *)KeyValueInformation + 3);
            p_Src = (char *)&Src;
          }
          memmove(v13, p_Src, v15);
          v17 = 0;
          Value[2] = 0;
          RtlInitUnicodeString(&DestinationString, L"Aliasable");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || *((_DWORD *)KeyValueInformation + 1) != 4
            || *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
          {
            v17 = 1;
            Value[2] = 1;
          }
          RtlInitUnicodeString(&DestinationString, L"Pristine");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && *((_DWORD *)KeyValueInformation + 1) == 4 )
          {
            if ( *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
              v17 = 4;
            Value[2] = v17;
          }
          if ( !Value[1] )
          {
            v12 = -1;
            Value[2] = 4;
            Value[0] = -1;
          }
          v18 = (_DWORD *)*a2;
          for ( i = 0; ; ++i )
          {
            v20 = i;
            if ( i >= *(_DWORD *)(*a2 + 4) )
              break;
            v21 = 8LL * i;
            if ( v18[v21 + 6] >= v12 )
            {
              memmove(&v18[8 * i + 10], &v18[v21 + 2], 32LL * (*v18 - i - 1));
              break;
            }
          }
          v22 = *a2;
          v23 = 32 * v20;
          v24 = *(_OWORD *)Value;
          *(_OWORD *)(v23 + v22 + 8) = v42;
          *(_OWORD *)(v23 + v22 + 24) = v24;
          ++*(_DWORD *)(*a2 + 4);
          ZwClose(Handle);
          ++v11;
          v5 = 0;
        }
        RtlInitUnicodeString(&DestinationString, L"AcpiAlias");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&v40, 0x20019u, &ObjectAttributes) < 0 )
        {
          v9 = 0;
          v40 = 0LL;
          goto LABEL_63;
        }
        v9 = ZwQueryKey(v40, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
        if ( v9 >= 0 )
        {
          v25 = ExAllocatePool2(0x100uLL, 32LL * (unsigned int)(DWORD1(v47) - 1) + 40, 0x20204D43u);
          *(_QWORD *)a3 = v25;
          if ( !v25 )
            goto LABEL_5;
          *(_DWORD *)(v25 + 4) = DWORD1(v47);
          **(_DWORD **)a3 = DWORD1(v47);
          while ( v5 < DWORD1(v47) )
          {
            v9 = ZwEnumerateKey(v40, v5, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength);
            if ( v9 < 0 )
              break;
            KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
            DestinationString.Length = KeyValueInformation[6];
            DestinationString.MaximumLength = DestinationString.Length + 2;
            DestinationString.Buffer = KeyValueInformation + 8;
            ObjectAttributes.RootDirectory = v40;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( v9 < 0 )
              break;
            RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
            if ( ZwQueryValueKey(
                   Handle,
                   &DestinationString,
                   KeyValueFullInformation,
                   KeyValueInformation,
                   0x100u,
                   &ResultLength) < 0
              || *((_DWORD *)KeyValueInformation + 1) != 4
              || (*(_DWORD *)(*(_QWORD *)a3 + 24LL * v5 + 8) = *(_DWORD *)((char *)KeyValueInformation
                                                                         + *((unsigned int *)KeyValueInformation + 2)),
                  RtlInitUnicodeString(&DestinationString, L"DockingState"),
                  ZwQueryValueKey(
                    Handle,
                    &DestinationString,
                    KeyValueFullInformation,
                    KeyValueInformation,
                    0x100u,
                    &ResultLength) < 0)
              || *((_DWORD *)KeyValueInformation + 1) != 4
              || (*(_DWORD *)(*(_QWORD *)a3 + 24LL * v5 + 12) = *(_DWORD *)((char *)KeyValueInformation
                                                                          + *((unsigned int *)KeyValueInformation + 2)),
                  RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber"),
                  v9 = ZwQueryValueKey(
                         Handle,
                         &DestinationString,
                         KeyValueFullInformation,
                         KeyValueInformation,
                         0x100u,
                         &ResultLength),
                  v9 < 0)
              || *((_DWORD *)KeyValueInformation + 1) != 3 )
            {
              v9 = -1073741492;
              goto LABEL_60;
            }
            *(_DWORD *)(*(_QWORD *)a3 + 24LL * v5 + 16) = *((_DWORD *)KeyValueInformation + 3);
            v26 = *((_DWORD *)KeyValueInformation + 3);
            if ( v26 )
              v27 = ExAllocatePool2(0x100uLL, v26, 0x20204D43u);
            else
              v27 = 0LL;
            *(_QWORD *)(*(_QWORD *)a3 + 24LL * v5 + 24) = v27;
            v28 = *((_DWORD *)KeyValueInformation + 3);
            if ( v28 )
            {
              v29 = *(void **)(*(_QWORD *)a3 + 24LL * v5 + 24);
              if ( !v29 )
                goto LABEL_37;
              memmove(v29, (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2), v28);
            }
            ZwClose(Handle);
            ++v5;
          }
        }
      }
      else
      {
LABEL_5:
        v9 = -1073741670;
      }
    }
  }
  else
  {
    KeyHandle = 0LL;
  }
LABEL_61:
  if ( v40 )
    ZwClose(v40);
LABEL_63:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v9 < 0 )
  {
    v30 = (_DWORD *)*a2;
    if ( *a2 )
    {
      v31 = 0;
      if ( v30[1] )
      {
        do
        {
          v32 = *(void **)&v30[8 * v31 + 4];
          if ( v32 )
            ExFreePoolWithTag(v32, 0);
          v30 = (_DWORD *)*a2;
          ++v31;
        }
        while ( v31 < *(_DWORD *)(*a2 + 4) );
      }
      ExFreePoolWithTag(v30, 0);
      *a2 = 0LL;
    }
    v33 = *(_DWORD **)a3;
    if ( *(_QWORD *)a3 )
    {
      v34 = 0;
      if ( v33[1] )
      {
        do
        {
          v35 = *(void **)&v33[6 * v34 + 6];
          if ( v35 )
            ExFreePoolWithTag(v35, 0);
          v33 = *(_DWORD **)a3;
          ++v34;
        }
        while ( v34 < *(_DWORD *)(*(_QWORD *)a3 + 4LL) );
      }
      ExFreePoolWithTag(v33, 0);
      *(_QWORD *)a3 = 0LL;
    }
  }
  return (unsigned int)v9;
}
