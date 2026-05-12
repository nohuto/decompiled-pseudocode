/*
 * XREFs of NvmeAsyncScsiPassThroughCompletion @ 0x1400DAE40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall NvmeAsyncScsiPassThroughCompletion(PIRP Irp)
{
  int v1; // ebx
  unsigned __int64 v3; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v6; // rdx
  unsigned __int64 ProviderId; // rdx
  char v8; // r15
  _BYTE *v9; // r9
  unsigned __int8 v10; // r10
  char v11; // si
  char v12; // r11
  char v13; // r12
  char *v14; // r11
  char v15; // r13
  unsigned int v16; // r14d
  unsigned __int64 v17; // rbp
  __int64 v18; // r8
  int v19; // ecx
  char v20; // cl
  char v21; // r8
  _BYTE *v22; // rax
  unsigned int v23; // eax
  char v24; // al
  char v25; // [rsp+60h] [rbp-48h]
  unsigned int v26; // [rsp+64h] [rbp-44h]
  GUID v27; // [rsp+68h] [rbp-40h] BYREF

  v1 = 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  if ( !StorEtwLoggingEnabled )
    goto LABEL_65;
  v27 = 0LL;
  IoGetActivityIdIrp(Irp, &v27);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_65;
    v6 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_64;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_65;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v1 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v3, (__int64)CurrentStackLocation, &v27, Irp, v1, Irp->IoStatus.Status);
      }
      goto LABEL_65;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_65;
    v6 = &EventPnpRequestComplete;
LABEL_64:
    McTemplateK0pd_EtwWriteTransfer(v3, v6, &v27, Irp, Irp->IoStatus.Status);
    goto LABEL_65;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_65;
  ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
  v8 = 0;
  v9 = 0LL;
  v25 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( *(_BYTE *)(ProviderId + 2) != 40 )
  {
    v20 = *(_BYTE *)(ProviderId + 72);
    v9 = *(_BYTE **)(ProviderId + 32);
    v10 = *(_BYTE *)(ProviderId + 11);
    v8 = *(_BYTE *)(ProviderId + 4);
    if ( !*(_BYTE *)(ProviderId + 2) )
      goto LABEL_41;
    goto LABEL_65;
  }
  v14 = 0LL;
  v15 = 0;
  if ( *(_DWORD *)(ProviderId + 20) )
    goto LABEL_65;
  v16 = 0;
  v26 = *(_DWORD *)(ProviderId + 56);
  if ( !v26 )
    goto LABEL_38;
  while ( 1 )
  {
    v3 = *(unsigned int *)(ProviderId + 4LL * v16 + 120);
    if ( (unsigned int)v3 >= 0x80 )
    {
      v17 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v3 < (unsigned int)v17 )
        break;
    }
LABEL_32:
    if ( ++v16 >= v26 )
      goto LABEL_38;
  }
  v18 = (unsigned int)v3;
  v19 = *(_DWORD *)(v3 + ProviderId) - 64;
  if ( v19 )
  {
    v3 = (unsigned int)(v19 - 1);
    if ( (_DWORD)v3 )
    {
      if ( (_DWORD)v3 == 1 )
      {
        v3 = v18 + 40;
        if ( v18 + 40 <= v17 )
        {
          if ( *(_DWORD *)(v18 + ProviderId + 12) )
            v14 = (char *)(v18 + ProviderId + 32);
          v9 = *(_BYTE **)(v18 + ProviderId + 24);
          goto LABEL_37;
        }
      }
    }
    else
    {
      v3 = v18 + 56;
      if ( v18 + 56 <= v17 )
      {
        v15 = 1;
        if ( *(_BYTE *)(v18 + ProviderId + 10) )
          v14 = (char *)(v18 + ProviderId + 24);
        v8 = *(_BYTE *)(v18 + ProviderId + 8);
        v9 = *(_BYTE **)(v18 + ProviderId + 16);
        v10 = *(_BYTE *)(v18 + ProviderId + 9);
      }
    }
    goto LABEL_31;
  }
  v3 = v18 + 40;
  if ( v18 + 40 > v17 )
  {
LABEL_31:
    if ( v15 )
      goto LABEL_38;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(v18 + ProviderId + 10) )
    v14 = (char *)(v18 + ProviderId + 24);
  v9 = *(_BYTE **)(v18 + ProviderId + 16);
LABEL_37:
  v10 = *(_BYTE *)(v18 + ProviderId + 9);
  v8 = *(_BYTE *)(v18 + ProviderId + 8);
LABEL_38:
  if ( v14 )
  {
    v20 = *v14;
    v12 = 0;
LABEL_41:
    LOBYTE(v3) = v20 - 8;
    if ( (v3 & 0x5D) == 0 )
    {
      v21 = *(_BYTE *)(ProviderId + 3);
      if ( v21 == 1 || !v9 || !v10 )
        goto LABEL_60;
      LOBYTE(ProviderId) = 0;
      v3 = (unsigned __int64)&v9[v10];
      v22 = v9 + 8;
      if ( (unsigned __int8)((*v9 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v22 <= v3 )
        {
          LOBYTE(ProviderId) = 1;
          v12 = v9[2];
          v11 = v9[1] & 0xF;
          v13 = v9[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v22 <= v3 )
        {
          v11 = v9[2] & 0xF;
          v23 = v10;
          if ( (unsigned int)(unsigned __int8)v9[7] + 8 <= v10 )
            v23 = (unsigned __int8)v9[7] + 8;
          v3 = (unsigned __int64)(v9 + 13);
          ProviderId = (unsigned __int64)&v9[v23];
          if ( (unsigned __int64)(v9 + 13) > ProviderId )
            v25 = 0;
          else
            v25 = v9[12];
          if ( (unsigned __int64)(v9 + 14) <= ProviderId )
            v13 = *(_BYTE *)v3;
          LOBYTE(ProviderId) = 1;
        }
        v12 = v25;
      }
      if ( (_BYTE)ProviderId )
      {
        LOBYTE(v1) = v12;
        v24 = v13;
      }
      else
      {
LABEL_60:
        v11 = 0;
        v24 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v3, ProviderId, &v27, Irp, Irp->IoStatus.Status, v21, v8, v11, v1, v24, Irp);
    }
  }
LABEL_65:
  IofCompleteRequest(Irp, 0);
}
