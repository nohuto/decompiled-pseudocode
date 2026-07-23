/*
 * XREFs of EtwpEnableAutoLoggerProvider @ 0x140A741F0
 * Callers:
 *     EtwpEnumerateKeyProviders @ 0x140A953C0 (EtwpEnumerateKeyProviders.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlNtStatusToDosError @ 0x14086B8C0 (RtlNtStatusToDosError.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x1409B6290 (RtlWriteRegistryValue.c)
 *     EtwpEnableTrace @ 0x140A3E5DC (EtwpEnableTrace.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140A74938 (EtwpGetAutoLoggerProviderFilter.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpEnableAutoLoggerProvider(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  WCHAR *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  ULONG_PTR v12; // r12
  wchar_t *Pool2; // rax
  WCHAR *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rax
  ULONG_PTR v17; // rdi
  wchar_t *v18; // rax
  NTSTATUS RegistryValues; // eax
  const WCHAR *v20; // rdx
  __int64 v21; // rdi
  WCHAR *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rcx
  UNICODE_STRING *p_UnicodeString; // rdi
  __int64 *v29; // rbx
  __int64 v30; // rdi
  ULONG ValueData; // [rsp+20h] [rbp-F0h]
  ULONG ValueDataa; // [rsp+20h] [rbp-F0h]
  size_t Size; // [rsp+60h] [rbp-B0h]
  size_t v34; // [rsp+70h] [rbp-A0h]
  size_t v35; // [rsp+80h] [rbp-90h]
  int v36; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v37; // [rsp+94h] [rbp-7Ch] BYREF
  int v38; // [rsp+98h] [rbp-78h] BYREF
  char v39[4]; // [rsp+9Ch] [rbp-74h] BYREF
  ULONG v40; // [rsp+A0h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-68h] BYREF
  size_t v42; // [rsp+B0h] [rbp-60h] BYREF
  int v43; // [rsp+B8h] [rbp-58h] BYREF
  int v44[2]; // [rsp+C0h] [rbp-50h]
  __int64 v45; // [rsp+C8h] [rbp-48h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+D8h] [rbp-38h]
  __int64 v48; // [rsp+E0h] [rbp-30h] BYREF
  PVOID P; // [rsp+E8h] [rbp-28h] BYREF
  PVOID v50; // [rsp+F0h] [rbp-20h] BYREF
  PVOID v51; // [rsp+F8h] [rbp-18h] BYREF
  PVOID v52; // [rsp+100h] [rbp-10h] BYREF
  int v53[2]; // [rsp+108h] [rbp-8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+0h] BYREF
  UNICODE_STRING v55; // [rsp+140h] [rbp+30h] BYREF
  __int64 v56[2]; // [rsp+150h] [rbp+40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+160h] [rbp+50h] BYREF
  GUID Guid; // [rsp+170h] [rbp+60h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+180h] [rbp+70h] BYREF
  int v60; // [rsp+1C0h] [rbp+B0h] BYREF
  int *v61; // [rsp+1C8h] [rbp+B8h]
  int v62; // [rsp+1D0h] [rbp+C0h] BYREF
  int *v63; // [rsp+1D8h] [rbp+C8h]
  int v64; // [rsp+1E0h] [rbp+D0h] BYREF
  char *v65; // [rsp+1E8h] [rbp+D8h]
  int v66; // [rsp+1F0h] [rbp+E0h] BYREF
  unsigned int *v67; // [rsp+1F8h] [rbp+E8h]
  int v68; // [rsp+200h] [rbp+F0h] BYREF
  __int64 *v69; // [rsp+208h] [rbp+F8h]
  int v70; // [rsp+210h] [rbp+100h] BYREF
  __int64 *v71; // [rsp+218h] [rbp+108h]
  int v72[2]; // [rsp+310h] [rbp+200h] BYREF
  const wchar_t *v73; // [rsp+320h] [rbp+210h]
  int *v74; // [rsp+328h] [rbp+218h]
  int v75; // [rsp+330h] [rbp+220h]
  int *v76; // [rsp+338h] [rbp+228h]
  int v77; // [rsp+340h] [rbp+230h]
  __int64 (__fastcall *v78)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+348h] [rbp+238h]
  const wchar_t *v79; // [rsp+358h] [rbp+248h]
  int *v80; // [rsp+360h] [rbp+250h]
  int v81; // [rsp+368h] [rbp+258h]
  int *v82; // [rsp+370h] [rbp+260h]
  int v83; // [rsp+378h] [rbp+268h]
  __int64 (__fastcall *v84)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+380h] [rbp+270h]
  const wchar_t *v85; // [rsp+390h] [rbp+280h]
  int *v86; // [rsp+398h] [rbp+288h]
  int v87; // [rsp+3A0h] [rbp+290h]
  char *v88; // [rsp+3A8h] [rbp+298h]
  int v89; // [rsp+3B0h] [rbp+2A0h]
  __int64 (__fastcall *v90)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+3B8h] [rbp+2A8h]
  const wchar_t *v91; // [rsp+3C8h] [rbp+2B8h]
  int *v92; // [rsp+3D0h] [rbp+2C0h]
  int v93; // [rsp+3D8h] [rbp+2C8h]
  unsigned int *v94; // [rsp+3E0h] [rbp+2D0h]
  int v95; // [rsp+3E8h] [rbp+2D8h]
  __int64 (__fastcall *v96)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+3F0h] [rbp+2E0h]
  const wchar_t *v97; // [rsp+400h] [rbp+2F0h]
  int *v98; // [rsp+408h] [rbp+2F8h]
  int v99; // [rsp+410h] [rbp+300h]
  __int64 *v100; // [rsp+418h] [rbp+308h]
  int v101; // [rsp+420h] [rbp+310h]
  __int64 (__fastcall *v102)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+428h] [rbp+318h]
  const wchar_t *v103; // [rsp+438h] [rbp+328h]
  int *v104; // [rsp+440h] [rbp+330h]
  int v105; // [rsp+448h] [rbp+338h]
  __int64 *v106; // [rsp+450h] [rbp+340h]
  int v107; // [rsp+458h] [rbp+348h]

  *(_QWORD *)v44 = a5;
  v47 = a2;
  *(_QWORD *)v53 = a1;
  v36 = 0;
  v8 = 0LL;
  *(_DWORD *)v39 = 0;
  DestinationString = 0LL;
  v37 = 0;
  v38 = 0;
  v45 = 0LL;
  v48 = 0LL;
  v40 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  P = 0LL;
  v43 = 0;
  v55 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v42 = 0LL;
  v52 = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  memset_0(v72, 0, 0x498uLL);
  memset_0(&UnicodeString, 0, 0x40uLL);
  v9 = -1LL;
  *(_OWORD *)v56 = 0LL;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(a4 + 2 * v10) );
  v11 = -1LL;
  do
    ++v11;
  while ( a3[v11] );
  v12 = (unsigned int)(2 * (v11 + v10) + 4);
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v12, 0x50777445u);
  v14 = Pool2;
  v15 = 4LL;
  if ( !Pool2 )
    goto LABEL_48;
  ValueData = (unsigned int)a3;
  if ( RtlStringCbPrintfW(Pool2, (unsigned int)v12, L"%ws\\%ws", a4) )
    goto LABEL_48;
  RtlInitUnicodeString(&v55, v14);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v55;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) < 0 )
    goto LABEL_48;
  if ( *(_QWORD *)v44 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(*(_QWORD *)v44 + 2 * v16) );
    do
      ++v9;
    while ( a3[v9] );
    v17 = (unsigned int)(2 * (v9 + v16) + 4);
    v18 = (wchar_t *)ExAllocatePool2(0x100uLL, v17, 0x50777445u);
    v8 = v18;
    if ( !v18 )
      goto LABEL_48;
    ValueData = (unsigned int)a3;
    if ( !RtlStringCbPrintfW(v18, (unsigned int)v17, L"%ws\\%ws", *(_QWORD *)v44) )
    {
      RtlInitUnicodeString(&v55, v8);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v55;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) < 0 )
        Handle = 0LL;
    }
  }
  v75 = 4;
  *(_QWORD *)v72 = EtwpQueryRegistryCallback;
  v78 = EtwpQueryRegistryCallback;
  v74 = &v60;
  v84 = EtwpQueryRegistryCallback;
  v73 = L"Enabled";
  v90 = EtwpQueryRegistryCallback;
  v61 = &v36;
  v96 = EtwpQueryRegistryCallback;
  v80 = &v62;
  v79 = L"EnableProperty";
  v63 = &v38;
  v86 = &v64;
  v85 = L"EnableLevel";
  v65 = v39;
  v92 = &v66;
  v91 = L"EnableFlags";
  v67 = &v37;
  v98 = &v68;
  v97 = L"MatchAnyKeyword";
  v69 = &v45;
  v104 = &v70;
  v103 = L"MatchAllKeyword";
  v99 = 11;
  v68 = 11;
  v102 = EtwpQueryRegistryCallback;
  v105 = 11;
  v70 = 11;
  v71 = &v48;
  v60 = 4;
  v81 = 4;
  v62 = 4;
  v87 = 4;
  v64 = 4;
  v93 = 4;
  v66 = 4;
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v72, 0LL, ValueData, 1);
  if ( RegistryValues < 0 )
    goto LABEL_43;
  v20 = (const WCHAR *)Handle;
  if ( Handle && !a6 )
  {
    v77 = 4;
    v76 = &v36;
    v83 = 4;
    v82 = &v38;
    v89 = 4;
    v88 = v39;
    v95 = 4;
    v94 = &v37;
    v100 = &v45;
    v106 = &v48;
    v101 = 8;
    v107 = 8;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v72, 0LL, ValueDataa, 1);
    if ( RegistryValues >= 0 )
    {
      v20 = (const WCHAR *)Handle;
      goto LABEL_21;
    }
LABEL_43:
    v40 = RtlNtStatusToDosError(RegistryValues);
LABEL_44:
    v20 = (const WCHAR *)Handle;
    goto LABEL_45;
  }
LABEL_21:
  if ( v36 )
  {
    *(_QWORD *)v44 = 0LL;
    v21 = v47;
    v22 = v8;
    if ( a6 )
      v22 = 0LL;
    Guid = 0LL;
    if ( v47 )
      LOWORD(v44[0]) = v47;
    else
      LOWORD(v44[0]) = -1;
    EtwpGetAutoLoggerProviderFilter(v14, v22, &UnicodeString, v56, &P, &v43, &v50, (char *)&v42 + 4, &v51, &v42, &v52);
    RegistryValues = RtlGUIDFromString(&DestinationString, &Guid);
    if ( RegistryValues >= 0 )
    {
      v23 = *(_QWORD *)&Guid.Data1 - 0x4FA775A3E02A841CLL;
      if ( *(_QWORD *)&Guid.Data1 == 0x4FA775A3E02A841CLL )
        v23 = *(_QWORD *)Guid.Data4 - 0x237F9BCF09AEC8AFLL;
      if ( !v23 )
        goto LABEL_34;
      v24 = *(_QWORD *)&Guid.Data1 - s_ProviderThreatInt;
      if ( *(_QWORD *)&Guid.Data1 == s_ProviderThreatInt )
        v24 = *(_QWORD *)Guid.Data4 - 0x44D38D4D0F04D8F1LL;
      if ( v24 )
      {
        v25 = *(_QWORD *)v53;
      }
      else
      {
LABEL_34:
        v25 = *(_QWORD *)v53;
        if ( *(_QWORD *)v53 != EtwpHostSiloState )
          goto LABEL_48;
        if ( (unsigned int)v21 < *(_DWORD *)(*(_QWORD *)v53 + 16LL) )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v53 + 712LL) + 8 * v21);
          if ( (v26 & 1) == 0 )
          {
            if ( *(_QWORD *)(v26 + 160) )
              goto LABEL_48;
            _InterlockedOr((volatile signed __int32 *)(v26 + 816), 0x4000u);
          }
        }
      }
      v27 = v45;
      if ( !v45 )
      {
        v27 = v37;
        v45 = v37;
      }
      LODWORD(v34) = HIDWORD(v42);
      LODWORD(v35) = v42;
      LODWORD(Size) = v43;
      RegistryValues = EtwpEnableTrace(
                         v25,
                         (__int128 *)&Guid,
                         0LL,
                         v44[0],
                         1,
                         v39[0],
                         v27,
                         v48,
                         v38,
                         (const void **)&UnicodeString,
                         (const void **)v56,
                         P,
                         Size,
                         v50,
                         v34,
                         v51,
                         v35,
                         (__int64)v52);
      if ( RegistryValues >= 0 )
        goto LABEL_44;
    }
    goto LABEL_43;
  }
LABEL_45:
  if ( !v20 )
    v20 = (const WCHAR *)KeyHandle;
  RtlWriteRegistryValue(0x40000000u, v20, L"Status", 4u, &v40, 4u);
LABEL_48:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  if ( v51 )
    ExFreePoolWithTag(v51, 0);
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  p_UnicodeString = &UnicodeString;
  do
  {
    RtlFreeAnsiString(p_UnicodeString++);
    --v15;
  }
  while ( v15 );
  v29 = v56;
  v30 = 2LL;
  do
  {
    if ( *v29 )
      ExFreePoolWithTag((PVOID)*v29, 0);
    ++v29;
    --v30;
  }
  while ( v30 );
}
