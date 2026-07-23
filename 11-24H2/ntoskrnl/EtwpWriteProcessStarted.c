/*
 * XREFs of EtwpWriteProcessStarted @ 0x140A2FF1C
 * Callers:
 *     EtwTraceProcess @ 0x1408F11B4 (EtwTraceProcess.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     PsGetProcessStartKey @ 0x140447F60 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsGetSessionCreateTime @ 0x1408F0550 (PsGetSessionCreateTime.c)
 */

char __fastcall EtwpWriteProcessStarted(
        __int64 a1,
        int *a2,
        const wchar_t *a3,
        unsigned __int16 *a4,
        unsigned __int8 **a5)
{
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v11; // rcx
  const GUID *v12; // r9
  unsigned __int8 *v13; // rcx
  int v14; // eax
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int SessionId; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 ProcessStartKey; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Time; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  int *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  int *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *p_SessionId; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  _DWORD *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  __int64 v37; // [rsp+E8h] [rbp-20h]
  _DWORD v38[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 *p_ProcessStartKey; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  __int64 *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  __int64 *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  __int64 *p_Time; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  int *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  __int64 *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]
  _BYTE v51[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v52[16]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v53[16]; // [rsp+178h] [rbp+70h] BYREF
  unsigned __int8 *v54; // [rsp+188h] [rbp+80h]
  int v55; // [rsp+190h] [rbp+88h]
  int v56; // [rsp+194h] [rbp+8Ch]
  _DWORD *v57; // [rsp+198h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+98h]
  __int64 v59; // [rsp+1A8h] [rbp+A0h]
  _DWORD v60[2]; // [rsp+1B0h] [rbp+A8h] BYREF

  v5 = *(_QWORD *)(a1 + 848);
  v6 = &EmptyUnicodeString;
  if ( v5 )
    v6 = *(__int64 **)(a1 + 848);
  if ( (unsigned int)dword_140E09160 > 5 )
  {
    if ( (qword_140E09170 & 3) == 0 || (LOBYTE(v5) = 1, (qword_140E09178 & 3) != qword_140E09178) )
      LOBYTE(v5) = 0;
    if ( (_BYTE)v5 )
    {
      v21 = *(_QWORD *)(a1 + 504);
      v27 = &v21;
      v16 = *(_DWORD *)(a1 + 464);
      v29 = &v16;
      v17 = *(_DWORD *)(a1 + 720);
      v31 = &v17;
      v28 = 8LL;
      v30 = 4LL;
      v32 = 4LL;
      SessionId = PsGetSessionId(a1);
      v34 = 4LL;
      p_SessionId = &SessionId;
      v36 = 2LL;
      v35 = v38;
      v37 = v6[1];
      v38[0] = *(unsigned __int16 *)v6;
      v38[1] = 0;
      ProcessStartKey = PsGetProcessStartKey(a1);
      p_ProcessStartKey = &ProcessStartKey;
      v23 = *(_QWORD *)(a1 + 1656);
      v41 = &v23;
      v24 = *(_QWORD *)(a1 + 1664);
      v43 = &v24;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 8LL;
      Time = PsGetSessionCreateTime(v11);
      v46 = 8LL;
      p_Time = &Time;
      v19 = *a2;
      v47 = &v19;
      LODWORD(v20) = a2[1];
      v49 = &v20;
      v48 = 4LL;
      v50 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v51, a3 + 12);
      tlgCreate1Sz_wchar_t((__int64)v52, a3 + 140);
      tlgCreate1Sz_wchar_t((__int64)v53, a3 + 205);
      if ( a5 )
        v13 = *a5;
      else
        v13 = (unsigned __int8 *)SeNullSid;
      v14 = v13[1];
      v54 = v13;
      v56 = (int)v12;
      v58 = 2LL;
      v60[1] = (_DWORD)v12;
      v55 = 4 * v14 + 8;
      v57 = v60;
      v59 = *((_QWORD *)a4 + 1);
      v60[0] = *a4;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140E09160,
                     (unsigned __int8 *)byte_140052E5B,
                     0LL,
                     v12,
                     0x14u,
                     &v26);
    }
  }
  return v5;
}
