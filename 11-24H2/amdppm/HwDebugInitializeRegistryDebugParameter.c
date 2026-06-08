/*
 * XREFs of HwDebugInitializeRegistryDebugParameter @ 0x14003A484
 * Callers:
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003A860 (HwDebugInitializeRegistryDebugRegister.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003618 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     memmove @ 0x14000E480 (memmove.c)
 *     memset @ 0x14000E780 (memset.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugParameter(HANDLE KeyHandle, ULONG Index, __int64 a3)
{
  unsigned int v6; // edx
  NTSTATUS RegistryValues; // ebx
  int v8; // r9d
  unsigned int v9; // ecx
  int v10; // r9d
  void *Pool2; // rax
  int v12; // edx
  void *v13; // rbx
  char v14; // al
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  unsigned int v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v19; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v20; // [rsp+4Ch] [rbp-B4h] BYREF
  void *KeyHandlea; // [rsp+50h] [rbp-B0h] BYREF
  void *Src[2]; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _WORD KeyInformation[40]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v25[28]; // [rsp+F0h] [rbp-10h] BYREF

  v17 = 0;
  v18 = 0;
  *(_OWORD *)Src = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v20 = 0;
  v19 = 0;
  KeyHandlea = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RegistryValues = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, (ULONG)80, &v20);
  if ( RegistryValues < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v8 = 24;
    goto LABEL_4;
  }
  ObjectAttributes.Length = 48;
  Src[1] = &KeyInformation[8];
  ObjectAttributes.RootDirectory = KeyHandle;
  WORD1(Src[0]) = 60;
  LOWORD(Src[0]) = KeyInformation[6];
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Src;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
  if ( RegistryValues < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 25;
LABEL_4:
      LODWORD(ResultLength) = RegistryValues;
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        4,
        v8,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        ResultLength);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  memset(v25, 0, sizeof(v25));
  v25[2] = L"BitWidth";
  v25[3] = &v17;
  LODWORD(v25[1]) = 292;
  v25[9] = L"BitOffset";
  LODWORD(v25[4]) = 0x4000000;
  v25[10] = &v18;
  v25[16] = L"Type";
  LODWORD(v25[8]) = 292;
  LODWORD(v25[11]) = 0x4000000;
  LODWORD(v25[15]) = 292;
  LODWORD(v25[18]) = 0x4000000;
  v25[17] = &v19;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, KeyHandlea, v25, 0LL, 0LL);
  if ( RegistryValues >= 0 )
  {
    v9 = v17;
    if ( v17 <= 0x40 )
    {
      v6 = v18;
      if ( v18 > 0x3F )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_16;
        v10 = 28;
        LODWORD(ResultLength) = v18;
        goto LABEL_15;
      }
      if ( v18 + v17 > 0x40 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(ResultLength) = v17;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x1Du,
            (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
            ResultLength,
            v18);
        }
        goto LABEL_16;
      }
      v9 = v19;
      if ( v19 < 3 )
      {
        Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)LOWORD(Src[0]) + 2, 1919119952LL);
        v13 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Src[1], LOWORD(Src[0]));
          *(_BYTE *)(a3 + 8) = v17;
          *(_BYTE *)(a3 + 9) = v18;
          v14 = v19;
          *(_QWORD *)a3 = v13;
          RegistryValues = 0;
          *(_BYTE *)(a3 + 10) = v14;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = 2;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v12,
              4,
              31,
              (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
          }
          RegistryValues = -1073741670;
        }
        goto LABEL_31;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 30;
        goto LABEL_14;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 27;
LABEL_14:
      LODWORD(ResultLength) = v9;
LABEL_15:
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        1,
        v10,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        ResultLength);
    }
LABEL_16:
    RegistryValues = -1073741811;
    goto LABEL_31;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 26;
    goto LABEL_4;
  }
LABEL_31:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  return (unsigned int)RegistryValues;
}
