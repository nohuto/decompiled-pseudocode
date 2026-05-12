/*
 * XREFs of NvmeNamespaceSetDevicePowerDownCompletion @ 0x1401350F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeNamespace @ 0x14006B1C0 (GetNvmeNamespace.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall NvmeNamespaceSetDevicePowerDownCompletion(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *NvmeNamespace; // rax
  int v7; // ebx
  _DWORD *v8; // rbp
  bool v9; // zf
  int Status; // ecx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r15
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r12
  char *v22; // r11
  char v23; // r13
  unsigned int v24; // r14d
  unsigned __int64 v25; // rbp
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  char v33; // [rsp+60h] [rbp-68h]
  _DWORD *v34; // [rsp+68h] [rbp-60h]
  unsigned int v35; // [rsp+70h] [rbp-58h]
  GUID v36; // [rsp+78h] [rbp-50h] BYREF

  NvmeNamespace = GetNvmeNamespace(DeviceObject);
  v7 = 0;
  v34 = NvmeNamespace;
  v8 = NvmeNamespace;
  if ( **(_BYTE **)(*(_QWORD *)(*((_QWORD *)NvmeNamespace + 2) + 128LL) + 160LL) == 1
    && _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)NvmeNamespace + 16) + 96LL), 0, 1) == 1 )
  {
    PoFxIdleComponent(
      **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NvmeNamespace + 2) + 128LL) + 160LL) + 8LL),
      0LL,
      0LL);
  }
  *(_DWORD *)(*((_QWORD *)v8 + 16) + 80LL) &= ~4u;
  v9 = StorEtwLoggingEnabled == 0;
  Status = IoStatus->Status;
  Context[141] = -84;
  *((_DWORD *)Context + 12) = Status;
  if ( v9 )
    goto LABEL_69;
  v36 = 0LL;
  IoGetActivityIdIrp(Context, &v36);
  v12 = *((_QWORD *)Context + 23);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_69;
    v14 = &EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v13 = (int *)*((_QWORD *)Context + 7);
        if ( v13 )
          v7 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v36, Context, v7, *((_DWORD *)Context + 12));
      }
      goto LABEL_69;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_69;
    v14 = &EventPnpRequestComplete;
LABEL_68:
    McTemplateK0pd_EtwWriteTransfer(v11, v14, &v36, Context, *((_DWORD *)Context + 12));
    goto LABEL_69;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_69;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v33 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v22 = 0LL;
  v23 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_69;
  v24 = 0;
  v35 = *(_DWORD *)(v15 + 56);
  if ( !v35 )
    goto LABEL_42;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v15 + 4LL * v24 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v25 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v11 < (unsigned int)v25 )
        break;
    }
LABEL_35:
    if ( ++v24 >= v35 )
      goto LABEL_41;
  }
  v26 = (unsigned int)v11;
  v27 = *(_DWORD *)(v11 + v15) - 64;
  if ( v27 )
  {
    v11 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v11 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v15 + 12) )
            v22 = (char *)(v26 + v15 + 32);
          v17 = *(_BYTE **)(v26 + v15 + 24);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v11 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        v23 = 1;
        if ( *(_BYTE *)(v26 + v15 + 10) )
          v22 = (char *)(v26 + v15 + 24);
        v16 = *(_BYTE *)(v26 + v15 + 8);
        v17 = *(_BYTE **)(v26 + v15 + 16);
        v18 = *(_BYTE *)(v26 + v15 + 9);
      }
    }
    goto LABEL_34;
  }
  v11 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_34:
    if ( v23 )
      goto LABEL_41;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v26 + v15 + 10) )
    v22 = (char *)(v26 + v15 + 24);
  v17 = *(_BYTE **)(v26 + v15 + 16);
LABEL_40:
  v18 = *(_BYTE *)(v26 + v15 + 9);
  v16 = *(_BYTE *)(v26 + v15 + 8);
LABEL_41:
  v8 = v34;
LABEL_42:
  if ( v22 )
  {
    v28 = *v22;
    v20 = 0;
LABEL_45:
    LOBYTE(v11) = v28 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v15 + 3);
      if ( v29 == 1 || !v17 || !v18 )
        goto LABEL_64;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v30 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v31 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v31 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v31];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v33 = 0;
          else
            v33 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v33;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v7) = v20;
        v32 = v21;
      }
      else
      {
LABEL_64:
        v19 = 0;
        v32 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v11,
        v15,
        &v36,
        Context,
        *((_DWORD *)Context + 12),
        v29,
        v16,
        v19,
        v7,
        v32,
        Context);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)Context, 0);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v8 + 15));
}
