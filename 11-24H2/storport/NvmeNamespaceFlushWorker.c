/*
 * XREFs of NvmeNamespaceFlushWorker @ 0x140103300
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall NvmeNamespaceFlushWorker(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  _DWORD *v5; // rax
  __int16 v6; // ax
  __int64 v7; // rax
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int *v13; // rax
  __int64 v14; // rcx
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r14
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // r11
  char v21; // r13
  unsigned __int8 v22; // r12
  char *v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // rbp
  __int64 v28; // r8
  int v29; // ecx
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rcx
  _BYTE *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  __int64 v37; // rcx
  KIRQL v38; // al
  _QWORD *v39; // rcx
  char *v40; // rdx
  KIRQL v41; // r9
  __int64 v42; // rdx
  _QWORD **v43; // rdx
  _QWORD *v44; // rax
  _QWORD *v45; // r8
  _QWORD *v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rdx
  _QWORD *v50; // rax
  _QWORD **v51; // rdx
  _QWORD *v52; // rax
  _QWORD *v53; // r8
  _QWORD *v54; // r8
  char v55; // [rsp+60h] [rbp-48h]
  char v56; // [rsp+61h] [rbp-47h]
  GUID v57; // [rsp+68h] [rbp-40h] BYREF

  v3 = *((_QWORD *)Context + 66);
  v55 = 0;
  memset_0(*(void **)v3, 0, 0x10B0uLL);
  v5 = *(_DWORD **)v3;
  v5[1025] = *((_DWORD *)Context + 14);
  *((_BYTE *)v5 + 4096) = 0;
  *(_DWORD *)(*(_QWORD *)v3 + 4256LL) &= ~1u;
  *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)v3 + 4256LL) &= ~2u;
  *(_QWORD *)(*(_QWORD *)v3 + 4184LL) = *((_QWORD *)Context + 69);
  *(_QWORD *)(*(_QWORD *)v3 + 4192LL) = NvmeNamespaceFlushCommandCompletion;
  *(_QWORD *)(*(_QWORD *)v3 + 4200LL) = v3;
  *(_QWORD *)(*(_QWORD *)v3 + 4216LL) = Context;
  *(_QWORD *)(*(_QWORD *)v3 + 4240LL) = v3;
  *(_DWORD *)(v3 + 48) |= 1u;
  v6 = *(_WORD *)(v3 + 52);
  if ( (unsigned __int16)v6 <= 0xAu )
    v6 = 10;
  *(_WORD *)(v3 + 52) = v6;
  v7 = *(_QWORD *)(*((_QWORD *)Context + 2) + 1048LL);
  if ( v7 && (*(_DWORD *)(v7 + 24) & 0x20000000) != 0 )
    *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 0x100u;
  v8 = NvmeControllerProcessCommand(*((_QWORD *)Context + 2), v3);
  if ( v8 < 0 )
  {
    *(_DWORD *)(v3 + 48) &= ~1u;
    *(_DWORD *)(*((_QWORD *)Context + 69) + 48LL) = v8;
    *(_QWORD *)(*((_QWORD *)Context + 69) + 56LL) = 0LL;
    v9 = StorEtwLoggingEnabled == 0;
    v10 = *((_QWORD *)Context + 69);
    *(_BYTE *)(v10 + 141) = -84;
    *(_DWORD *)(v10 + 48) = v8;
    if ( v9 )
      goto LABEL_70;
    v57 = 0LL;
    IoGetActivityIdIrp(v10, &v57);
    v12 = *(_QWORD *)(v10 + 184);
    if ( *(_BYTE *)v12 == 14 )
    {
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_70;
      v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_69;
    }
    if ( *(_BYTE *)v12 != 15 )
    {
      if ( *(_BYTE *)v12 != 27 )
        goto LABEL_70;
      if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v13 = *(unsigned int **)(v10 + 56);
          if ( v13 )
            v14 = *v13;
          else
            v14 = 0LL;
          McTemplateK0pqd_EtwWriteTransfer(v14, v12, &v57, v10, v14, *(_DWORD *)(v10 + 48));
        }
        goto LABEL_70;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_70;
      v15 = &EventPnpRequestComplete;
LABEL_69:
      McTemplateK0pd_EtwWriteTransfer(v11, v15, &v57, v10, *(_DWORD *)(v10 + 48));
      goto LABEL_70;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_70;
    v16 = *(_QWORD *)(v12 + 8);
    v17 = 0;
    v18 = 0LL;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    if ( *(_BYTE *)(v16 + 2) == 40 )
    {
      v23 = 0LL;
      v56 = 0;
      if ( *(_DWORD *)(v16 + 20) )
        goto LABEL_70;
      v24 = *(_DWORD *)(v16 + 56);
      v25 = 0LL;
      if ( !v24 )
        goto LABEL_45;
      while ( 1 )
      {
        v26 = *(unsigned int *)(v16 + 4 * v25 + 120);
        if ( (unsigned int)v26 >= 0x80 )
        {
          v27 = *(unsigned int *)(v16 + 16);
          if ( (unsigned int)v26 < (unsigned int)v27 )
          {
            v28 = (unsigned int)v26;
            v29 = *(_DWORD *)(v26 + v16) - 64;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 == 1 && v28 + 40 <= v27 )
                {
                  if ( *(_DWORD *)(v28 + v16 + 12) )
                    v23 = (char *)(v28 + v16 + 32);
                  v18 = *(_BYTE **)(v28 + v16 + 24);
                  goto LABEL_44;
                }
              }
              else if ( v28 + 56 <= v27 )
              {
                v56 = 1;
                if ( *(_BYTE *)(v28 + v16 + 10) )
                  v23 = (char *)(v28 + v16 + 24);
                v17 = *(_BYTE *)(v28 + v16 + 8);
                v18 = *(_BYTE **)(v28 + v16 + 16);
                v19 = *(_BYTE *)(v28 + v16 + 9);
              }
            }
            else if ( v28 + 40 <= v27 )
            {
              if ( *(_BYTE *)(v28 + v16 + 10) )
                v23 = (char *)(v28 + v16 + 24);
              v18 = *(_BYTE **)(v28 + v16 + 16);
LABEL_44:
              v19 = *(_BYTE *)(v28 + v16 + 9);
              v17 = *(_BYTE *)(v28 + v16 + 8);
LABEL_45:
              if ( v23 )
              {
                v31 = *v23;
                goto LABEL_48;
              }
              goto LABEL_70;
            }
            if ( v56 )
              goto LABEL_45;
          }
        }
        v25 = (unsigned int)(v25 + 1);
        if ( (unsigned int)v25 >= v24 )
          goto LABEL_45;
      }
    }
    v31 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_70;
LABEL_48:
    if ( ((v31 - 8) & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v16 + 3);
      if ( v32 == 1 || !v18 || !v19 )
        goto LABEL_65;
      LOBYTE(v16) = 0;
      v33 = &v18[v19];
      v34 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( v34 > v33 )
          goto LABEL_63;
        v21 = v18[2];
        v20 = v18[1] & 0xF;
        v22 = v18[3];
      }
      else
      {
        if ( v34 > v33 )
          goto LABEL_63;
        v20 = v18[2] & 0xF;
        v35 = v19;
        if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
          v35 = (unsigned __int8)v18[7] + 8;
        v16 = (unsigned __int64)&v18[v35];
        if ( (unsigned __int64)(v18 + 13) <= v16 )
          v21 = v18[12];
        if ( (unsigned __int64)(v18 + 14) <= v16 )
          v22 = v18[13];
      }
      LOBYTE(v16) = 1;
LABEL_63:
      if ( (_BYTE)v16 )
      {
        v36 = v21;
        v37 = v22;
LABEL_66:
        McTemplateK0pduuuuup_EtwWriteTransfer(v37, v16, &v57, v10, *(_DWORD *)(v10 + 48), v32, v17, v20, v36, v37, v10);
        goto LABEL_70;
      }
LABEL_65:
      v20 = 0;
      v36 = 0;
      v37 = 0LL;
      goto LABEL_66;
    }
LABEL_70:
    IofCompleteRequest((PIRP)v10, 1);
    v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 68);
    *((_QWORD *)Context + 69) = 0LL;
    v39 = Context + 560;
    v40 = (char *)*((_QWORD *)Context + 70);
    v41 = v38;
    if ( v40 == Context + 560 )
    {
      v42 = *((_QWORD *)Context + 72);
      if ( v42 )
      {
        *((_QWORD *)Context + 72) = 0LL;
        *((_QWORD *)Context + 69) = v42;
        v43 = (_QWORD **)(Context + 584);
        v55 = 1;
        while ( 1 )
        {
          v44 = *v43;
          if ( *v43 == v43 )
            break;
          if ( (_QWORD **)v44[1] != v43 )
            goto LABEL_94;
          v45 = (_QWORD *)*v44;
          if ( *(_QWORD **)(*v44 + 8LL) != v44 )
            goto LABEL_94;
          *v43 = v45;
          v45[1] = v43;
          v46 = (_QWORD *)*((_QWORD *)Context + 71);
          if ( (_QWORD *)*v46 != v39 )
            goto LABEL_94;
          *v44 = v39;
          v44[1] = v46;
          *v46 = v44;
          *((_QWORD *)Context + 71) = v44;
        }
      }
      else if ( *((char **)Context + 73) != Context + 584 )
      {
        *((_DWORD *)Context + 150) |= 1u;
      }
LABEL_80:
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 68, v41);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 15));
      if ( v55 )
        IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 67), NvmeNamespaceFlushWorker, DelayedWorkQueue, Context);
      return;
    }
    v55 = 1;
    if ( *((_QWORD **)v40 + 1) == v39 )
    {
      v47 = *(_QWORD *)v40;
      if ( *(char **)(*(_QWORD *)v40 + 8LL) == v40 )
      {
        *v39 = v47;
        *(_QWORD *)(v47 + 8) = v39;
        *((_QWORD *)Context + 69) = v40 - 168;
        *((_QWORD *)v40 + 1) = v40;
        *(_QWORD *)v40 = v40;
        v48 = *((_QWORD *)Context + 72);
        if ( !v48 )
          goto LABEL_88;
        v49 = (_QWORD *)*((_QWORD *)Context + 71);
        v50 = (_QWORD *)(v48 + 168);
        if ( (_QWORD *)*v49 == v39 )
        {
          *v50 = v39;
          v50[1] = v49;
          *v49 = v50;
          *((_QWORD *)Context + 71) = v50;
LABEL_88:
          v51 = (_QWORD **)(Context + 584);
          while ( 1 )
          {
            v52 = *v51;
            if ( *v51 == v51 )
              goto LABEL_80;
            if ( (_QWORD **)v52[1] != v51 )
              break;
            v53 = (_QWORD *)*v52;
            if ( *(_QWORD **)(*v52 + 8LL) != v52 )
              break;
            *v51 = v53;
            v53[1] = v51;
            v54 = (_QWORD *)*((_QWORD *)Context + 71);
            if ( (_QWORD *)*v54 != v39 )
              break;
            *v52 = v39;
            v52[1] = v54;
            *v54 = v52;
            *((_QWORD *)Context + 71) = v52;
          }
        }
      }
    }
LABEL_94:
    __fastfail(3u);
  }
}
