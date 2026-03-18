/*
 * XREFs of ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1400A6A4C
 * Callers:
 *     RIMApiSetValidateDeviceSignature @ 0x1400A8638 (RIMApiSetValidateDeviceSignature.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1400A5A10 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 *     ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1400A67A4 (-CoreSignatureVerify@@YAHGGPEAEPEAK@Z.c)
 *     ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1400A6D28 (-RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HI.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall RetrieveAndVerifySignature(
        PDEVICE_OBJECT DeviceObject,
        struct _FILE_OBJECT *a2,
        USAGE a3,
        struct _HIDP_VALUE_CAPS *a4,
        struct _HIDP_CAPS *a5,
        PHIDP_PREPARSED_DATA PreparsedData,
        struct _HID_COLLECTION_INFORMATION *a7,
        unsigned __int16 a8,
        unsigned int *a9)
{
  unsigned int v10; // edi
  USHORT ProductID; // r14
  USHORT VendorID; // r13
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  unsigned __int8 *UsageValue; // rbx
  int v19; // eax
  __int64 v20; // rcx
  char v21; // r14
  unsigned int v22; // r14d
  USAGE UsagePage; // dx
  char v24; // bl
  bool v25; // di
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  PCHAR v29; // [rsp+58h] [rbp-51h] BYREF
  PCHAR Report; // [rsp+60h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS v31; // [rsp+68h] [rbp-41h] BYREF
  __int16 v33; // [rsp+118h] [rbp+6Fh]

  v29 = 0LL;
  Report = 0LL;
  v10 = 0;
  ProductID = a7->ProductID;
  VendorID = a7->VendorID;
  v33 = ProductID;
  if ( a3 == 199 )
  {
    v13 = *(_OWORD *)&a4[a8].HasNull;
    *(_OWORD *)&v31.UsagePage = *(_OWORD *)&a4[a8].UsagePage;
    v14 = *(_OWORD *)&a4[a8].UnitsExp;
    *(_OWORD *)&v31.HasNull = v13;
    v15 = *(_OWORD *)&a4[a8].PhysicalMin;
    *(_OWORD *)&v31.UnitsExp = v14;
    *(_QWORD *)&v31.NotRange.DesignatorIndex = *(_QWORD *)&a4[a8].NotRange.DesignatorIndex;
    *(_OWORD *)&v31.PhysicalMin = v15;
    v16 = RetrieveSegmentedBlob(DeviceObject, a2, &v29, &Report, a5, PreparsedData, &v31);
    UsageValue = (unsigned __int8 *)v29;
    if ( v16 >= 0 )
      v10 = CoreSignatureVerify(VendorID, ProductID, (unsigned __int8 *)v29, a9);
    else
      *a9 = 0;
  }
  else
  {
    v19 = BuildSignatureFeatureReport(a5, a4, DeviceObject, a2, &Report, &v29);
    v21 = v19;
    if ( v19 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v20 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v20 & 1) == 0)
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v20);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(UserSessionState + 19392),
          3,
          1,
          30,
          (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
          v21);
      }
      v10 = 0;
      UsageValue = (unsigned __int8 *)v29;
      *a9 = 0;
    }
    else
    {
      v22 = 0;
      for ( UsageValue = (unsigned __int8 *)v29; v22 < a5->NumberFeatureValueCaps; ++v22 )
      {
        UsagePage = a4[v22].UsagePage;
        if ( UsagePage >= 0xFF00u && a4[v22].BitSize == 8 && a4[v22].ReportCount == 256 )
        {
          if ( HidP_GetUsageValueArray(
                 HidP_Feature,
                 UsagePage,
                 0,
                 a3,
                 (PCHAR)UsageValue,
                 0x100u,
                 PreparsedData,
                 Report,
                 a5->FeatureReportByteLength) >= 0 )
          {
            v10 = CoreSignatureVerify(VendorID, v33, UsageValue, a9);
            if ( v10 )
              break;
          }
          else
          {
            v10 = 0;
            *a9 = 0;
          }
        }
      }
    }
  }
  if ( UsageValue )
    GreDeleteFastMutex((char *)UsageValue);
  if ( Report )
    GreDeleteFastMutex(Report);
  return v10;
}
