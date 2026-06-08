/*
 * XREFs of HwDebugInitializeRegistryDebugRegister @ 0x140039610
 * Callers:
 *     HwDebugInitializeRegistryDebugRegisters @ 0x140039B38 (HwDebugInitializeRegistryDebugRegisters.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     memmove @ 0x14000D7C0 (memmove.c)
 *     memset @ 0x14000DAC0 (memset.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x140039234 (HwDebugInitializeRegistryDebugParameter.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugRegister(HANDLE KeyHandle, ULONG Index, __int64 a3)
{
  PVOID *v6; // rsi
  void *v7; // r15
  __int64 v8; // r14
  int v9; // edx
  NTSTATUS RegistryValues; // ebx
  int v11; // r9d
  _DWORD *v12; // r13
  void *Pool2; // rax
  int v14; // edx
  int v15; // r9d
  void *v16; // rcx
  unsigned int v17; // ecx
  ULONG v18; // edi
  unsigned int v19; // ebx
  int v20; // eax
  int v21; // r9d
  PVOID *v22; // rdi
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v26; // [rsp+34h] [rbp-CCh] BYREF
  void *KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v30[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-60h]
  _WORD KeyInformation[40]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v33[28]; // [rsp+100h] [rbp+0h] BYREF

  v31 = 0LL;
  memset(v30, 0, sizeof(v30));
  *(_OWORD *)Src = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v25 = 1;
  v26 = 0;
  KeyHandlea = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v8 = 0LL;
  RegistryValues = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, (ULONG)80, &v26);
  if ( RegistryValues < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    v11 = 15;
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
      v11 = 16;
LABEL_4:
      LODWORD(ResultLength) = RegistryValues;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        4,
        v11,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        ResultLength);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  memset(v33, 0, sizeof(v33));
  v33[2] = L"Address";
  v12 = (_DWORD *)(a3 + 12);
  v33[10] = a3 + 12;
  LODWORD(v33[1]) = 292;
  LODWORD(v33[4]) = 0x4000000;
  v33[3] = a3 + 8;
  LODWORD(v33[8]) = 292;
  v33[9] = L"Scope";
  LODWORD(v33[11]) = 0x4000000;
  v33[16] = L"Enabled";
  LODWORD(v33[18]) = 0x4000000;
  v33[17] = &v25;
  v33[19] = &v25;
  LODWORD(v33[15]) = 288;
  LODWORD(v33[20]) = 4;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, KeyHandlea, v33, 0LL, 0LL);
  if ( RegistryValues >= 0 )
  {
    if ( !v25 )
    {
      RegistryValues = -1073741823;
      goto LABEL_40;
    }
    if ( *v12 > 1u )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v21 = 18;
      LODWORD(ResultLength) = *v12;
    }
    else
    {
      Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)LOWORD(Src[0]) + 2, 1919119952LL);
      v7 = Pool2;
      if ( !Pool2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_18:
          RegistryValues = -1073741670;
          goto LABEL_40;
        }
        v15 = 19;
LABEL_17:
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          4,
          v15,
          (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
        goto LABEL_18;
      }
      memmove(Pool2, Src[1], LOWORD(Src[0]));
      v16 = KeyHandlea;
      *(_QWORD *)a3 = v7;
      RegistryValues = ZwQueryKey(v16, KeyCachedInformation, v30, (ULONG)40, &v26);
      if ( RegistryValues < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 20;
          goto LABEL_4;
        }
        goto LABEL_40;
      }
      v8 = HIDWORD(v30[0]);
      if ( (unsigned int)(HIDWORD(v30[0]) - 1) <= 0xFE )
      {
        v6 = (PVOID *)ExAllocatePool2(64LL, (unsigned int)(16 * HIDWORD(v30[0])), 1919119952LL);
        if ( !v6 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_18;
          v15 = 22;
          goto LABEL_17;
        }
        v17 = 0;
        v18 = 0;
        if ( (_DWORD)v8 )
        {
          do
          {
            v19 = v17;
            v20 = HwDebugInitializeRegistryDebugParameter(KeyHandlea, v18, (__int64)&v6[2 * v17]);
            v17 = v19 + 1;
            if ( v20 < 0 )
              v17 = v19;
            ++v18;
          }
          while ( v18 < (unsigned int)v8 );
          if ( v17 )
          {
            *(_QWORD *)(a3 + 24) = v6;
            v7 = 0LL;
            v6 = 0LL;
            *(_BYTE *)(a3 + 16) = v17;
            RegistryValues = 0;
            goto LABEL_40;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            1,
            23,
            (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
        }
LABEL_39:
        RegistryValues = -1073741811;
        goto LABEL_40;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v21 = 21;
      LODWORD(ResultLength) = HIDWORD(v30[0]);
    }
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      1,
      v21,
      (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
      ResultLength);
    goto LABEL_39;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 17;
    goto LABEL_4;
  }
LABEL_40:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  if ( v6 )
  {
    if ( (_DWORD)v8 )
    {
      v22 = v6;
      do
      {
        if ( *v22 )
          ExFreePoolWithTag(*v22, (ULONG)1919119952);
        v22 += 2;
        --v8;
      }
      while ( v8 );
    }
    ExFreePoolWithTag(v6, (ULONG)1919119952);
  }
  return (unsigned int)RegistryValues;
}
