/*
 * XREFs of HUBPDO_InvokePortPLDRRecovery @ 0x1400843FC
 * Callers:
 *     HUBPDO_HandlePLDRRecovery @ 0x140018FF4 (HUBPDO_HandlePLDRRecovery.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x14007F6E4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_GetPortPath @ 0x140018EAC (HUBPDO_GetPortPath.c)
 *     WPP_RECORDER_SF_DDd @ 0x14001D770 (WPP_RECORDER_SF_DDd.c)
 *     DereferenceDeviceResetInterface @ 0x140045138 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     QueryDeviceResetInterface @ 0x140093CB0 (QueryDeviceResetInterface.c)
 */

__int64 __fastcall HUBPDO_InvokePortPLDRRecovery(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  int DeviceResetInterface; // edi
  __int64 v6; // r8
  __int64 v8; // r8
  unsigned __int8 *v10; // rdx
  char v11; // bl
  __int64 v12; // r8
  const GUID *v13; // r8
  int v15; // [rsp+20h] [rbp-E0h]
  ULONG v16; // [rsp+20h] [rbp-E0h]
  _WORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v18[2]; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v22[10]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  _WORD *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  _WORD *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  _WORD *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  _WORD *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  int *v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  _WORD v36[8]; // [rsp+130h] [rbp+30h] BYREF

  memset(v22, 0, sizeof(v22));
  v4 = *(_QWORD *)(a2 + 24);
  HUBPDO_GetPortPath(a2, v36);
  DeviceResetInterface = QueryDeviceResetInterface(a1, v22);
  if ( DeviceResetInterface >= 0 )
  {
    if ( v22[4] )
    {
      v11 = 1;
      DeviceResetInterface = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v22[4])(v22[1], 1LL, 0LL);
      if ( DeviceResetInterface >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
            4u,
            5u,
            0xC7u,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
            *(unsigned __int16 *)(v4 + 1996),
            *(unsigned __int16 *)(v4 + 1998));
        if ( (unsigned int)dword_14006C1F8 <= 4 )
          goto LABEL_39;
        if ( (qword_14006C208 & 0x400000000001LL) == 0 || (qword_14006C210 & 0x400000000001LL) != qword_14006C210 )
          v11 = 0;
        if ( !v11 )
          goto LABEL_39;
        v25 = 8LL;
        v24 = v21;
        v10 = (unsigned __int8 *)&unk_14006778F;
        v19[0] = *(_WORD *)(v4 + 1996);
        v26 = v19;
        v18[0] = *(_WORD *)(v4 + 1998);
        v28 = v18;
        v17[0] = 6;
        v30 = v17;
        v32 = v36;
        v16 = 7;
        v27 = 2LL;
        v29 = 2LL;
        v31 = 2LL;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDd(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
            *(unsigned __int16 *)(v4 + 1996),
            v12,
            0xC6u,
            v15);
        if ( (unsigned int)dword_14006C1F8 <= 2 )
          goto LABEL_39;
        if ( (qword_14006C208 & 0x400000000001LL) == 0 || (qword_14006C210 & 0x400000000001LL) != qword_14006C210 )
          v11 = 0;
        if ( !v11 )
          goto LABEL_39;
        v27 = 2LL;
        v24 = v21;
        v10 = (unsigned __int8 *)&unk_140067C49;
        v19[0] = *(_WORD *)(v4 + 1996);
        v26 = v19;
        v18[0] = *(_WORD *)(v4 + 1998);
        v28 = v18;
        v17[0] = 6;
        v30 = v17;
        v32 = v36;
        v34 = &v20;
        v16 = 8;
        v25 = 8LL;
        v29 = 2LL;
        v31 = 2LL;
        v20 = DeviceResetInterface;
        v35 = 4LL;
      }
    }
    else
    {
      DeviceResetInterface = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDd(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL), *(unsigned __int16 *)(v4 + 1996), v6, 0xC5u, v15);
      if ( (unsigned int)dword_14006C1F8 <= 2 )
        goto LABEL_39;
      if ( (qword_14006C208 & 0x400000000001LL) == 0 || (qword_14006C210 & 0x400000000001LL) != qword_14006C210 )
        goto LABEL_39;
      v27 = 2LL;
      v24 = v21;
      v10 = (unsigned __int8 *)&unk_140067D1C;
      v19[0] = *(_WORD *)(v4 + 1996);
      v26 = v19;
      v18[0] = *(_WORD *)(v4 + 1998);
      v28 = v18;
      v17[0] = 6;
      v30 = v17;
      v32 = v36;
      v34 = &v20;
      v16 = 8;
      v25 = 8LL;
      v29 = 2LL;
      v31 = 2LL;
      v20 = -1073741637;
      v35 = 4LL;
    }
    v13 = (const GUID *)(*(_QWORD *)(v4 + 8) + 1480LL);
    v21[0] = 16779264LL;
    v33 = 12LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, v10, v13, 0LL, v16, v23);
LABEL_39:
    DereferenceDeviceResetInterface(v22);
    return (unsigned int)DeviceResetInterface;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
      *(unsigned __int16 *)(v4 + 1998),
      *(unsigned __int16 *)(v4 + 1996),
      0xC4u,
      v15);
  if ( (unsigned int)dword_14006C1F8 > 2
    && (qword_14006C208 & 0x400000000001LL) != 0
    && (qword_14006C210 & 0x400000000001LL) == qword_14006C210 )
  {
    v27 = 2LL;
    v29 = 2LL;
    v24 = v21;
    v17[0] = *(_WORD *)(v4 + 1996);
    v26 = v17;
    v18[0] = *(_WORD *)(v4 + 1998);
    v28 = v18;
    v19[0] = 6;
    v30 = v19;
    v32 = v36;
    v31 = 2LL;
    v8 = *(_QWORD *)(v4 + 8);
    v34 = &v20;
    v25 = 8LL;
    v21[0] = 16779264LL;
    v33 = 12LL;
    v20 = DeviceResetInterface;
    v35 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_14006C1F8,
      byte_140067E05,
      (const GUID *)(v8 + 1480),
      0LL,
      8u,
      v23);
  }
  return (unsigned int)DeviceResetInterface;
}
