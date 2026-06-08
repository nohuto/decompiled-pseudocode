/*
 * XREFs of sub_14003AB2C @ 0x14003AB2C
 * Callers:
 *     sub_140047614 @ 0x140047614 (sub_140047614.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_14003A750 @ 0x14003A750 (sub_14003A750.c)
 */

__int64 __fastcall sub_14003AB2C(HANDLE KeyHandle, ULONG Index, __int64 a3)
{
  PVOID *v6; // rsi
  char *v7; // r15
  __int64 v8; // r14
  NTSTATUS RegistryValues; // ebx
  unsigned __int16 v10; // r9
  _DWORD *v11; // r13
  char *Pool2; // rax
  int v13; // edx
  int v14; // r9d
  void *v15; // rcx
  unsigned int v16; // ecx
  ULONG v17; // edi
  unsigned int v18; // ebx
  int v19; // eax
  unsigned __int16 v20; // r9
  PVOID *v21; // rdi
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v25; // [rsp+34h] [rbp-CCh] BYREF
  void *KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v29[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-60h]
  char KeyInformation[12]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v32; // [rsp+BCh] [rbp-44h]
  char v33; // [rsp+C0h] [rbp-40h] BYREF
  char v34[8]; // [rsp+100h] [rbp+0h] BYREF
  int v35; // [rsp+108h] [rbp+8h]
  const wchar_t *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int v38; // [rsp+120h] [rbp+20h]
  int v39; // [rsp+140h] [rbp+40h]
  const wchar_t *v40; // [rsp+148h] [rbp+48h]
  __int64 v41; // [rsp+150h] [rbp+50h]
  int v42; // [rsp+158h] [rbp+58h]
  int v43; // [rsp+178h] [rbp+78h]
  const wchar_t *v44; // [rsp+180h] [rbp+80h]
  int *v45; // [rsp+188h] [rbp+88h]
  int v46; // [rsp+190h] [rbp+90h]
  int *v47; // [rsp+198h] [rbp+98h]
  int v48; // [rsp+1A0h] [rbp+A0h]

  v30 = 0LL;
  memset(v29, 0, sizeof(v29));
  v27 = 0LL;
  sub_140010680(KeyInformation, 0, 0x50uLL);
  v24 = 1;
  v25 = 0;
  KeyHandlea = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v8 = 0LL;
  RegistryValues = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, 0x50u, &v25);
  if ( RegistryValues < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_40;
    v10 = 15;
    goto LABEL_4;
  }
  ObjectAttributes.Length = 48;
  *((_QWORD *)&v27 + 1) = &v33;
  ObjectAttributes.RootDirectory = KeyHandle;
  WORD1(v27) = 60;
  LOWORD(v27) = v32;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v27;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
  if ( RegistryValues < 0 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v10 = 16;
LABEL_4:
      LODWORD(ResultLength) = RegistryValues;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, v10, (__int64)&unk_140014B60, ResultLength);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  sub_140010680(v34, 0, 0xE0uLL);
  v36 = L"Address";
  v11 = (_DWORD *)(a3 + 12);
  v41 = a3 + 12;
  v35 = 292;
  v38 = 0x4000000;
  v37 = a3 + 8;
  v39 = 292;
  v40 = L"Scope";
  v42 = 0x4000000;
  v44 = L"Enabled";
  v46 = 0x4000000;
  v45 = &v24;
  v47 = &v24;
  v43 = 288;
  v48 = 4;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, KeyHandlea, v34, 0LL, 0LL);
  if ( RegistryValues >= 0 )
  {
    if ( !v24 )
    {
      RegistryValues = -1073741823;
      goto LABEL_40;
    }
    if ( *v11 > 1u )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_39;
      v20 = 18;
      LODWORD(ResultLength) = *v11;
    }
    else
    {
      Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(unsigned __int16)v27 + 2, 1919119952LL);
      v7 = Pool2;
      if ( !Pool2 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        {
LABEL_18:
          RegistryValues = -1073741670;
          goto LABEL_40;
        }
        v14 = 19;
LABEL_17:
        LOBYTE(v13) = 2;
        sub_140003D28(off_140018050->DeviceExtension, v13, 4, v14, (__int64)&unk_140014B60);
        goto LABEL_18;
      }
      sub_140010380(Pool2, *((char **)&v27 + 1), (unsigned __int16)v27);
      v15 = KeyHandlea;
      *(_QWORD *)a3 = v7;
      RegistryValues = ZwQueryKey(v15, KeyCachedInformation, v29, 0x28u, &v25);
      if ( RegistryValues < 0 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          v10 = 20;
          goto LABEL_4;
        }
        goto LABEL_40;
      }
      v8 = HIDWORD(v29[0]);
      if ( (unsigned int)(HIDWORD(v29[0]) - 1) <= 0xFE )
      {
        v6 = (PVOID *)ExAllocatePool2(64LL, (unsigned int)(16 * HIDWORD(v29[0])), 1919119952LL);
        if ( !v6 )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            goto LABEL_18;
          v14 = 22;
          goto LABEL_17;
        }
        v16 = 0;
        v17 = 0;
        if ( (_DWORD)v8 )
        {
          do
          {
            v18 = v16;
            v19 = sub_14003A750(KeyHandlea, v17, (__int64)&v6[2 * v16]);
            v16 = v18 + 1;
            if ( v19 < 0 )
              v16 = v18;
            ++v17;
          }
          while ( v17 < (unsigned int)v8 );
          if ( v16 )
          {
            *(_QWORD *)(a3 + 24) = v6;
            v7 = 0LL;
            v6 = 0LL;
            *(_BYTE *)(a3 + 16) = v16;
            RegistryValues = 0;
            goto LABEL_40;
          }
        }
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v13) = 2;
          sub_140003D28(off_140018050->DeviceExtension, v13, 1, 23, (__int64)&unk_140014B60);
        }
LABEL_39:
        RegistryValues = -1073741811;
        goto LABEL_40;
      }
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_39;
      v20 = 21;
      LODWORD(ResultLength) = HIDWORD(v29[0]);
    }
    sub_140005F24((__int64)off_140018050->DeviceExtension, 2u, 1u, v20, (__int64)&unk_140014B60, ResultLength);
    goto LABEL_39;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v10 = 17;
    goto LABEL_4;
  }
LABEL_40:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  if ( v6 )
  {
    if ( (_DWORD)v8 )
    {
      v21 = v6;
      do
      {
        if ( *v21 )
          ExFreePoolWithTag(*v21, 0x72637250u);
        v21 += 2;
        --v8;
      }
      while ( v8 );
    }
    ExFreePoolWithTag(v6, 0x72637250u);
  }
  return (unsigned int)RegistryValues;
}
