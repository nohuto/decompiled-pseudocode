/*
 * XREFs of ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180021450
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001F430 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall RmpMemoryMonitorUpdateMemoryUsageMetrics(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_RESOURCE_USAGE_STATS *a2)
{
  int v3; // r8d
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // xmm1_8
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18; // [rsp+31h] [rbp-CFh] BYREF
  char v19; // [rsp+32h] [rbp-CEh] BYREF
  char v20; // [rsp+33h] [rbp-CDh] BYREF
  unsigned int v21; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+9Ch] [rbp-64h]
  char *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  char *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  char *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  char *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  __int64 *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  __int64 *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]

  v3 = 4;
  v4 = *((unsigned __int8 *)a2 + 1);
  if ( v4 == 2 )
  {
    v5 = 2;
    goto LABEL_3;
  }
  if ( !*((_BYTE *)a2 + 1) )
    goto LABEL_13;
  v13 = v4 - 1;
  if ( v13 )
  {
    v14 = v13 - 2;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
LABEL_13:
        v5 = 0;
        goto LABEL_3;
      }
      v5 = 4;
    }
    else
    {
      v5 = 3;
    }
  }
  else
  {
    v5 = 1;
  }
LABEL_3:
  v6 = *(unsigned __int8 *)a2;
  LODWORD(v27) = v5;
  if ( v6 == 2 )
  {
    v3 = 2;
  }
  else
  {
    if ( v6 )
    {
      v15 = v6 - 1;
      if ( !v15 )
      {
        v3 = 1;
        goto LABEL_5;
      }
      v16 = v15 - 2;
      if ( !v16 )
      {
        v3 = 3;
        goto LABEL_5;
      }
      if ( v16 == 1 )
        goto LABEL_5;
    }
    v3 = 0;
  }
LABEL_5:
  v7 = *((_QWORD *)a2 + 1);
  v8 = *((_QWORD *)a1 + 12);
  v9 = (*((_QWORD *)a2 + 2) + 0x7FFFFFFLL) & 0xFFFFFFFFF8000000uLL;
  DWORD1(v27) = v3;
  v10 = (v7 + 0x7FFFFFF) & 0xFFFFFFFFF8000000uLL;
  v28 = v9;
  *((_QWORD *)&v27 + 1) = v10;
  v11 = v8 - v27;
  if ( !v11 )
  {
    v11 = *((_QWORD *)a1 + 13) - v10;
    if ( !v11 )
      v11 = *((_QWORD *)a1 + 14) - v9;
  }
  if ( v11 )
  {
    RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_METRICS, 0LL, &v27, 24LL, 0LL);
    if ( (unsigned int)dword_1800E8278 > 5 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
    {
      v22 = v28;
      v23 = *((_QWORD *)a1 + 14);
      v24 = *((_QWORD *)&v27 + 1);
      v25 = *((_QWORD *)a1 + 13);
      v17 = BYTE4(v27);
      v18 = *((_BYTE *)a1 + 100);
      v19 = v27;
      v20 = *((_BYTE *)a1 + 96);
      v47 = &v22;
      v45 = &v23;
      v43 = &v24;
      v41 = &v25;
      v39 = &v17;
      v37 = &v18;
      v35 = &v19;
      v33 = &v20;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800E8280;
      v48 = 8LL;
      v46 = 8LL;
      v44 = 8LL;
      v42 = 8LL;
      v40 = 1LL;
      v38 = 1LL;
      v36 = 1LL;
      v34 = 1LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800E8280;
      v30 = &unk_1800DA6D2;
      UserData.Reserved = 2;
      v31 = 199;
      v32 = 1;
      v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
    }
    v12 = v28;
    *((_OWORD *)a1 + 6) = v27;
    *((_QWORD *)a1 + 14) = v12;
  }
}
