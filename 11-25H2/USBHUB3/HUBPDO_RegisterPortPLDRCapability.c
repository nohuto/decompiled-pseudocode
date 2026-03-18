/*
 * XREFs of HUBPDO_RegisterPortPLDRCapability @ 0x140084E20
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_GetPortPath @ 0x140018EAC (HUBPDO_GetPortPath.c)
 *     WPP_RECORDER_SF_DDd @ 0x14001D770 (WPP_RECORDER_SF_DDd.c)
 *     DereferenceDeviceResetInterface @ 0x140045138 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     HUBREG_SetPortPLDRCapabilityValue @ 0x14008C298 (HUBREG_SetPortPLDRCapabilityValue.c)
 *     QueryDeviceResetInterface @ 0x140093CB0 (QueryDeviceResetInterface.c)
 */

__int64 __fastcall HUBPDO_RegisterPortPLDRCapability(__int16 *a1)
{
  char v2; // r14
  __int64 v3; // r15
  __int16 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rsi
  int DeviceResetInterface; // r15d
  int v11; // [rsp+20h] [rbp-E0h]
  int v12; // [rsp+28h] [rbp-D8h]
  int v13; // [rsp+28h] [rbp-D8h]
  int v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+30h] [rbp-D0h]
  int v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+30h] [rbp-D0h]
  _WORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v21[2]; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v25[10]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  __int16 *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  _WORD *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  __int16 *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  _WORD *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  __int64 *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  _WORD v39[8]; // [rsp+130h] [rbp+30h] BYREF

  memset(v25, 0, sizeof(v25));
  HUBPDO_GetPortPath(*((_QWORD *)a1 + 2), v39);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x40000) != 0 && (*((_DWORD *)a1 + 408) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)a1 + 16LL));
    v2 = 1;
    v3 = *(_QWORD *)a1;
    v4 = *(_WORD *)(*((_QWORD *)a1 + 1) + 200LL);
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
           WdfDriverGlobals,
           *(_QWORD *)(*(_QWORD *)a1 + 16LL),
           0LL,
           1LL);
    v6 = 0;
    while ( 1 )
    {
      v7 = v5;
      if ( !v5
        || v5 != *(_QWORD *)(v3 + 2664)
        && *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        v5,
                        off_14006C0F8)
                    + 48) == v4 )
      {
        break;
      }
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
             WdfDriverGlobals,
             *(_QWORD *)(v3 + 16),
             v7,
             1LL);
    }
    if ( v7 )
    {
      DeviceResetInterface = QueryDeviceResetInterface(v7, v25);
      if ( DeviceResetInterface >= 0 )
      {
        DereferenceDeviceResetInterface(v25);
        memset(v25, 0, sizeof(v25));
        if ( (unsigned int)HUBREG_SetPortPLDRCapabilityValue(
                             *(_QWORD *)a1,
                             *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 200LL),
                             1LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = (unsigned __int16)a1[999];
            v13 = (unsigned __int16)a1[998];
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*((_QWORD *)a1 + 1) + 1432LL),
              2u,
              5u,
              0xBFu,
              (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
              v13,
              v17);
          }
          if ( (unsigned int)dword_14006C1F8 > 2 )
          {
            if ( (qword_14006C208 & 0x400000000001LL) == 0 || (qword_14006C210 & 0x400000000001LL) != qword_14006C210 )
              v2 = 0;
            if ( v2 )
            {
              v23 = 16779264LL;
              v27 = &v23;
              v22 = a1[998];
              v28 = 8LL;
              v29 = &v22;
              v21[0] = a1[999];
              v31 = v21;
              v20[0] = 6;
              v33 = v20;
              v35 = v39;
              v30 = 2LL;
              v32 = 2LL;
              v34 = 2LL;
              v36 = 12LL;
              tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, byte_1400676BF, 0LL, 0LL, 7u, v26);
            }
          }
          v6 = -1073741762;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v18 = (unsigned __int16)a1[999];
            v14 = (unsigned __int16)a1[998];
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*((_QWORD *)a1 + 1) + 1432LL),
              4u,
              5u,
              0xC0u,
              (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
              v14,
              v18);
          }
          if ( (unsigned int)dword_14006C1F8 > 4 )
          {
            if ( (qword_14006C208 & 0x400000000001LL) == 0 || (qword_14006C210 & 0x400000000001LL) != qword_14006C210 )
              v2 = 0;
            if ( v2 )
            {
              v23 = 16779264LL;
              v27 = &v23;
              v22 = a1[998];
              v28 = 8LL;
              v29 = &v22;
              v21[0] = a1[999];
              v31 = v21;
              v20[0] = 6;
              v33 = v20;
              v35 = v39;
              v30 = 2LL;
              v32 = 2LL;
              v34 = 2LL;
              v36 = 12LL;
              tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, byte_140067591, 0LL, 0LL, 7u, v26);
            }
          }
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDd(
            *(_QWORD *)(*((_QWORD *)a1 + 1) + 1432LL),
            (unsigned __int16)a1[999],
            (unsigned __int16)a1[998],
            0xBEu,
            v11);
        if ( (unsigned int)dword_14006C1F8 > 2 )
        {
          if ( (qword_14006C208 & 0x400000000001LL) == 0 || (qword_14006C210 & 0x400000000001LL) != qword_14006C210 )
            v2 = 0;
          if ( v2 )
          {
            v23 = 16779264LL;
            v27 = &v23;
            v22 = a1[998];
            v28 = 8LL;
            v29 = &v22;
            v21[0] = a1[999];
            v31 = v21;
            v20[0] = 6;
            v33 = v20;
            v35 = v39;
            v37 = &v24;
            v30 = 2LL;
            v32 = 2LL;
            v34 = 2LL;
            v36 = 12LL;
            LODWORD(v24) = DeviceResetInterface;
            v38 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, byte_140067F49, 0LL, 0LL, 8u, v26);
          }
        }
        v6 = -1073741808;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = (unsigned __int16)a1[999];
        v12 = (unsigned __int16)a1[998];
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*((_QWORD *)a1 + 1) + 1432LL),
          2u,
          5u,
          0xBDu,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
          v12,
          v16);
      }
      if ( (unsigned int)dword_14006C1F8 > 2 )
      {
        if ( (qword_14006C208 & 0x400000000001LL) == 0 || (qword_14006C210 & 0x400000000001LL) != qword_14006C210 )
          v2 = 0;
        if ( v2 )
        {
          v24 = 16779264LL;
          v27 = &v24;
          v20[0] = a1[998];
          v28 = 8LL;
          v29 = v20;
          v21[0] = a1[999];
          v31 = v21;
          v22 = 6;
          v33 = &v22;
          v35 = v39;
          v30 = 2LL;
          v32 = 2LL;
          v34 = 2LL;
          v36 = 12LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, byte_14006765B, 0LL, 0LL, 7u, v26);
        }
      }
      v6 = -1073741810;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = (unsigned __int16)a1[999];
      v15 = (unsigned __int16)a1[998];
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 1432LL),
        2u,
        5u,
        0xBCu,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v15,
        v19);
    }
    if ( (unsigned int)dword_14006C1F8 > 2
      && (qword_14006C208 & 0x400000000001LL) != 0
      && (qword_14006C210 & 0x400000000001LL) == qword_14006C210 )
    {
      v23 = 16779264LL;
      v27 = &v23;
      v22 = a1[998];
      v28 = 8LL;
      v29 = &v22;
      v21[0] = a1[999];
      v31 = v21;
      v20[0] = 6;
      v33 = v20;
      v35 = v39;
      v30 = 2LL;
      v32 = 2LL;
      v34 = 2LL;
      v36 = 12LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, byte_140067B7A, 0LL, 0LL, 7u, v26);
    }
    return (unsigned int)-1073741808;
  }
  return v6;
}
