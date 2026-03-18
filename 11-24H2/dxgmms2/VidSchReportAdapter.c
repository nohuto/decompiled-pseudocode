/*
 * XREFs of VidSchReportAdapter @ 0x140103130
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x140036F0C (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x140037154 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003D274 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1400427FC (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqtttt_EtwWriteTransfer @ 0x140049930 (McTemplateK0pqqtttt_EtwWriteTransfer.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004A348 (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140050B64 (McTemplateK0pppp_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned int i; // r14d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // r9d
  char v14; // r11
  __int64 v15; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // rcx
  _QWORD *v21; // rsi
  unsigned int k; // esi
  __int64 v23; // rdx
  unsigned int j; // r14d
  __int64 v25; // rsi
  __int64 v26; // r9
  unsigned int v27; // edx
  char v28; // al
  char v29; // r9
  __int64 v30; // rcx
  unsigned int v31; // edx
  char v32; // al
  char v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // [rsp+28h] [rbp-49h]
  __int64 v38; // [rsp+30h] [rbp-41h]
  __int64 v39; // [rsp+38h] [rbp-39h]
  __int64 v40; // [rsp+40h] [rbp-31h]
  __int64 v41; // [rsp+48h] [rbp-29h]
  __int64 v42; // [rsp+50h] [rbp-21h]

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 256);
    if ( v4 )
    {
      if ( bTracingEnabled )
      {
        a3 = *(_QWORD *)(a1 + 16);
        a2 = *(_DWORD *)(v4 + 48) >> 2;
        if ( (byte_140081241 & 8) != 0 )
        {
          v39 = *(_QWORD *)(a1 + 256);
          McTemplateK0ppqpttqpqp_EtwWriteTransfer((*(_DWORD *)(v4 + 48) >> 1) & 1, &EventReportDevice, a3, 0LL, a3);
        }
      }
    }
    v5 = *(_QWORD *)(a1 + 312);
    if ( v5 )
    {
      if ( bTracingEnabled )
      {
        a3 = *(_DWORD *)(v5 + 48) >> 2;
        if ( (byte_140081241 & 8) != 0 )
        {
          v39 = *(_QWORD *)(a1 + 312);
          McTemplateK0ppqpttqpqp_EtwWriteTransfer(
            (*(_DWORD *)(v5 + 48) >> 1) & 1,
            &EventReportDevice,
            (*(_DWORD *)(v5 + 48) & 4) != 0,
            0LL,
            *(_QWORD *)(a1 + 16));
        }
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
    {
      v7 = *(_QWORD *)(a1 + 688);
      a3 = *(unsigned int *)(a1 + 760);
      v8 = 8LL * i;
      a2 = v7 + v8;
      if ( i >= (unsigned int)a3 )
        a2 = *(_QWORD *)(a1 + 688);
      if ( *(_QWORD *)a2 )
      {
        v9 = v7 + v8;
        if ( i >= (unsigned int)a3 )
          v9 = *(_QWORD *)(a1 + 688);
        v10 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
        if ( v10 )
        {
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v10 + 88));
            v12 = VidSchiSchedulerNodeToDriverNode(a1, v11);
            v15 = *(_QWORD *)(v10 + 104);
            a3 = v12;
            a2 = (2 * (((v13 >> 1) & 0x20 | *(_DWORD *)(v15 + 48) & 0x10) >> 4)) | 1;
            if ( (byte_140081241 & 8) != 0 )
              McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                v15,
                (const EVENT_DESCRIPTOR *)" ",
                v12,
                v4,
                v12,
                v14,
                0,
                0,
                0,
                0,
                0,
                (2 * (((v13 >> 1) & 0x20 | *(_DWORD *)(v15 + 48) & 0x10) >> 4)) | 1,
                v10);
          }
          if ( (byte_140081241 & 1) != 0 )
          {
            v17 = *(_QWORD *)(v10 + 56);
            if ( !v17 || (*(_DWORD *)(v10 + 112) & 0x40) != 0 )
              v17 = v10;
            LODWORD(v42) = *(unsigned __int8 *)(a1 + 7062);
            LODWORD(v41) = *(unsigned __int8 *)(a1 + 7064);
            LODWORD(v40) = *(unsigned __int8 *)(a1 + 7063);
            LODWORD(v39) = *(unsigned __int8 *)(a1 + 7061);
            LODWORD(v38) = *(_DWORD *)(v10 + 404);
            LODWORD(v37) = *(_DWORD *)(v10 + 400);
            McTemplateK0pqqtttt_EtwWriteTransfer(
              *(unsigned __int8 *)(a1 + 7062),
              *(unsigned __int8 *)(a1 + 7064),
              *(unsigned __int8 *)(a1 + 7063),
              v17,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 320) )
    {
      for ( j = 0; j < *(_DWORD *)(a1 + 76); ++j )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * j);
        if ( v25 )
        {
          if ( bTracingEnabled )
          {
            VidSchiSchedulerNodeToDriverEngine(a1, *(_DWORD *)(v25 + 88));
            v28 = VidSchiSchedulerNodeToDriverNode(a1, v27);
            v30 = *(_QWORD *)(v25 + 104);
            a2 = (2 * ((*(_DWORD *)(v30 + 48) >> 4) & 1)) | 1u;
            if ( (byte_140081241 & 8) != 0 )
              McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                v30,
                (const EVENT_DESCRIPTOR *)" ",
                a3,
                v5,
                v28,
                v29,
                0,
                0,
                0,
                0,
                0,
                (2 * ((*(_DWORD *)(v30 + 48) & 0x10) != 0)) | 1,
                v25);
          }
          if ( (byte_140081241 & 1) != 0 )
          {
            v26 = *(_QWORD *)(v25 + 56);
            if ( !v26 || (*(_DWORD *)(v25 + 112) & 0x40) != 0 )
              v26 = v25;
            LODWORD(v42) = *(unsigned __int8 *)(a1 + 7062);
            LODWORD(v41) = *(unsigned __int8 *)(a1 + 7064);
            LODWORD(v40) = *(unsigned __int8 *)(a1 + 7063);
            LODWORD(v39) = *(unsigned __int8 *)(a1 + 7061);
            LODWORD(v38) = *(_DWORD *)(v25 + 404);
            LODWORD(v37) = *(_DWORD *)(v25 + 400);
            McTemplateK0pqqtttt_EtwWriteTransfer(
              *(unsigned __int8 *)(a1 + 7062),
              *(unsigned __int8 *)(a1 + 7064),
              *(unsigned __int8 *)(a1 + 7063),
              v26,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 328) )
    {
      v19 = 0;
      if ( *(_DWORD *)(a1 + 76) )
      {
        while ( 1 )
        {
          v20 = v19;
          v21 = *(_QWORD **)(*(_QWORD *)(a1 + 328) + 8LL * v19);
          if ( v21 )
          {
            if ( !bTracingEnabled )
              goto LABEL_56;
            VidSchiSchedulerNodeToDriverEngine(a1, *(unsigned __int16 *)(v21[2] + 4LL));
            v32 = VidSchiSchedulerNodeToDriverNode(a1, v31);
            v34 = v21[1];
            a2 = (2 * ((*(_DWORD *)(v34 + 48) >> 4) & 1)) | 1u;
            if ( (byte_140081241 & 8) != 0 )
              break;
          }
LABEL_32:
          if ( ++v19 >= *(_DWORD *)(a1 + 76) )
            goto LABEL_19;
        }
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          v34,
          (const EVENT_DESCRIPTOR *)" ",
          a3,
          v5,
          v32,
          v33,
          0,
          0,
          0,
          0,
          0,
          (2 * ((*(_DWORD *)(v34 + 48) & 0x10) != 0)) | 1,
          v21);
LABEL_56:
        if ( (byte_140081241 & 8) != 0 )
          McTemplateK0pppp_EtwWriteTransfer(v20, a2, a3, v21, v21, v21[6], v21[4]);
        goto LABEL_32;
      }
    }
LABEL_19:
    if ( *(_QWORD *)(a1 + 336) )
    {
      for ( k = 0; k < *(_DWORD *)(a1 + 76); ++k )
      {
        v23 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * k);
        if ( v23 && bTracingEnabled )
        {
          v35 = *(_QWORD *)(v23 + 40);
          v36 = *(_QWORD *)(v35 + 24);
          if ( !v36 || (*(_DWORD *)(v35 + 56) & 0x40) != 0 )
            v36 = *(_QWORD *)(v23 + 40);
          if ( (byte_140081241 & 8) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(v35, &EventReportHwQueue, a3, v36, 0LL, v23);
        }
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2175;
    DxgkLogInternalTriageEvent(v18, 0x40000LL);
    return 3221225485LL;
  }
}
