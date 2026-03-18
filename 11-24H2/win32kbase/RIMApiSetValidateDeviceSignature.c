/*
 * XREFs of RIMApiSetValidateDeviceSignature @ 0x1400A8638
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserLogError @ 0x1400A6760 (UserLogError.c)
 *     EtwTraceTHQAStart @ 0x1400A6820 (EtwTraceTHQAStart.c)
 *     EtwTraceTHQAStop @ 0x1400A6850 (EtwTraceTHQAStop.c)
 *     ?_GetLicensingType@@YAKXZ @ 0x1400A687C (-_GetLicensingType@@YAKXZ.c)
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400A6A4C (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 *     RIMIsRunningOnDesktop @ 0x1400A8A78 (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?CheckForSegmentedSignatureBlob@@YAJPEAXGPEAU_HIDP_VALUE_CAPS@@PEAG@Z @ 0x1401548C4 (-CheckForSegmentedSignatureBlob@@YAJPEAXGPEAU_HIDP_VALUE_CAPS@@PEAG@Z.c)
 */

__int64 __fastcall RIMApiSetValidateDeviceSignature(
        struct _DEVICE_OBJECT *a1,
        struct _FILE_OBJECT *a2,
        struct _HIDP_PREPARSED_DATA *a3,
        struct _HIDP_CAPS *a4,
        __int64 a5,
        __int64 *a6)
{
  unsigned int v7; // r12d
  unsigned __int16 v8; // r14
  USAGE v10; // r15
  __int64 v11; // rcx
  int v13; // edi
  int LicensingType; // eax
  bool v15; // zf
  __int64 NumberFeatureValueCaps; // rax
  __int64 v17; // rcx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rax
  NTSTATUS SpecificValueCaps; // ebx
  __int64 v20; // xmm0_8
  USHORT v21; // dx
  bool v22; // r15
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  __int16 PreparsedData; // [rsp+30h] [rbp-50h]
  char v27; // [rsp+40h] [rbp-40h]
  USHORT ValueCapsLength[2]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int16 v29; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v30; // [rsp+58h] [rbp-28h] BYREF
  ULONG ReturnLength; // [rsp+5Ch] [rbp-24h] BYREF
  __int64 SystemInformation; // [rsp+60h] [rbp-20h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp-18h]
  _HID_COLLECTION_INFORMATION v34; // [rsp+70h] [rbp-10h] BYREF

  v7 = 0;
  v29 = 0;
  v8 = 0;
  v10 = 197;
  if ( !(unsigned int)RIMIsRunningOnDesktop() )
    return 0LL;
  EtwTraceTHQAStart(v11);
  SystemInformation = 8LL;
  ReturnLength = 0;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength) >= 0
    && (SystemInformation & 0x200000000LL) != 0 )
  {
    LicensingType = _GetLicensingType();
    v13 = 1;
    v7 = 4;
  }
  else
  {
    v13 = 0;
    LicensingType = _GetLicensingType();
  }
  v15 = LicensingType == 0;
  NumberFeatureValueCaps = a4->NumberFeatureValueCaps;
  v17 = 3LL;
  if ( v15 )
    v7 = 3;
  ValueCapsLength[0] = a4->NumberFeatureValueCaps;
  v30 = v7;
  if ( (_WORD)NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72 * NumberFeatureValueCaps, 0x63767355u);
    Buffer = ValueCaps;
    if ( ValueCaps )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0, 0, 0xC5u, ValueCaps, ValueCapsLength, a3);
      if ( SpecificValueCaps >= 0 )
      {
LABEL_10:
        v20 = *a6;
        *(_DWORD *)&v34.ProductID = *((_DWORD *)a6 + 2);
        *(_QWORD *)&v34.DescriptorSize = v20;
        RetrieveAndVerifySignature(a1, a2, v10, (struct _HIDP_VALUE_CAPS *)Buffer, a4, a3, &v34, v8, &v30);
        v7 = v30;
LABEL_11:
        GreDeleteFastMutex((char *)Buffer);
        goto LABEL_12;
      }
      v15 = *(_DWORD *)(a5 + 24) == 7;
      v21 = a4->NumberFeatureValueCaps;
      ValueCapsLength[0] = v21;
      if ( v15 )
      {
        SpecificValueCaps = CheckForSegmentedSignatureBlob(a3, v21, (struct _HIDP_VALUE_CAPS *)Buffer, &v29);
        if ( SpecificValueCaps >= 0 )
        {
          v8 = v29;
          v10 = 199;
          goto LABEL_10;
        }
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        {
          LOBYTE(v8) = 1;
        }
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_32:
          SpecificValueCaps = -1073741668;
          goto LABEL_11;
        }
        v27 = SpecificValueCaps;
        v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        PreparsedData = 31;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        {
          LOBYTE(v8) = 1;
        }
        v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_32;
        v27 = SpecificValueCaps;
        v25 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        PreparsedData = 32;
      }
      LOBYTE(v24) = v22;
      LOBYTE(v23) = v8;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v24,
        v25,
        3,
        1,
        PreparsedData,
        (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
        v27);
      goto LABEL_32;
    }
  }
  SpecificValueCaps = -1073741668;
LABEL_12:
  if ( v7 == 1 || v7 == 2 && *(_DWORD *)(a5 + 24) == 7 || v13 )
    *(_DWORD *)(a5 + 368) |= 0x100u;
  EtwTraceTHQAStop(v17);
  if ( v13 )
    return 0LL;
  if ( SpecificValueCaps < 0 )
  {
    if ( *(_DWORD *)(a5 + 24) != 7 )
      return 0LL;
    UserLogError(-1073741554);
  }
  UserLogError(1073742091);
  return (unsigned int)SpecificValueCaps;
}
