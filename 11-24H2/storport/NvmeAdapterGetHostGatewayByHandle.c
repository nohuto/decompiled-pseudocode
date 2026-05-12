/*
 * XREFs of NvmeAdapterGetHostGatewayByHandle @ 0x140198090
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterGetHostGateway @ 0x1400D351C (NvmeAdapterGetHostGateway.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D3748 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetHostGatewayByHandle(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v6; // rax
  int v7; // esi
  _QWORD *HostGateway; // rax
  unsigned __int64 v9; // rbp
  _DWORD *v10; // r15
  __int128 *v11; // rcx
  __int64 v12; // rdx
  _OWORD *v13; // rax
  __int128 v14; // xmm0
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int *v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  unsigned __int64 v20; // rdx
  char v21; // r12
  _BYTE *v22; // r9
  unsigned __int8 v23; // r10
  char v24; // bp
  char v25; // r11
  char v26; // r13
  char *v27; // r11
  unsigned int v28; // r15d
  unsigned __int64 v29; // r14
  __int64 v30; // r8
  int v31; // ecx
  char v32; // cl
  char v33; // r8
  _BYTE *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  char v38; // [rsp+60h] [rbp-58h]
  char v39; // [rsp+61h] [rbp-57h]
  unsigned int v40; // [rsp+64h] [rbp-54h]
  GUID v41; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 && *(_DWORD *)(v2 + 16) >= 0x10u && *(_WORD *)v6 == 1 && *(_WORD *)(v6 + 2) == 16 )
    {
      if ( *(_DWORD *)(v2 + 8) >= 0x140u )
      {
        HostGateway = NvmeAdapterGetHostGateway(a1, (_QWORD *)(*(_QWORD *)(v6 + 8) ^ a1));
        v9 = (unsigned __int64)HostGateway;
        if ( HostGateway )
        {
          v7 = NvmeAdapterHostGatewayAcquireRundown((__int64)HostGateway);
          if ( v7 >= 0 )
          {
            v10 = *(_DWORD **)(a2 + 24);
            memset_0(v10, 0, *(unsigned int *)(v2 + 8));
            *v10 = 20971521;
            v11 = (__int128 *)(v9 + 72);
            v12 = 2LL;
            *((_QWORD *)v10 + 1) = v9 ^ a1;
            v10[5] = *(_DWORD *)(v9 + 4);
            v10[6] = *(_DWORD *)(v9 + 8);
            v13 = v10 + 7;
            do
            {
              v14 = *v11;
              v11 += 8;
              *v13 = v14;
              v13 += 8;
              *(v13 - 7) = *(v11 - 7);
              *(v13 - 6) = *(v11 - 6);
              *(v13 - 5) = *(v11 - 5);
              *(v13 - 4) = *(v11 - 4);
              *(v13 - 3) = *(v11 - 3);
              *(v13 - 2) = *(v11 - 2);
              *(v13 - 1) = *(v11 - 1);
              --v12;
            }
            while ( v12 );
            *(_OWORD *)(v10 + 71) = *(_OWORD *)(v9 + 328);
            *(_OWORD *)(v10 + 75) = *(_OWORD *)(v9 + 344);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v9 + 56));
            *(_QWORD *)(a2 + 56) = *((unsigned __int16 *)v10 + 1);
          }
        }
        else
        {
          v7 = -1073741275;
        }
      }
      else
      {
        v7 = -1073741789;
      }
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    v7 = -1073741637;
  }
  v15 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v15 )
    goto LABEL_81;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v17 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v17 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_81;
    v19 = &EventNonReadWriteRequestComplete;
    goto LABEL_80;
  }
  if ( *(_BYTE *)v17 != 15 )
  {
    if ( *(_BYTE *)v17 != 27 )
      goto LABEL_81;
    if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v18 = *(int **)(a2 + 56);
        if ( v18 )
          v3 = *v18;
        McTemplateK0pqd_EtwWriteTransfer(v16, v17, &v41, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_81;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_81;
    v19 = &EventPnpRequestComplete;
LABEL_80:
    McTemplateK0pd_EtwWriteTransfer(v16, v19, &v41, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_81;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_81;
  v20 = *(_QWORD *)(v17 + 8);
  v21 = 0;
  v22 = 0LL;
  v38 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_BYTE *)(v20 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v20 + 72);
    v22 = *(_BYTE **)(v20 + 32);
    v23 = *(_BYTE *)(v20 + 11);
    v21 = *(_BYTE *)(v20 + 4);
    if ( !*(_BYTE *)(v20 + 2) )
      goto LABEL_57;
    goto LABEL_81;
  }
  v27 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v20 + 20) )
    goto LABEL_81;
  v28 = 0;
  v40 = *(_DWORD *)(v20 + 56);
  if ( !v40 )
    goto LABEL_54;
  while ( 1 )
  {
    v16 = *(unsigned int *)(v20 + 4LL * v28 + 120);
    if ( (unsigned int)v16 >= 0x80 )
    {
      v29 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v16 < (unsigned int)v29 )
        break;
    }
LABEL_48:
    if ( ++v28 >= v40 )
      goto LABEL_54;
  }
  v30 = (unsigned int)v16;
  v31 = *(_DWORD *)(v16 + v20) - 64;
  if ( v31 )
  {
    v16 = (unsigned int)(v31 - 1);
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == 1 )
      {
        v16 = v30 + 40;
        if ( v30 + 40 <= v29 )
        {
          if ( *(_DWORD *)(v30 + v20 + 12) )
            v27 = (char *)(v30 + v20 + 32);
          v22 = *(_BYTE **)(v30 + v20 + 24);
          goto LABEL_53;
        }
      }
    }
    else
    {
      v16 = v30 + 56;
      if ( v30 + 56 <= v29 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v30 + v20 + 10) )
          v27 = (char *)(v30 + v20 + 24);
        v21 = *(_BYTE *)(v30 + v20 + 8);
        v22 = *(_BYTE **)(v30 + v20 + 16);
        v23 = *(_BYTE *)(v30 + v20 + 9);
      }
    }
    goto LABEL_47;
  }
  v16 = v30 + 40;
  if ( v30 + 40 > v29 )
  {
LABEL_47:
    if ( v39 )
      goto LABEL_54;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v30 + v20 + 10) )
    v27 = (char *)(v30 + v20 + 24);
  v22 = *(_BYTE **)(v30 + v20 + 16);
LABEL_53:
  v23 = *(_BYTE *)(v30 + v20 + 9);
  v21 = *(_BYTE *)(v30 + v20 + 8);
LABEL_54:
  if ( v27 )
  {
    v32 = *v27;
    v25 = 0;
LABEL_57:
    LOBYTE(v16) = v32 - 8;
    if ( (v16 & 0x5D) == 0 )
    {
      v33 = *(_BYTE *)(v20 + 3);
      if ( v33 == 1 || !v22 || !v23 )
        goto LABEL_76;
      LOBYTE(v20) = 0;
      v16 = (unsigned __int64)&v22[v23];
      v34 = v22 + 8;
      if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v34 <= v16 )
        {
          LOBYTE(v20) = 1;
          v25 = v22[2];
          v24 = v22[1] & 0xF;
          v26 = v22[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v34 <= v16 )
        {
          v24 = v22[2] & 0xF;
          v35 = v23;
          if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
            v35 = (unsigned __int8)v22[7] + 8;
          v16 = (unsigned __int64)(v22 + 13);
          v20 = (unsigned __int64)&v22[v35];
          if ( (unsigned __int64)(v22 + 13) > v20 )
            v38 = 0;
          else
            v38 = v22[12];
          if ( (unsigned __int64)(v22 + 14) <= v20 )
            v26 = *(_BYTE *)v16;
          LOBYTE(v20) = 1;
        }
        v25 = v38;
      }
      if ( (_BYTE)v20 )
      {
        LOBYTE(v3) = v25;
        v36 = v26;
      }
      else
      {
LABEL_76:
        v24 = 0;
        v36 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v16, v20, &v41, a2, *(_DWORD *)(a2 + 48), v33, v21, v24, v3, v36, a2);
    }
  }
LABEL_81:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
