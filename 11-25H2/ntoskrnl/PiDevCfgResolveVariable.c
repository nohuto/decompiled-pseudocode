/*
 * XREFs of PiDevCfgResolveVariable @ 0x140A67A58
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x1405A36AC (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14071F7F0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14071FEF0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407200D0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A75EEC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8C530 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A968D4 (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x1403F8E10 (NLS_UPCASE.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryString @ 0x1404ABB64 (PnpValidateRegistryString.c)
 *     PnpStringToDwordValue @ 0x1404D8330 (PnpStringToDwordValue.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlCreateUnicodeString @ 0x140893990 (RtlCreateUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     PiDevCfgFreeVariable @ 0x14095FBC4 (PiDevCfgFreeVariable.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariable(__int64 a1, const WCHAR *a2, UNICODE_STRING **a3)
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
  UNICODE_STRING *v15; // r15
  UNICODE_STRING *v16; // rsi
  NTSTATUS v17; // eax
  NTSTATUS RegistryValue; // eax
  const wchar_t *v20; // r15
  unsigned int j; // edi
  __int64 v22; // r15
  unsigned int i; // edi
  wchar_t **v24; // r15
  wchar_t *v25; // rdx
  const WCHAR *v26; // r12
  UNICODE_STRING *Pool2; // rdi
  UNICODE_STRING *v28; // rcx
  wchar_t *v29; // rax
  int v30; // eax
  _WORD *v31; // rsi
  __int64 v32; // rax
  wchar_t *v33; // rax
  wchar_t *v34; // rax
  __int64 v35; // rcx
  wchar_t *v36; // rax
  HANDLE KeyHandle; // [rsp+28h] [rbp-59h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-51h] BYREF
  void *Src; // [rsp+40h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING *v41; // [rsp+58h] [rbp-29h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v46; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = 0LL;
  KeyHandle = 0LL;
  v6 = 0;
  P[0] = 0LL;
  DestinationString = 0LL;
  Src = 0LL;
  LODWORD(v46) = 0;
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
  v15 = (UNICODE_STRING *)(*(_QWORD *)(a1 + 24) + 16LL * (v8 % 0x7F));
  v41 = v15;
  v16 = *(UNICODE_STRING **)&v15->Length;
  if ( *(UNICODE_STRING **)&v15->Length == v15 )
    goto LABEL_5;
  do
  {
    Pool2 = v16;
    if ( RtlEqualUnicodeString(&DestinationString, v16 + 1, 1u) )
      break;
    v16 = *(UNICODE_STRING **)&v16->Length;
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
        v24 = &(&off_140B2DF10)[3 * i];
        if ( !wcsicmp(*v24, a2) )
          break;
      }
      if ( !v24 )
      {
LABEL_29:
        v26 = a2;
        if ( !PnpStringToDwordValue((__int64)a2, (unsigned int *)&v46) )
        {
          v4 = -1073741772;
          goto LABEL_9;
        }
        v6 = v46;
        v22 = 0LL;
LABEL_27:
        Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          v4 = -1073741670;
          goto LABEL_7;
        }
        v28 = v41;
        v29 = v41->Buffer;
        if ( *(UNICODE_STRING **)v29 != v41 )
          goto LABEL_58;
        *(_QWORD *)&Pool2->Length = v41;
        Pool2->Buffer = v29;
        *(_QWORD *)v29 = Pool2;
        v28->Buffer = &Pool2->Length;
        if ( RtlCreateUnicodeString(Pool2 + 1, v26) )
        {
          if ( v22 )
          {
            *(_DWORD *)&Pool2[2].Length = -1;
            v30 = guard_dispatch_icall_no_overrides(a1);
            v4 = v30;
            if ( v30 >= 0 )
              goto LABEL_51;
            if ( v30 == -1073741772 )
              v4 = -1073741823;
            goto LABEL_55;
          }
          v31 = Src;
          if ( Src )
          {
            *(_DWORD *)&Pool2[2].Length = 1;
            v32 = -1LL;
            do
              ++v32;
            while ( v31[v32] );
            *(_DWORD *)(&Pool2[2].MaximumLength + 1) = 2 * v32 + 2;
            v33 = (wchar_t *)ExAllocatePool2(0x100uLL);
            Pool2[2].Buffer = v33;
            if ( v33 )
            {
              memmove(v33, v31, *(unsigned int *)(&Pool2[2].MaximumLength + 1));
              goto LABEL_51;
            }
          }
          else
          {
            *(_DWORD *)&Pool2[2].Length = 4;
            *(_DWORD *)(&Pool2[2].MaximumLength + 1) = 4;
            v34 = (wchar_t *)ExAllocatePool2(0x100uLL);
            Pool2[2].Buffer = v34;
            if ( v34 )
            {
              *(_DWORD *)v34 = v6;
              goto LABEL_51;
            }
          }
        }
        v4 = -1073741670;
LABEL_55:
        v35 = *(_QWORD *)&Pool2->Length;
        if ( *(UNICODE_STRING **)(*(_QWORD *)&Pool2->Length + 8LL) == Pool2 )
        {
          v36 = Pool2->Buffer;
          if ( *(UNICODE_STRING **)v36 == Pool2 )
          {
            *(_QWORD *)v36 = v35;
            *(_QWORD *)(v35 + 8) = v36;
            PiDevCfgFreeVariable(Pool2);
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
      RegistryValue = IopGetRegistryValue(KeyHandle, (const WCHAR *)&dword_140B349B4, 0, P);
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
        v46 = 16LL * j;
        if ( !wcsicmp((&off_140B2E5D0)[v46 / 8], v20) )
          break;
      }
      v22 = *(__int64 *)((char *)&off_140B2E5D8 + v46);
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
  if ( *(_DWORD *)&Pool2[2].Length != -1 )
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
