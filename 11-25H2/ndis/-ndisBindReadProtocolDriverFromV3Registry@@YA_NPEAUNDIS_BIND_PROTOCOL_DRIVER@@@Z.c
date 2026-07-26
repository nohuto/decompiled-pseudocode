/*
 * XREFs of ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x140174F20
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x140174ED0 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline @ 0x14009F4E0 (Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140141060 (--_V@YAXPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x140169940 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV3Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  HANDLE v1; // r14
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  NTSTATUS v5; // r15d
  int v6; // ecx
  NTSTATUS v7; // eax
  HANDLE v8; // rbx
  Rtl::KString *value; // rsi
  _GUID v10; // xmm6
  _BYTE *v11; // rdi
  NTSTATUS ValueKey; // eax
  _BYTE *Pool2; // rax
  NTSTATUS v14; // eax
  void *v15; // rcx
  int v17; // esi
  wchar_t *v18; // rax
  void *v19; // rsi
  __int64 v20; // rcx
  int v21; // edi
  NTSTATUS v22; // eax
  wchar_t *v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  NTSTATUS v26; // eax
  void *v27; // r14
  char v28; // r13
  wchar_t *v29; // rax
  __int64 v30; // rcx
  NTSTATUS v31; // eax
  _DWORD *v32; // rcx
  struct NDIS_BIND_PROTOCOL_DRIVER *v33; // rdi
  _BYTE *v34; // rdi
  NTSTATUS v35; // eax
  _BYTE *v36; // rax
  void *v37; // rcx
  ULONG Length[2]; // [rsp+20h] [rbp-E0h]
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG v40[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v41[2]; // [rsp+88h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES v42; // [rsp+98h] [rbp-68h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp-38h] BYREF
  struct NDIS_BIND_PROTOCOL_DRIVER *v44; // [rsp+D0h] [rbp-30h]
  __int128 v45; // [rsp+D8h] [rbp-28h] BYREF
  _UNICODE_STRING ValueName; // [rsp+E8h] [rbp-18h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F8h] [rbp-8h] BYREF
  _GUID v48; // [rsp+128h] [rbp+28h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v50[256]; // [rsp+240h] [rbp+140h] BYREF
  wchar_t Dst[48]; // [rsp+340h] [rbp+240h] BYREF
  wchar_t v52[256]; // [rsp+3A0h] [rbp+2A0h] BYREF

  v1 = 0LL;
  v44 = a1;
  a1->ProtocolBindFlags = 0;
  v45 = 0LL;
  v2 = 0x7FFFLL;
  v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v5 = -1073741811;
  v6 = -1073741811;
  if ( v2 )
  {
    v6 = 0;
    *((_QWORD *)&v45 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
    LOWORD(v45) = 2 * (0x7FFF - v2);
    WORD1(v45) = v45 + 2;
  }
  if ( v6 < 0 )
    return 0;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v45;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v8 = KeyHandle;
  if ( v7 < 0 )
    goto LABEL_12;
  value = a1->Name.__ptr_.__value_;
  v10 = 0LL;
  v48 = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v40[0] = 0;
  v11 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(
               KeyHandle,
               &value->_UNICODE_STRING,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x100u,
               v40);
  if ( ValueKey == -2147483643 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, v40[0], 1852392018);
    v11 = Pool2;
    if ( !Pool2 )
      goto LABEL_12;
    v14 = ZwQueryValueKey(v8, &value->_UNICODE_STRING, KeyValuePartialInformation, Pool2, v40[0], v40);
    v15 = v11;
    if ( v14 < 0 )
      goto LABEL_11;
  }
  else
  {
    v15 = 0LL;
    if ( ValueKey < 0 )
      goto LABEL_12;
  }
  if ( *((_DWORD *)v11 + 1) != 3 )
  {
    if ( v15 )
LABEL_11:
      operator delete[](v15);
LABEL_12:
    if ( v8 )
      ZwClose(v8);
    return 0;
  }
  v17 = *((_DWORD *)v11 + 2);
  if ( v17 == 16 )
  {
    v10 = *(_GUID *)(v11 + 12);
    v48 = v10;
  }
  if ( v15 )
    operator delete[](v15);
  if ( v17 != 16 )
    goto LABEL_12;
  netsetupBuildObjectPath(4LL, (int *)&v48, 0, 1u, v52);
  v18 = v52;
  *(_OWORD *)v41 = 0LL;
  v19 = 0LL;
  v20 = 0x7FFFLL;
  do
  {
    if ( !*v18 )
      break;
    ++v18;
    --v20;
  }
  while ( v20 );
  v21 = -1073741811;
  if ( v20 )
  {
    v21 = 0;
    LOWORD(v41[0]) = 2 * (0x7FFF - v20);
    WORD1(v41[0]) = LOWORD(v41[0]) + 2;
    v41[1] = v52;
  }
  if ( v21 >= 0 )
  {
    *(_QWORD *)v40 = 0LL;
    v42.ObjectName = (PUNICODE_STRING)v41;
    *(_QWORD *)&v42.Length = 48LL;
    *(_QWORD *)&v42.Attributes = 576LL;
    v42.RootDirectory = 0LL;
    *(_OWORD *)&v42.SecurityDescriptor = 0LL;
    v22 = ZwOpenKey((PHANDLE)v40, 1u, &v42);
    v19 = *(void **)v40;
    v21 = v22;
  }
  if ( v21 == -1073741772 )
  {
    if ( !*((_BYTE *)qword_140127138 + 96) )
      goto LABEL_43;
    netsetupBuildObjectPath(4LL, (int *)&v48, 1u, 1u, v52);
    v23 = v52;
    *(_OWORD *)v41 = 0LL;
    v24 = 0x7FFFLL;
    do
    {
      if ( !*v23 )
        break;
      ++v23;
      --v24;
    }
    while ( v24 );
    v25 = -1073741811;
    if ( v24 )
    {
      v25 = 0;
      LOWORD(v41[0]) = 2 * (0x7FFF - v24);
      WORD1(v41[0]) = LOWORD(v41[0]) + 2;
      v41[1] = v52;
    }
    if ( v25 < 0 )
      goto LABEL_43;
    *(_QWORD *)v40 = 0LL;
    v42.ObjectName = (PUNICODE_STRING)v41;
    *(_QWORD *)&v42.Length = 48LL;
    *(_QWORD *)&v42.Attributes = 576LL;
    v42.RootDirectory = 0LL;
    *(_OWORD *)&v42.SecurityDescriptor = 0LL;
    v26 = ZwOpenKey((PHANDLE)v40, 1u, &v42);
    v27 = *(void **)v40;
    v21 = v26;
    if ( v19 )
      ZwClose(v19);
    v19 = v27;
    v1 = 0LL;
  }
  if ( v21 < 0 )
  {
LABEL_43:
    if ( v19 )
      ZwClose(v19);
    goto LABEL_12;
  }
  v28 = 0;
  LODWORD(ResultLength) = 18368;
  Length[0] = 22819;
  swprintf_s(
    Dst,
    0x2DuLL,
    L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04x",
    2702307829LL,
    *(_QWORD *)Length,
    ResultLength,
    154,
    104,
    208,
    186,
    251,
    87,
    121,
    1,
    2);
  v29 = Dst;
  v48 = 0LL;
  v30 = 0x7FFFLL;
  do
  {
    if ( !*v29 )
      break;
    ++v29;
    --v30;
  }
  while ( v30 );
  if ( v30 )
  {
    v5 = 0;
    *(_QWORD *)v48.Data4 = Dst;
    LOWORD(v48.Data1) = 2 * (0x7FFF - v30);
    HIWORD(v48.Data1) = LOWORD(v48.Data1) + 2;
  }
  if ( v5 >= 0 )
  {
    v41[0] = 0LL;
    v42.ObjectName = (PUNICODE_STRING)&v48;
    *(_QWORD *)&v42.Length = 48LL;
    *(_QWORD *)&v42.Attributes = 576LL;
    v42.RootDirectory = v19;
    *(_OWORD *)&v42.SecurityDescriptor = 0LL;
    v31 = ZwOpenKey(v41, 1u, &v42);
    v1 = v41[0];
    v5 = v31;
  }
  if ( v5 != -1073741772 )
  {
    if ( v5 )
      goto LABEL_81;
    ValueName = 0LL;
    memset(v50, 0, sizeof(v50));
    v40[0] = 0;
    v34 = v50;
    v35 = ZwQueryValueKey(v1, &ValueName, KeyValuePartialInformation, v50, 0x100u, v40);
    v5 = v35;
    if ( v35 == -2147483643 )
    {
      v36 = (_BYTE *)ExAllocatePool2(256LL, v40[0], 1852392018);
      v34 = v36;
      if ( !v36 )
      {
        v5 = -1073741670;
        goto LABEL_81;
      }
      v5 = ZwQueryValueKey(v1, &ValueName, KeyValuePartialInformation, v36, v40[0], v40);
      v37 = v34;
      if ( v5 < 0 )
      {
LABEL_80:
        operator delete[](v37);
        goto LABEL_81;
      }
    }
    else
    {
      v37 = 0LL;
      if ( v35 < 0 )
        goto LABEL_81;
    }
    if ( *((_DWORD *)v34 + 1) != -65519 )
    {
      if ( v37 )
        operator delete[](v37);
      v5 = -1073741788;
LABEL_81:
      if ( v1 )
        ZwClose(v1);
      if ( v5 )
        goto LABEL_43;
      if ( v28 )
      {
        v33 = v44;
        goto LABEL_87;
      }
      goto LABEL_85;
    }
    if ( *((_DWORD *)v34 + 2) != 1 )
    {
      v5 = -1073741762;
      goto LABEL_79;
    }
    if ( v34[12] )
    {
      if ( v34[12] != 1 )
      {
        v5 = -1073741762;
        goto LABEL_79;
      }
      v28 = 1;
    }
    v5 = 0;
LABEL_79:
    if ( !v37 )
      goto LABEL_81;
    goto LABEL_80;
  }
  v32 = &unk_1400FF400;
  while ( v32[4] != 2
       || *(_QWORD *)v32 != NETSETUPPKEY_ProtocolDriver_NoStartAtBootHint
       || *((_QWORD *)v32 + 1) != 0x17957FBBAD0689ALL )
  {
    v32 += 5;
    if ( v32 == (_DWORD *)&unk_1400FFC5C )
      goto LABEL_81;
  }
  if ( !v1 )
  {
LABEL_85:
    v33 = v44;
    v44->ProtocolBindFlags |= 1u;
    goto LABEL_87;
  }
  ZwClose(v1);
  v33 = v44;
  v44->ProtocolBindFlags |= 1u;
LABEL_87:
  if ( (unsigned int)Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline() )
    v33->Guid = v10;
  if ( v19 )
    ZwClose(v19);
  if ( v8 )
    ZwClose(v8);
  return 1;
}
