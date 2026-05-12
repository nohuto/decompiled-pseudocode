/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x140033240
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorASyncScsiPassThroughCompletion(PIRP Irp)
{
  int v1; // ebx
  char *v3; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  void *v5; // rdx
  int *Information; // rax
  unsigned __int64 ProviderId; // rdx
  char *v8; // rax
  char v9; // si
  unsigned int v10; // eax
  char v11; // r15
  char v12; // r11
  char v13; // al
  char v14; // r14
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char *v17; // r11
  unsigned int v18; // r13d
  unsigned int *v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rbp
  char v22; // cl
  char v23; // r8
  char v24; // [rsp+60h] [rbp-48h]
  char v25; // [rsp+61h] [rbp-47h]
  unsigned int v26; // [rsp+64h] [rbp-44h]
  __int128 v27; // [rsp+68h] [rbp-40h] BYREF

  LOBYTE(v1) = 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  if ( !StorEtwLoggingEnabled )
    goto LABEL_5;
  v27 = 0LL;
  IoGetActivityIdIrp(Irp, &v27);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_5;
    v5 = &EventNonReadWriteRequestComplete;
    goto LABEL_8;
  }
  if ( CurrentStackLocation->MajorFunction != 15 )
  {
    if ( CurrentStackLocation->MajorFunction != 27 )
      goto LABEL_5;
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)Irp->IoStatus.Information;
        if ( Information )
          v1 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(
          (_DWORD)v3,
          (_DWORD)CurrentStackLocation,
          (unsigned int)&v27,
          (_DWORD)Irp,
          v1,
          Irp->IoStatus.Status);
      }
      goto LABEL_5;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_5;
    v5 = &EventPnpRequestComplete;
LABEL_8:
    McTemplateK0pd_EtwWriteTransfer(v3, v5, &v27, Irp, Irp->IoStatus.Status);
    goto LABEL_5;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_5;
  ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
  v14 = 0;
  v15 = 0LL;
  v24 = 0;
  v16 = 0;
  v9 = 0;
  v12 = 0;
  v11 = 0;
  if ( *(_BYTE *)(ProviderId + 2) != 40 )
  {
    v22 = *(_BYTE *)(ProviderId + 72);
    v15 = *(_BYTE **)(ProviderId + 32);
    v16 = *(_BYTE *)(ProviderId + 11);
    v14 = *(_BYTE *)(ProviderId + 4);
    if ( !*(_BYTE *)(ProviderId + 2) )
      goto LABEL_65;
    goto LABEL_5;
  }
  v17 = 0LL;
  v25 = 0;
  if ( *(_DWORD *)(ProviderId + 20) )
    goto LABEL_5;
  v18 = 0;
  v26 = *(_DWORD *)(ProviderId + 56);
  if ( !v26 )
    goto LABEL_62;
  v19 = (unsigned int *)(ProviderId + 120);
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned int)v20 >= 0x80 )
    {
      v21 = *(unsigned int *)(ProviderId + 16);
      if ( (unsigned int)v20 < (unsigned int)v21 )
        break;
    }
LABEL_55:
    ++v18;
    ++v19;
    if ( v18 >= v26 )
      goto LABEL_62;
  }
  if ( *(_DWORD *)(v20 + ProviderId) != 64 )
  {
    LODWORD(v3) = *(_DWORD *)(v20 + ProviderId) - 65;
    if ( *(_DWORD *)(v20 + ProviderId) == 65 )
    {
      LODWORD(v3) = v20 + 56;
      if ( v20 + 56 <= v21 )
      {
        v25 = 1;
        if ( *(_BYTE *)(v20 + ProviderId + 10) )
          v17 = (char *)(v20 + ProviderId + 24);
        v14 = *(_BYTE *)(v20 + ProviderId + 8);
        v15 = *(_BYTE **)(v20 + ProviderId + 16);
        v16 = *(_BYTE *)(v20 + ProviderId + 9);
      }
    }
    else if ( *(_DWORD *)(v20 + ProviderId) == 66 )
    {
      LODWORD(v3) = v20 + 40;
      if ( v20 + 40 <= v21 )
      {
        if ( *(_DWORD *)(v20 + ProviderId + 12) )
          v17 = (char *)(v20 + ProviderId + 32);
        v15 = *(_BYTE **)(v20 + ProviderId + 24);
        goto LABEL_61;
      }
    }
    goto LABEL_54;
  }
  LODWORD(v3) = v20 + 40;
  if ( v20 + 40 > v21 )
  {
LABEL_54:
    if ( v25 )
      goto LABEL_62;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(v20 + ProviderId + 10) )
    v17 = (char *)(v20 + ProviderId + 24);
  v15 = *(_BYTE **)(v20 + ProviderId + 16);
LABEL_61:
  v16 = *(_BYTE *)(v20 + ProviderId + 9);
  v14 = *(_BYTE *)(v20 + ProviderId + 8);
LABEL_62:
  if ( v17 )
  {
    v22 = *v17;
    v12 = 0;
LABEL_65:
    LOBYTE(v3) = v22 - 8;
    if ( ((unsigned __int8)v3 & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(ProviderId + 3);
      if ( v23 == 1 || !v15 || !v16 )
        goto LABEL_29;
      LOBYTE(ProviderId) = 0;
      v3 = &v15[v16];
      v8 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( v8 <= v3 )
        {
          LOBYTE(ProviderId) = 1;
          v12 = v15[2];
          v9 = v15[1] & 0xF;
          v11 = v15[3];
        }
      }
      else
      {
        if ( v8 <= v3 )
        {
          v9 = v15[2] & 0xF;
          v10 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v10 = (unsigned __int8)v15[7] + 8;
          v3 = v15 + 13;
          ProviderId = (unsigned __int64)&v15[v10];
          if ( (unsigned __int64)(v15 + 13) > ProviderId )
            v24 = 0;
          else
            v24 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= ProviderId )
            v11 = *v3;
          LOBYTE(ProviderId) = 1;
        }
        v12 = v24;
      }
      if ( (_BYTE)ProviderId )
      {
        LOBYTE(v1) = v12;
        v13 = v11;
      }
      else
      {
LABEL_29:
        v9 = 0;
        v13 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v3,
        ProviderId,
        (unsigned int)&v27,
        (_DWORD)Irp,
        Irp->IoStatus.Status,
        v23,
        v14,
        v9,
        v1,
        v13,
        (char)Irp);
    }
  }
LABEL_5:
  IofCompleteRequest(Irp, 0);
}
