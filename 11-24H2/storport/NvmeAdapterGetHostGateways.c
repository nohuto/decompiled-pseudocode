/*
 * XREFs of NvmeAdapterGetHostGateways @ 0x14019856C
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D3748 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetHostGateways(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int v3; // edi
  IRP *v4; // rsi
  unsigned int v6; // r12d
  _IRP *MasterIrp; // r14
  __int64 v8; // rbx
  unsigned __int16 v9; // dx
  __int64 v10; // rax
  _MDL **p_MdlAddress; // rbx
  _QWORD *v12; // r12
  unsigned __int64 v13; // r15
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int64 Size; // rax
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  char v25; // bl
  char v26; // r14
  _BYTE *v27; // r9
  unsigned __int8 v28; // r10
  char v29; // r11
  char v30; // r13
  char *v31; // rbx
  unsigned int v32; // r15d
  unsigned __int64 v33; // rbp
  __int64 v34; // r8
  int v35; // ecx
  char v36; // cl
  char v37; // r8
  _BYTE *v38; // rax
  unsigned int v39; // eax
  unsigned __int64 v40; // r8
  char v41; // al
  int Status; // [rsp+20h] [rbp-A8h]
  char v44; // [rsp+60h] [rbp-68h]
  char v45; // [rsp+61h] [rbp-67h]
  unsigned int v47; // [rsp+68h] [rbp-60h]
  GUID v48; // [rsp+70h] [rbp-58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  a2->IoStatus.Information = 0LL;
  v4 = a2;
  v6 = 0;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    if ( CurrentStackLocation->Parameters.Read.Length >= 8 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      memset_0(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
      MasterIrp->Type = 1;
      v8 = *(_QWORD *)(a1 + 592);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v8 + 24), 1u);
      v9 = 320 * *(_WORD *)(*(_QWORD *)(a1 + 592) + 16LL) + 8;
      MasterIrp->Size = v9;
      if ( CurrentStackLocation->Parameters.Read.Length < v9 )
      {
        Size = 8LL;
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 592);
        p_MdlAddress = &MasterIrp->MdlAddress;
        v12 = *(_QWORD **)v10;
        if ( *(_QWORD *)v10 != v10 )
        {
          do
          {
            v13 = (unsigned __int64)(v12 - 3);
            if ( (int)NvmeAdapterHostGatewayAcquireRundown((__int64)(v12 - 3)) >= 0 )
            {
              *(_DWORD *)p_MdlAddress = 20971521;
              v14 = (_OWORD *)(v13 + 72);
              v15 = 2LL;
              p_MdlAddress[1] = (_MDL *)(v13 ^ a1);
              *((_DWORD *)p_MdlAddress + 5) = *(_DWORD *)(v13 + 4);
              *((_DWORD *)p_MdlAddress + 6) = *(_DWORD *)(v13 + 8);
              v16 = (_OWORD *)((char *)p_MdlAddress + 28);
              do
              {
                *v16 = *v14;
                v16[1] = v14[1];
                v16[2] = v14[2];
                v16[3] = v14[3];
                v16[4] = v14[4];
                v16[5] = v14[5];
                v16[6] = v14[6];
                v16 += 8;
                v17 = v14[7];
                v14 += 8;
                *(v16 - 1) = v17;
                --v15;
              }
              while ( v15 );
              *(_OWORD *)((char *)p_MdlAddress + 284) = *(_OWORD *)(v13 + 328);
              *(_OWORD *)((char *)p_MdlAddress + 300) = *(_OWORD *)(v13 + 344);
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v13 + 56));
              ++*(_DWORD *)(&MasterIrp->Size + 1);
              p_MdlAddress += 40;
            }
            v12 = (_QWORD *)*v12;
            v10 = *(_QWORD *)(a1 + 592);
          }
          while ( v12 != (_QWORD *)v10 );
          v4 = a2;
        }
        if ( *(_DWORD *)(&MasterIrp->Size + 1) < *(_DWORD *)(v10 + 16) )
          MasterIrp->Size = 320 * *(&MasterIrp->Size + 1) + 8;
        Size = MasterIrp->Size;
        v6 = 0;
      }
      v4->IoStatus.Information = Size;
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 592) + 24LL));
      KeLeaveCriticalRegion();
    }
    else
    {
      v6 = -1073741789;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  v19 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v4->Tail.CompletionKey + 21) = -84;
  v4->IoStatus.Status = v6;
  if ( v19 )
    goto LABEL_83;
  v48 = 0LL;
  IoGetActivityIdIrp(v4, &v48);
  v21 = (__int64)v4->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_83;
    Status = v4->IoStatus.Status;
    v23 = &EventNonReadWriteRequestComplete;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)v4->IoStatus.Information;
        if ( Information )
          v3 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v20, v21, &v48, v4, v3, v4->IoStatus.Status);
      }
      goto LABEL_83;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_83;
    v23 = &EventPnpRequestComplete;
    Status = v4->IoStatus.Status;
LABEL_82:
    McTemplateK0pd_EtwWriteTransfer(v20, v23, &v48, v4, Status);
    goto LABEL_83;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_83;
  v24 = *(_QWORD *)(v21 + 8);
  v25 = 0;
  v26 = 0;
  v44 = 0;
  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( *(_BYTE *)(v24 + 2) != 40 )
  {
    v36 = *(_BYTE *)(v24 + 72);
    v27 = *(_BYTE **)(v24 + 32);
    v28 = *(_BYTE *)(v24 + 11);
    v26 = *(_BYTE *)(v24 + 4);
    if ( !*(_BYTE *)(v24 + 2) )
      goto LABEL_59;
    goto LABEL_83;
  }
  v31 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v24 + 20) )
    goto LABEL_83;
  v32 = 0;
  v47 = *(_DWORD *)(v24 + 56);
  if ( !v47 )
    goto LABEL_56;
  while ( 1 )
  {
    v20 = *(unsigned int *)(v24 + 4LL * v32 + 120);
    if ( (unsigned int)v20 >= 0x80 )
    {
      v33 = *(unsigned int *)(v24 + 16);
      if ( (unsigned int)v20 < (unsigned int)v33 )
        break;
    }
LABEL_50:
    if ( ++v32 >= v47 )
      goto LABEL_56;
  }
  v34 = (unsigned int)v20;
  v35 = *(_DWORD *)(v20 + v24) - 64;
  if ( v35 )
  {
    v20 = (unsigned int)(v35 - 1);
    if ( (_DWORD)v20 )
    {
      if ( (_DWORD)v20 == 1 )
      {
        v20 = v34 + 40;
        if ( v34 + 40 <= v33 )
        {
          if ( *(_DWORD *)(v34 + v24 + 12) )
            v31 = (char *)(v34 + v24 + 32);
          v27 = *(_BYTE **)(v34 + v24 + 24);
          goto LABEL_55;
        }
      }
    }
    else
    {
      v20 = v34 + 56;
      if ( v34 + 56 <= v33 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v34 + v24 + 10) )
          v31 = (char *)(v34 + v24 + 24);
        v26 = *(_BYTE *)(v34 + v24 + 8);
        v27 = *(_BYTE **)(v34 + v24 + 16);
        v28 = *(_BYTE *)(v34 + v24 + 9);
      }
    }
    goto LABEL_49;
  }
  v20 = v34 + 40;
  if ( v34 + 40 > v33 )
  {
LABEL_49:
    if ( v45 )
      goto LABEL_56;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v34 + v24 + 10) )
    v31 = (char *)(v34 + v24 + 24);
  v27 = *(_BYTE **)(v34 + v24 + 16);
LABEL_55:
  v28 = *(_BYTE *)(v34 + v24 + 9);
  v26 = *(_BYTE *)(v34 + v24 + 8);
LABEL_56:
  if ( v31 )
  {
    v36 = *v31;
    v25 = 0;
LABEL_59:
    LOBYTE(v20) = v36 - 8;
    if ( (v20 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v24 + 3) == 1 || !v27 || !v28 )
        goto LABEL_78;
      v37 = 0;
      v20 = (unsigned __int64)&v27[v28];
      v38 = v27 + 8;
      if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v38 <= v20 )
        {
          v37 = 1;
          v25 = v27[2];
          v29 = v27[1] & 0xF;
          v30 = v27[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v38 <= v20 )
        {
          v29 = v27[2] & 0xF;
          v39 = v28;
          if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
            v39 = (unsigned __int8)v27[7] + 8;
          v20 = (unsigned __int64)(v27 + 13);
          v40 = (unsigned __int64)&v27[v39];
          if ( (unsigned __int64)(v27 + 13) > v40 )
            v44 = 0;
          else
            v44 = v27[12];
          if ( (unsigned __int64)(v27 + 14) <= v40 )
            v30 = *(_BYTE *)v20;
          v37 = 1;
        }
        v25 = v44;
      }
      if ( v37 )
      {
        LOBYTE(v3) = v25;
        v41 = v30;
      }
      else
      {
LABEL_78:
        v29 = 0;
        v41 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v20,
        v24,
        &v48,
        v4,
        v4->IoStatus.Status,
        *(_BYTE *)(v24 + 3),
        v26,
        v29,
        v3,
        v41,
        v4);
    }
  }
LABEL_83:
  IofCompleteRequest(v4, 0);
  return v6;
}
