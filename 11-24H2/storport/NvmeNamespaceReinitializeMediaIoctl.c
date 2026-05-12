/*
 * XREFs of NvmeNamespaceReinitializeMediaIoctl @ 0x14010B154
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeNamespaceCleanupSanitizeContext @ 0x1400FC698 (NvmeNamespaceCleanupSanitizeContext.c)
 *     NvmeNamespaceInitializeSanitizeContext @ 0x140104C40 (NvmeNamespaceInitializeSanitizeContext.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceReinitializeMediaIoctl(__int64 Context, PIRP Irp)
{
  int v2; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int v6; // ebp
  _IRP *MasterIrp; // r14
  __int64 v8; // rax
  _WORD *v9; // r11
  BOOL v10; // r8d
  __int16 MdlAddress; // cx
  int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  int v18; // r10d
  __int64 v19; // r9
  int v20; // ecx
  unsigned __int8 v21; // r8
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  bool v25; // zf
  unsigned __int64 v26; // rcx
  _IO_STACK_LOCATION *v27; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v29; // rdx
  __int64 SecurityContext; // rdx
  char v31; // r14
  _BYTE *v32; // r9
  unsigned __int8 v33; // r10
  char v34; // r11
  char v35; // di
  char v36; // r13
  char *v37; // rdi
  unsigned int v38; // r12d
  unsigned __int64 v39; // r15
  __int64 v40; // r8
  int v41; // ecx
  char v42; // cl
  char v43; // r8
  _BYTE *v44; // rax
  char *v45; // r13
  unsigned int v46; // eax
  char v47; // al
  char v49; // [rsp+60h] [rbp-58h]
  char v50; // [rsp+61h] [rbp-57h]
  unsigned int v51; // [rsp+64h] [rbp-54h]
  GUID v52; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (*(_BYTE *)(*(_QWORD *)(Context + 16) + 136LL) & 2) == 0 )
  {
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    if ( (*(_BYTE *)(Context + 112) & 0x40) == 0 || g_InWinPE )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Context + 644), 1, 0) == 1 )
      {
        v6 = -1073740682;
        goto LABEL_49;
      }
      v6 = NvmeNamespaceInitializeSanitizeContext(Context, (__int64)Irp);
      if ( v6 < 0 )
        goto LABEL_46;
      v8 = *(_QWORD *)(Context + 504);
      v9 = *(_WORD **)(Context + 616);
      if ( v8 )
        _InterlockedAdd((volatile signed __int32 *)(v8 + 24), 1u);
      v10 = 1;
      if ( CurrentStackLocation->Parameters.Create.Options >= 0x10
        && MasterIrp
        && *(_DWORD *)&MasterIrp->Type == 16
        && *(_DWORD *)(&MasterIrp->Size + 1) == 16 )
      {
        MdlAddress = -1;
        if ( LODWORD(MasterIrp->MdlAddress) < 0xFFFF )
          MdlAddress = (__int16)MasterIrp->MdlAddress;
        *(_WORD *)(Context + 640) = MdlAddress;
        v10 = ((HIDWORD(MasterIrp->MdlAddress) >> 4) & 1) == 0;
        if ( (HIDWORD(MasterIrp->MdlAddress) & 0xF) != 0 )
        {
          if ( (HIDWORD(MasterIrp->MdlAddress) & 0xF) == 1 )
          {
            if ( !*(_WORD *)(Context + 640) )
              *(_WORD *)(Context + 640) = 1800;
            v12 = 2;
            goto LABEL_26;
          }
          if ( (HIDWORD(MasterIrp->MdlAddress) & 0xF) != 2 )
          {
            v6 = -1073741637;
            goto LABEL_46;
          }
        }
      }
      if ( !*(_WORD *)(Context + 640) )
        *(_WORD *)(Context + 640) = 60;
      v12 = 4;
LABEL_26:
      *(_DWORD *)(*(_QWORD *)v9 + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)v9 + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)v9 + 4256LL) |= 0x20u;
      *(_QWORD *)(*(_QWORD *)v9 + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v9 + 4216LL) = Context;
      *(_QWORD *)(*(_QWORD *)v9 + 4160LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)v9 + 4248LL) = 0;
      v9[26] = *(_WORD *)(Context + 640);
      *(_QWORD *)(*(_QWORD *)v9 + 4200LL) = v9;
      *(_QWORD *)(*(_QWORD *)v9 + 4192LL) = NvmeNamespaceReinitializeMediaCompletion;
      v13 = *(_QWORD *)(Context + 16);
      v14 = *(_QWORD *)(v13 + 592);
      v15 = *(_DWORD *)(v14 + 328);
      if ( (v15 & 2) != 0 && v12 == 2
        || (v15 & 1) != 0 && v12 == 4 && (*(_DWORD *)(*(_QWORD *)(v13 + 1048) + 24LL) & 0x80000) == 0 )
      {
        v16 = *(_QWORD *)v9;
        v17 = *(_DWORD *)(*(_QWORD *)v9 + 4136LL) & 0xFFFFFFF8;
        *(_BYTE *)(v16 + 4096) = -124;
        *(_DWORD *)(v16 + 4140) = 0;
        *(_DWORD *)(v16 + 4136) = (8 * v10) & 0xFFFFFC0F | (v12 | v17) & 0xFFFFFC07;
LABEL_44:
        v6 = NvmeControllerProcessCommandSync(*(_QWORD *)(Context + 16), v9, 1);
        goto LABEL_46;
      }
      if ( (*(_BYTE *)(v14 + 256) & 2) != 0 && (*(_DWORD *)(v13 + 656) <= 1u || (*(_BYTE *)(v14 + 524) & 2) == 0) )
      {
        if ( v12 != 4 )
        {
          v18 = 1;
          goto LABEL_39;
        }
        if ( (*(_BYTE *)(v14 + 524) & 4) != 0 )
        {
          v18 = 2;
LABEL_39:
          v19 = *(_QWORD *)v9;
          v20 = *(_DWORD *)(Context + 56);
          v21 = *(_BYTE *)(*(_QWORD *)(Context + 176) + 26LL);
          *(_BYTE *)(*(_QWORD *)v9 + 4096LL) = 0x80;
          if ( (*(_BYTE *)(v14 + 524) & 2) != 0 )
            v20 = -1;
          *(_DWORD *)(v19 + 4100) = v20;
          v22 = *(_DWORD *)(v19 + 4136) ^ ((unsigned __int8)*(_DWORD *)(v19 + 4136) ^ v21) & 0xF;
          v23 = v22 | 0x10;
          v24 = v22 & 0xFFFFFFEF;
          if ( (v21 & 0x60) != 0 )
            v23 = v24;
          *(_DWORD *)(v19 + 4136) = v23 & 0xFFFFF01F | (v18 << 9);
          goto LABEL_44;
        }
      }
      v6 = -1056964602;
LABEL_46:
      if ( *(_BYTE *)(Context + 642) )
        IoQueueWorkItemEx(
          *(PIO_WORKITEM *)(Context + 632),
          NvmeNamespaceReinitializeMediaRecoverWorker,
          DelayedWorkQueue,
          (PVOID)Context);
      else
        NvmeNamespaceCleanupSanitizeContext(Context);
      goto LABEL_49;
    }
  }
  v6 = -1073741637;
LABEL_49:
  v25 = StorEtwLoggingEnabled == 0;
  Irp->IoStatus.Information = 0LL;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = v6;
  if ( v25 )
    goto LABEL_114;
  v52 = 0LL;
  IoGetActivityIdIrp(Irp, &v52);
  v27 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v27->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_114;
    v29 = &EventNonReadWriteRequestComplete;
    goto LABEL_113;
  }
  if ( v27->MajorFunction != 15 )
  {
    if ( v27->MajorFunction != 27 )
      goto LABEL_114;
    if ( v27->MinorFunction == 7 && !v27->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v26, (__int64)v27, &v52, Irp, v2, Irp->IoStatus.Status);
      }
      goto LABEL_114;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_114;
    v29 = &EventPnpRequestComplete;
LABEL_113:
    McTemplateK0pd_EtwWriteTransfer(v26, v29, &v52, Irp, Irp->IoStatus.Status);
    goto LABEL_114;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_114;
  SecurityContext = (__int64)v27->Parameters.Create.SecurityContext;
  v31 = 0;
  v32 = 0LL;
  v49 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( *(_BYTE *)(SecurityContext + 2) != 40 )
  {
    v42 = *(_BYTE *)(SecurityContext + 72);
    v32 = *(_BYTE **)(SecurityContext + 32);
    v33 = *(_BYTE *)(SecurityContext + 11);
    v31 = *(_BYTE *)(SecurityContext + 4);
    if ( !*(_BYTE *)(SecurityContext + 2) )
      goto LABEL_89;
    goto LABEL_114;
  }
  v37 = 0LL;
  v50 = 0;
  if ( *(_DWORD *)(SecurityContext + 20) )
    goto LABEL_114;
  v38 = 0;
  v51 = *(_DWORD *)(SecurityContext + 56);
  if ( !v51 )
    goto LABEL_86;
  while ( 1 )
  {
    v26 = *(unsigned int *)(SecurityContext + 4LL * v38 + 120);
    if ( (unsigned int)v26 >= 0x80 )
    {
      v39 = *(unsigned int *)(SecurityContext + 16);
      if ( (unsigned int)v26 < (unsigned int)v39 )
        break;
    }
LABEL_80:
    if ( ++v38 >= v51 )
      goto LABEL_86;
  }
  v40 = (unsigned int)v26;
  v41 = *(_DWORD *)(v26 + SecurityContext) - 64;
  if ( v41 )
  {
    v26 = (unsigned int)(v41 - 1);
    if ( (_DWORD)v26 )
    {
      if ( (_DWORD)v26 == 1 )
      {
        v26 = v40 + 40;
        if ( v40 + 40 <= v39 )
        {
          if ( *(_DWORD *)(v40 + SecurityContext + 12) )
            v37 = (char *)(v40 + SecurityContext + 32);
          v32 = *(_BYTE **)(v40 + SecurityContext + 24);
          goto LABEL_85;
        }
      }
    }
    else
    {
      v26 = v40 + 56;
      if ( v40 + 56 <= v39 )
      {
        v50 = 1;
        if ( *(_BYTE *)(v40 + SecurityContext + 10) )
          v37 = (char *)(v40 + SecurityContext + 24);
        v31 = *(_BYTE *)(v40 + SecurityContext + 8);
        v32 = *(_BYTE **)(v40 + SecurityContext + 16);
        v33 = *(_BYTE *)(v40 + SecurityContext + 9);
      }
    }
    goto LABEL_79;
  }
  v26 = v40 + 40;
  if ( v40 + 40 > v39 )
  {
LABEL_79:
    if ( v50 )
      goto LABEL_86;
    goto LABEL_80;
  }
  if ( *(_BYTE *)(v40 + SecurityContext + 10) )
    v37 = (char *)(v40 + SecurityContext + 24);
  v32 = *(_BYTE **)(v40 + SecurityContext + 16);
LABEL_85:
  v33 = *(_BYTE *)(v40 + SecurityContext + 9);
  v31 = *(_BYTE *)(v40 + SecurityContext + 8);
LABEL_86:
  if ( v37 )
  {
    v42 = *v37;
    v35 = 0;
LABEL_89:
    LOBYTE(v26) = v42 - 8;
    if ( (v26 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(SecurityContext + 3) == 1 || !v32 || !v33 )
        goto LABEL_109;
      v43 = 0;
      v26 = (unsigned __int64)&v32[v33];
      v44 = v32 + 8;
      if ( (unsigned __int8)((*v32 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v44 <= v26 )
        {
          v43 = 1;
          v35 = v32[2];
          v34 = v32[1] & 0xF;
          v36 = v32[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v44 <= v26 )
        {
          v45 = v32 + 13;
          v34 = v32[2] & 0xF;
          v46 = v33;
          if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
            v46 = (unsigned __int8)v32[7] + 8;
          v26 = (unsigned __int64)&v32[v46];
          if ( (unsigned __int64)v45 > v26 )
            v49 = 0;
          else
            v49 = v32[12];
          if ( (unsigned __int64)(v32 + 14) > v26 )
            v36 = 0;
          else
            v36 = *v45;
          v43 = 1;
        }
        v35 = v49;
      }
      if ( v43 )
      {
        LOBYTE(v2) = v35;
        v47 = v36;
      }
      else
      {
LABEL_109:
        v34 = 0;
        v47 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v26,
        SecurityContext,
        &v52,
        Irp,
        Irp->IoStatus.Status,
        *(_BYTE *)(SecurityContext + 3),
        v31,
        v34,
        v2,
        v47,
        Irp);
    }
  }
LABEL_114:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
