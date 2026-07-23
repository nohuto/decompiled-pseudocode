/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x1409CE174
 * Callers:
 *     PiDevCfgCopyDeviceProperties @ 0x1406F8BA0 (PiDevCfgCopyDeviceProperties.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1409CDFE8 (PiDevCfgCopyDeviceKeys.c)
 * Callees:
 *     PiDevCfgParseVariableName @ 0x140417FA0 (PiDevCfgParseVariableName.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1404A0664 (PiDevCfgPushCopyKeyEntry.c)
 *     PnpValidateStringData @ 0x1404A7600 (PnpValidateStringData.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1405A3D00 (PiDevCfgParsePropertyKeyName.c)
 *     PnpRegistryValueExists @ 0x1405A4030 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x1406AAAD0 (ZwSetSecurityObject.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140726CF0 (PiDevCfgConvertPropertyFromValue.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x1409CECBC (IopGetRegistryKeyInformation.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1409CEE40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1409CF204 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     PiDevCfgSetObjectProperty @ 0x140A70328 (PiDevCfgSetObjectProperty.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKey(
        HANDLE KeyHandle,
        void *a2,
        WCHAR *a3,
        unsigned int a4,
        int a5,
        HANDLE *a6,
        __int64 a7)
{
  HANDLE v7; // rsi
  WCHAR *v8; // r15
  int RegistryKeyInformation; // ebx
  ULONG v10; // edx
  ULONG v11; // eax
  ULONG v12; // ebx
  __int64 Pool2; // rax
  __int64 v14; // r13
  __int64 v15; // r14
  ULONG i; // r12d
  NTSTATUS v17; // eax
  int v18; // edi
  __int64 v19; // rbx
  WCHAR *v20; // xmm0_8
  unsigned int v21; // ebx
  int v22; // ebx
  wchar_t *v23; // r12
  unsigned int v24; // r15d
  ULONG MaximumLength; // edi
  wchar_t *Buffer; // rsi
  ULONG v27; // r14d
  int v28; // edx
  int v29; // eax
  PVOID v30; // rdi
  HANDLE v31; // rsi
  PVOID v32; // r14
  __int64 v34; // rax
  int v35; // eax
  ULONG v36; // r15d
  ULONG v37; // esi
  HANDLE v38; // r12
  NTSTATUS v39; // eax
  __int64 v40; // rbx
  const WCHAR *v41; // rdi
  bool v42; // al
  int v43; // eax
  char v44; // al
  _WORD *v45; // rcx
  int v46; // eax
  int v47; // eax
  unsigned int v48; // r9d
  int v49; // eax
  wchar_t *v50; // rdi
  unsigned int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // edx
  NTSTATUS v55; // eax
  HANDLE v56; // rdx
  __int64 v57; // rax
  wchar_t *Length; // [rsp+20h] [rbp-E0h]
  ULONG ResultLength; // [rsp+28h] [rbp-D8h]
  unsigned int v60; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandlea; // [rsp+68h] [rbp-98h]
  ULONG v62; // [rsp+70h] [rbp-90h] BYREF
  int v63; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE v64; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  PVOID v66; // [rsp+88h] [rbp-78h] BYREF
  PVOID v67; // [rsp+90h] [rbp-70h]
  ULONG v68[2]; // [rsp+98h] [rbp-68h]
  HANDLE v69; // [rsp+A0h] [rbp-60h]
  int v70; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-50h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING ValueName; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v74; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v75; // [rsp+D4h] [rbp-2Ch]
  ULONG v76; // [rsp+D8h] [rbp-28h]
  ULONG Disposition; // [rsp+DCh] [rbp-24h] BYREF
  WCHAR *v78; // [rsp+E0h] [rbp-20h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v80; // [rsp+118h] [rbp+18h] BYREF
  __int64 v81; // [rsp+120h] [rbp+20h]
  HANDLE *v82; // [rsp+128h] [rbp+28h]
  UNICODE_STRING v83; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v84; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v85; // [rsp+150h] [rbp+50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+160h] [rbp+60h] BYREF
  GUID v87; // [rsp+170h] [rbp+70h] BYREF
  int v88; // [rsp+180h] [rbp+80h]

  v7 = KeyHandle;
  v69 = KeyHandle;
  v81 = a7;
  v8 = a3;
  v82 = a6;
  v64 = 0LL;
  Handle = 0LL;
  v67 = 0LL;
  v62 = 0;
  P = 0LL;
  Disposition = 0;
  v80 = 0LL;
  v60 = 0;
  v70 = 0;
  KeyHandlea = a2;
  v75 = a4;
  v78 = a3;
  memset(&ObjectAttributes, 0, 44);
  v85 = 0LL;
  v88 = 0;
  v84 = 0LL;
  v74 = 1;
  DestinationString = 0LL;
  ValueName = 0LL;
  v83 = 0LL;
  v87 = 0LL;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle);
  if ( RegistryKeyInformation >= 0 )
  {
    v10 = 2 * *((_DWORD *)P + 6) + 26;
    v62 = 2 * *((_DWORD *)P + 9) + 18;
    v11 = v62;
    if ( v62 <= v10 )
      v11 = v10;
    v12 = v11;
    *(_QWORD *)v68 = v11;
    ExFreePoolWithTag(P, 0);
    Pool2 = ExAllocatePool2(0x100uLL, v12, 0x63647050u);
    v14 = Pool2;
    if ( Pool2 )
    {
      v15 = Pool2;
      for ( i = 0; ; ++i )
      {
        v76 = i;
        v17 = ZwEnumerateValueKey(v7, i, KeyValueBasicInformation, (PVOID)v15, v12, &v62);
        RegistryKeyInformation = v17;
        if ( v17 >= 0 )
        {
          *(_WORD *)(v15 + 2 * ((unsigned __int64)*(unsigned int *)(v15 + 8) >> 1) + 12) = 0;
          RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(v15 + 12));
          if ( RegistryKeyInformation < 0 )
            goto LABEL_30;
          v18 = 0;
          v19 = v81;
          ValueName = DestinationString;
          v20 = (WCHAR *)_mm_srli_si128((__m128i)DestinationString, 8).m128i_u64[0];
          v63 = 0;
          if ( v81 )
          {
            if ( *(_QWORD *)(v81 + 16) )
            {
              v42 = PiDevCfgParseVariableName(v20, &v83, &v63);
              v18 = v63;
              if ( v42 )
              {
                if ( (v63 & 0x400000) != 0 )
                  goto LABEL_44;
                v71 = 0LL;
                v43 = PiDevCfgResolveVariable(v19, v83.Buffer, &v71);
                if ( v43 < 0 )
                {
                  if ( v43 != -1073741772 )
                    goto LABEL_44;
                  ValueName = v83;
                }
                else
                {
                  if ( (unsigned int)(*(_DWORD *)(v71 + 32) - 1) > 1 || *(_DWORD *)(v71 + 36) > 0xFFFEu )
                    goto LABEL_44;
                  ValueName.Buffer = *(wchar_t **)(v71 + 40);
                  ValueName.Length = *(_WORD *)(v71 + 36) - 2;
                  ValueName.MaximumLength = *(_WORD *)(v71 + 36);
                }
              }
            }
          }
          v21 = *(_DWORD *)(v15 + 4) & 0xFFFF0000;
          *(_WORD *)(v15 + 6) = 0;
          if ( (v21 & 0x400000) != 0 || v8 && !PiDevCfgParsePropertyKeyName(&ValueName.Length, &v87, &v74) )
            goto LABEL_44;
          v22 = v18 | v21;
          if ( (v22 & 0x30000) == 0 && (a5 & 1) != 0 )
            goto LABEL_12;
          if ( v8 )
            v44 = (unsigned int)PnpGetObjectProperty(
                                  *(_QWORD **)&PiPnpRtlCtx,
                                  v8,
                                  v75,
                                  KeyHandlea,
                                  0LL,
                                  (__int64)&v87,
                                  &v60,
                                  0LL,
                                  0,
                                  (__int64)&v70,
                                  0) == -1073741789;
          else
            v44 = PnpRegistryValueExists(KeyHandlea, &ValueName);
          if ( v44 )
          {
            if ( (v22 & 0x20000) != 0 || (a5 & 1) == 0 )
              goto LABEL_44;
LABEL_12:
            v66 = 0LL;
            v23 = 0LL;
            P = 0LL;
            RegistryKeyInformation = IopGetRegistryValue(v69, v20, 0, &v66);
            if ( RegistryKeyInformation < 0 )
              goto LABEL_30;
            v24 = *((_DWORD *)v66 + 1) & 0xFFFF0000;
            MaximumLength = *((_DWORD *)v66 + 3);
            Buffer = (wchar_t *)((char *)v66 + *((unsigned int *)v66 + 2));
            v27 = (unsigned __int16)*((_DWORD *)v66 + 1);
            if ( v81 && *(_QWORD *)(v81 + 16) )
            {
              if ( v27 - 1 > 1 )
                goto LABEL_40;
              if ( PnpValidateStringData((__int64)v66 + *((unsigned int *)v66 + 2), MaximumLength)
                && PiDevCfgParseVariableName(v45, &v83, &v63) )
              {
                Buffer = v83.Buffer;
                v71 = 0LL;
                v46 = PiDevCfgResolveVariable(v81, v83.Buffer, &v71);
                RegistryKeyInformation = v46;
                if ( v46 < 0 )
                {
                  RegistryKeyInformation = 0;
                  if ( v46 == -1073741772 )
                    MaximumLength = v83.MaximumLength;
                  else
                    Buffer = 0LL;
                  goto LABEL_17;
                }
                if ( (v63 & 0xC0000) == 0 )
                {
                  MaximumLength = *(_DWORD *)(v71 + 36);
                  Buffer = *(wchar_t **)(v71 + 40);
                  v27 = (unsigned __int16)*(_DWORD *)(v71 + 32);
                  v24 |= *(_DWORD *)(v71 + 32) & 0xFFFF0000;
                  goto LABEL_17;
                }
                v47 = PiDevCfgResolveMultiSzValue(
                        *(unsigned int *)(v71 + 32),
                        *(unsigned int *)(v71 + 36),
                        *(_QWORD *)(v71 + 40));
                v23 = (wchar_t *)P;
                RegistryKeyInformation = v47;
                if ( v47 < 0 )
                {
                  Buffer = 0LL;
                  RegistryKeyInformation = 0;
                  goto LABEL_17;
                }
LABEL_56:
                MaximumLength = v62;
                v27 = 7;
                Buffer = v23;
                if ( v62 >= 2 && !*v23 )
                  v24 |= 0x200000u;
                goto LABEL_17;
              }
            }
            if ( v27 == 1 )
            {
LABEL_16:
              if ( (v24 & 0xC0000) == 0 )
              {
LABEL_17:
                if ( !Buffer )
                  goto LABEL_47;
                if ( v27 == 0x8000 )
                {
                  if ( !v78 && v82 )
                    RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(
                                               v82,
                                               Buffer,
                                               KeyHandlea,
                                               ((v24 & 0x20000) == 0) | 0x80000000);
                  goto LABEL_47;
                }
                if ( !v27 && (v24 & 0x100000) != 0 )
                {
LABEL_47:
                  v31 = KeyHandlea;
                  goto LABEL_48;
                }
                v28 = (int)v78;
                v29 = v24 & 0x200000;
                if ( !v78 )
                {
                  if ( !v29 )
                  {
                    ResultLength = MaximumLength;
                    v30 = v66;
                    Length = Buffer;
                    v31 = KeyHandlea;
                    RegistryKeyInformation = ZwSetValueKey(
                                               KeyHandlea,
                                               &ValueName,
                                               *(_DWORD *)v66,
                                               v27,
                                               Length,
                                               ResultLength);
LABEL_23:
                    if ( v23 )
                      ExFreePoolWithTag(v23, 0);
                    if ( !v78 && v27 != 0x8000 && (v24 & 0x100000) != 0 )
                      PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v31, ValueName.Buffer);
                    ExFreePoolWithTag(v30, 0);
                    if ( RegistryKeyInformation < 0 )
                      goto LABEL_30;
                    v8 = v78;
                    v15 = v14;
                    i = v76;
                    goto LABEL_44;
                  }
                  v31 = KeyHandlea;
                  RegistryKeyInformation = ZwDeleteValueKey(KeyHandlea, &ValueName);
                  if ( RegistryKeyInformation == -1073741772 )
                    RegistryKeyInformation = 0;
LABEL_48:
                  v30 = v66;
                  goto LABEL_23;
                }
                if ( v29 )
                {
                  v51 = 0;
                  v80 = 0LL;
                  v60 = 0;
                  v70 = 0;
                  v50 = 0LL;
                  goto LABEL_146;
                }
                if ( v74 != 1 )
                {
                  v48 = v74;
                  v60 = v74;
                  goto LABEL_144;
                }
                if ( v27 == 1 || v27 == 2 )
                {
                  v48 = 18;
                  goto LABEL_142;
                }
                if ( v27 != 3 )
                {
                  switch ( v27 )
                  {
                    case 4u:
                      v48 = 7;
                      goto LABEL_142;
                    case 7u:
                      v48 = 8210;
                      goto LABEL_142;
                    case 0xBu:
                      v48 = 9;
LABEL_142:
                      v60 = v48;
LABEL_144:
                      v49 = PiDevCfgConvertPropertyFromValue(v27, MaximumLength, Buffer, v48, &v70, (GUID **)&v80);
                      v50 = (wchar_t *)v80;
                      RegistryKeyInformation = v49;
                      v51 = v60;
                      v28 = (int)v78;
LABEL_146:
                      if ( RegistryKeyInformation >= 0 && (v50 || !v51) )
                      {
                        v52 = PiDevCfgSetObjectProperty(PiPnpRtlCtx, 0, v28, v75, (__int64)KeyHandlea);
                        RegistryKeyInformation = v52;
                        if ( v52 == -1073741790 || !v60 && v52 == -1073741275 )
                          RegistryKeyInformation = 0;
                        if ( v50 )
                        {
                          if ( v50 != Buffer )
                            ExFreePoolWithTag(v50, 0);
                          v80 = 0LL;
                        }
                      }
                      goto LABEL_47;
                  }
                }
                v48 = 4099;
                goto LABEL_142;
              }
              v35 = PiDevCfgResolveMultiSzValue(v27, MaximumLength, Buffer);
              v23 = (wchar_t *)P;
              RegistryKeyInformation = v35;
              if ( v35 < 0 )
              {
                RegistryKeyInformation = 0;
                goto LABEL_47;
              }
              goto LABEL_56;
            }
LABEL_40:
            if ( v27 != 2 && v27 != 7 )
              goto LABEL_17;
            goto LABEL_16;
          }
          if ( (v22 & 0x10000) == 0 )
            goto LABEL_12;
LABEL_44:
          v12 = v68[0];
          v7 = v69;
          continue;
        }
        if ( v17 == -2147483622 )
          break;
        if ( v17 != -2147483643 )
          goto LABEL_30;
        ExFreePoolWithTag((PVOID)v14, 0);
        v12 = v62;
        *(_QWORD *)v68 = v62;
        v34 = ExAllocatePool2(0x100uLL, v62, 0x63647050u);
        v14 = v34;
        if ( !v34 )
        {
          v32 = v67;
          RegistryKeyInformation = -1073741670;
          goto LABEL_33;
        }
        v15 = v34;
        --i;
      }
      RegistryKeyInformation = 0;
      if ( v8 )
      {
LABEL_30:
        v32 = v67;
      }
      else
      {
        v32 = v67;
        if ( v82 )
        {
          v36 = v68[0];
          v37 = 0;
          v38 = v69;
          while ( 1 )
          {
            v39 = ZwEnumerateKey(v38, v37, KeyBasicInformation, (PVOID)v14, v36, &v62);
            RegistryKeyInformation = v39;
            if ( v39 < 0 )
              break;
            *(_WORD *)(v14 + 2 * ((unsigned __int64)*(unsigned int *)(v14 + 12) >> 1) + 16) = 0;
            RegistryKeyInformation = RtlInitUnicodeStringEx(&v85, (PCWSTR)(v14 + 16));
            if ( RegistryKeyInformation < 0 )
              goto LABEL_31;
            v84 = v85;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v38;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            ObjectAttributes.ObjectName = &v85;
            RegistryKeyInformation = ZwOpenKey(&v64, 0x20019u, &ObjectAttributes);
            if ( RegistryKeyInformation < 0 )
              goto LABEL_31;
            v40 = v81;
            v41 = 0LL;
            v63 = 0;
            if ( v81 && *(_QWORD *)(v81 + 16) && PiDevCfgParseVariableName(v85.Buffer, &v83, &v63) )
            {
              v71 = 0LL;
              v53 = PiDevCfgResolveVariable(v40, v83.Buffer, &v71);
              if ( v53 < 0 )
              {
                if ( v53 != -1073741772 )
                {
LABEL_162:
                  ZwClose(v64);
                  v64 = 0LL;
                  goto LABEL_80;
                }
                v84 = v83;
              }
              else
              {
                v54 = *(_DWORD *)(v71 + 32);
                if ( (unsigned int)(v54 - 1) <= 1 )
                {
                  v84.Buffer = *(wchar_t **)(v71 + 40);
                  v84.Length = *(_WORD *)(v71 + 36) - 2;
                  v84.MaximumLength = *(_WORD *)(v71 + 36);
                }
                else
                {
                  if ( v54 != 7 )
                    goto LABEL_162;
                  v41 = *(const WCHAR **)(v71 + 40);
                }
              }
            }
            RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(v64);
            if ( RegistryKeyInformation >= 0 )
            {
              v32 = v67;
            }
            else
            {
              RegistryKeyInformation = 0;
              v67 = 0LL;
              v32 = 0LL;
            }
            if ( v41 )
            {
              while ( 1 )
              {
                if ( !*v41 )
                  goto LABEL_75;
                RtlInitUnicodeString(&v84, v41);
                ObjectAttributes.RootDirectory = KeyHandlea;
                ObjectAttributes.SecurityQualityOfService = 0LL;
                ObjectAttributes.ObjectName = &v84;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.SecurityDescriptor = v32;
                v55 = ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes);
                RegistryKeyInformation = v55;
                if ( v55 < 0 )
                {
                  if ( v55 != -1073741772 )
                    goto LABEL_75;
                  if ( (v63 & 0x10000) != 0 )
                  {
                    RegistryKeyInformation = 0;
                    goto LABEL_179;
                  }
                  RegistryKeyInformation = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
                  if ( RegistryKeyInformation < 0 )
                    goto LABEL_75;
                }
                else if ( v32 )
                {
                  ZwSetSecurityObject(Handle, 4u, v32);
                }
                v56 = v64;
                if ( !v64 )
                {
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = &v85;
                  ObjectAttributes.RootDirectory = v38;
                  ObjectAttributes.Attributes = 576;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  RegistryKeyInformation = ZwOpenKey(&v64, 0x20019u, &ObjectAttributes);
                  if ( RegistryKeyInformation < 0 )
                    goto LABEL_182;
                  v56 = v64;
                }
                RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v82, v56, Handle, a5 | 0x40000000u);
                if ( RegistryKeyInformation < 0 )
                {
LABEL_182:
                  ZwClose(Handle);
                  goto LABEL_74;
                }
                v64 = 0LL;
                Handle = 0LL;
LABEL_179:
                v57 = -1LL;
                do
                  ++v57;
                while ( v41[v57] );
                v41 += v57 + 1;
              }
            }
            ObjectAttributes.RootDirectory = KeyHandlea;
            ObjectAttributes.SecurityQualityOfService = 0LL;
            ObjectAttributes.ObjectName = &v84;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            ObjectAttributes.SecurityDescriptor = v32;
            RegistryKeyInformation = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
            if ( RegistryKeyInformation >= 0 )
            {
              if ( Disposition == 2 && v32 )
                ZwSetSecurityObject(Handle, 4u, v32);
              RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v82, v64, Handle, a5 | 0x40000000u);
              if ( RegistryKeyInformation < 0 )
                ZwClose(Handle);
              v64 = 0LL;
LABEL_74:
              Handle = 0LL;
            }
LABEL_75:
            if ( v32 )
            {
              ExFreePoolWithTag(v32, 0);
              v32 = 0LL;
              v67 = 0LL;
            }
            if ( v64 )
            {
              ZwClose(v64);
              v64 = 0LL;
            }
            if ( RegistryKeyInformation < 0 )
              goto LABEL_31;
LABEL_80:
            ++v37;
          }
          if ( v39 != -2147483622 )
          {
            if ( v39 != -2147483643 )
              goto LABEL_31;
            ExFreePoolWithTag((PVOID)v14, 0);
            v36 = v62;
            v14 = ExAllocatePool2(0x100uLL, v62, 0x63647050u);
            if ( !v14 )
            {
              RegistryKeyInformation = -1073741670;
              goto LABEL_33;
            }
            --v37;
            goto LABEL_80;
          }
          RegistryKeyInformation = 0;
        }
      }
LABEL_31:
      if ( v14 )
        ExFreePoolWithTag((PVOID)v14, 0);
LABEL_33:
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
    }
    else
    {
      RegistryKeyInformation = -1073741670;
    }
  }
  if ( v64 )
    ZwClose(v64);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryKeyInformation;
}
