/*
 * XREFs of CrmLogStateMonitorRundown @ 0x180030504
 * Callers:
 *     CrmGlobalsRundown @ 0x18002F9BC (CrmGlobalsRundown.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002D45C (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorIsTelemetryState @ 0x18003085C (CrmLogStateMonitorIsTelemetryState.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

int __fastcall CrmLogStateMonitorRundown(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // edx
  unsigned __int16 v8; // r8
  unsigned int v10; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v12; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v16[40]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v17[40]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  void *v21; // [rsp+E8h] [rbp-20h]
  int v22; // [rsp+F0h] [rbp-18h]
  int v23; // [rsp+F4h] [rbp-14h]
  UUID *v24; // [rsp+F8h] [rbp-10h]
  __int64 v25; // [rsp+100h] [rbp-8h]
  unsigned int *v26; // [rsp+108h] [rbp+0h]
  __int64 v27; // [rsp+110h] [rbp+8h]
  int *v28; // [rsp+118h] [rbp+10h]
  __int64 v29; // [rsp+120h] [rbp+18h]
  _BYTE *v30; // [rsp+128h] [rbp+20h]
  int v31; // [rsp+130h] [rbp+28h] BYREF
  int v32; // [rsp+134h] [rbp+2Ch]
  __int64 *v33; // [rsp+138h] [rbp+30h]
  __int64 v34; // [rsp+140h] [rbp+38h]
  int *v35; // [rsp+148h] [rbp+40h]
  __int64 v36; // [rsp+150h] [rbp+48h]
  _BYTE *v37; // [rsp+158h] [rbp+50h]
  int v38; // [rsp+160h] [rbp+58h] BYREF
  int v39; // [rsp+164h] [rbp+5Ch]
  __int64 *v40; // [rsp+168h] [rbp+60h]
  __int64 v41; // [rsp+170h] [rbp+68h]
  __int64 *v42; // [rsp+178h] [rbp+70h]
  __int64 v43; // [rsp+180h] [rbp+78h]

  CempLockAcquireExclusive(a1 + 8);
  memset_0(v16, 0, 0x68uLL);
  v2 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  memcpy_0(v17, *(const void **)(a1 + 40), v2);
  memcpy_0(v16, *(const void **)(a1 + 40), v2);
  v19 = *(_QWORD *)(a1 + 48);
  v3 = MEMORY[0x7FFE0008];
  *(_QWORD *)(a1 + 48) = MEMORY[0x7FFE0008];
  *(_DWORD *)(a1 + 16) = 0;
  v18 = v3;
  RtlReleaseSRWLockExclusive(a1 + 8);
  v4 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  LODWORD(v6) = CrmLogStateMonitorIsTelemetryState((unsigned int)v5, v5, v4);
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 0x400000000008LL) != 0 )
    {
      LODWORD(v6) = qword_1800E7300 & 8;
      if ( (qword_1800E7300 & 0x400000000008LL) == qword_1800E7300 )
      {
        v11 = v7;
        v24 = &Uuid;
        v26 = &v11;
        v31 = v8;
        v28 = &v31;
        v30 = v17;
        v14 = v19;
        v33 = &v14;
        v35 = &v38;
        v37 = v16;
        v12 = v18;
        v40 = &v12;
        v42 = &v13;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_1800E72F0;
        v38 = v8;
        v29 = 2LL;
        v36 = 2LL;
        EventDescriptor.Keyword = 0x400000000008LL;
        v25 = 16LL;
        v27 = 4LL;
        v32 = 0;
        v34 = 8LL;
        v39 = 0;
        v41 = 8LL;
        v13 = 0x2000000LL;
        v43 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_1800E72F0;
        v21 = &unk_1800D1E8D;
        UserData.Reserved = 2;
        v22 = 116;
        v23 = 1;
        v10 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        LODWORD(v6) = EventWriteTransfer(qword_1800E7308, &EventDescriptor, 0LL, 0LL, 0xBu, &UserData);
      }
    }
  }
  else if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 8) != 0 )
  {
    v6 = qword_1800E7300 & 8;
    if ( v6 == qword_1800E7300 )
    {
      v24 = &Uuid;
      v10 = v7;
      v26 = &v10;
      v31 = v8;
      v28 = &v31;
      v38 = v8;
      v30 = v17;
      v13 = v19;
      v33 = &v13;
      v35 = &v38;
      v37 = v16;
      v12 = v18;
      v40 = &v12;
      v25 = 16LL;
      v27 = 4LL;
      v29 = 2LL;
      v32 = 0;
      v34 = 8LL;
      v36 = 2LL;
      v39 = 0;
      v41 = 8LL;
      LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D1F92, 0LL, 0LL, 10, &UserData);
    }
  }
  return v6;
}
