/*
 * XREFs of NvmePnpAsyncStartCompleteWorker @ 0x1400DCCB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qjzdq_EtwWriteTransfer @ 0x1400CB830 (McTemplateK0qjzdq_EtwWriteTransfer.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x1400CC668 (NvmeAdapterAcquireRemoveLock.c)
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall NvmePnpAsyncStartCompleteWorker(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  void *DeviceExtension; // rsi
  __int64 v4; // rdi
  int started; // ebp
  __int64 v6; // rcx
  int v7; // ebx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r14
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // si
  char v18; // r11
  char v19; // r15
  char *v20; // r11
  unsigned int v21; // r13d
  unsigned int *v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  __int64 v30; // [rsp+20h] [rbp-98h]
  __int64 v31; // [rsp+28h] [rbp-90h]
  __int64 v32; // [rsp+30h] [rbp-88h]
  __int64 v33; // [rsp+38h] [rbp-80h]
  char v34; // [rsp+60h] [rbp-58h]
  char v35; // [rsp+61h] [rbp-57h]
  unsigned int v36; // [rsp+64h] [rbp-54h]
  GUID v37; // [rsp+68h] [rbp-50h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = (__int64)Context[1];
  NvmeAdapterAcquireRemoveLock((__int64)DeviceExtension);
  started = NvmeAdapterStartDevice((__int64)DeviceExtension, v4);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 19));
  v7 = 0;
  if ( started < 0 && (byte_14017146A & 1) != 0 )
    McTemplateK0qjzdq_EtwWriteTransfer(
      v6,
      &EventNVMeAdapterStartFailure,
      (__int64)DeviceExtension + 1032,
      *((_DWORD *)DeviceExtension + 14),
      (__int64)DeviceExtension + 1032,
      *((const wchar_t **)DeviceExtension + 127),
      started,
      *((_DWORD *)DeviceExtension + 253));
  IoUninitializeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v4 + 141) = -84;
  *(_DWORD *)(v4 + 48) = started;
  if ( v8 )
    goto LABEL_69;
  v37 = 0LL;
  IoGetActivityIdIrp(v4, &v37);
  v10 = *(_QWORD *)(v4 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_69;
    v12 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v11 = *(int **)(v4 + 56);
        if ( v11 )
          v7 = *v11;
        LODWORD(v31) = *(_DWORD *)(v4 + 48);
        LODWORD(v30) = v7;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v37, v4, v30, v31);
      }
      goto LABEL_69;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_69;
    v12 = &EventPnpRequestComplete;
LABEL_68:
    LODWORD(v30) = *(_DWORD *)(v4 + 48);
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v37, v4, v30);
    goto LABEL_69;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_69;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v34 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v20 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_69;
  v21 = 0;
  v36 = *(_DWORD *)(v13 + 56);
  if ( !v36 )
    goto LABEL_42;
  v22 = (unsigned int *)(v13 + 120);
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v23 < (unsigned int)v24 )
        break;
    }
LABEL_36:
    ++v21;
    ++v22;
    if ( v21 >= v36 )
      goto LABEL_42;
  }
  if ( *(_DWORD *)(v23 + v13) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v23 + v13) - 65);
    if ( *(_DWORD *)(v23 + v13) == 65 )
    {
      v9 = v23 + 56;
      if ( v23 + 56 <= v24 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v23 + v13 + 10) )
          v20 = (char *)(v23 + v13 + 24);
        v14 = *(_BYTE *)(v23 + v13 + 8);
        v15 = *(_BYTE **)(v23 + v13 + 16);
        v16 = *(_BYTE *)(v23 + v13 + 9);
      }
    }
    else if ( *(_DWORD *)(v23 + v13) == 66 )
    {
      v9 = v23 + 40;
      if ( v23 + 40 <= v24 )
      {
        if ( *(_DWORD *)(v23 + v13 + 12) )
          v20 = (char *)(v23 + v13 + 32);
        v15 = *(_BYTE **)(v23 + v13 + 24);
        goto LABEL_41;
      }
    }
    goto LABEL_35;
  }
  v9 = v23 + 40;
  if ( v23 + 40 > v24 )
  {
LABEL_35:
    if ( v35 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v23 + v13 + 10) )
    v20 = (char *)(v23 + v13 + 24);
  v15 = *(_BYTE **)(v23 + v13 + 16);
LABEL_41:
  v16 = *(_BYTE *)(v23 + v13 + 9);
  v14 = *(_BYTE *)(v23 + v13 + 8);
LABEL_42:
  if ( v20 )
  {
    v25 = *v20;
    v18 = 0;
LABEL_45:
    LOBYTE(v9) = v25 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v13 + 3);
      if ( v26 == 1 || !v15 || !v16 )
        goto LABEL_64;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v27 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v28 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v28 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v28];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v34 = 0;
          else
            v34 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v34;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v7) = v18;
        v29 = v19;
      }
      else
      {
LABEL_64:
        v17 = 0;
        v29 = 0;
      }
      LOBYTE(v33) = v17;
      LOBYTE(v32) = v14;
      LOBYTE(v31) = v26;
      LODWORD(v30) = *(_DWORD *)(v4 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v37, v4, v30, v31, v32, v33, v7, v29, v4);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)v4, 0);
}
