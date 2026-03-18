/*
 * XREFs of HUBPDO_HandlePLDRRecovery @ 0x140019014
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_GetPortPath @ 0x140018ECC (HUBPDO_GetPortPath.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x14008332C (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBREG_IsPortPLDRCapable @ 0x1400874B0 (HUBREG_IsPortPLDRCapable.c)
 */

__int64 __fastcall HUBPDO_HandlePLDRRecovery(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  unsigned int v8; // edx
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // r8
  __int64 v13; // r8
  char v14; // al
  __int64 v15; // r8
  int v16; // [rsp+28h] [rbp-A1h]
  int v17; // [rsp+30h] [rbp-99h]
  _WORD v18[2]; // [rsp+40h] [rbp-89h] BYREF
  _WORD v19[2]; // [rsp+44h] [rbp-85h] BYREF
  int v20; // [rsp+48h] [rbp-81h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22[2]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD *v23; // [rsp+80h] [rbp-49h]
  __int64 v24; // [rsp+88h] [rbp-41h]
  int *v25; // [rsp+90h] [rbp-39h]
  __int64 v26; // [rsp+98h] [rbp-31h]
  _WORD *v27; // [rsp+A0h] [rbp-29h]
  __int64 v28; // [rsp+A8h] [rbp-21h]
  int *v29; // [rsp+B0h] [rbp-19h]
  __int64 v30; // [rsp+B8h] [rbp-11h]
  _WORD *v31; // [rsp+C0h] [rbp-9h]
  __int64 v32; // [rsp+C8h] [rbp-1h]
  _WORD v33[8]; // [rsp+D0h] [rbp+7h] BYREF

  HUBPDO_GetPortPath(a2, v33);
  result = HUBREG_IsPortPLDRCapable(*(_QWORD *)a3, *(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 200LL));
  if ( (_BYTE)result )
  {
    *(_BYTE *)(*(_QWORD *)(a3 + 8) + 1472LL) = 0;
    v7 = *(_QWORD *)(a3 + 8);
    result = *(unsigned __int16 *)(v7 + 1474);
    if ( (unsigned __int16)result < 2u )
    {
      if ( !(_WORD)result )
      {
        EtwActivityIdControl(3u, (LPGUID)(v7 + 1480));
        if ( (unsigned int)dword_14006C1F8 > 4 )
        {
          if ( (qword_14006C208 & 0x400000000001LL) == 0
            || (v14 = 1, (qword_14006C210 & 0x400000000001LL) != qword_14006C210) )
          {
            v14 = 0;
          }
          if ( v14 )
          {
            v15 = *(_QWORD *)(a3 + 8);
            v23 = v21;
            LOWORD(v20) = *(_WORD *)(a3 + 2004);
            v21[0] = 16779264LL;
            v25 = &v20;
            v19[0] = *(_WORD *)(a3 + 2006);
            v24 = 8LL;
            v27 = v19;
            v29 = (int *)v18;
            v31 = v33;
            v26 = 2LL;
            v28 = 2LL;
            v18[0] = 6;
            v30 = 2LL;
            v32 = 12LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_14006C1F8,
              byte_14006770B,
              (const GUID *)(v15 + 1480),
              0LL,
              7u,
              v22);
          }
        }
      }
      ++*(_WORD *)(*(_QWORD *)(a3 + 8) + 1474LL);
      return HUBPDO_InvokePortPLDRRecovery(a1, a2);
    }
    else if ( !*(_BYTE *)(v7 + 1476) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = *(unsigned __int16 *)(a3 + 2006);
        v16 = *(unsigned __int16 *)(a3 + 2004);
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(v7 + 1432),
          2u,
          5u,
          0x4Eu,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
          v16,
          v17);
      }
      v8 = dword_14006C1F8;
      v9 = qword_14006C210;
      if ( (unsigned int)dword_14006C1F8 > 2 )
      {
        if ( (qword_14006C208 & 0x400000000001LL) == 0
          || (v10 = 1, (qword_14006C210 & 0x400000000001LL) != qword_14006C210) )
        {
          v10 = 0;
        }
        if ( v10 )
        {
          v11 = *(_QWORD *)(a3 + 8);
          v23 = v21;
          v21[0] = 16779264LL;
          v25 = (int *)v18;
          v24 = 8LL;
          v27 = v33;
          v18[0] = 6;
          v26 = 2LL;
          v28 = 12LL;
          v20 = *(unsigned __int16 *)(v11 + 1474);
          v29 = &v20;
          v30 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_14006C1F8,
            byte_140067E76,
            (const GUID *)(v11 + 1480),
            0LL,
            6u,
            v22);
          v9 = qword_14006C210;
          v8 = dword_14006C1F8;
        }
      }
      if ( v8 > 4 && (qword_14006C208 & 0x400000000001LL) != 0 && (v9 & 0x400000000001LL) == v9 )
      {
        v13 = *(_QWORD *)(a3 + 8);
        v23 = v21;
        v18[0] = *(_WORD *)(a3 + 2004);
        v21[0] = 16779264LL;
        v25 = (int *)v18;
        v19[0] = *(_WORD *)(a3 + 2006);
        v27 = v19;
        v29 = &v20;
        v31 = v33;
        v24 = 8LL;
        v26 = 2LL;
        v28 = 2LL;
        LOWORD(v20) = 6;
        v30 = 2LL;
        v32 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_14006C1F8,
          byte_140067CB2,
          (const GUID *)(v13 + 1480),
          0LL,
          7u,
          v22);
      }
      *(_OWORD *)(*(_QWORD *)(a3 + 8) + 1480LL) = 0LL;
      result = *(_QWORD *)(a3 + 8);
      *(_BYTE *)(result + 1476) = 1;
    }
  }
  return result;
}
