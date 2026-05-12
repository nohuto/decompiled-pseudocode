/*
 * XREFs of NvmeNamespaceCancelPendingRequests @ 0x1400FBDFC
 * Callers:
 *     NvmeNamespaceDisableDeviceIrp @ 0x1400FE41C (NvmeNamespaceDisableDeviceIrp.c)
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401B1928 (NvmeNamespaceSurpriseRemovalIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorPopRequestFromDeviceQueue @ 0x1401275E0 (StorPopRequestFromDeviceQueue.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceCancelPendingRequests(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdi
  __int64 i; // rdx
  _BYTE *v4; // rcx
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int *v8; // rax
  __int64 v9; // rcx
  const EVENT_DESCRIPTOR *v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r11
  char v13; // r12
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // r15
  unsigned __int8 v17; // r13
  char *v18; // rdi
  char v19; // bp
  unsigned int v20; // r14d
  __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 v23; // r11
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rcx
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  char v33; // al
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v38; // [rsp+20h] [rbp-98h]
  __int64 v39; // [rsp+28h] [rbp-90h]
  __int64 v40; // [rsp+30h] [rbp-88h]
  __int64 v41; // [rsp+38h] [rbp-80h]
  __int64 v42; // [rsp+40h] [rbp-78h]
  __int64 v43; // [rsp+48h] [rbp-70h]
  char v44; // [rsp+60h] [rbp-58h]
  unsigned int v45; // [rsp+64h] [rbp-54h]
  _DWORD *v47; // [rsp+70h] [rbp-48h]
  GUID v48; // [rsp+78h] [rbp-40h] BYREF

  v1 = 0;
  v2 = a1;
  v45 = 0;
  v47 = g_CpuInfo;
  if ( *((_DWORD *)g_CpuInfo + 2) )
  {
    do
    {
      for ( i = v1; ; i = v45 )
      {
        v35 = StorPopRequestFromDeviceQueue(*(_QWORD *)(v2 + 256), i);
        v36 = v35;
        if ( !v35 )
          break;
        v4 = *(_BYTE **)(v35 + 184);
        *(_QWORD *)(v35 + 56) = 0LL;
        if ( *v4 == 15 )
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 120));
        v5 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(v36 + 141) = -84;
        *(_DWORD *)(v36 + 48) = -1073741536;
        if ( v5 )
          goto LABEL_72;
        v48 = 0LL;
        IoGetActivityIdIrp(v36, &v48);
        v7 = *(_QWORD *)(v36 + 184);
        if ( *(_BYTE *)v7 == 14 )
        {
          if ( (byte_140171462 & 8) == 0 )
            goto LABEL_72;
          v10 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
          goto LABEL_18;
        }
        if ( *(_BYTE *)v7 != 15 )
        {
          if ( *(_BYTE *)v7 != 27 )
            goto LABEL_72;
          if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
          {
            if ( (byte_140171462 & 0x40) != 0 )
            {
              v8 = *(unsigned int **)(v36 + 56);
              if ( v8 )
                v9 = *v8;
              else
                v9 = 0LL;
              LODWORD(v39) = *(_DWORD *)(v36 + 48);
              LODWORD(v38) = v9;
              McTemplateK0pqd_EtwWriteTransfer(v9, v7, &v48, v36, v38, v39);
            }
            goto LABEL_72;
          }
          if ( (byte_140171462 & 0x20) == 0 )
            goto LABEL_72;
          v10 = &EventPnpRequestComplete;
LABEL_18:
          LODWORD(v38) = *(_DWORD *)(v36 + 48);
          McTemplateK0pd_EtwWriteTransfer(v6, v10, &v48, v36, v38);
          goto LABEL_72;
        }
        if ( byte_140171461 >= 0 )
          goto LABEL_72;
        v11 = *(_QWORD *)(v7 + 8);
        v12 = 0;
        v13 = 0;
        v44 = 0;
        v14 = 0LL;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        if ( *(_BYTE *)(v11 + 2) != 40 )
        {
          v27 = *(_BYTE *)(v11 + 72);
          v14 = *(_BYTE **)(v11 + 32);
          v15 = *(_BYTE *)(v11 + 11);
          v13 = *(_BYTE *)(v11 + 4);
          if ( !*(_BYTE *)(v11 + 2) )
            goto LABEL_48;
          goto LABEL_72;
        }
        v18 = 0LL;
        v19 = 0;
        if ( *(_DWORD *)(v11 + 20) )
        {
LABEL_71:
          v2 = a1;
          goto LABEL_72;
        }
        v20 = *(_DWORD *)(v11 + 56);
        v21 = 0LL;
        if ( !v20 )
          goto LABEL_45;
        while ( 1 )
        {
          v22 = *(unsigned int *)(v11 + 4 * v21 + 120);
          if ( (unsigned int)v22 >= 0x80 )
          {
            v23 = *(unsigned int *)(v11 + 16);
            if ( (unsigned int)v22 < (unsigned int)v23 )
              break;
          }
LABEL_38:
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 >= v20 )
            goto LABEL_44;
        }
        v24 = (unsigned int)v22;
        v25 = *(_DWORD *)(v22 + v11) - 64;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 == 1 && v24 + 40 <= v23 )
            {
              if ( *(_DWORD *)(v24 + v11 + 12) )
                v18 = (char *)(v24 + v11 + 32);
              v14 = *(_BYTE **)(v24 + v11 + 24);
              goto LABEL_43;
            }
          }
          else if ( v24 + 56 <= v23 )
          {
            v19 = 1;
            if ( *(_BYTE *)(v24 + v11 + 10) )
              v18 = (char *)(v24 + v11 + 24);
            v13 = *(_BYTE *)(v24 + v11 + 8);
            v14 = *(_BYTE **)(v24 + v11 + 16);
            v15 = *(_BYTE *)(v24 + v11 + 9);
          }
LABEL_37:
          if ( v19 )
            goto LABEL_44;
          goto LABEL_38;
        }
        if ( v24 + 40 > v23 )
          goto LABEL_37;
        if ( *(_BYTE *)(v24 + v11 + 10) )
          v18 = (char *)(v24 + v11 + 24);
        v14 = *(_BYTE **)(v24 + v11 + 16);
LABEL_43:
        v15 = *(_BYTE *)(v24 + v11 + 9);
        v13 = *(_BYTE *)(v24 + v11 + 8);
LABEL_44:
        v12 = 0;
LABEL_45:
        if ( !v18 )
          goto LABEL_71;
        v27 = *v18;
        v2 = a1;
LABEL_48:
        if ( ((v27 - 8) & 0x5D) == 0 )
        {
          v28 = *(_BYTE *)(v11 + 3);
          if ( v28 == 1 || !v14 || !v15 )
            goto LABEL_67;
          LOBYTE(v11) = 0;
          v29 = &v14[v15];
          v30 = v14 + 8;
          if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
          {
            if ( v30 <= v29 )
            {
              LOBYTE(v11) = 1;
              v12 = v14[2];
              v16 = v14[1] & 0xF;
              v17 = v14[3];
            }
          }
          else
          {
            if ( v30 <= v29 )
            {
              v16 = v14[2] & 0xF;
              v31 = v15;
              if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
                v31 = (unsigned __int8)v14[7] + 8;
              v11 = (unsigned __int64)&v14[v31];
              if ( (unsigned __int64)(v14 + 13) > v11 )
                v32 = 0;
              else
                v32 = v14[12];
              v44 = v32;
              if ( (unsigned __int64)(v14 + 14) <= v11 )
                v17 = v14[13];
              LOBYTE(v11) = 1;
            }
            v12 = v44;
          }
          if ( (_BYTE)v11 )
          {
            v33 = v12;
            v34 = v17;
          }
          else
          {
LABEL_67:
            v16 = 0;
            v33 = 0;
            v34 = 0LL;
          }
          LOBYTE(v43) = v34;
          LOBYTE(v42) = v33;
          LOBYTE(v41) = v16;
          LOBYTE(v40) = v13;
          LOBYTE(v39) = v28;
          LODWORD(v38) = *(_DWORD *)(v36 + 48);
          McTemplateK0pduuuuup_EtwWriteTransfer(v34, v11, &v48, v36, v38, v39, v40, v41, v42, v43, v36);
        }
LABEL_72:
        IofCompleteRequest((PIRP)v36, 0);
      }
      v1 = v45 + 1;
      v45 = v1;
    }
    while ( v1 < v47[2] );
  }
  return 0LL;
}
