/*
 * XREFs of PiDevCfgResolveVariable @ 0x140A6A668
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x1405A6EBC (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14072B770 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14072BE70 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14072C050 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A77CC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A91630 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A9C7E4 (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x140400650 (NLS_UPCASE.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryString @ 0x1404ACEE0 (PnpValidateRegistryString.c)
 *     PnpStringToDwordValue @ 0x1404D71D0 (PnpStringToDwordValue.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlCreateUnicodeString @ 0x140833010 (RtlCreateUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     PiDevCfgFreeVariable @ 0x1409648DC (PiDevCfgFreeVariable.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariable(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  unsigned int v4; // ebx
  unsigned int *v5; // r14
  int v6; // r13d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v8; // r11d
  wchar_t *Buffer; // rdi
  __int64 Flink; // rsi
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax
  int v13; // r11d
  int v14; // r10d
  const UNICODE_STRING *v15; // r15
  const UNICODE_STRING *v16; // rsi
  NTSTATUS v17; // eax
  NTSTATUS RegistryValue; // eax
  const wchar_t *v20; // r15
  unsigned int j; // edi
  __int64 v22; // r15
  unsigned int i; // edi
  wchar_t **v24; // r15
  wchar_t *v25; // rdx
  const WCHAR *v26; // r12
  __int64 Pool2; // rdi
  const UNICODE_STRING *v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // r9
  int v31; // eax
  _WORD *v32; // rsi
  __int64 v33; // rax
  void *v34; // rax
  _DWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  HANDLE KeyHandle; // [rsp+28h] [rbp-59h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-51h] BYREF
  void *Src; // [rsp+40h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  const UNICODE_STRING *v42; // [rsp+58h] [rbp-29h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v47; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = 0LL;
  KeyHandle = 0LL;
  v6 = 0;
  P[0] = 0LL;
  DestinationString = 0LL;
  Src = 0LL;
  LODWORD(v47) = 0;
  if ( !*a2 )
    return (unsigned int)-1073741772;
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Buffer = DestinationString.Buffer;
  Flink = (__int64)CurrentServerSiloGlobals[75].Flink;
  if ( DestinationString.Length >> 1 )
  {
    do
    {
      v11 = *Buffer++;
      v12 = NLS_UPCASE(Flink, v11);
      v8 = v12 + 65599 * v13;
    }
    while ( v14 != 1 );
  }
  v15 = (const UNICODE_STRING *)(*(_QWORD *)(a1 + 24) + 16LL * (v8 % 0x7F));
  v42 = v15;
  v16 = *(const UNICODE_STRING **)&v15->Length;
  if ( *(const UNICODE_STRING **)&v15->Length == v15 )
    goto LABEL_5;
  do
  {
    Pool2 = (__int64)v16;
    if ( RtlEqualUnicodeString(&DestinationString, v16 + 1, 1u) )
      break;
    v16 = *(const UNICODE_STRING **)&v16->Length;
    Pool2 = 0LL;
  }
  while ( v16 != v15 );
  if ( !Pool2 )
  {
LABEL_5:
    ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v4 = v17;
    if ( v17 < 0 )
    {
      if ( v17 != -1073741772 )
        goto LABEL_9;
      v4 = 0;
      for ( i = 0; ; ++i )
      {
        if ( i >= 4 )
          goto LABEL_29;
        v24 = &(&off_140B3D1E0)[3 * i];
        if ( !wcsicmp(*v24, a2) )
          break;
      }
      if ( !v24 )
      {
LABEL_29:
        v26 = a2;
        if ( !PnpStringToDwordValue((__int64)a2, (unsigned int *)&v47) )
        {
          v4 = -1073741772;
          goto LABEL_9;
        }
        v6 = v47;
        v22 = 0LL;
LABEL_27:
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          v4 = -1073741670;
          goto LABEL_7;
        }
        v28 = v42;
        v29 = (__int64 *)v42->Buffer;
        if ( (const UNICODE_STRING *)*v29 != v42 )
          goto LABEL_58;
        *(_QWORD *)Pool2 = v42;
        *(_QWORD *)(Pool2 + 8) = v29;
        *v29 = Pool2;
        v28->Buffer = (wchar_t *)Pool2;
        if ( RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 16), v26) )
        {
          if ( v22 )
          {
            *(_DWORD *)(Pool2 + 32) = -1;
            v31 = guard_dispatch_icall_no_overrides(a1, KeyHandle, Pool2, v30);
            v4 = v31;
            if ( v31 >= 0 )
              goto LABEL_51;
            if ( v31 == -1073741772 )
              v4 = -1073741823;
            goto LABEL_55;
          }
          v32 = Src;
          if ( Src )
          {
            *(_DWORD *)(Pool2 + 32) = 1;
            v33 = -1LL;
            do
              ++v33;
            while ( v32[v33] );
            *(_DWORD *)(Pool2 + 36) = 2 * v33 + 2;
            v34 = (void *)ExAllocatePool2(0x100uLL);
            *(_QWORD *)(Pool2 + 40) = v34;
            if ( v34 )
            {
              memmove(v34, v32, *(unsigned int *)(Pool2 + 36));
              goto LABEL_51;
            }
          }
          else
          {
            *(_DWORD *)(Pool2 + 32) = 4;
            *(_DWORD *)(Pool2 + 36) = 4;
            v35 = (_DWORD *)ExAllocatePool2(0x100uLL);
            *(_QWORD *)(Pool2 + 40) = v35;
            if ( v35 )
            {
              *v35 = v6;
              goto LABEL_51;
            }
          }
        }
        v4 = -1073741670;
LABEL_55:
        v36 = *(_QWORD *)Pool2;
        if ( *(_QWORD *)(*(_QWORD *)Pool2 + 8LL) == Pool2 )
        {
          v37 = *(_QWORD **)(Pool2 + 8);
          if ( *v37 == Pool2 )
          {
            *v37 = v36;
            *(_QWORD *)(v36 + 8) = v37;
            PiDevCfgFreeVariable((UNICODE_STRING *)Pool2);
LABEL_7:
            if ( v5 )
              ExFreePoolWithTag(v5, 0);
            goto LABEL_9;
          }
        }
LABEL_58:
        __fastfail(3u);
      }
      v25 = v24[1];
      v6 = *((_DWORD *)v24 + 4);
      v22 = 0LL;
      Src = v25;
    }
    else
    {
      RegistryValue = IopGetRegistryValue(KeyHandle, (const WCHAR *)&dword_140B43C84, 0, P);
      v5 = (unsigned int *)P[0];
      v4 = RegistryValue;
      if ( RegistryValue < 0 )
        goto LABEL_7;
      if ( !PnpValidateRegistryString((_DWORD *)P[0]) )
      {
        v4 = -1073741823;
        goto LABEL_7;
      }
      v20 = (const wchar_t *)((char *)v5 + v5[2]);
      for ( j = 0; ; ++j )
      {
        if ( j >= 8 )
          goto LABEL_18;
        v47 = 16LL * j;
        if ( !wcsicmp((&off_140B3D8A0)[v47 / 8], v20) )
          break;
      }
      v22 = *(__int64 *)((char *)&off_140B3D8A8 + v47);
      if ( !v22 )
      {
LABEL_18:
        v4 = -1073741772;
        goto LABEL_7;
      }
    }
    v26 = a2;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(Pool2 + 32) != -1 )
  {
LABEL_51:
    *a3 = Pool2;
    goto LABEL_7;
  }
  v4 = -1073741823;
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
