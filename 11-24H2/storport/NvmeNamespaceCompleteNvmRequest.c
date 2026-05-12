/*
 * XREFs of NvmeNamespaceCompleteNvmRequest @ 0x1400FC810
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterControllerFreeDmaBuffer @ 0x1400E0570 (NvmeAdapterControllerFreeDmaBuffer.c)
 *     McTemplateK0qjzshqusssuuuqqqqqq_EtwWriteTransfer @ 0x1400FA680 (McTemplateK0qjzshqusssuuuqqqqqq_EtwWriteTransfer.c)
 *     NvmeMapStatus @ 0x1400FB1BC (NvmeMapStatus.c)
 *     NvmeNamespaceQueueRequest @ 0x14010AF34 (NvmeNamespaceQueueRequest.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall NvmeNamespaceCompleteNvmRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 *P)
{
  int v6; // ebx
  unsigned int v7; // r10d
  unsigned __int8 v10; // r12
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r14
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int64 v18; // rcx
  char v19; // al
  unsigned __int16 v20; // r9
  const char *v21; // r11
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  int *v27; // rax
  const EVENT_DESCRIPTOR *v28; // rdx
  __int64 v29; // rdx
  char v30; // r14
  _BYTE *v31; // r9
  unsigned __int8 v32; // r10
  char v33; // r11
  char v34; // r13
  char v35; // r12
  char *v36; // rsi
  unsigned int v37; // r15d
  unsigned __int64 v38; // rbp
  __int64 v39; // r8
  int v40; // ecx
  char v41; // cl
  char v42; // r8
  _BYTE *v43; // rax
  char *v44; // r12
  unsigned int v45; // eax
  char v46; // al
  __int64 v47; // [rsp+20h] [rbp-F8h]
  __int64 v48; // [rsp+28h] [rbp-F0h]
  __int64 v49; // [rsp+30h] [rbp-E8h]
  __int64 v50; // [rsp+38h] [rbp-E0h]
  __int64 v51; // [rsp+40h] [rbp-D8h]
  __int64 v52; // [rsp+48h] [rbp-D0h]
  char v53; // [rsp+B0h] [rbp-68h]
  unsigned int v55; // [rsp+B4h] [rbp-64h]
  GUID v56; // [rsp+B8h] [rbp-60h] BYREF

  v6 = 0;
  v7 = a4;
  *(_QWORD *)&v56.Data1 = *(_QWORD *)(a1 + 128);
  v10 = 4;
  if ( *(_BYTE *)(a5 + 668) )
    v10 = *(_BYTE *)(a5 + 668);
  if ( *(_BYTE *)(a2 + 2) == 40 && (v12 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = *(unsigned int *)(a2 + 4LL * v13 + 120);
      if ( (unsigned int)v14 >= 0x80 && (unsigned int)v14 < *(_DWORD *)(a2 + 16) )
      {
        v15 = a2 + v14;
        if ( *(_DWORD *)(a2 + v14) == 67 )
          break;
      }
      if ( ++v13 >= v12 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v15 = 0LL;
  }
  if ( P )
  {
    if ( (unsigned __int8)*(_DWORD *)(v15 + 16) == 9 && (*(_DWORD *)(v15 + 60) & 4) != 0 )
    {
      *(_QWORD *)(a2 + 64) = P[1];
      *(_DWORD *)(a2 + 60) = *((_DWORD *)P + 4);
      a3 = *P;
      NvmeAdapterControllerFreeDmaBuffer(a1, 16 * *((_DWORD *)P + 5), (void *)P[3]);
    }
    ExFreePoolWithTag(P, 0x4D4E6152u);
    v7 = a4;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v16 = *(_DWORD *)(a2 + 56);
    if ( v16 )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = *(unsigned int *)(a2 + 4LL * v17 + 120);
        if ( (unsigned int)v18 >= 0x80
          && (unsigned int)v18 < *(_DWORD *)(a2 + 16)
          && (unsigned int)(*(_DWORD *)(v18 + a2) - 64) <= 2 )
        {
          break;
        }
        if ( ++v17 >= v16 )
          goto LABEL_25;
      }
      *(_DWORD *)(a2 + 20) = 0;
    }
  }
LABEL_25:
  v19 = *(_BYTE *)(a2 + 3);
  if ( v19 == 37 || v19 == 14 )
  {
    v23 = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(v23 + 32) = (unsigned int)(*(_DWORD *)(v23 + 32) + 1);
    if ( *(_DWORD *)(v23 + 32) <= (unsigned int)v10 )
    {
      NvmeNamespaceQueueRequest(a5, a3, v7);
      return;
    }
    NvmeMapStatus(a2);
    _InterlockedIncrement64((volatile signed __int64 *)(a5 + 192));
  }
  else
  {
    NvmeMapStatus(a2);
    if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a5 + 192));
      if ( (byte_14017146A & 1) != 0 )
      {
        v20 = *(_WORD *)(v15 + 86);
        v21 = (const char *)&word_140150F48;
        v22 = v20;
        if ( *(_QWORD *)(a1 + 752) )
          v21 = *(const char **)(a1 + 752);
        LOWORD(v22) = v20 >> 1;
        McTemplateK0qjzshqusssuuuqqqqqq_EtwWriteTransfer(
          a1 + 841,
          a1 + 800,
          v22,
          *(_DWORD *)(*(_QWORD *)&v56.Data1 + 56LL),
          *(_QWORD *)&v56.Data1 + 1032LL,
          *(const wchar_t **)(*(_QWORD *)&v56.Data1 + 1016LL),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          *(_DWORD *)(a5 + 56),
          *(_BYTE *)(a1 + 744),
          v21,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          *(_BYTE *)(v15 + 16),
          (v20 >> 9) & 7,
          v20 >> 1,
          *(_DWORD *)(v15 + 56),
          *(_DWORD *)(v15 + 60),
          *(_DWORD *)(v15 + 64),
          *(_DWORD *)(v15 + 68),
          *(_DWORD *)(v15 + 72),
          *(_DWORD *)(v15 + 76));
      }
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a5 + 120));
  v24 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = 0;
  if ( v24 )
    goto LABEL_98;
  v56 = 0LL;
  IoGetActivityIdIrp(a3, &v56);
  v26 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v26 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_98;
    v28 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_97;
  }
  if ( *(_BYTE *)v26 != 15 )
  {
    if ( *(_BYTE *)v26 != 27 )
      goto LABEL_98;
    if ( *(_BYTE *)(v26 + 1) == 7 && !*(_DWORD *)(v26 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v27 = *(int **)(a3 + 56);
        if ( v27 )
          v6 = *v27;
        LODWORD(v48) = *(_DWORD *)(a3 + 48);
        LODWORD(v47) = v6;
        McTemplateK0pqd_EtwWriteTransfer(v25, v26, &v56, a3, v47, v48);
      }
      goto LABEL_98;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_98;
    v28 = &EventPnpRequestComplete;
LABEL_97:
    LODWORD(v47) = *(_DWORD *)(a3 + 48);
    McTemplateK0pd_EtwWriteTransfer(v25, v28, &v56, a3, v47);
    goto LABEL_98;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_98;
  v29 = *(_QWORD *)(v26 + 8);
  v30 = 0;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( *(_BYTE *)(v29 + 2) == 40 )
  {
    v36 = 0LL;
    v53 = 0;
    if ( *(_DWORD *)(v29 + 20) )
      goto LABEL_98;
    v37 = 0;
    v55 = *(_DWORD *)(v29 + 56);
    if ( !v55 )
      goto LABEL_72;
    while ( 1 )
    {
      v25 = *(unsigned int *)(v29 + 4LL * v37 + 120);
      if ( (unsigned int)v25 >= 0x80 )
      {
        v38 = *(unsigned int *)(v29 + 16);
        if ( (unsigned int)v25 < (unsigned int)v38 )
        {
          v39 = (unsigned int)v25;
          v40 = *(_DWORD *)(v25 + v29) - 64;
          if ( v40 )
          {
            v25 = (unsigned int)(v40 - 1);
            if ( (_DWORD)v25 )
            {
              if ( (_DWORD)v25 == 1 )
              {
                v25 = v39 + 40;
                if ( v39 + 40 <= v38 )
                {
                  if ( *(_DWORD *)(v39 + v29 + 12) )
                    v36 = (char *)(v39 + v29 + 32);
                  v31 = *(_BYTE **)(v39 + v29 + 24);
                  goto LABEL_71;
                }
              }
            }
            else
            {
              v25 = v39 + 56;
              if ( v39 + 56 <= v38 )
              {
                v53 = 1;
                if ( *(_BYTE *)(v39 + v29 + 10) )
                  v36 = (char *)(v39 + v29 + 24);
                v30 = *(_BYTE *)(v39 + v29 + 8);
                v31 = *(_BYTE **)(v39 + v29 + 16);
                v32 = *(_BYTE *)(v39 + v29 + 9);
              }
            }
          }
          else
          {
            v25 = v39 + 40;
            if ( v39 + 40 <= v38 )
            {
              if ( *(_BYTE *)(v39 + v29 + 10) )
                v36 = (char *)(v39 + v29 + 24);
              v31 = *(_BYTE **)(v39 + v29 + 16);
LABEL_71:
              v32 = *(_BYTE *)(v39 + v29 + 9);
              v30 = *(_BYTE *)(v39 + v29 + 8);
LABEL_72:
              if ( v36 )
              {
                v41 = *v36;
                goto LABEL_75;
              }
              goto LABEL_98;
            }
          }
          if ( v53 )
            goto LABEL_72;
        }
      }
      if ( ++v37 >= v55 )
        goto LABEL_72;
    }
  }
  v41 = *(_BYTE *)(v29 + 72);
  v31 = *(_BYTE **)(v29 + 32);
  v32 = *(_BYTE *)(v29 + 11);
  v30 = *(_BYTE *)(v29 + 4);
  if ( *(_BYTE *)(v29 + 2) )
    goto LABEL_98;
LABEL_75:
  LOBYTE(v25) = v41 - 8;
  if ( (v25 & 0x5D) == 0 )
  {
    v42 = *(_BYTE *)(v29 + 3);
    if ( v42 == 1 || !v31 || !v32 )
      goto LABEL_93;
    LOBYTE(v29) = 0;
    v25 = (unsigned __int64)&v31[v32];
    v43 = v31 + 8;
    if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v43 > v25 )
        goto LABEL_91;
      v34 = v31[2];
      v33 = v31[1] & 0xF;
      v35 = v31[3];
    }
    else
    {
      if ( (unsigned __int64)v43 > v25 )
        goto LABEL_91;
      v44 = v31 + 13;
      v33 = v31[2] & 0xF;
      v45 = v32;
      if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
        v45 = (unsigned __int8)v31[7] + 8;
      v25 = (unsigned __int64)&v31[v45];
      if ( (unsigned __int64)v44 <= v25 )
        v34 = v31[12];
      if ( (unsigned __int64)(v31 + 14) > v25 )
        v35 = 0;
      else
        v35 = *v44;
    }
    LOBYTE(v29) = 1;
LABEL_91:
    if ( (_BYTE)v29 )
    {
      LOBYTE(v6) = v34;
      v46 = v35;
LABEL_94:
      LOBYTE(v52) = v46;
      LOBYTE(v51) = v6;
      LOBYTE(v50) = v33;
      LOBYTE(v49) = v30;
      LOBYTE(v48) = v42;
      LODWORD(v47) = *(_DWORD *)(a3 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v25, v29, &v56, a3, v47, v48, v49, v50, v51, v52, a3);
      goto LABEL_98;
    }
LABEL_93:
    v33 = 0;
    v46 = 0;
    goto LABEL_94;
  }
LABEL_98:
  IofCompleteRequest((PIRP)a3, 0);
}
