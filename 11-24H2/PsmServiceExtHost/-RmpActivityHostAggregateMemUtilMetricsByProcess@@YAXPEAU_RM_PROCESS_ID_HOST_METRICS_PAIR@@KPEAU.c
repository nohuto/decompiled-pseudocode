/*
 * XREFs of ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x18000EF24
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000EA60 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostAggregateMemUtilMetricsByProcess(
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR *a1,
        unsigned int a2,
        struct _MEMUTIL_PROCESS_METRICS *a3,
        __int16 a4)
{
  __int64 v4; // rsi
  __int16 v8; // dx
  int v9; // ecx
  __int64 v10; // rbx
  int v11; // r8d
  char *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int16 v15; // cx
  char v16; // dl
  __int16 v17; // cx
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // cx
  char v21; // dl
  __int16 v22; // cx
  __int16 v23; // cx
  __int16 v24; // cx
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh]
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v28[3]; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h]
  _BYTE v30[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int16 v34; // [rsp+8Eh] [rbp-72h]
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  __int64 *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  _DWORD *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  __int64 *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  __int64 *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int64 *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]

  v4 = a2;
  memset_0(v30, 0, 0x40uLL);
  v8 = v34;
  v9 = (2 * (a4 & 4)) | 1;
  if ( (a4 & 8) == 0 )
    v9 = 2 * (a4 & 4);
  v10 = 0LL;
  v11 = v9 | 0x40;
  if ( (a4 & 0x20) == 0 )
    v11 = v9;
  v26 = v11;
  if ( (_DWORD)v4 )
  {
    v29 = v4;
    v12 = (char *)a3 + 4;
    do
    {
      if ( *(_QWORD *)a1 != v10 )
      {
        if ( v10 )
        {
          v20 = *(_WORD *)(v10 + 62);
          v21 = v8 & 0x2C;
          if ( (v21 & 4) != 0 )
          {
            v21 &= ~4u;
            *(_QWORD *)(v10 + 16) = v31;
            v22 = v20 | 4;
          }
          else
          {
            v22 = v20 & 0xFFFB;
          }
          *(_WORD *)(v10 + 62) = v22;
          if ( (v21 & 8) != 0 )
          {
            v23 = v22 | 8;
            *(_QWORD *)(v10 + 24) = v32;
          }
          else
          {
            v23 = v22 & 0xFFF7;
          }
          *(_WORD *)(v10 + 62) = v23;
          if ( (v21 & 0x20) != 0 )
          {
            v24 = v23 | 0x20;
            *(_QWORD *)(v10 + 32) = v33;
          }
          else
          {
            v24 = v23 & 0xFFDF;
          }
          *(_WORD *)(v10 + 62) = v24 & 0xFFEF;
        }
        memset_0(v30, 0, 0x40uLL);
        v10 = *(_QWORD *)a1;
        v8 = a4;
        v11 = v26;
        v34 = a4;
      }
      if ( (unsigned int)dword_1800E8278 > 5 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
      {
        v35 = *(_QWORD *)(v12 + 44);
        v36 = *(_QWORD *)(v12 + 20);
        v37 = *(_QWORD *)(v12 + 12);
        v25 = *(_DWORD *)v12;
        v28[0] = *((_DWORD *)v12 - 1);
        v13 = *(_QWORD *)(v10 + 48);
        v27 = v11;
        v57 = 8LL;
        v55 = 8LL;
        v14 = *(_QWORD *)(v13 + 32);
        v56 = &v35;
        v54 = &v36;
        v52 = &v37;
        v50 = &v25;
        v48 = &v27;
        v46 = v28;
        v44 = &v38;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_1800E8280;
        v38 = v14;
        EventDescriptor.Keyword = 1LL;
        v53 = 8LL;
        v51 = 4LL;
        v49 = 4LL;
        v47 = 4LL;
        v45 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_1800E8280;
        v41 = &unk_1800D8740;
        v43 = 1;
        UserData.Reserved = 2;
        v42 = 124;
        v28[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
        v8 = v34;
      }
      if ( (a4 & 4) != 0 )
      {
        if ( (*v12 & 8) != 0 )
        {
          v31 += *(_QWORD *)(v12 + 20);
        }
        else
        {
          v8 &= ~4u;
          v34 = v8;
        }
      }
      if ( (a4 & 8) != 0 )
      {
        if ( (*v12 & 1) != 0 )
        {
          v32 += *(_QWORD *)(v12 + 12);
        }
        else
        {
          v8 &= ~8u;
          v34 = v8;
        }
      }
      if ( (a4 & 0x20) != 0 )
      {
        if ( (*v12 & 0x40) != 0 )
        {
          v33 += *(_QWORD *)(v12 + 44);
        }
        else
        {
          v8 &= ~0x20u;
          v34 = v8;
        }
      }
      v11 = v26;
      a1 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)((char *)a1 + 16);
      v12 += 64;
      --v29;
    }
    while ( v29 );
  }
  v15 = *(_WORD *)(v10 + 62);
  v16 = v8 & 0x2C;
  if ( (v16 & 4) != 0 )
  {
    v16 &= ~4u;
    *(_QWORD *)(v10 + 16) = v31;
    v17 = v15 | 4;
  }
  else
  {
    v17 = v15 & 0xFFFB;
  }
  *(_WORD *)(v10 + 62) = v17;
  if ( (v16 & 8) != 0 )
  {
    v18 = v17 | 8;
    *(_QWORD *)(v10 + 24) = v32;
  }
  else
  {
    v18 = v17 & 0xFFF7;
  }
  *(_WORD *)(v10 + 62) = v18;
  if ( (v16 & 0x20) != 0 )
  {
    v19 = v18 | 0x20;
    *(_QWORD *)(v10 + 32) = v33;
  }
  else
  {
    v19 = v18 & 0xFFDF;
  }
  *(_WORD *)(v10 + 62) = v19 & 0xFFEF;
}
