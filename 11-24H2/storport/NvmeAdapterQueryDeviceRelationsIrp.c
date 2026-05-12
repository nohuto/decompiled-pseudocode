/*
 * XREFs of NvmeAdapterQueryDeviceRelationsIrp @ 0x1400D59E8
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400D4884 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qjzdq_EtwWriteTransfer @ 0x1400CB830 (McTemplateK0qjzdq_EtwWriteTransfer.c)
 *     NvmeAdapterBuildFabricsNVMeBusRelations @ 0x1400CCDA4 (NvmeAdapterBuildFabricsNVMeBusRelations.c)
 *     NvmeAdapterBuildPCIeNVMeBusRelations @ 0x1400CCF9C (NvmeAdapterBuildPCIeNVMeBusRelations.c)
 *     NvmeAdapterBuildStorMQNVMeBusRelations @ 0x1400CD0D4 (NvmeAdapterBuildStorMQNVMeBusRelations.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

NTSTATUS __fastcall NvmeAdapterQueryDeviceRelationsIrp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebx
  int v7; // r12d
  void *v8; // r14
  int v9; // r15d
  __int64 v10; // rcx
  int v12; // eax
  void *v13; // rcx
  void *Pool; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // zf
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int *v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  unsigned __int64 v22; // rdx
  char v23; // r13
  _BYTE *v24; // r9
  unsigned __int8 v25; // r10
  char v26; // r14
  char v27; // si
  char v28; // r11
  char *v29; // r11
  unsigned int v30; // r12d
  unsigned __int64 v31; // rsi
  __int64 v32; // r8
  int v33; // ecx
  char v34; // cl
  char v35; // r8
  _BYTE *v36; // rax
  unsigned int v37; // eax
  char v38; // al
  __int64 v39; // [rsp+20h] [rbp-59h]
  __int64 v40; // [rsp+28h] [rbp-51h]
  __int64 v41; // [rsp+30h] [rbp-49h]
  __int64 v42; // [rsp+38h] [rbp-41h]
  char v43; // [rsp+60h] [rbp-19h]
  char v44; // [rsp+61h] [rbp-18h]
  char v45; // [rsp+62h] [rbp-17h]
  void *Src; // [rsp+68h] [rbp-11h] BYREF
  GUID v47; // [rsp+70h] [rbp-9h] BYREF
  GUID v48; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  Src = 0LL;
  v48 = 0LL;
  LOBYTE(v7) = 0;
  v8 = 0LL;
  v9 = -1056964602;
  if ( *(_DWORD *)(v3 + 8) )
  {
    if ( StorEtwLoggingEnabled )
    {
      IoGetActivityIdIrp(a2, &v48);
      if ( (byte_140171462 & 0x20) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v10, &EventPnpRequestComplete, &v48, a2, *(_DWORD *)(a2 + 48));
    }
    return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    v12 = NvmeAdapterBuildPCIeNVMeBusRelations(a1, &Src);
    goto LABEL_12;
  }
  if ( *(_QWORD *)(a1 + 592) )
  {
    v12 = NvmeAdapterBuildFabricsNVMeBusRelations(a1, &Src);
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
  {
    v12 = NvmeAdapterBuildStorMQNVMeBusRelations(a1, &Src);
LABEL_12:
    v8 = Src;
    v9 = v12;
    if ( Src )
    {
      v7 = *(_DWORD *)Src;
      v13 = *(void **)(a1 + 1000);
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0x52446152u);
        *(_QWORD *)(a1 + 1000) = 0LL;
      }
      Pool = (void *)RaidAllocatePool(64LL, (unsigned int)(8 * v7 + 16), 1380213074LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 1000) = Pool;
      if ( Pool )
        memmove(Pool, v8, (unsigned int)(8 * v7 + 16));
    }
  }
  if ( (byte_140171463 & 0x40) != 0 )
    McTemplateK0qjzdq_EtwWriteTransfer(
      a1 + 1032,
      &EventNVMeAdapterQDR,
      a3,
      *(_DWORD *)(a1 + 56),
      a1 + 1032,
      *(const wchar_t **)(a1 + 1016),
      v9,
      v7);
  *(_QWORD *)(a2 + 56) = v8;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v9 >= 0 )
  {
    if ( StorEtwLoggingEnabled )
    {
      IoGetActivityIdIrp(a2, &v48);
      if ( (byte_140171462 & 0x20) != 0 )
      {
        LODWORD(v39) = v9;
        McTemplateK0pd_EtwWriteTransfer(v15, &EventPnpRequestComplete, &v48, a2, v39);
      }
    }
    v16 = *(_QWORD *)(a2 + 184);
    *(_OWORD *)(v16 - 72) = *(_OWORD *)v16;
    *(_OWORD *)(v16 - 56) = *(_OWORD *)(v16 + 16);
    *(_OWORD *)(v16 - 40) = *(_OWORD *)(v16 + 32);
    *(_QWORD *)(v16 - 24) = *(_QWORD *)(v16 + 48);
    *(_BYTE *)(v16 - 69) = 0;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
  }
  v17 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v17 )
    goto LABEL_90;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v19 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v19 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_90;
    v21 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_89;
  }
  if ( *(_BYTE *)v19 != 15 )
  {
    if ( *(_BYTE *)v19 != 27 )
      goto LABEL_90;
    if ( *(_BYTE *)(v19 + 1) == 7 && !*(_DWORD *)(v19 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v20 = *(int **)(a2 + 56);
        if ( v20 )
          v4 = *v20;
        LODWORD(v40) = *(_DWORD *)(a2 + 48);
        LODWORD(v39) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v18, v19, &v47, a2, v39, v40);
      }
      goto LABEL_90;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_90;
    v21 = &EventPnpRequestComplete;
LABEL_89:
    LODWORD(v39) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v18, v21, &v47, a2, v39);
    goto LABEL_90;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_90;
  v22 = *(_QWORD *)(v19 + 8);
  v23 = 0;
  v24 = 0LL;
  v43 = 0;
  v25 = 0;
  v44 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( *(_BYTE *)(v22 + 2) != 40 )
  {
    v34 = *(_BYTE *)(v22 + 72);
    v24 = *(_BYTE **)(v22 + 32);
    v25 = *(_BYTE *)(v22 + 11);
    v23 = *(_BYTE *)(v22 + 4);
    if ( !*(_BYTE *)(v22 + 2) )
      goto LABEL_65;
    goto LABEL_90;
  }
  v29 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v22 + 20) )
    goto LABEL_90;
  v30 = 0;
  LODWORD(Src) = *(_DWORD *)(v22 + 56);
  if ( !(_DWORD)Src )
    goto LABEL_62;
  while ( 1 )
  {
    v18 = *(unsigned int *)(v22 + 4LL * v30 + 120);
    if ( (unsigned int)v18 >= 0x80 )
    {
      v31 = *(unsigned int *)(v22 + 16);
      if ( (unsigned int)v18 < (unsigned int)v31 )
        break;
    }
LABEL_55:
    if ( ++v30 >= (unsigned int)Src )
      goto LABEL_61;
  }
  v32 = (unsigned int)v18;
  v33 = *(_DWORD *)(v18 + v22) - 64;
  if ( v33 )
  {
    v18 = (unsigned int)(v33 - 1);
    if ( (_DWORD)v18 )
    {
      if ( (_DWORD)v18 == 1 )
      {
        v18 = v32 + 40;
        if ( v32 + 40 <= v31 )
        {
          if ( *(_DWORD *)(v32 + v22 + 12) )
            v29 = (char *)(v32 + v22 + 32);
          v24 = *(_BYTE **)(v32 + v22 + 24);
          goto LABEL_60;
        }
      }
    }
    else
    {
      v18 = v32 + 56;
      if ( v32 + 56 <= v31 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v32 + v22 + 10) )
          v29 = (char *)(v32 + v22 + 24);
        v23 = *(_BYTE *)(v32 + v22 + 8);
        v24 = *(_BYTE **)(v32 + v22 + 16);
        v25 = *(_BYTE *)(v32 + v22 + 9);
      }
    }
    goto LABEL_54;
  }
  v18 = v32 + 40;
  if ( v32 + 40 > v31 )
  {
LABEL_54:
    if ( v45 )
      goto LABEL_61;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(v32 + v22 + 10) )
    v29 = (char *)(v32 + v22 + 24);
  v24 = *(_BYTE **)(v32 + v22 + 16);
LABEL_60:
  v25 = *(_BYTE *)(v32 + v22 + 9);
  v23 = *(_BYTE *)(v32 + v22 + 8);
LABEL_61:
  v27 = 0;
LABEL_62:
  if ( v29 )
  {
    v34 = *v29;
    v28 = 0;
LABEL_65:
    LOBYTE(v18) = v34 - 8;
    if ( (v18 & 0x5D) == 0 )
    {
      v35 = *(_BYTE *)(v22 + 3);
      if ( v35 == 1 || !v24 || !v25 )
        goto LABEL_85;
      LOBYTE(v22) = 0;
      v18 = (unsigned __int64)&v24[v25];
      v36 = v24 + 8;
      if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v36 <= v18 )
        {
          LOBYTE(v22) = 1;
          v27 = v24[2];
          v26 = v24[1] & 0xF;
          v28 = v24[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v36 <= v18 )
        {
          v26 = v24[2] & 0xF;
          v37 = v25;
          if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
            v37 = (unsigned __int8)v24[7] + 8;
          v18 = (unsigned __int64)(v24 + 13);
          v22 = (unsigned __int64)&v24[v37];
          if ( (unsigned __int64)(v24 + 13) > v22 )
            v43 = 0;
          else
            v43 = v24[12];
          if ( (unsigned __int64)(v24 + 14) > v22 )
            v44 = 0;
          else
            v44 = *(_BYTE *)v18;
          LOBYTE(v22) = 1;
        }
        v28 = v44;
        v27 = v43;
      }
      if ( (_BYTE)v22 )
      {
        LOBYTE(v4) = v27;
        v38 = v28;
      }
      else
      {
LABEL_85:
        v26 = 0;
        v38 = 0;
      }
      LOBYTE(v42) = v26;
      LOBYTE(v41) = v23;
      LOBYTE(v40) = v35;
      LODWORD(v39) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v18, v22, &v47, a2, v39, v40, v41, v42, v4, v38, a2);
    }
  }
LABEL_90:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
