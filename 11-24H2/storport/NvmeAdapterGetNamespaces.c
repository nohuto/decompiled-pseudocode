/*
 * XREFs of NvmeAdapterGetNamespaces @ 0x140198EE8
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerAcquireRundown @ 0x1400BEB10 (NvmeControllerAcquireRundown.c)
 *     NvmeAdapterFindNvmeController @ 0x1400CFE44 (NvmeAdapterFindNvmeController.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetNamespaces(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 v5; // rax
  int v6; // esi
  __int64 NvmeController; // rax
  __int64 v8; // rbp
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  _WORD *v13; // r14
  unsigned int v14; // eax
  __int64 *v15; // rcx
  _WORD *i; // rdx
  __int64 v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  char v20; // r12
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // bp
  char v24; // r11
  char v25; // r13
  char *v26; // r11
  unsigned int v27; // r15d
  unsigned __int64 v28; // r14
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // r8
  char v36; // al
  char v38; // [rsp+60h] [rbp-78h]
  char v39; // [rsp+61h] [rbp-77h]
  unsigned int v40; // [rsp+64h] [rbp-74h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-70h] BYREF
  GUID v42; // [rsp+80h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  LockHandle.LockQueue = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 && *(_DWORD *)(v2 + 16) >= 0x10u && *(_WORD *)v5 == 1 && *(_WORD *)(v5 + 2) >= 0x10u )
    {
      if ( *(_DWORD *)(v2 + 8) >= 8u )
      {
        NvmeController = NvmeAdapterFindNvmeController(a1, *(_QWORD *)(v5 + 8) ^ a1, 0, 0LL);
        v8 = NvmeController;
        if ( NvmeController )
        {
          v6 = NvmeControllerAcquireRundown(NvmeController);
          if ( v6 >= 0 )
          {
            if ( (*(_BYTE *)(v8 + 136) & 8) != 0 )
            {
              v6 = -2147483631;
            }
            else
            {
              v13 = *(_WORD **)(a2 + 24);
              memset_0(v13, 0, *(unsigned int *)(v2 + 8));
              *v13 = 1;
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 632), &LockHandle);
              v14 = (unsigned __int16)(32 * *(_WORD *)(v8 + 656) + 8);
              v13[1] = v14;
              if ( *(_DWORD *)(v2 + 8) < v14 )
              {
                v17 = 8LL;
              }
              else
              {
                v15 = *(__int64 **)(v8 + 640);
                for ( i = v13 + 4; v15 != (__int64 *)(v8 + 640); v15 = (__int64 *)*v15 )
                {
                  if ( (v15[11] & 2) != 0 )
                  {
                    *(_DWORD *)i = 2097153;
                    if ( *((_DWORD *)v15 + 18) == 1 )
                      *((_DWORD *)i + 1) |= 1u;
                    *((_DWORD *)i + 2) = *((_DWORD *)v15 + 8);
                    *((_DWORD *)i + 3) = *((unsigned __int8 *)v15 + 36);
                    *((_OWORD *)i + 1) = *(_OWORD *)(v15 + 17);
                    ++*((_DWORD *)v13 + 1);
                    i += 16;
                  }
                }
                if ( *((_DWORD *)v13 + 1) < *(_DWORD *)(v8 + 656) )
                  v13[1] = 32 * v13[2] + 8;
                v17 = (unsigned __int16)v13[1];
              }
              *(_QWORD *)(a2 + 56) = v17;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 552));
          }
        }
        else
        {
          v6 = -1073741275;
        }
      }
      else
      {
        v6 = -1073741789;
      }
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v9 )
    goto LABEL_93;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_93;
    v18 = &EventNonReadWriteRequestComplete;
    goto LABEL_92;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_93;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v3 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v42, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_93;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_93;
    v18 = &EventPnpRequestComplete;
LABEL_92:
    McTemplateK0pd_EtwWriteTransfer(v10, v18, &v42, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_93;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_93;
  v19 = *(_QWORD *)(v11 + 8);
  v20 = 0;
  v21 = 0LL;
  v38 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_69;
    goto LABEL_93;
  }
  v26 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_93;
  v27 = 0;
  v40 = *(_DWORD *)(v19 + 56);
  if ( !v40 )
    goto LABEL_66;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v19 + 4LL * v27 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v28 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v10 < (unsigned int)v28 )
        break;
    }
LABEL_60:
    if ( ++v27 >= v40 )
      goto LABEL_66;
  }
  v29 = (unsigned int)v10;
  v30 = *(_DWORD *)(v10 + v19) - 64;
  if ( v30 )
  {
    v10 = (unsigned int)(v30 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        v10 = v29 + 40;
        if ( v29 + 40 <= v28 )
        {
          if ( *(_DWORD *)(v29 + v19 + 12) )
            v26 = (char *)(v29 + v19 + 32);
          v21 = *(_BYTE **)(v29 + v19 + 24);
          goto LABEL_65;
        }
      }
    }
    else
    {
      v10 = v29 + 56;
      if ( v29 + 56 <= v28 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v29 + v19 + 10) )
          v26 = (char *)(v29 + v19 + 24);
        v20 = *(_BYTE *)(v29 + v19 + 8);
        v21 = *(_BYTE **)(v29 + v19 + 16);
        v22 = *(_BYTE *)(v29 + v19 + 9);
      }
    }
    goto LABEL_59;
  }
  v10 = v29 + 40;
  if ( v29 + 40 > v28 )
  {
LABEL_59:
    if ( v39 )
      goto LABEL_66;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(v29 + v19 + 10) )
    v26 = (char *)(v29 + v19 + 24);
  v21 = *(_BYTE **)(v29 + v19 + 16);
LABEL_65:
  v22 = *(_BYTE *)(v29 + v19 + 9);
  v20 = *(_BYTE *)(v29 + v19 + 8);
LABEL_66:
  if ( v26 )
  {
    v31 = *v26;
    v24 = 0;
LABEL_69:
    LOBYTE(v10) = v31 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v19 + 3) == 1 || !v21 || !v22 )
        goto LABEL_88;
      v32 = 0;
      v10 = (unsigned __int64)&v21[v22];
      v33 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v10 )
        {
          v32 = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v10 )
        {
          v23 = v21[2] & 0xF;
          v34 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v34 = (unsigned __int8)v21[7] + 8;
          v10 = (unsigned __int64)(v21 + 13);
          v35 = (unsigned __int64)&v21[v34];
          if ( (unsigned __int64)(v21 + 13) > v35 )
            v38 = 0;
          else
            v38 = v21[12];
          if ( (unsigned __int64)(v21 + 14) <= v35 )
            v25 = *(_BYTE *)v10;
          v32 = 1;
        }
        v24 = v38;
      }
      if ( v32 )
      {
        LOBYTE(v3) = v24;
        v36 = v25;
      }
      else
      {
LABEL_88:
        v23 = 0;
        v36 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v10,
        v19,
        &v42,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v19 + 3),
        v20,
        v23,
        v3,
        v36,
        a2);
    }
  }
LABEL_93:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
