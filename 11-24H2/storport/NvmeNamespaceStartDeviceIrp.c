/*
 * XREFs of NvmeNamespaceStartDeviceIrp @ 0x1401A97E8
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140105C68 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidGetD3ColdCapability @ 0x140055CE0 (RaidGetD3ColdCapability.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidGetD3ColdInterface @ 0x140077DF4 (RaidGetD3ColdInterface.c)
 *     StorpInitializeNvmeNamespaceTelemetry @ 0x1400AFA58 (StorpInitializeNvmeNamespaceTelemetry.c)
 *     NvmeNamespaceCreateSystemThread @ 0x1400FD6E4 (NvmeNamespaceCreateSystemThread.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceStartDeviceIrp(__int64 StartContext, PIRP Irp)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // r13
  bool v6; // r14
  _QWORD *v7; // rdi
  int D3ColdInterface; // r15d
  char D3ColdCapability; // al
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // zf
  unsigned __int64 v16; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  unsigned __int64 ProviderId; // rdx
  char v21; // r12
  _BYTE *v22; // r9
  unsigned __int8 v23; // r10
  char v24; // r11
  char v25; // r14
  char v26; // di
  char *v27; // rdi
  unsigned int v28; // r13d
  unsigned __int64 v29; // r14
  __int64 v30; // r8
  int v31; // ecx
  char v32; // cl
  char v33; // r8
  _BYTE *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  __int64 v38; // [rsp+20h] [rbp-E0h]
  __int64 v39; // [rsp+28h] [rbp-D8h]
  __int16 v40; // [rsp+60h] [rbp-A0h] BYREF
  char v41; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v42; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v43; // [rsp+6Ch] [rbp-94h] BYREF
  int v44; // [rsp+70h] [rbp-90h] BYREF
  int v45; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  GUID v47; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  char *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  int *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  int *v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  unsigned int *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  _BYTE v61[16]; // [rsp+110h] [rbp+10h] BYREF
  __int16 *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  __int16 *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  char *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]

  v2 = *(_QWORD *)(StartContext + 112);
  v3 = 0;
  v4 = *(_QWORD *)(StartContext + 16);
  v6 = 0;
  v7 = (_QWORD *)StartContext;
  D3ColdInterface = 0;
  if ( (v2 & 0x800) != 0 )
    v6 = *(_DWORD *)(StartContext + 96) == 2;
  *(_QWORD *)(StartContext + 112) = v2 & 0xFFFFFFFFFFFFF7FFuLL;
  if ( *(_DWORD *)(StartContext + 96) != 1 )
  {
    _InterlockedExchange((volatile __int32 *)(StartContext + 96), 1);
    D3ColdInterface = RaidGetD3ColdInterface(
                        *(PDEVICE_OBJECT *)(StartContext + 8),
                        (_QWORD *)(*(_QWORD *)(StartContext + 128) + 16LL));
    if ( D3ColdInterface < 0 )
    {
      D3ColdInterface = 0;
      *(_DWORD *)(v7[16] + 136LL) &= ~4u;
    }
    else
    {
      if ( (v7[25] & 2) != 0
        || (D3ColdCapability = RaidGetD3ColdCapability(*(_QWORD *)(v7[16] + 16LL)), v10 = 4, !D3ColdCapability) )
      {
        v10 = 0;
      }
      StartContext = v7[16];
      *(_DWORD *)(StartContext + 136) = v10 | *(_DWORD *)(StartContext + 136) & 0xFFFFFFFB;
    }
  }
  if ( !v6 )
  {
    D3ColdInterface = NvmeNamespaceCreateSystemThread((void **)v7);
    StorpInitializeNvmeNamespaceTelemetry((__int64)v7);
  }
  if ( !FeatureFixFUAForReadIoPerf )
  {
    D3ColdInterface = NvmeNamespaceCreateSystemThread((void **)v7);
    StorpInitializeNvmeNamespaceTelemetry((__int64)v7);
  }
  if ( (unsigned int)dword_140170178 > 5 && tlgKeywordOn(StartContext, 0x400000000000LL) )
  {
    v11 = *(_QWORD *)(v4 + 128);
    v49 = &v46;
    v46 = 0x1000000LL;
    v50 = 8LL;
    v52 = 16LL;
    v51 = v11 + 1032;
    v53 = (char *)(v7 + 20);
    v44 = *((_DWORD *)v7 + 14);
    v55 = &v44;
    v54 = 16LL;
    v56 = 4LL;
    v45 = *(_DWORD *)(v11 + 56);
    v57 = &v45;
    v43 = *(unsigned __int16 *)(v4 + 4);
    v59 = &v43;
    v58 = 4LL;
    v60 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v61, *(const wchar_t **)(v11 + 1016));
    v12 = *(unsigned __int16 *)(v4 + 940);
    v62 = &v42;
    v40 = *(_WORD *)(v4 + 942);
    v64 = &v40;
    v41 = *(_BYTE *)(v4 + 944);
    v66 = &v41;
    v42 = v12;
    v63 = 2LL;
    v65 = 2LL;
    v67 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v12, (unsigned __int8 *)dword_140163214, v13, v14, 0xCu, &v48);
  }
  v15 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = D3ColdInterface;
  if ( v15 )
    goto LABEL_83;
  v47 = 0LL;
  IoGetActivityIdIrp(Irp, &v47);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_83;
    v19 = &EventNonReadWriteRequestComplete;
    goto LABEL_82;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_83;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v3 = *Information;
        LODWORD(v39) = Irp->IoStatus.Status;
        LODWORD(v38) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v16, (__int64)CurrentStackLocation, &v47, Irp, v38, v39);
      }
      goto LABEL_83;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_83;
    v19 = &EventPnpRequestComplete;
LABEL_82:
    LODWORD(v38) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v16, v19, &v47, Irp, v38);
    goto LABEL_83;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_83;
  ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
  v21 = 0;
  v22 = 0LL;
  LOBYTE(v40) = 0;
  v23 = 0;
  LOBYTE(v42) = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_BYTE *)(ProviderId + 2) != 40 )
  {
    v32 = *(_BYTE *)(ProviderId + 72);
    v22 = *(_BYTE **)(ProviderId + 32);
    v23 = *(_BYTE *)(ProviderId + 11);
    v21 = *(_BYTE *)(ProviderId + 4);
    if ( !*(_BYTE *)(ProviderId + 2) )
      goto LABEL_58;
    goto LABEL_83;
  }
  v27 = 0LL;
  v41 = 0;
  if ( *(_DWORD *)(ProviderId + 20) )
    goto LABEL_83;
  v28 = 0;
  v43 = *(_DWORD *)(ProviderId + 56);
  if ( !v43 )
    goto LABEL_55;
  while ( 1 )
  {
    v16 = *(unsigned int *)(ProviderId + 4LL * v28 + 120);
    if ( (unsigned int)v16 >= 0x80 )
    {
      v29 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v16 < (unsigned int)v29 )
        break;
    }
LABEL_48:
    if ( ++v28 >= v43 )
      goto LABEL_54;
  }
  v30 = (unsigned int)v16;
  v31 = *(_DWORD *)(v16 + ProviderId) - 64;
  if ( v31 )
  {
    v16 = (unsigned int)(v31 - 1);
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == 1 )
      {
        v16 = v30 + 40;
        if ( v30 + 40 <= v29 )
        {
          if ( *(_DWORD *)(v30 + ProviderId + 12) )
            v27 = (char *)(v30 + ProviderId + 32);
          v22 = *(_BYTE **)(v30 + ProviderId + 24);
          goto LABEL_53;
        }
      }
    }
    else
    {
      v16 = v30 + 56;
      if ( v30 + 56 <= v29 )
      {
        v41 = 1;
        if ( *(_BYTE *)(v30 + ProviderId + 10) )
          v27 = (char *)(v30 + ProviderId + 24);
        v21 = *(_BYTE *)(v30 + ProviderId + 8);
        v22 = *(_BYTE **)(v30 + ProviderId + 16);
        v23 = *(_BYTE *)(v30 + ProviderId + 9);
      }
    }
    goto LABEL_47;
  }
  v16 = v30 + 40;
  if ( v30 + 40 > v29 )
  {
LABEL_47:
    if ( v41 )
      goto LABEL_54;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v30 + ProviderId + 10) )
    v27 = (char *)(v30 + ProviderId + 24);
  v22 = *(_BYTE **)(v30 + ProviderId + 16);
LABEL_53:
  v23 = *(_BYTE *)(v30 + ProviderId + 9);
  v21 = *(_BYTE *)(v30 + ProviderId + 8);
LABEL_54:
  v25 = 0;
LABEL_55:
  if ( v27 )
  {
    v32 = *v27;
    v26 = 0;
LABEL_58:
    LOBYTE(v16) = v32 - 8;
    if ( (v16 & 0x5D) == 0 )
    {
      v33 = *(_BYTE *)(ProviderId + 3);
      if ( v33 == 1 || !v22 || !v23 )
        goto LABEL_78;
      LOBYTE(ProviderId) = 0;
      v16 = (unsigned __int64)&v22[v23];
      v34 = v22 + 8;
      if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v34 <= v16 )
        {
          LOBYTE(ProviderId) = 1;
          v25 = v22[2];
          v24 = v22[1] & 0xF;
          v26 = v22[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v34 <= v16 )
        {
          v24 = v22[2] & 0xF;
          v35 = v23;
          if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
            v35 = (unsigned __int8)v22[7] + 8;
          v16 = (unsigned __int64)(v22 + 13);
          ProviderId = (unsigned __int64)&v22[v35];
          if ( (unsigned __int64)(v22 + 13) > ProviderId )
            LOBYTE(v40) = 0;
          else
            LOBYTE(v40) = v22[12];
          if ( (unsigned __int64)(v22 + 14) > ProviderId )
            LOBYTE(v42) = 0;
          else
            LOBYTE(v42) = *(_BYTE *)v16;
          LOBYTE(ProviderId) = 1;
        }
        v26 = v42;
        v25 = v40;
      }
      if ( (_BYTE)ProviderId )
      {
        LOBYTE(v3) = v25;
        v36 = v26;
      }
      else
      {
LABEL_78:
        v24 = 0;
        v36 = 0;
      }
      LOBYTE(v39) = v33;
      LODWORD(v38) = Irp->IoStatus.Status;
      McTemplateK0pduuuuup_EtwWriteTransfer(v16, ProviderId, &v47, Irp, v38, v39, v21, v24, v3, v36, Irp);
    }
  }
LABEL_83:
  IofCompleteRequest(Irp, 0);
  return (unsigned int)D3ColdInterface;
}
