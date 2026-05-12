/*
 * XREFs of StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400BA758
 * Callers:
 *     StorpNvmeAdapterHealthWorkItemRoutine @ 0x1400B1D90 (StorpNvmeAdapterHealthWorkItemRoutine.c)
 * Callees:
 *     McTemplateK0qjzshussssqtxqqbr14uhqbr18_EtwWriteTransfer @ 0x1400ACAC4 (McTemplateK0qjzshussssqtxqqbr14uhqbr18_EtwWriteTransfer.c)
 *     StorpTelemetryNvmeControllerHealthCriticalInfo @ 0x1400B6704 (StorpTelemetryNvmeControllerHealthCriticalInfo.c)
 *     StorpTelemetryNvmeControllerHealthInfo @ 0x1400B69B4 (StorpTelemetryNvmeControllerHealthInfo.c)
 *     NvmeControllerGetCloudSSDLog @ 0x1400C77C0 (NvmeControllerGetCloudSSDLog.c)
 *     NvmeControllerGetHealthInfoLog @ 0x1400C7EF4 (NvmeControllerGetHealthInfoLog.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetrySendNvmeControllerHealthInfo(__int64 a1)
{
  _BYTE *v2; // r12
  __int64 v3; // rsi
  unsigned __int16 v4; // r15
  __int64 v5; // rax
  __int16 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  int HealthInfoLog; // eax
  __int64 v10; // rax
  int v11; // eax
  char v12; // dl
  __int64 v13; // rcx
  __int16 v14; // ax
  char v15; // al
  unsigned __int8 v16; // al
  char v17; // al
  unsigned __int8 v18; // al
  char v19; // al
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  unsigned __int16 v22; // r13
  __int64 v23; // rbx
  const char *v24; // r10
  __int64 v25; // r11
  __int64 v27; // [rsp+70h] [rbp-D8h]
  __int64 v28; // [rsp+70h] [rbp-D8h]
  int v29; // [rsp+80h] [rbp-C8h]
  char v30; // [rsp+C8h] [rbp-80h]
  char v31; // [rsp+C9h] [rbp-7Fh]
  unsigned __int16 v32; // [rsp+CCh] [rbp-7Ch]
  __int64 v33; // [rsp+D0h] [rbp-78h]
  __int64 v34; // [rsp+D8h] [rbp-70h]
  char v35[13]; // [rsp+F0h] [rbp-58h] BYREF
  int v36; // [rsp+FDh] [rbp-4Bh]
  __int64 v37; // [rsp+108h] [rbp-40h] BYREF
  char v38; // [rsp+110h] [rbp-38h]
  __int128 v39; // [rsp+118h] [rbp-30h] BYREF
  __int128 v40; // [rsp+128h] [rbp-20h]
  __int64 v41; // [rsp+138h] [rbp-10h]
  char v42; // [rsp+140h] [rbp-8h]

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  LOBYTE(v5) = 0;
  strcpy(v35, "PCI vendor: ");
  v32 = 0;
  v31 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v30 = 0;
  v34 = 0LL;
  v33 = 0LL;
  v36 = 0;
  v41 = 0LL;
  v42 = 0;
  v37 = 0LL;
  v38 = 0;
  v39 = 0LL;
  v40 = 0LL;
  if ( !a1 )
    return v5;
  if ( *(_QWORD *)(a1 + 1288) )
  {
    v5 = *(_QWORD *)(a1 + 1288);
    if ( *(_DWORD *)v5 )
      return v5;
  }
  v5 = *(_QWORD *)(a1 + 968);
  if ( (v5 & 1) == 0 )
    return v5;
  v5 = *(_QWORD *)(a1 + 128);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 160) + 68LL) != 1 )
    return v5;
  if ( (*(_DWORD *)(a1 + 936) & 4) == 0 )
  {
    HealthInfoLog = NvmeControllerGetHealthInfoLog(a1);
    if ( HealthInfoLog < 0 )
    {
      if ( HealthInfoLog == -1073741670 )
        goto LABEL_13;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 1264);
      if ( v10 )
      {
        v2 = *(_BYTE **)(a1 + 1264);
        v32 = 512;
        v34 = *(_QWORD *)(v10 + 48);
        v33 = *(_QWORD *)(v10 + 56);
        v31 = *(_BYTE *)(a1 + 946);
        *(_BYTE *)(a1 + 946) = *v2;
        goto LABEL_13;
      }
    }
    v11 = *(_DWORD *)(a1 + 936);
    if ( (v11 & 1) == 0 )
      *(_DWORD *)(a1 + 936) = v11 | 4;
  }
LABEL_13:
  LODWORD(v5) = *(_DWORD *)(a1 + 136);
  if ( (v5 & 0x100000) == 0 )
    goto LABEL_31;
  LODWORD(v5) = *(_DWORD *)(a1 + 936);
  if ( (v5 & 2) != 0 )
    goto LABEL_31;
  LODWORD(v5) = NvmeControllerGetCloudSSDLog(a1);
  if ( (int)v5 < 0 )
  {
    if ( (_DWORD)v5 != -1073741670 )
    {
LABEL_29:
      LODWORD(v5) = *(_DWORD *)(a1 + 936);
      v12 = 0;
      if ( (v5 & 1) == 0 )
      {
        LODWORD(v5) = v5 | 2;
        *(_DWORD *)(a1 + 936) = v5;
      }
      goto LABEL_32;
    }
LABEL_31:
    v12 = 0;
    goto LABEL_32;
  }
  v5 = *(_QWORD *)(a1 + 1272);
  if ( !v5 )
    goto LABEL_29;
  v12 = -64;
  v3 = *(_QWORD *)(a1 + 1272);
  v30 = -64;
  if ( *(_BYTE *)(v5 + 509) )
  {
    v5 = *(_QWORD *)(v5 + 496);
    if ( v5 == 0xA4F2BFEA2810AFC5uLL )
    {
      v5 = *(_QWORD *)(v3 + 504);
      if ( v5 == 0xAFD514C97C6F4F9CuLL )
      {
        v6 = *(_WORD *)(v3 + 494);
        if ( v6 == 2 || (LOBYTE(v5) = 3, v6 == 3) )
        {
          v7 = *(_QWORD *)v3;
          v4 = 494;
          v8 = *(_QWORD *)(v3 + 8);
          goto LABEL_32;
        }
      }
    }
    goto LABEL_27;
  }
  v6 = *(_WORD *)(v5 + 510);
  if ( v6 )
  {
    LOBYTE(v5) = 1;
    if ( v6 == 1 )
    {
      v7 = *(_QWORD *)v3;
      v4 = 88;
      v8 = *(_QWORD *)(v3 + 8);
      goto LABEL_32;
    }
LABEL_27:
    v4 = 512;
    v6 = -1;
    goto LABEL_32;
  }
  v7 = *(_QWORD *)v5;
  v4 = 55;
  v8 = *(_QWORD *)(v5 + 8);
LABEL_32:
  if ( v2 || v3 )
  {
    v13 = *(_QWORD *)(a1 + 592);
    if ( v13 )
    {
      v14 = *(_WORD *)v13 >> 12;
      if ( (unsigned __int8)v14 > 9u )
        v15 = v14 + 55;
      else
        v15 = v14 + 48;
      v35[12] = v15;
      v16 = *(_BYTE *)(v13 + 1) & 0xF;
      if ( v16 > 9u )
        v17 = v16 + 55;
      else
        v17 = v16 + 48;
      LOBYTE(v36) = v17;
      v18 = (*(_BYTE *)v13 >> 4) & 0xF;
      if ( v18 > 9u )
        v19 = v18 + 55;
      else
        v19 = v18 + 48;
      BYTE1(v36) = v19;
      v20 = *(_BYTE *)v13 & 0xF;
      if ( v20 > 9u )
        v21 = v20 + 55;
      else
        v21 = v20 + 48;
      HIWORD(v36) = v21;
      v39 = *(_OWORD *)(v13 + 24);
      v40 = *(_OWORD *)(v13 + 40);
      v41 = *(_QWORD *)(v13 + 56);
      v37 = *(_QWORD *)(v13 + 64);
    }
    if ( *(_BYTE *)(a1 + 947) && *(_BYTE *)(a1 + 946) == v31 )
    {
      v22 = v32;
    }
    else if ( (g_StorpTraceLoggingCriticalEventEnabledSetByRegistry != 1 || g_StorpTraceLoggingCriticalEventEnabled)
           && g_StorpTraceLoggingAdapterCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum
           && *(_BYTE *)(a1 + 946) )
    {
      v27 = v8;
      v22 = v32;
      ++g_StorpTraceLoggingAdapterCriticalEventsLogged;
      StorpTelemetryNvmeControllerHealthCriticalInfo(
        a1,
        (__int64)v35,
        (__int64)&v39,
        &v37,
        (__int64)v2,
        v32,
        v12,
        v6,
        v3,
        v4,
        v34,
        v33,
        v7,
        v27);
    }
    else
    {
      v28 = v8;
      v22 = v32;
      StorpTelemetryNvmeControllerHealthInfo(
        a1,
        (__int64)v35,
        (__int64)&v39,
        &v37,
        (__int64)v2,
        v32,
        v12,
        v6,
        v3,
        v4,
        v34,
        v33,
        v7,
        v28);
    }
    LOBYTE(v5) = byte_140171469;
    if ( byte_140171469 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 128);
      v24 = (const char *)&word_140150F48;
      v25 = *(_QWORD *)(v23 + 144);
      if ( *(_QWORD *)(a1 + 752) )
        v24 = *(const char **)(a1 + 752);
      LOBYTE(v5) = McTemplateK0qjzshussssqtxqqbr14uhqbr18_EtwWriteTransfer(
                     v22,
                     *(unsigned __int8 *)(a1 + 946),
                     v23 + 1032,
                     *(_DWORD *)(v23 + 56),
                     v23 + 1032,
                     *(const wchar_t **)(v23 + 1016),
                     *(const char **)(a1 + 792),
                     *(_WORD *)(a1 + 4),
                     *(_BYTE *)(a1 + 744),
                     v24,
                     v35,
                     (const char *)&v39,
                     (const char *)&v37,
                     (v25 & 1) != 0 ? 20 : 17,
                     (v25 & 0x2000) != 0,
                     v29,
                     *(_BYTE *)(a1 + 946),
                     v22,
                     (__int64)v2,
                     v30,
                     v6,
                     v4,
                     v3);
    }
    *(_BYTE *)(a1 + 947) = 0;
    *(_DWORD *)(a1 + 936) |= 1u;
  }
  return v5;
}
