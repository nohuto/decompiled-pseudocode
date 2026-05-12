/*
 * XREFs of NvmeAdapterQueryDevicePowerCompletionRoutine @ 0x140130510
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeAdapter @ 0x14006B1A0 (GetNvmeAdapter.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterQueryDevicePowerCompletionRoutine(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *NvmeAdapter; // rax
  __int64 v7; // r9
  int v8; // ebx
  bool v9; // zf
  PEX_RUNDOWN_REF_CACHE_AWARE *v10; // rbp
  int Status; // edx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r14
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // si
  char v21; // r11
  char v22; // r15
  char *v23; // r11
  unsigned int v24; // r13d
  unsigned int *v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  char v33; // [rsp+60h] [rbp-68h]
  char v34; // [rsp+61h] [rbp-67h]
  PEX_RUNDOWN_REF_CACHE_AWARE *v35; // [rsp+68h] [rbp-60h]
  unsigned int v36; // [rsp+70h] [rbp-58h]
  GUID v37; // [rsp+78h] [rbp-50h] BYREF

  NvmeAdapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)GetNvmeAdapter(DeviceObject);
  v8 = 0;
  v9 = StorEtwLoggingEnabled == 0;
  v10 = NvmeAdapter;
  v35 = NvmeAdapter;
  Status = IoStatus->Status;
  *(_BYTE *)(v7 + 141) = -84;
  *(_DWORD *)(v7 + 48) = Status;
  if ( v9 )
    goto LABEL_67;
  v37 = 0LL;
  IoGetActivityIdIrp(v7, &v37);
  v13 = Context[23];
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_67;
    v15 = &EventNonReadWriteRequestComplete;
    goto LABEL_66;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_67;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = (int *)Context[7];
        if ( v14 )
          v8 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v37, Context, v8, *((_DWORD *)Context + 12));
      }
      goto LABEL_67;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_67;
    v15 = &EventPnpRequestComplete;
LABEL_66:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v37, Context, *((_DWORD *)Context + 12));
    goto LABEL_67;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_67;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v33 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_43;
    goto LABEL_67;
  }
  v23 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_67;
  v24 = 0;
  v36 = *(_DWORD *)(v16 + 56);
  if ( !v36 )
    goto LABEL_40;
  v25 = (unsigned int *)(v16 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_33:
    ++v24;
    ++v25;
    if ( v24 >= v36 )
      goto LABEL_39;
  }
  if ( *(_DWORD *)(v26 + v16) != 64 )
  {
    v12 = (unsigned int)(*(_DWORD *)(v26 + v16) - 65);
    if ( *(_DWORD *)(v26 + v16) == 65 )
    {
      v12 = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v26 + v16 + 10) )
          v23 = (char *)(v26 + v16 + 24);
        v17 = *(_BYTE *)(v26 + v16 + 8);
        v18 = *(_BYTE **)(v26 + v16 + 16);
        v19 = *(_BYTE *)(v26 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v16) == 66 )
    {
      v12 = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v16 + 12) )
          v23 = (char *)(v26 + v16 + 32);
        v18 = *(_BYTE **)(v26 + v16 + 24);
        goto LABEL_38;
      }
    }
    goto LABEL_32;
  }
  v12 = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_32:
    if ( v34 )
      goto LABEL_39;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v26 + v16 + 10) )
    v23 = (char *)(v26 + v16 + 24);
  v18 = *(_BYTE **)(v26 + v16 + 16);
LABEL_38:
  v19 = *(_BYTE *)(v26 + v16 + 9);
  v17 = *(_BYTE *)(v26 + v16 + 8);
LABEL_39:
  v10 = v35;
LABEL_40:
  if ( v23 )
  {
    v28 = *v23;
    v21 = 0;
LABEL_43:
    LOBYTE(v12) = v28 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v16 + 3);
      if ( v29 == 1 || !v18 || !v19 )
        goto LABEL_62;
      LOBYTE(v16) = 0;
      v12 = (unsigned __int64)&v18[v19];
      v30 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          LOBYTE(v16) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v31 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v31 = (unsigned __int8)v18[7] + 8;
          v12 = (unsigned __int64)(v18 + 13);
          v16 = (unsigned __int64)&v18[v31];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v33 = 0;
          else
            v33 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v16 )
            v22 = *(_BYTE *)v12;
          LOBYTE(v16) = 1;
        }
        v21 = v33;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v8) = v21;
        v32 = v22;
      }
      else
      {
LABEL_62:
        v20 = 0;
        v32 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v12,
        v16,
        &v37,
        Context,
        *((_DWORD *)Context + 12),
        v29,
        v17,
        v20,
        v8,
        v32,
        Context);
    }
  }
LABEL_67:
  IofCompleteRequest((PIRP)Context, 0);
  ExReleaseRundownProtectionCacheAware(v10[19]);
}
