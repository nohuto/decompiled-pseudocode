/*
 * XREFs of CrmLogStateMonitorStop @ 0x180069B90
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006E9D4 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D3DC (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorIsTelemetryState @ 0x1800307DC (CrmLogStateMonitorIsTelemetryState.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorStop(int *a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rbx
  int IsTelemetryState; // eax
  int v4; // r9d
  __int64 v5; // r10
  unsigned __int16 v6; // r11
  __int64 v7; // rdx
  unsigned __int8 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rdx
  ULONG v13; // [rsp+20h] [rbp-E0h]
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  int *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  _DWORD *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int64 v25; // [rsp+A0h] [rbp-60h]
  _DWORD v26[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  _DWORD *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 v31; // [rsp+D0h] [rbp-30h]
  _DWORD v32[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]

  CrmStateMonitorStateSizeGet(*a1);
  v2 = MEMORY[0x7FFE0008];
  IsTelemetryState = CrmLogStateMonitorIsTelemetryState(v1);
  if ( IsTelemetryState )
  {
    if ( (unsigned int)dword_1800E82E8 > 5 )
    {
      LOBYTE(IsTelemetryState) = tlgKeywordOn((__int64)&dword_1800E82E8, 0x400000000008LL);
      if ( (_BYTE)IsTelemetryState )
      {
        v7 = *(_QWORD *)(v5 + 40);
        v19 = &Uuid;
        v21 = &v14;
        v23 = v26;
        v17 = *(_QWORD *)(v5 + 48);
        v27 = &v17;
        v29 = v32;
        v33 = &v15;
        v35 = &v16;
        v25 = v7;
        v31 = v7;
        v8 = (unsigned __int8 *)&unk_1800D2E0A;
        v13 = 11;
        v28 = 8LL;
        v34 = 8LL;
        v16 = 0x2000000LL;
        v36 = 8LL;
LABEL_8:
        v26[0] = v6;
        v32[0] = v6;
        v14 = v4;
        v24 = 2LL;
        v22 = 4LL;
        v20 = 16LL;
        v26[1] = 0;
        v30 = 2LL;
        v32[1] = 0;
        v15 = v2;
        LOBYTE(IsTelemetryState) = tlgWriteTransfer_EventWriteTransfer(
                                     (__int64)&dword_1800E82E8,
                                     v8,
                                     0LL,
                                     0LL,
                                     v13,
                                     &v18);
      }
    }
  }
  else if ( (unsigned int)dword_1800E82E8 > 5 )
  {
    LOBYTE(IsTelemetryState) = tlgKeywordOn((__int64)&dword_1800E82E8, 8LL);
    if ( (_BYTE)IsTelemetryState )
    {
      v11 = *(_QWORD *)(v10 + 40);
      v19 = &Uuid;
      v21 = &v14;
      v23 = v26;
      v16 = *(_QWORD *)(v10 + 48);
      v27 = &v16;
      v29 = v32;
      v33 = &v15;
      v25 = v11;
      v31 = v11;
      v8 = (unsigned __int8 *)&unk_1800D3002;
      v13 = 10;
      v28 = v9;
      v34 = v9;
      goto LABEL_8;
    }
  }
  return IsTelemetryState;
}
