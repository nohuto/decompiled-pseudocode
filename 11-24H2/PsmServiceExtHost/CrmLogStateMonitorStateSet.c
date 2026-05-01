/*
 * XREFs of CrmLogStateMonitorStateSet @ 0x18002D500
 * Callers:
 *     CrmStateMonitorNetworkUpdateState @ 0x18002C75C (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x18002CBB0 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18002CE60 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorWNFCallback @ 0x180060100 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorSebCallback @ 0x180060990 (CrmStateMonitorSebCallback.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D3DC (CrmStateMonitorStateSizeGet.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

int __fastcall CrmLogStateMonitorStateSet(int *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int16 v4; // ax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r15
  unsigned __int16 v8; // r14
  SIZE_T v9; // rax
  __int64 v10; // rdx
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h]
  UUID *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h] BYREF
  int v30; // [rsp+BCh] [rbp-44h]
  __int64 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  __int64 v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h] BYREF
  int v37; // [rsp+ECh] [rbp-14h]
  __int64 *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  __int64 *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]

  v2 = *a1;
  v4 = CrmStateMonitorStateSizeGet(*a1);
  v5 = v4;
  v7 = v6 + 40;
  v8 = v4;
  v9 = RtlCompareMemory((const void *)(v6 + 40), (const void *)v6, v4);
  if ( (unsigned int)v2 > 0x2A || (v10 = 0x4C50001FFF8LL, !_bittest64(&v10, v2)) || *(_DWORD *)(a2 + 96) || v9 == v5 )
  {
    if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 8) != 0 )
    {
      v9 = qword_1800E8300 & 8;
      if ( v9 == qword_1800E8300 )
      {
        v29 = v8;
        v22 = &Uuid;
        v30 = 0;
        v24 = &v12;
        v36 = v8;
        v26 = &v29;
        v15 = *(_QWORD *)(a2 + 88);
        v31 = &v15;
        v33 = &v36;
        v14 = *(_QWORD *)(a2 + 80);
        v38 = &v14;
        v37 = 0;
        v23 = 16LL;
        v12 = v2;
        v25 = 4LL;
        v27 = 2LL;
        v28 = v7;
        v32 = 8LL;
        v34 = 2LL;
        v35 = a2;
        v39 = 8LL;
        LODWORD(v9) = tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D2D9E, 0LL, 0LL, 10, &UserData);
      }
    }
  }
  else if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 0x400000000008LL) != 0 )
  {
    LODWORD(v9) = qword_1800E8300 & 8;
    if ( (qword_1800E8300 & 0x400000000008LL) == qword_1800E8300 )
    {
      EventDescriptor.Keyword = 0x400000000008LL;
      v30 = 0;
      v22 = &Uuid;
      v37 = 0;
      v24 = &v13;
      v26 = &v29;
      v16 = *(_QWORD *)(a2 + 88);
      v31 = &v16;
      v33 = &v36;
      v14 = *(_QWORD *)(a2 + 80);
      v38 = &v14;
      v40 = &v15;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800E82F0;
      v29 = v8;
      v36 = v8;
      v23 = 16LL;
      v13 = v2;
      v25 = 4LL;
      v27 = 2LL;
      v28 = v7;
      v32 = 8LL;
      v34 = 2LL;
      v35 = a2;
      v39 = 8LL;
      v15 = 0x2000000LL;
      v41 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800E82F0;
      v19 = &unk_1800D3075;
      UserData.Reserved = 2;
      v20 = 112;
      v21 = 1;
      LODWORD(v9) = EventWriteTransfer(qword_1800E8308, &EventDescriptor, 0LL, 0LL, 0xBu, &UserData);
    }
  }
  return v9;
}
