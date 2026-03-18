/*
 * XREFs of HUBPDO_UnregisterPortPLDRCapability @ 0x140085620
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_GetPortPath @ 0x140018EAC (HUBPDO_GetPortPath.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     HUBREG_IsPortPLDRCapable @ 0x140088560 (HUBREG_IsPortPLDRCapable.c)
 *     HUBREG_SetPortPLDRCapabilityValue @ 0x14008C298 (HUBREG_SetPortPLDRCapabilityValue.c)
 */

__int64 __fastcall HUBPDO_UnregisterPortPLDRCapability(_QWORD *a1)
{
  unsigned int v2; // ebx
  char v3; // al
  char v4; // al
  char v5; // al
  int v7; // [rsp+30h] [rbp-71h]
  int v8; // [rsp+30h] [rbp-71h]
  int v9; // [rsp+30h] [rbp-71h]
  int v10; // [rsp+38h] [rbp-69h]
  int v11; // [rsp+38h] [rbp-69h]
  int v12; // [rsp+38h] [rbp-69h]
  _WORD v13[2]; // [rsp+48h] [rbp-59h] BYREF
  _WORD v14[2]; // [rsp+4Ch] [rbp-55h] BYREF
  __int16 v15; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17[2]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD *v18; // [rsp+88h] [rbp-19h]
  __int64 v19; // [rsp+90h] [rbp-11h]
  __int16 *v20; // [rsp+98h] [rbp-9h]
  __int64 v21; // [rsp+A0h] [rbp-1h]
  _WORD *v22; // [rsp+A8h] [rbp+7h]
  __int64 v23; // [rsp+B0h] [rbp+Fh]
  __int16 *v24; // [rsp+B8h] [rbp+17h]
  __int64 v25; // [rsp+C0h] [rbp+1Fh]
  _WORD *v26; // [rsp+C8h] [rbp+27h]
  __int64 v27; // [rsp+D0h] [rbp+2Fh]
  _WORD v28[8]; // [rsp+D8h] [rbp+37h] BYREF

  HUBPDO_GetPortPath(a1[2], v28);
  v2 = 0;
  if ( (unsigned __int8)HUBREG_IsPortPLDRCapable(*a1, *(unsigned __int16 *)(a1[1] + 200LL)) )
  {
    if ( (*(_DWORD *)(*a1 + 40LL) & 0x40000) != 0 && (a1[204] & 0x20) != 0 )
    {
      if ( (unsigned int)HUBREG_SetPortPLDRCapabilityValue(*a1, *(unsigned __int16 *)(a1[1] + 200LL), 0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = *((unsigned __int16 *)a1 + 999);
          v7 = *((unsigned __int16 *)a1 + 998);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1[1] + 1432LL),
            2u,
            5u,
            0xC2u,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
            v7,
            v10);
        }
        if ( (unsigned int)dword_14006C1F8 > 2 )
        {
          if ( (qword_14006C208 & 0x400000000001LL) == 0
            || (v3 = 1, (qword_14006C210 & 0x400000000001LL) != qword_14006C210) )
          {
            v3 = 0;
          }
          if ( v3 )
          {
            v16[0] = 16779264LL;
            v18 = v16;
            v13[0] = *((_WORD *)a1 + 998);
            v19 = 8LL;
            v20 = v13;
            v14[0] = *((_WORD *)a1 + 999);
            v22 = v14;
            v15 = 6;
            v24 = &v15;
            v26 = v28;
            v21 = 2LL;
            v23 = 2LL;
            v25 = 2LL;
            v27 = 12LL;
            tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, byte_140067858, 0LL, 0LL, 7u, v17);
          }
        }
        return (unsigned int)-1073741762;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = *((unsigned __int16 *)a1 + 999);
          v8 = *((unsigned __int16 *)a1 + 998);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1[1] + 1432LL),
            4u,
            5u,
            0xC3u,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
            v8,
            v11);
        }
        if ( (unsigned int)dword_14006C1F8 > 4 )
        {
          if ( (qword_14006C208 & 0x400000000001LL) == 0
            || (v4 = 1, (qword_14006C210 & 0x400000000001LL) != qword_14006C210) )
          {
            v4 = 0;
          }
          if ( v4 )
          {
            v16[0] = 16779264LL;
            v18 = v16;
            v15 = *((_WORD *)a1 + 998);
            v19 = 8LL;
            v20 = &v15;
            v14[0] = *((_WORD *)a1 + 999);
            v22 = v14;
            v13[0] = 6;
            v24 = v13;
            v26 = v28;
            v21 = 2LL;
            v23 = 2LL;
            v25 = 2LL;
            v27 = 12LL;
            tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, byte_140067729, 0LL, 0LL, 7u, v17);
          }
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *((unsigned __int16 *)a1 + 999);
        v9 = *((unsigned __int16 *)a1 + 998);
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          5u,
          0xC1u,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
          v9,
          v12);
      }
      if ( (unsigned int)dword_14006C1F8 > 2 )
      {
        if ( (qword_14006C208 & 0x400000000001LL) == 0
          || (v5 = 1, (qword_14006C210 & 0x400000000001LL) != qword_14006C210) )
        {
          v5 = 0;
        }
        if ( v5 )
        {
          v16[0] = 16779264LL;
          v18 = v16;
          v15 = *((_WORD *)a1 + 998);
          v19 = 8LL;
          v20 = &v15;
          v14[0] = *((_WORD *)a1 + 999);
          v22 = v14;
          v13[0] = 6;
          v24 = v13;
          v26 = v28;
          v21 = 2LL;
          v23 = 2LL;
          v25 = 2LL;
          v27 = 12LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, byte_140067D98, 0LL, 0LL, 7u, v17);
        }
      }
      return (unsigned int)-1073741808;
    }
  }
  return v2;
}
