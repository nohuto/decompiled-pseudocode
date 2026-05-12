/*
 * XREFs of NvmeNamespaceProcessQueueRequests @ 0x140107114
 * Callers:
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E2530 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterStopFabricControllerNamespaces @ 0x1400E87D8 (NvmeAdapterStopFabricControllerNamespaces.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceTerminateSystemThread @ 0x140114E48 (NvmeNamespaceTerminateSystemThread.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     StorPopRequestFromDeviceQueue @ 0x1401275E0 (StorPopRequestFromDeviceQueue.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall NvmeNamespaceProcessQueueRequests(__int64 a1)
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  unsigned int v3; // esi
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int *v7; // rax
  __int64 v8; // rcx
  const EVENT_DESCRIPTOR *v9; // rdx
  unsigned __int64 v10; // rdx
  char v11; // bp
  unsigned __int8 v12; // r11
  char v13; // r13
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // r12
  char *v17; // rdi
  char v18; // r14
  unsigned int v19; // r15d
  unsigned int v20; // ebp
  unsigned int *v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // r11
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rcx
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  unsigned __int8 v30; // al
  char v31; // al
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rbx
  __int64 v38; // [rsp+20h] [rbp-98h]
  __int64 v39; // [rsp+28h] [rbp-90h]
  __int64 v40; // [rsp+30h] [rbp-88h]
  __int64 v41; // [rsp+38h] [rbp-80h]
  __int64 v42; // [rsp+40h] [rbp-78h]
  __int64 v43; // [rsp+48h] [rbp-70h]
  unsigned __int8 v44; // [rsp+60h] [rbp-58h]
  char v45; // [rsp+61h] [rbp-57h]
  int v46; // [rsp+64h] [rbp-54h]
  _DWORD *v48; // [rsp+70h] [rbp-48h]
  GUID v49; // [rsp+78h] [rbp-40h] BYREF

  v1 = a1;
  v2 = g_CpuInfo;
  v48 = g_CpuInfo;
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return;
  NvmeNamespaceTerminateSystemThread(a1);
  v3 = 0;
  v46 = 0;
  if ( !v2[2] )
    return;
LABEL_74:
  while ( 2 )
  {
    v33 = StorPopRequestFromDeviceQueue(*(_QWORD *)(v1 + 256), v3);
    v37 = v33;
    if ( v33 )
    {
      LOBYTE(v36) = 37;
      LOBYTE(v35) = 5;
      LOBYTE(v34) = 8;
      SetSrbSenseData(*(_QWORD *)(*(_QWORD *)(v33 + 184) + 8LL), v34, v35, v36, 0);
      *(_QWORD *)(v37 + 56) = 0LL;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v1 + 120));
      v4 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(v37 + 141) = -84;
      *(_DWORD *)(v37 + 48) = -1073741808;
      if ( v4 )
        goto LABEL_73;
      v49 = 0LL;
      IoGetActivityIdIrp(v37, &v49);
      v6 = *(_QWORD *)(v37 + 184);
      if ( *(_BYTE *)v6 == 14 )
      {
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_73;
        v9 = &EventNonReadWriteRequestComplete;
        goto LABEL_17;
      }
      if ( *(_BYTE *)v6 != 15 )
      {
        if ( *(_BYTE *)v6 != 27 )
          goto LABEL_73;
        if ( *(_BYTE *)(v6 + 1) == 7 && !*(_DWORD *)(v6 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v7 = *(unsigned int **)(v37 + 56);
            if ( v7 )
              v8 = *v7;
            else
              v8 = 0LL;
            LODWORD(v39) = *(_DWORD *)(v37 + 48);
            LODWORD(v38) = v8;
            McTemplateK0pqd_EtwWriteTransfer(v8, v6, &v49, v37, v38, v39);
          }
          goto LABEL_73;
        }
        if ( (byte_140171462 & 0x20) == 0 )
          goto LABEL_73;
        v9 = &EventPnpRequestComplete;
LABEL_17:
        LODWORD(v38) = *(_DWORD *)(v37 + 48);
        McTemplateK0pd_EtwWriteTransfer(v5, v9, &v49, v37, v38);
        goto LABEL_73;
      }
      if ( byte_140171461 >= 0 )
        goto LABEL_73;
      v10 = *(_QWORD *)(v6 + 8);
      v11 = 0;
      v12 = 0;
      v45 = 0;
      v13 = 0;
      v44 = 0;
      v14 = 0LL;
      v15 = 0;
      v16 = 0;
      if ( *(_BYTE *)(v10 + 2) != 40 )
      {
        v24 = *(_BYTE *)(v10 + 72);
        v14 = *(_BYTE **)(v10 + 32);
        v15 = *(_BYTE *)(v10 + 11);
        v13 = *(_BYTE *)(v10 + 4);
        if ( !*(_BYTE *)(v10 + 2) )
          goto LABEL_48;
        goto LABEL_73;
      }
      v17 = 0LL;
      v18 = 0;
      if ( *(_DWORD *)(v10 + 20) )
      {
LABEL_72:
        v1 = a1;
        goto LABEL_73;
      }
      v19 = *(_DWORD *)(v10 + 56);
      v20 = 0;
      if ( !v19 )
        goto LABEL_45;
      v21 = (unsigned int *)(v10 + 120);
      while ( 1 )
      {
        v22 = *v21;
        if ( (unsigned int)v22 >= 0x80 )
        {
          v23 = *(unsigned int *)(v10 + 16);
          if ( (unsigned int)v22 < (unsigned int)v23 )
          {
            if ( *(_DWORD *)(v22 + v10) == 64 )
            {
              if ( v22 + 40 <= v23 )
              {
                if ( *(_BYTE *)(v22 + v10 + 10) )
                  v17 = (char *)(v22 + v10 + 24);
                v14 = *(_BYTE **)(v22 + v10 + 16);
LABEL_43:
                v15 = *(_BYTE *)(v22 + v10 + 9);
                v13 = *(_BYTE *)(v22 + v10 + 8);
LABEL_44:
                v3 = v46;
                v12 = 0;
LABEL_45:
                if ( !v17 )
                  goto LABEL_72;
                v24 = *v17;
                v11 = 0;
                v1 = a1;
LABEL_48:
                if ( ((v24 - 8) & 0x5D) == 0 )
                {
                  v25 = *(_BYTE *)(v10 + 3);
                  if ( v25 == 1 || !v14 || !v15 )
                    goto LABEL_68;
                  LOBYTE(v10) = 0;
                  v26 = &v14[v15];
                  v27 = v14 + 8;
                  if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
                  {
                    if ( v27 <= v26 )
                    {
                      LOBYTE(v10) = 1;
                      v11 = v14[2];
                      v16 = v14[1] & 0xF;
                      v12 = v14[3];
                    }
                  }
                  else
                  {
                    if ( v27 <= v26 )
                    {
                      v16 = v14[2] & 0xF;
                      v28 = v15;
                      if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
                        v28 = (unsigned __int8)v14[7] + 8;
                      v10 = (unsigned __int64)&v14[v28];
                      if ( (unsigned __int64)(v14 + 13) > v10 )
                        v29 = 0;
                      else
                        v29 = v14[12];
                      v45 = v29;
                      if ( (unsigned __int64)(v14 + 14) > v10 )
                        v30 = 0;
                      else
                        v30 = v14[13];
                      v44 = v30;
                      LOBYTE(v10) = 1;
                    }
                    v12 = v44;
                    v11 = v45;
                  }
                  if ( (_BYTE)v10 )
                  {
                    v31 = v11;
                    v32 = v12;
                  }
                  else
                  {
LABEL_68:
                    v16 = 0;
                    v31 = 0;
                    v32 = 0LL;
                  }
                  LOBYTE(v43) = v32;
                  LOBYTE(v42) = v31;
                  LOBYTE(v41) = v16;
                  LOBYTE(v40) = v13;
                  LOBYTE(v39) = v25;
                  LODWORD(v38) = *(_DWORD *)(v37 + 48);
                  McTemplateK0pduuuuup_EtwWriteTransfer(v32, v10, &v49, v37, v38, v39, v40, v41, v42, v43, v37);
                }
LABEL_73:
                IofCompleteRequest((PIRP)v37, 0);
                goto LABEL_74;
              }
            }
            else if ( *(_DWORD *)(v22 + v10) == 65 )
            {
              if ( v22 + 56 <= v23 )
              {
                v18 = 1;
                if ( *(_BYTE *)(v22 + v10 + 10) )
                  v17 = (char *)(v22 + v10 + 24);
                v13 = *(_BYTE *)(v22 + v10 + 8);
                v14 = *(_BYTE **)(v22 + v10 + 16);
                v15 = *(_BYTE *)(v22 + v10 + 9);
              }
            }
            else if ( *(_DWORD *)(v22 + v10) == 66 && v22 + 40 <= v23 )
            {
              if ( *(_DWORD *)(v22 + v10 + 12) )
                v17 = (char *)(v22 + v10 + 32);
              v14 = *(_BYTE **)(v22 + v10 + 24);
              goto LABEL_43;
            }
            if ( v18 )
              goto LABEL_44;
          }
        }
        ++v20;
        ++v21;
        if ( v20 >= v19 )
          goto LABEL_44;
      }
    }
    v46 = ++v3;
    if ( v3 < v48[2] )
      continue;
    break;
  }
}
