/*
 * XREFs of NvmeAdapterRemoveController @ 0x14019B238
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterFindNvmeController @ 0x1400CFE44 (NvmeAdapterFindNvmeController.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterRemoveController(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // esi
  __int64 v5; // r8
  __int64 NvmeController; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  struct _ERESOURCE *v10; // r12
  _QWORD *v11; // r14
  __int64 v12; // rdx
  _QWORD *v13; // rax
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  char v20; // r13
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // r14
  char v24; // r15
  char v25; // r11
  char *v26; // r11
  unsigned int v27; // r12d
  unsigned __int64 v28; // r15
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // r8
  char v36; // al
  int v38; // [rsp+20h] [rbp-49h]
  char v39; // [rsp+60h] [rbp-9h]
  char v40; // [rsp+61h] [rbp-8h]
  char v41; // [rsp+62h] [rbp-7h]
  __int64 v42; // [rsp+68h] [rbp-1h] BYREF
  GUID v43; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v4 = 0;
  v42 = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x10u && *(_WORD *)v5 == 1 && *(_WORD *)(v5 + 2) >= 0x10u )
    {
      NvmeController = NvmeAdapterFindNvmeController(a1, *(_QWORD *)(v5 + 8) ^ a1, 1, &v42);
      *(_QWORD *)&v43.Data1 = NvmeController;
      v7 = NvmeController;
      if ( NvmeController )
      {
        v8 = *(_QWORD *)(NvmeController + 136);
        if ( (v8 & 1) != 0 )
        {
          if ( *(_DWORD *)(v7 + 568) )
          {
            v4 = -1073741808;
          }
          else
          {
            if ( (v8 & 8) == 0 )
            {
              *(_QWORD *)(v7 + 136) = v8 | 8;
              KeEnterCriticalRegion();
              v9 = v42;
              v10 = (struct _ERESOURCE *)(v42 + 632);
              ExAcquireResourceExclusiveLite((PERESOURCE)(v42 + 632), 1u);
              v11 = (_QWORD *)(v7 + 64);
              v12 = *v11;
              if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
                __fastfail(3u);
              *v13 = v12;
              *(_QWORD *)(v12 + 8) = v13;
              --*(_DWORD *)(v9 + 624);
              ExReleaseResourceLite(v10);
              KeLeaveCriticalRegion();
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v9 + 40));
              NvmeAdapterDeleteNvmeController((__int64 *)&v43);
              goto LABEL_22;
            }
            v4 = -2147483631;
          }
        }
        else
        {
          v4 = -1073741637;
        }
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v42 + 40));
      }
      else
      {
        v4 = -1073741275;
      }
    }
    else
    {
      v4 = -1073741811;
    }
  }
  else
  {
    v4 = -1073741637;
  }
LABEL_22:
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v14 )
    goto LABEL_88;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_88;
    v38 = *(_DWORD *)(a2 + 48);
    v18 = &EventNonReadWriteRequestComplete;
    goto LABEL_87;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_88;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v2 = *v17;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v43, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_88;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_88;
    v18 = &EventPnpRequestComplete;
    v38 = *(_DWORD *)(a2 + 48);
LABEL_87:
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v43, a2, v38);
    goto LABEL_88;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_88;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  v39 = 0;
  v22 = 0;
  v40 = 0;
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
      goto LABEL_63;
    goto LABEL_88;
  }
  v26 = 0LL;
  v41 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_88;
  v27 = 0;
  LODWORD(v42) = *(_DWORD *)(v19 + 56);
  if ( !(_DWORD)v42 )
    goto LABEL_60;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v19 + 4LL * v27 + 120);
    if ( (unsigned int)v15 >= 0x80 )
    {
      v28 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v15 < (unsigned int)v28 )
        break;
    }
LABEL_53:
    if ( ++v27 >= (unsigned int)v42 )
      goto LABEL_59;
  }
  v29 = (unsigned int)v15;
  v30 = *(_DWORD *)(v15 + v19) - 64;
  if ( v30 )
  {
    v15 = (unsigned int)(v30 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v15 = v29 + 40;
        if ( v29 + 40 <= v28 )
        {
          if ( *(_DWORD *)(v29 + v19 + 12) )
            v26 = (char *)(v29 + v19 + 32);
          v21 = *(_BYTE **)(v29 + v19 + 24);
          goto LABEL_58;
        }
      }
    }
    else
    {
      v15 = v29 + 56;
      if ( v29 + 56 <= v28 )
      {
        v41 = 1;
        if ( *(_BYTE *)(v29 + v19 + 10) )
          v26 = (char *)(v29 + v19 + 24);
        v20 = *(_BYTE *)(v29 + v19 + 8);
        v21 = *(_BYTE **)(v29 + v19 + 16);
        v22 = *(_BYTE *)(v29 + v19 + 9);
      }
    }
    goto LABEL_52;
  }
  v15 = v29 + 40;
  if ( v29 + 40 > v28 )
  {
LABEL_52:
    if ( v41 )
      goto LABEL_59;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(v29 + v19 + 10) )
    v26 = (char *)(v29 + v19 + 24);
  v21 = *(_BYTE **)(v29 + v19 + 16);
LABEL_58:
  v22 = *(_BYTE *)(v29 + v19 + 9);
  v20 = *(_BYTE *)(v29 + v19 + 8);
LABEL_59:
  v24 = 0;
LABEL_60:
  if ( v26 )
  {
    v31 = *v26;
    v25 = 0;
LABEL_63:
    LOBYTE(v15) = v31 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v19 + 3) == 1 || !v21 || !v22 )
        goto LABEL_83;
      v32 = 0;
      v15 = (unsigned __int64)&v21[v22];
      v33 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v32 = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v23 = v21[2] & 0xF;
          v34 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v34 = (unsigned __int8)v21[7] + 8;
          v15 = (unsigned __int64)(v21 + 13);
          v35 = (unsigned __int64)&v21[v34];
          if ( (unsigned __int64)(v21 + 13) > v35 )
            v39 = 0;
          else
            v39 = v21[12];
          if ( (unsigned __int64)(v21 + 14) > v35 )
            v40 = 0;
          else
            v40 = *(_BYTE *)v15;
          v32 = 1;
        }
        v25 = v40;
        v24 = v39;
      }
      if ( v32 )
      {
        LOBYTE(v2) = v24;
        v36 = v25;
      }
      else
      {
LABEL_83:
        v23 = 0;
        v36 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v15,
        v19,
        &v43,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v19 + 3),
        v20,
        v23,
        v2,
        v36,
        a2);
    }
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return v4;
}
