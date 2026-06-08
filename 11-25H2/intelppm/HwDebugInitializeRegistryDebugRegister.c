/*
 * XREFs of HwDebugInitializeRegistryDebugRegister @ 0x14003AA2C
 * Callers:
 *     HwDebugInitializeRegistryDebugRegisters @ 0x140047504 (HwDebugInitializeRegistryDebugRegisters.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x140005F14 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     memmove @ 0x140010040 (memmove.c)
 *     memset @ 0x140010340 (memset.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x14003A650 (HwDebugInitializeRegistryDebugParameter.c)
 */

__int64 __fastcall HwDebugInitializeRegistryDebugRegister(HANDLE KeyHandle, ULONG Index, __int64 a3)
{
  PVOID *v6; // rsi
  void *v7; // r15
  __int64 v8; // r14
  NTSTATUS RegistryValues; // ebx
  unsigned __int16 v10; // r9
  _DWORD *v11; // r13
  void *Pool2; // rax
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
  void *Src[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v29[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-60h]
  _WORD KeyInformation[40]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v32[28]; // [rsp+100h] [rbp+0h] BYREF

  v30 = 0LL;
  memset(v29, 0, sizeof(v29));
  *(_OWORD *)Src = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v24 = 1;
  v25 = 0;
  KeyHandlea = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v8 = 0LL;
  RegistryValues = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, (ULONG)80, &v25);
  if ( RegistryValues < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    v10 = 15;
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
      v10 = 16;
LABEL_4:
      LODWORD(ResultLength) = RegistryValues;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        v10,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        ResultLength);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  memset(v32, 0, sizeof(v32));
  v32[2] = L"Address";
  v11 = (_DWORD *)(a3 + 12);
  v32[10] = a3 + 12;
  LODWORD(v32[1]) = 292;
  LODWORD(v32[4]) = 0x4000000;
  v32[3] = a3 + 8;
  LODWORD(v32[8]) = 292;
  v32[9] = L"Scope";
  LODWORD(v32[11]) = 0x4000000;
  v32[16] = L"Enabled";
  LODWORD(v32[18]) = 0x4000000;
  v32[17] = &v24;
  v32[19] = &v24;
  LODWORD(v32[15]) = 288;
  LODWORD(v32[20]) = 4;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, KeyHandlea, v32, 0LL, 0LL);
  if ( RegistryValues >= 0 )
  {
    if ( !v24 )
    {
      RegistryValues = -1073741823;
      goto LABEL_40;
    }
    if ( *v11 > 1u )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v20 = 18;
      LODWORD(ResultLength) = *v11;
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
        v14 = 19;
LABEL_17:
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          4,
          v14,
          (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
        goto LABEL_18;
      }
      memmove(Pool2, Src[1], LOWORD(Src[0]));
      v15 = KeyHandlea;
      *(_QWORD *)a3 = v7;
      RegistryValues = ZwQueryKey(v15, KeyCachedInformation, v29, (ULONG)40, &v25);
      if ( RegistryValues < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
            v19 = HwDebugInitializeRegistryDebugParameter(KeyHandlea, v17, (__int64)&v6[2 * v16]);
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
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v13,
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
      v20 = 21;
      LODWORD(ResultLength) = HIDWORD(v29[0]);
    }
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v20,
      (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
      ResultLength);
    goto LABEL_39;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 17;
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
      v21 = v6;
      do
      {
        if ( *v21 )
          ExFreePoolWithTag(*v21, (ULONG)1919119952);
        v21 += 2;
        --v8;
      }
      while ( v8 );
    }
    ExFreePoolWithTag(v6, (ULONG)1919119952);
  }
  return (unsigned int)RegistryValues;
}
