/*
 * XREFs of sub_14003A750 @ 0x14003A750
 * Callers:
 *     sub_14003AB2C @ 0x14003AB2C (sub_14003AB2C.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140004388 @ 0x140004388 (sub_140004388.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_14003A750(HANDLE KeyHandle, ULONG Index, __int64 a3)
{
  NTSTATUS RegistryValues; // ebx
  unsigned __int16 v7; // r9
  unsigned int v8; // ecx
  unsigned __int16 v9; // r9
  char *Pool2; // rax
  int v11; // edx
  char *v12; // rbx
  char v13; // al
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v18; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v19; // [rsp+4Ch] [rbp-B4h] BYREF
  void *KeyHandlea; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  char KeyInformation[12]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v24; // [rsp+ACh] [rbp-54h]
  char v25; // [rsp+B0h] [rbp-50h] BYREF
  char v26[8]; // [rsp+F0h] [rbp-10h] BYREF
  int v27; // [rsp+F8h] [rbp-8h]
  const wchar_t *v28; // [rsp+100h] [rbp+0h]
  unsigned int *v29; // [rsp+108h] [rbp+8h]
  int v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+130h] [rbp+30h]
  const wchar_t *v32; // [rsp+138h] [rbp+38h]
  unsigned int *v33; // [rsp+140h] [rbp+40h]
  int v34; // [rsp+148h] [rbp+48h]
  int v35; // [rsp+168h] [rbp+68h]
  const wchar_t *v36; // [rsp+170h] [rbp+70h]
  unsigned int *v37; // [rsp+178h] [rbp+78h]
  int v38; // [rsp+180h] [rbp+80h]

  v16 = 0;
  v17 = 0;
  v21 = 0LL;
  sub_140010680(KeyInformation, 0, 0x50uLL);
  v19 = 0;
  v18 = 0;
  KeyHandlea = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RegistryValues = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, 0x50u, &v19);
  if ( RegistryValues < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_31;
    v7 = 24;
    goto LABEL_4;
  }
  ObjectAttributes.Length = 48;
  *((_QWORD *)&v21 + 1) = &v25;
  ObjectAttributes.RootDirectory = KeyHandle;
  WORD1(v21) = 60;
  LOWORD(v21) = v24;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
  if ( RegistryValues < 0 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v7 = 25;
LABEL_4:
      LODWORD(ResultLength) = RegistryValues;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, v7, (__int64)&unk_140014B60, ResultLength);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  sub_140010680(v26, 0, 0xE0uLL);
  v28 = L"BitWidth";
  v29 = &v16;
  v27 = 292;
  v32 = L"BitOffset";
  v30 = 0x4000000;
  v33 = &v17;
  v36 = L"Type";
  v31 = 292;
  v34 = 0x4000000;
  v35 = 292;
  v38 = 0x4000000;
  v37 = &v18;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, KeyHandlea, v26, 0LL, 0LL);
  if ( RegistryValues >= 0 )
  {
    v8 = v16;
    if ( v16 <= 0x40 )
    {
      if ( v17 > 0x3F )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_16;
        v9 = 28;
        LODWORD(ResultLength) = v17;
        goto LABEL_15;
      }
      if ( v17 + v16 > 0x40 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LODWORD(ResultLength) = v16;
          sub_140004388(
            (__int64)off_140018050->DeviceExtension,
            2u,
            1u,
            0x1Du,
            (__int64)&unk_140014B60,
            ResultLength,
            v17);
        }
        goto LABEL_16;
      }
      v8 = v18;
      if ( v18 < 3 )
      {
        Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(unsigned __int16)v21 + 2, 1919119952LL);
        v12 = Pool2;
        if ( Pool2 )
        {
          sub_140010380(Pool2, *((char **)&v21 + 1), (unsigned __int16)v21);
          *(_BYTE *)(a3 + 8) = v16;
          *(_BYTE *)(a3 + 9) = v17;
          v13 = v18;
          *(_QWORD *)a3 = v12;
          RegistryValues = 0;
          *(_BYTE *)(a3 + 10) = v13;
        }
        else
        {
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            LOBYTE(v11) = 2;
            sub_140003D28(off_140018050->DeviceExtension, v11, 4, 31, (__int64)&unk_140014B60);
          }
          RegistryValues = -1073741670;
        }
        goto LABEL_31;
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v9 = 30;
        goto LABEL_14;
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v9 = 27;
LABEL_14:
      LODWORD(ResultLength) = v8;
LABEL_15:
      sub_140005F24((__int64)off_140018050->DeviceExtension, 2u, 1u, v9, (__int64)&unk_140014B60, ResultLength);
    }
LABEL_16:
    RegistryValues = -1073741811;
    goto LABEL_31;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v7 = 26;
    goto LABEL_4;
  }
LABEL_31:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  return (unsigned int)RegistryValues;
}
