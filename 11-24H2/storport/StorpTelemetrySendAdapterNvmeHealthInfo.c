/*
 * XREFs of StorpTelemetrySendAdapterNvmeHealthInfo @ 0x1400B9438
 * Callers:
 *     StorpAdapterHealthWorkItemRoutine @ 0x1400AF450 (StorpAdapterHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x140051A60 (StorpTelemetryNvmeGetLogPage.c)
 *     McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer @ 0x1400AEDA8 (McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer.c)
 *     StorpTelemetryAdapterNvmeHealthCriticalInfo @ 0x1400B22F4 (StorpTelemetryAdapterNvmeHealthCriticalInfo.c)
 *     StorpTelemetryAdapterNvmeHealthInfo @ 0x1400B256C (StorpTelemetryAdapterNvmeHealthInfo.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetrySendAdapterNvmeHealthInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // r13
  __int64 v7; // rbx
  unsigned __int16 v8; // r12
  __int16 v9; // si
  __int64 v10; // r14
  __int64 v11; // r15
  int *Pool; // rax
  NTSTATUS LogPage; // eax
  int v14; // eax
  int *v15; // rax
  NTSTATUS v16; // eax
  char v17; // dl
  __int64 v18; // rax
  int v19; // eax
  unsigned __int16 v20; // r14
  __int64 v21; // rcx
  __int16 v22; // ax
  char v23; // al
  unsigned __int8 v24; // al
  char v25; // al
  unsigned __int8 v26; // al
  char v27; // al
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  _WORD *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned __int8 *v33; // rcx
  __int16 v34; // ax
  __int64 v35; // [rsp+50h] [rbp-F8h]
  __int64 v36; // [rsp+50h] [rbp-F8h]
  char v37; // [rsp+C8h] [rbp-80h]
  char v38; // [rsp+C9h] [rbp-7Fh]
  unsigned __int16 v39; // [rsp+CCh] [rbp-7Ch]
  __int64 v40; // [rsp+D0h] [rbp-78h]
  unsigned int *P; // [rsp+D8h] [rbp-70h]
  int *v42; // [rsp+E0h] [rbp-68h]
  __int128 v43; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-50h] BYREF
  char v45; // [rsp+100h] [rbp-48h]
  char v46[13]; // [rsp+108h] [rbp-40h] BYREF
  int v47; // [rsp+115h] [rbp-33h]
  __int128 v48; // [rsp+120h] [rbp-28h] BYREF
  __int128 v49; // [rsp+130h] [rbp-18h]
  __int64 v50; // [rsp+140h] [rbp-8h]
  char v51; // [rsp+148h] [rbp+0h]
  _OWORD v52[2]; // [rsp+150h] [rbp+8h] BYREF
  __int64 v53; // [rsp+170h] [rbp+28h]
  __int16 v54; // [rsp+178h] [rbp+30h]

  v4 = *(_DWORD *)(a1 + 5344);
  P = 0LL;
  v39 = 0;
  v6 = 0LL;
  v38 = 0;
  v7 = 0LL;
  v42 = 0LL;
  v8 = 0;
  *(_QWORD *)&v43 = 0xA4F2BFEA2810AFC5uLL;
  v9 = 0;
  v10 = 0LL;
  *((_QWORD *)&v43 + 1) = 0xAFD514C97C6F4F9CuLL;
  v11 = 0LL;
  v37 = 0;
  v44 = 0LL;
  v40 = 0LL;
  if ( (v4 & 8) == 0 )
  {
    Pool = (int *)RaidAllocatePool(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
    P = (unsigned int *)Pool;
    if ( Pool )
    {
      LogPage = StorpTelemetryNvmeGetLogPage(*(PDEVICE_OBJECT *)(a1 + 8), 2, 0x200u, Pool, 0x230u);
      if ( LogPage < 0 )
      {
        if ( LogPage != -1073741670 )
        {
          v14 = *(_DWORD *)(a1 + 5344);
          if ( (v14 & 2) == 0 )
            *(_DWORD *)(a1 + 5344) = v14 | 8;
        }
      }
      else
      {
        v39 = 216;
        v6 = (__int64)P + P[6] + 8;
        v44 = *(_QWORD *)(v6 + 48);
        v40 = *(_QWORD *)(v6 + 56);
        v38 = *(_BYTE *)(a1 + 5316);
        *(_BYTE *)(a1 + 5316) = *(_BYTE *)v6;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 5344) & 4) != 0 )
  {
    v17 = 0;
    goto LABEL_30;
  }
  v15 = (int *)RaidAllocatePool(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  v42 = v15;
  if ( !v15 )
  {
    v17 = 0;
    goto LABEL_30;
  }
  v16 = StorpTelemetryNvmeGetLogPage(*(PDEVICE_OBJECT *)(a1 + 8), 192, 0x200u, v15, 0x230u);
  if ( v16 < 0 )
  {
    v17 = 0;
    if ( v16 != -1073741670 )
    {
      v19 = *(_DWORD *)(a1 + 5344);
      if ( (v19 & 2) == 0 )
        *(_DWORD *)(a1 + 5344) = v19 | 4;
    }
  }
  else
  {
    v17 = -64;
    v37 = -64;
    v7 = (__int64)v42 + (unsigned int)v42[6] + 8;
    if ( !*(_BYTE *)(v7 + 509) )
    {
      v9 = *(_WORD *)(v7 + 510);
      if ( !v9 )
      {
        v8 = 55;
LABEL_23:
        v10 = *(_QWORD *)v7;
        v11 = *(_QWORD *)(v7 + 8);
        goto LABEL_30;
      }
      if ( v9 == 1 )
      {
        v8 = 88;
        goto LABEL_23;
      }
LABEL_24:
      v8 = *((_WORD *)v42 + 14);
      v9 = -1;
      goto LABEL_30;
    }
    v18 = *(_QWORD *)(v7 + 496) - v43;
    if ( !v18 )
      v18 = *(_QWORD *)(v7 + 504) - *((_QWORD *)&v43 + 1);
    if ( v18 )
      goto LABEL_24;
    v9 = *(_WORD *)(v7 + 494);
    if ( v9 != 2 )
    {
      if ( v9 == 3 )
      {
        v8 = 494;
        goto LABEL_23;
      }
      goto LABEL_24;
    }
    v10 = *(_QWORD *)v7;
    v8 = 494;
    v11 = *(_QWORD *)(v7 + 8);
  }
LABEL_30:
  if ( v6 || v7 )
  {
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingAdapterCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_39;
    }
    if ( *(_BYTE *)(a1 + 5316) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
    {
      v35 = v10;
      LOBYTE(a4) = v17;
      v20 = v39;
      ++g_StorpTraceLoggingAdapterCriticalEventsLogged;
      StorpTelemetryAdapterNvmeHealthCriticalInfo(a1, v6, v39, a4, v9, v7, v8, v44, v40, v35, v11);
    }
    else
    {
LABEL_39:
      LOBYTE(a4) = v17;
      v36 = v10;
      v20 = v39;
      StorpTelemetryAdapterNvmeHealthInfo(a1, v6, v39, a4, v9, v7, v8, v44, v40, v36, v11);
    }
    if ( !*(_BYTE *)(a1 + 5317) || *(_BYTE *)(a1 + 5316) != v38 )
    {
      v21 = *(_QWORD *)(a1 + 6000);
      strcpy(v46, "PCI vendor: ");
      v47 = 0;
      v50 = 0LL;
      v51 = 0;
      v44 = 0LL;
      v45 = 0;
      v53 = 0LL;
      v54 = 0;
      v43 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      memset(v52, 0, sizeof(v52));
      if ( v21 )
      {
        v22 = *(_WORD *)v21 >> 12;
        if ( (unsigned __int8)v22 > 9u )
          v23 = v22 + 55;
        else
          v23 = v22 + 48;
        v46[12] = v23;
        v24 = *(_BYTE *)(v21 + 1) & 0xF;
        if ( v24 > 9u )
          v25 = v24 + 55;
        else
          v25 = v24 + 48;
        LOBYTE(v47) = v25;
        v26 = (*(_BYTE *)v21 >> 4) & 0xF;
        if ( v26 > 9u )
          v27 = v26 + 55;
        else
          v27 = v26 + 48;
        BYTE1(v47) = v27;
        v28 = *(_BYTE *)v21 & 0xF;
        if ( v28 > 9u )
          v29 = v28 + 55;
        else
          v29 = v28 + 48;
        HIWORD(v47) = v29;
        v30 = v52;
        v31 = 20LL;
        v48 = *(_OWORD *)(v21 + 24);
        v49 = *(_OWORD *)(v21 + 40);
        v50 = *(_QWORD *)(v21 + 56);
        v32 = *(_QWORD *)(v21 + 64);
        v33 = (unsigned __int8 *)(v21 + 4);
        v44 = v32;
        do
        {
          v34 = *v33++;
          *v30++ = v34;
          --v31;
        }
        while ( v31 );
        v20 = v39;
      }
      if ( (byte_140171464 & 0x40) != 0 )
        McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer(
          v20,
          *(unsigned __int8 *)(a1 + 5316),
          *(unsigned __int8 *)(a1 + 104) >> 7,
          *(_DWORD *)(a1 + 56),
          255,
          255,
          255,
          (__int64)&v43,
          a1 + 5064,
          *(const wchar_t **)(a1 + 4720),
          v46,
          (const char *)&v48,
          (const wchar_t *)v52,
          (const char *)&v44,
          *(_BYTE *)(a1 + 104) >> 7,
          g_SystemUptime_s,
          *(_BYTE *)(a1 + 5316),
          v20,
          v6,
          v37,
          v9,
          v8,
          v7);
      *(_BYTE *)(a1 + 5317) = 0;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( v42 )
    ExFreePoolWithTag(v42, 0x65546152u);
}
