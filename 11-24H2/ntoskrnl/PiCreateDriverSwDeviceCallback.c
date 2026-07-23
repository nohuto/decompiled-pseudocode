/*
 * XREFs of PiCreateDriverSwDeviceCallback @ 0x140A9E6B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1402B827C (McTemplateK0zzd_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiSwStartCreate @ 0x14072EFAC (PiSwStartCreate.c)
 *     PnpCompareMultiSz @ 0x140730F5C (PnpCompareMultiSz.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C5920 (_PnpGetGenericStoreProperty.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     RtlHashUnicodeString @ 0x14096EAB0 (RtlHashUnicodeString.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     PnpGenerateDeviceIdsHash @ 0x140A43E5C (PnpGenerateDeviceIdsHash.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCreateDriverSwDeviceCallback(__int64 a1, __int64 a2, const WCHAR *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  _DWORD *v6; // r13
  ULONG v7; // esi
  WCHAR *Pool2; // r15
  void *v9; // r14
  wchar_t *v10; // rbx
  _DWORD *v11; // r12
  __int64 v12; // rax
  int RegistryValues; // edi
  __int64 v14; // r8
  __int64 v15; // r14
  ULONG v16; // esi
  unsigned int v17; // r12d
  unsigned int *v18; // rbx
  PCWCH *v19; // r13
  unsigned int i; // esi
  unsigned int v21; // r9d
  const wchar_t *j; // rbx
  __int64 v23; // rax
  HANDLE v24; // rcx
  NTSTATUS RegistryValue; // eax
  PCWSTR v27; // rsi
  __int64 v28; // r13
  __int64 v29; // rcx
  wchar_t *v30; // rdi
  unsigned int v31; // r13d
  __int64 v32; // rbx
  _DWORD *v33; // r14
  int GenericStorePropertyKeys; // eax
  unsigned int v35; // eax
  __int64 v36; // rsi
  char *v37; // rax
  void *v38; // rdx
  char *v39; // rbx
  unsigned int v40; // r12d
  __int64 v41; // r13
  unsigned int v42; // eax
  void *v43; // rcx
  __int64 v44; // rax
  PVOID *v45; // r14
  PVOID *v46; // rbx
  PVOID *v47; // rbx
  ULONG v48; // [rsp+20h] [rbp-E0h]
  unsigned int v49; // [rsp+70h] [rbp-90h] BYREF
  wchar_t *v50; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v51; // [rsp+80h] [rbp-80h]
  _DWORD *v52; // [rsp+88h] [rbp-78h] BYREF
  ULONG HashValue; // [rsp+90h] [rbp-70h] BYREF
  ULONG v54; // [rsp+94h] [rbp-6Ch] BYREF
  int v55; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v56; // [rsp+A0h] [rbp-60h]
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  int v58; // [rsp+B0h] [rbp-50h]
  int v59; // [rsp+B4h] [rbp-4Ch] BYREF
  ULONG v60; // [rsp+B8h] [rbp-48h]
  unsigned int v61; // [rsp+BCh] [rbp-44h]
  unsigned int v62; // [rsp+C0h] [rbp-40h]
  PVOID v63; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING UnicodeString; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v65; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING GuidString; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v67; // [rsp+100h] [rbp+0h]
  PCWSTR SourceString; // [rsp+108h] [rbp+8h]
  __int64 v69; // [rsp+110h] [rbp+10h]
  UNICODE_STRING String2; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v71; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v72; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+148h] [rbp+48h] BYREF
  PVOID P[2]; // [rsp+158h] [rbp+58h] BYREF
  _DWORD v75[2]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v76; // [rsp+170h] [rbp+70h]
  _QWORD v77[2]; // [rsp+178h] [rbp+78h] BYREF
  GUID Guid; // [rsp+188h] [rbp+88h] BYREF
  int v79[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  const wchar_t *v80; // [rsp+1B0h] [rbp+B0h]
  UNICODE_STRING *p_UnicodeString; // [rsp+1B8h] [rbp+B8h]
  int v82; // [rsp+1C0h] [rbp+C0h]
  int v83; // [rsp+1E0h] [rbp+E0h]
  const wchar_t *v84; // [rsp+1E8h] [rbp+E8h]
  UNICODE_STRING *v85; // [rsp+1F0h] [rbp+F0h]
  int v86; // [rsp+1F8h] [rbp+F8h]
  int v87; // [rsp+218h] [rbp+118h]
  const wchar_t *v88; // [rsp+220h] [rbp+120h]
  UNICODE_STRING *p_GuidString; // [rsp+228h] [rbp+128h]
  int v90; // [rsp+230h] [rbp+130h]
  int v91; // [rsp+250h] [rbp+150h]
  const wchar_t *v92; // [rsp+258h] [rbp+158h]
  int *v93; // [rsp+260h] [rbp+160h]
  int v94; // [rsp+268h] [rbp+168h]
  int v95; // [rsp+288h] [rbp+188h]
  const wchar_t *v96; // [rsp+290h] [rbp+190h]
  UNICODE_STRING *v97; // [rsp+298h] [rbp+198h]
  int v98; // [rsp+2A0h] [rbp+1A0h]
  int v99; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v100; // [rsp+2C8h] [rbp+1C8h]
  UNICODE_STRING *v101; // [rsp+2D0h] [rbp+1D0h]
  int v102; // [rsp+2D8h] [rbp+1D8h]

  v76 = a1;
  v51 = a4;
  SourceString = a3;
  v5 = 0LL;
  v59 = 1;
  Handle = 0LL;
  v6 = a4;
  v55 = 0;
  v60 = 0;
  v54 = 0;
  v7 = 0;
  HashValue = 0;
  Pool2 = 0LL;
  v58 = 0;
  v9 = 0LL;
  v52 = 0LL;
  v10 = 0LL;
  v69 = 0LL;
  v11 = 0LL;
  v61 = 0;
  v50 = 0LL;
  v62 = 0;
  v56 = 0LL;
  v63 = 0LL;
  v49 = 0;
  UnicodeString = 0LL;
  v65 = 0LL;
  GuidString = 0LL;
  Guid = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  String2 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 224);
    if ( v12 )
      v5 = *(_QWORD *)(v12 + 8);
  }
  RegistryValues = RegRtlOpenKeyTransacted(a2, a3, 0, 0x20019u, &Handle, v5);
  if ( RegistryValues >= 0 )
  {
    memset_0(v79, 0, 0x188uLL);
    v94 = 0x4000000;
    v79[2] = 304;
    v82 = 117440512;
    v80 = L"HardwareIds";
    v83 = 304;
    p_UnicodeString = &UnicodeString;
    v86 = 117440512;
    v84 = L"CompatibleIds";
    v87 = 288;
    v85 = &v65;
    v90 = 0x1000000;
    v88 = L"ContainerId";
    p_GuidString = &GuidString;
    v92 = L"Capabilities";
    v93 = &v55;
    v96 = L"Description";
    v97 = &v71;
    v100 = L"LocationInfo";
    v91 = 288;
    v95 = 288;
    v98 = 0x1000000;
    v99 = 288;
    v102 = 0x1000000;
    v101 = &v72;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v79, 0LL, v48, 1);
    if ( RegistryValues >= 0 )
    {
      if ( UnicodeString.Buffer && UnicodeString.Length <= 2u )
        RtlFreeAnsiString(&UnicodeString);
      if ( v65.Buffer && v65.Length <= 2u )
        RtlFreeAnsiString(&v65);
      if ( !GuidString.Buffer )
        goto LABEL_17;
      if ( GuidString.Length < 2u )
        RtlFreeAnsiString(&GuidString);
      if ( !GuidString.Buffer || RtlGUIDFromString(&GuidString, &Guid) < 0 )
LABEL_17:
        Guid = 0LL;
      if ( v71.Buffer && v71.Length < 2u )
        RtlFreeAnsiString(&v71);
      if ( v72.Buffer && v72.Length < 2u )
        RtlFreeAnsiString(&v72);
      if ( !UnicodeString.Buffer && !v65.Buffer )
      {
        RegistryValues = -1073741637;
        goto LABEL_71;
      }
      v15 = *(_QWORD *)v6;
      v77[0] = UnicodeString.Buffer;
      v77[1] = v65.Buffer;
      v75[0] = 2;
      v75[1] = 3;
      while ( (PVOID)v15 != IopRootDeviceNode )
      {
        if ( *(PDRIVER_OBJECT *)(*(_QWORD *)(v15 + 32) + 8LL) == PiSwDeviceDriverObject )
        {
          RtlInitUnicodeString(&DestinationString, L"SWD\\");
          if ( RtlPrefixUnicodeString(&DestinationString, (PCUNICODE_STRING)(v15 + 40), 1u) )
          {
            RtlInitUnicodeString(
              &String2,
              (PCWSTR)(*(_QWORD *)(v15 + 48) + 2 * ((unsigned __int64)DestinationString.Length >> 1)));
            RtlInitUnicodeString(&DestinationString, L"DRIVERENUM");
            if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
            {
              if ( String2.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92 )
              {
                if ( !v7 )
                {
                  RegistryValues = PnpGenerateDeviceIdsHash((__int64)UnicodeString.Buffer, (__int64)v65.Buffer, &v54);
                  if ( RegistryValues < 0 )
                    goto LABEL_68;
                  if ( (v55 & 8) != 0 )
                  {
                    v16 = v54;
                  }
                  else
                  {
                    RtlInitUnicodeString(&String2, &PiSwGenericRawCompatibleId);
                    RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                    if ( RegistryValues < 0 )
                      goto LABEL_68;
                    v16 = HashValue + v54;
                  }
                  RtlInitUnicodeString(&String2, &PiSwGenericCompatibleId);
                  RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                  if ( RegistryValues < 0 )
                    goto LABEL_68;
                  v7 = HashValue + v16;
                  v60 = v7;
                  v54 = v7;
                }
                if ( *(_DWORD *)(v15 + 684) == v7 )
                {
                  if ( !Pool2 )
                  {
                    v58 = 2048;
                    Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, 0x800uLL, 0x20207050u);
                    if ( !Pool2 )
                    {
LABEL_67:
                      RegistryValues = -1073741670;
                      goto LABEL_68;
                    }
                  }
                  v17 = v58;
                  v18 = v75;
                  v67 = v75;
                  v19 = (PCWCH *)v77;
                  for ( i = 0; i < 2; ++i )
                  {
                    v21 = *v18;
                    v49 = v17;
                    if ( (int)CmGetDeviceRegProp(
                                *(__int64 *)&PiPnpRtlCtx,
                                *(_QWORD *)(v15 + 48),
                                0LL,
                                v21,
                                (__int64)&v59,
                                (__int64)Pool2,
                                (__int64)&v49,
                                0) < 0
                      || v59 != 7
                      || v49 < 2 )
                    {
                      *Pool2 = 0;
                    }
                    if ( i == 1 )
                    {
                      for ( j = Pool2; *j; j += v23 + 1 )
                      {
                        if ( !wcsicmp(j, &PiSwGenericRawCompatibleId) || !wcsicmp(j, &PiSwGenericCompatibleId) )
                        {
                          *j = 0;
                          break;
                        }
                        v23 = -1LL;
                        do
                          ++v23;
                        while ( j[v23] );
                      }
                      v18 = v67;
                    }
                    if ( *v19 )
                    {
                      if ( !PnpCompareMultiSz(*v19, Pool2, 1u) )
                        break;
                    }
                    else if ( *Pool2 )
                    {
                      break;
                    }
                    ++v18;
                    ++v19;
                    v67 = v18;
                  }
                  v11 = v56;
                  if ( i >= 2 )
                  {
                    RegistryValues = -1073740028;
                    goto LABEL_68;
                  }
                  v7 = v60;
                }
              }
            }
          }
        }
        v15 = *(_QWORD *)(v15 + 16);
      }
      RegistryValue = IopGetRegistryValue(Handle, L"Security", 0, &v52);
      v9 = v52;
      RegistryValues = RegistryValue;
      if ( RegistryValue >= 0 )
      {
        if ( v52[1] != 3 || (v61 = v52[3], v61 < 0x28) )
        {
          RegistryValues = -1073741823;
          goto LABEL_69;
        }
        v69 = (__int64)v52 + (unsigned int)v52[2];
      }
      else if ( RegistryValue != -1073741772 )
      {
        goto LABEL_69;
      }
      v6 = v51;
      if ( *(PVOID *)v51 == IopRootDeviceNode )
      {
        if ( RtlCreateUnicodeString((PUNICODE_STRING)P, SourceString) )
          goto LABEL_113;
        RegistryValues = -1073741670;
      }
      else
      {
        RegistryValues = PipMakeGloballyUniqueId(*(_QWORD *)(*(_QWORD *)v51 + 32LL), 0LL, &v50);
        if ( RegistryValues >= 0 )
        {
          v27 = SourceString;
          v28 = -1LL;
          v29 = -1LL;
          do
            ++v29;
          while ( SourceString[v29] );
          v30 = v50;
          do
            ++v28;
          while ( v50[v28] );
          WORD1(P[0]) = 2 * (v28 + v29 + 2);
          P[1] = (PVOID)ExAllocatePool2(0x100uLL, (unsigned __int16)(2 * (v29 + v28) + 4), 0x67727453u);
          if ( !P[1] )
          {
            RegistryValues = -1073741670;
            goto LABEL_69;
          }
          RegistryValues = RtlUnicodeStringPrintf((PUNICODE_STRING)P, L"%ws&%ws", v27, v30);
          if ( RegistryValues < 0 )
            goto LABEL_69;
LABEL_113:
          v31 = v62;
          v32 = v76;
          while ( 1 )
          {
            v33 = v11;
            GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(v32, (int)Handle, 0LL, 0, (__int64)v11, v31, &v49);
            RegistryValues = GenericStorePropertyKeys;
            if ( GenericStorePropertyKeys != -1073741789 )
              break;
            v35 = v49;
            if ( v49 <= v31 )
            {
              RegistryValues = -1073741595;
              goto LABEL_142;
            }
            if ( v11 )
            {
              ExFreePoolWithTag(v11, 0);
              v35 = v49;
            }
            v31 = v35;
            v11 = (_DWORD *)ExAllocatePool2(0x100uLL, 20LL * v35, 0x20207050u);
            if ( !v11 )
              goto LABEL_67;
          }
          v36 = v49;
          if ( GenericStorePropertyKeys >= 0 )
          {
            if ( v49 )
            {
              v37 = (char *)ExAllocatePool2(0x100uLL, 48LL * v49, 0x20207050u);
              v63 = v37;
              if ( !v37 )
              {
                RegistryValues = -1073741670;
                goto LABEL_142;
              }
              v38 = v11;
              v39 = v37 + 32;
              v56 = v11;
              v40 = 0;
              while ( 1 )
              {
                *((_OWORD *)v39 - 2) = *(_OWORD *)v33;
                *((_DWORD *)v39 - 4) = v33[4];
                *((_DWORD *)v39 - 3) = 0;
                v41 = (__int64)v38 + 20 * v40;
                while ( 1 )
                {
                  RegistryValues = PnpGetGenericStoreProperty(
                                     v76,
                                     (__int64)Handle,
                                     0LL,
                                     v41,
                                     v39,
                                     *((void **)v39 + 1),
                                     *((_DWORD *)v39 + 1),
                                     &v49);
                  v42 = v49;
                  if ( RegistryValues != -1073741789 )
                    break;
                  if ( v49 <= *((_DWORD *)v39 + 1) )
                  {
                    RegistryValues = -1073741595;
                    goto LABEL_135;
                  }
                  v43 = (void *)*((_QWORD *)v39 + 1);
                  if ( v43 )
                  {
                    ExFreePoolWithTag(v43, 0);
                    v42 = v49;
                  }
                  *((_DWORD *)v39 + 1) = v42;
                  v44 = ExAllocatePool2(0x100uLL, v49, 0x20207050u);
                  *((_QWORD *)v39 + 1) = v44;
                  if ( !v44 )
                  {
                    RegistryValues = -1073741670;
LABEL_135:
                    v11 = v56;
                    v45 = (PVOID *)v63;
                    goto LABEL_136;
                  }
                }
                *((_DWORD *)v39 + 1) = v49;
                if ( RegistryValues < 0 )
                  goto LABEL_135;
                ++v40;
                v39 += 48;
                v33 += 5;
                if ( v40 >= (unsigned int)v36 )
                  break;
                v38 = v56;
              }
              v11 = v56;
            }
            v47 = (PVOID *)v63;
            RegistryValues = PiSwStartCreate(
                               L"DRIVERENUM",
                               *(const wchar_t **)(*(_QWORD *)v51 + 48LL),
                               (const wchar_t *)P[1],
                               (__int64)UnicodeString.Buffer,
                               (__int64)v65.Buffer,
                               (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                               v55,
                               (__int64)v71.Buffer,
                               (__int64)v72.Buffer,
                               v69,
                               v61,
                               (__int64)v63,
                               v36);
            v45 = v47;
            if ( v47 )
            {
LABEL_136:
              if ( (_DWORD)v36 )
              {
                v46 = v45 + 5;
                do
                {
                  if ( *v46 )
                    ExFreePoolWithTag(*v46, 0);
                  v46 += 6;
                  --v36;
                }
                while ( v36 );
              }
              ExFreePoolWithTag(v45, 0);
            }
          }
LABEL_142:
          if ( v11 )
            ExFreePoolWithTag(v11, 0);
LABEL_68:
          v9 = v52;
LABEL_69:
          v6 = v51;
        }
      }
      v10 = v50;
    }
  }
LABEL_71:
  if ( P[1] )
    ExFreePool(P[1]);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( UnicodeString.Buffer )
  {
    ExFreePool(UnicodeString.Buffer);
    UnicodeString = 0LL;
  }
  if ( v65.Buffer )
  {
    ExFreePool(v65.Buffer);
    v65 = 0LL;
  }
  if ( GuidString.Buffer )
  {
    ExFreePool(GuidString.Buffer);
    GuidString = 0LL;
  }
  if ( v71.Buffer )
  {
    ExFreePool(v71.Buffer);
    v71 = 0LL;
  }
  if ( v72.Buffer )
  {
    ExFreePool(v72.Buffer);
    v72 = 0LL;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v24 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( RegistryValues < 0 && (byte_140EEFF64 & 4) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)v24,
      (__int64)KMPnPEvt_CreateDriverSwDevice_Failure,
      v14,
      *(const wchar_t **)(*(_QWORD *)v6 + 48LL),
      SourceString,
      RegistryValues);
  if ( (int)v6[2] >= 0 )
    v6[2] = RegistryValues;
  return 0LL;
}
