/*
 * XREFs of NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D42D8
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     RaSrbSetMiniportContext @ 0x140010610 (RaSrbSetMiniportContext.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorAllocateStorMQSrb @ 0x14007AF98 (StorAllocateStorMQSrb.c)
 *     NvmeAdapterAllocateContiguousIoResources @ 0x1400CCD48 (NvmeAdapterAllocateContiguousIoResources.c)
 *     NvmeAdapterExecuteXrb @ 0x1400CFAA4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400D63DC (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterMiniportPassthroughRequestIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  int v4; // ebx
  int v8; // ebp
  __int64 StorMQSrb; // rax
  __int64 v10; // rsi
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  __int64 v13; // rdx
  unsigned int *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v21; // rdx
  void *v22; // r12
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  void *v28; // r13
  __int64 v29; // r8
  int v30; // eax
  bool v31; // zf
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  int *v34; // rax
  const EVENT_DESCRIPTOR *v35; // rdx
  unsigned __int64 v36; // rdx
  char v37; // r15
  _BYTE *v38; // r9
  unsigned __int8 v39; // r10
  char v40; // r11
  char v41; // si
  char v42; // r13
  char *v43; // rsi
  unsigned int v44; // r12d
  unsigned __int64 v45; // r14
  __int64 v46; // r8
  int v47; // ecx
  char v48; // cl
  char v49; // r8
  _BYTE *v50; // rax
  unsigned int v51; // eax
  char v52; // al
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-98h]
  char v55; // [rsp+60h] [rbp-58h]
  char v56; // [rsp+61h] [rbp-57h]
  unsigned int v57; // [rsp+64h] [rbp-54h]
  unsigned int v58; // [rsp+64h] [rbp-54h]
  GUID v59; // [rsp+68h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a3 + 184);
  v4 = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  v57 = 0;
  if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
  {
    StorMQSrb = StorAllocateStorMQSrb(*(_QWORD *)(a1 + 8), 45);
    v10 = StorMQSrb;
    if ( StorMQSrb )
    {
      if ( *(_BYTE *)(StorMQSrb + 2) == 40 && (v11 = *(_DWORD *)(StorMQSrb + 56)) != 0 )
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = *(unsigned int *)(StorMQSrb + 4LL * v12 + 120);
          if ( (unsigned int)v13 >= 0x80 && (unsigned int)v13 < *(_DWORD *)(StorMQSrb + 16) )
          {
            v14 = (unsigned int *)(StorMQSrb + v13);
            if ( *(_DWORD *)(StorMQSrb + v13) == 69 )
              break;
          }
          if ( ++v12 >= v11 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        v14 = 0LL;
      }
      v15 = 0LL;
      v14[2] = *(_DWORD *)(v3 + 16);
      *(_QWORD *)(v14 + 3) = *(unsigned int *)(v3 + 8);
      if ( *(_BYTE *)(StorMQSrb + 2) == 40 )
      {
        v16 = *(unsigned int *)(StorMQSrb + 52);
        if ( (_DWORD)v16 )
          v15 = v10 + v16;
      }
      *(_WORD *)(v15 + 2) = *(_WORD *)(a1 + 56);
      if ( a2 )
        v17 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 1648LL) + 64LL;
      else
        v17 = 0LL;
      *(_QWORD *)(v15 + 8) = v17;
      if ( a2 )
        v18 = *(_DWORD *)(a2 + 56);
      else
        v18 = 0;
      *(_DWORD *)(v15 + 16) = v18;
      v19 = 316LL;
      if ( *(_DWORD *)a1 != 1314275652 )
        v19 = 524LL;
      ContiguousIoResources = NvmeAdapterAllocateContiguousIoResources(
                                524LL,
                                ((*(_DWORD *)(v19 + a1) + 7) & 0xFFFFFFF8) + 1184);
      v22 = (void *)ContiguousIoResources;
      if ( ContiguousIoResources )
      {
        v23 = ContiguousIoResources + 48;
        RaidZeroXrb(ContiguousIoResources + 48, v21, 0, 0LL);
        v24 = *(_QWORD *)(a3 + 24);
        *(_BYTE *)(v23 + 17) |= 0x20u;
        *(_QWORD *)(v23 + 184) = v24;
        *(_QWORD *)(v23 + 168) = v10;
        *(_QWORD *)(v23 + 160) = a3;
        *(_QWORD *)(v23 + 216) = a1;
        if ( a2 )
          v25 = *(_QWORD *)(a2 + 16);
        else
          v25 = 0LL;
        *(_QWORD *)(v23 + 784) = v25;
        *(_QWORD *)(v10 + 96) = v23;
        *(_QWORD *)(v10 + 64) = *(_QWORD *)(a3 + 24);
        v26 = v14[2];
        v27 = v14[3];
        *(_DWORD *)(v10 + 24) = 0;
        if ( v26 <= v27 )
          v26 = v27;
        *(_DWORD *)(v10 + 40) = 10;
        *(_DWORD *)(v10 + 60) = v26;
        RaSrbSetMiniportContext((int *)a1, v10, (__int64)v22 + 1184);
        v28 = (void *)(v23 + 664);
        KeInitializeEvent((PRKEVENT)(v23 + 664), NotificationEvent, 0);
        *(_QWORD *)(v23 + 656) = RaidXrbSignalCompletion;
        if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
          v30 = NvmeAdapterRaiseIrqlAndExecuteXrb(a1, v23);
        else
          v30 = NvmeAdapterExecuteXrb((_DWORD *)a1, v23, v29);
        v8 = v30;
        if ( v30 >= 0 )
        {
          KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
          v8 = RaidSrbStatusToNtStatus(*(_BYTE *)(v10 + 3));
          if ( v8 >= 0 )
            v57 = v14[4];
        }
        MmFreeContiguousMemory(v22);
      }
      else
      {
        v8 = -1073741801;
      }
      *(_QWORD *)(v10 + 80) = 0LL;
      *(_QWORD *)(v10 + 104) = 0LL;
      ExFreePoolWithTag((PVOID)v10, 0x72536152u);
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = -1073741637;
  }
  v31 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a3 + 56) = v57;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = v8;
  if ( v31 )
    goto LABEL_103;
  v59 = 0LL;
  IoGetActivityIdIrp(a3, &v59);
  v33 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v33 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_103;
    v35 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_102;
  }
  if ( *(_BYTE *)v33 != 15 )
  {
    if ( *(_BYTE *)v33 != 27 )
      goto LABEL_103;
    if ( *(_BYTE *)(v33 + 1) == 7 && !*(_DWORD *)(v33 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v34 = *(int **)(a3 + 56);
        if ( v34 )
          v4 = *v34;
        LODWORD(Timeout) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v32, v33, &v59, a3, Timeout, *(_DWORD *)(a3 + 48));
      }
      goto LABEL_103;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_103;
    v35 = &EventPnpRequestComplete;
LABEL_102:
    LODWORD(Timeout) = *(_DWORD *)(a3 + 48);
    McTemplateK0pd_EtwWriteTransfer(v32, v35, &v59, a3, Timeout);
    goto LABEL_103;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_103;
  v36 = *(_QWORD *)(v33 + 8);
  v37 = 0;
  v38 = 0LL;
  v55 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  if ( *(_BYTE *)(v36 + 2) != 40 )
  {
    v48 = *(_BYTE *)(v36 + 72);
    v38 = *(_BYTE **)(v36 + 32);
    v39 = *(_BYTE *)(v36 + 11);
    v37 = *(_BYTE *)(v36 + 4);
    if ( !*(_BYTE *)(v36 + 2) )
      goto LABEL_79;
    goto LABEL_103;
  }
  v43 = 0LL;
  v56 = 0;
  if ( *(_DWORD *)(v36 + 20) )
    goto LABEL_103;
  v44 = 0;
  v58 = *(_DWORD *)(v36 + 56);
  if ( !v58 )
    goto LABEL_76;
  while ( 1 )
  {
    v32 = *(unsigned int *)(v36 + 4LL * v44 + 120);
    if ( (unsigned int)v32 >= 0x80 )
    {
      v45 = *(unsigned int *)(v36 + 16);
      if ( (unsigned int)v32 < (unsigned int)v45 )
        break;
    }
LABEL_70:
    if ( ++v44 >= v58 )
      goto LABEL_76;
  }
  v46 = (unsigned int)v32;
  v47 = *(_DWORD *)(v32 + v36) - 64;
  if ( v47 )
  {
    v32 = (unsigned int)(v47 - 1);
    if ( (_DWORD)v32 )
    {
      if ( (_DWORD)v32 == 1 )
      {
        v32 = v46 + 40;
        if ( v46 + 40 <= v45 )
        {
          if ( *(_DWORD *)(v46 + v36 + 12) )
            v43 = (char *)(v46 + v36 + 32);
          v38 = *(_BYTE **)(v46 + v36 + 24);
          goto LABEL_75;
        }
      }
    }
    else
    {
      v32 = v46 + 56;
      if ( v46 + 56 <= v45 )
      {
        v56 = 1;
        if ( *(_BYTE *)(v46 + v36 + 10) )
          v43 = (char *)(v46 + v36 + 24);
        v37 = *(_BYTE *)(v46 + v36 + 8);
        v38 = *(_BYTE **)(v46 + v36 + 16);
        v39 = *(_BYTE *)(v46 + v36 + 9);
      }
    }
    goto LABEL_69;
  }
  v32 = v46 + 40;
  if ( v46 + 40 > v45 )
  {
LABEL_69:
    if ( v56 )
      goto LABEL_76;
    goto LABEL_70;
  }
  if ( *(_BYTE *)(v46 + v36 + 10) )
    v43 = (char *)(v46 + v36 + 24);
  v38 = *(_BYTE **)(v46 + v36 + 16);
LABEL_75:
  v39 = *(_BYTE *)(v46 + v36 + 9);
  v37 = *(_BYTE *)(v46 + v36 + 8);
LABEL_76:
  if ( v43 )
  {
    v48 = *v43;
    v41 = 0;
LABEL_79:
    LOBYTE(v32) = v48 - 8;
    if ( (v32 & 0x5D) == 0 )
    {
      v49 = *(_BYTE *)(v36 + 3);
      if ( v49 == 1 || !v38 || !v39 )
        goto LABEL_98;
      LOBYTE(v36) = 0;
      v32 = (unsigned __int64)&v38[v39];
      v50 = v38 + 8;
      if ( (unsigned __int8)((*v38 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v50 <= v32 )
        {
          LOBYTE(v36) = 1;
          v41 = v38[2];
          v40 = v38[1] & 0xF;
          v42 = v38[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v50 <= v32 )
        {
          v40 = v38[2] & 0xF;
          v51 = v39;
          if ( (unsigned int)(unsigned __int8)v38[7] + 8 <= v39 )
            v51 = (unsigned __int8)v38[7] + 8;
          v32 = (unsigned __int64)(v38 + 13);
          v36 = (unsigned __int64)&v38[v51];
          if ( (unsigned __int64)(v38 + 13) > v36 )
            v55 = 0;
          else
            v55 = v38[12];
          if ( (unsigned __int64)(v38 + 14) <= v36 )
            v42 = *(_BYTE *)v32;
          LOBYTE(v36) = 1;
        }
        v41 = v55;
      }
      if ( (_BYTE)v36 )
      {
        LOBYTE(v4) = v41;
        v52 = v42;
      }
      else
      {
LABEL_98:
        v40 = 0;
        v52 = 0;
      }
      LODWORD(Timeout) = *(_DWORD *)(a3 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v32, v36, &v59, a3, Timeout, v49, v37, v40, v4, v52, a3);
    }
  }
LABEL_103:
  IofCompleteRequest((PIRP)a3, 0);
  return (unsigned int)v8;
}
