/*
 * XREFs of RaUnitProtocolCommandIoctl @ 0x1400395D0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaGetProtocolCommandEffects @ 0x140089EC0 (RaGetProtocolCommandEffects.c)
 *     RaValidateProtocolCommandIoctl @ 0x14008A6CC (RaValidateProtocolCommandIoctl.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A05BC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitProtocolCommandIoctl(__int64 a1, IRP *a2)
{
  int v2; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  IRP *v5; // rdi
  int ProtocolCommandEffects; // r14d
  __int64 v8; // r8
  bool v9; // zf
  char *v10; // rcx
  _IO_STACK_LOCATION *v11; // rdx
  int *Information; // rax
  void *v13; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  char v15; // r12
  _ACCESS_STATE *AccessState; // r9
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // r11
  char LowPart_high; // r13
  char *v21; // r11
  unsigned int v22; // eax
  unsigned int v23; // r8d
  _IO_SECURITY_CONTEXT *v24; // rax
  __int64 SecurityQos_low; // rax
  unsigned __int64 DesiredAccess; // r15
  char SecurityQos; // cl
  char v28; // r8
  char *p_SecurityEvaluated; // rax
  unsigned int v30; // eax
  unsigned __int64 v31; // r8
  char v32; // al
  char Flags; // [rsp+60h] [rbp-9h] BYREF
  char v34[3]; // [rsp+61h] [rbp-8h] BYREF
  unsigned int v35; // [rsp+64h] [rbp-5h]
  int v36; // [rsp+68h] [rbp-1h]
  _IO_SECURITY_CONTEXT *v37; // [rsp+70h] [rbp+7h]
  __int128 v38; // [rsp+78h] [rbp+Fh] BYREF

  LOBYTE(v2) = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = a2;
  Flags = 0;
  v34[0] = 0;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x10 )
  {
    ProtocolCommandEffects = -1073741820;
  }
  else
  {
    if ( SHIDWORD(a2->AssociatedIrp.MasterIrp->MdlAddress) < 0 )
    {
      ++a2->CurrentLocation;
      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    }
    ProtocolCommandEffects = RaValidateProtocolCommandIoctl(*(_QWORD *)(a1 + 8));
    if ( ProtocolCommandEffects >= 0 )
    {
      ProtocolCommandEffects = RaGetProtocolCommandEffects(*(_QWORD *)(a1 + 8), v5, &Flags, v34);
      if ( ProtocolCommandEffects >= 0 )
      {
        a2 = v5;
        if ( Flags )
        {
          ++v5->CurrentLocation;
          ++v5->Tail.Overlay.CurrentStackLocation;
          return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
        }
        LOBYTE(v8) = v34[0];
        ProtocolCommandEffects = RaidUnitSendSrbProtocolCommandSynchronously(a1, v5, v8);
        if ( ProtocolCommandEffects >= 0 )
          goto LABEL_12;
      }
    }
  }
  v5->IoStatus.Information = 0LL;
LABEL_12:
  v9 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&v5->Tail.CompletionKey + 21) = -84;
  v5->IoStatus.Status = ProtocolCommandEffects;
  if ( v9 )
    goto LABEL_78;
  v38 = 0LL;
  IoGetActivityIdIrp(v5, &v38);
  v11 = v5->Tail.Overlay.CurrentStackLocation;
  if ( v11->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_78;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_77;
  }
  if ( v11->MajorFunction != 15 )
  {
    if ( v11->MajorFunction != 27 )
      goto LABEL_78;
    if ( v11->MinorFunction == 7 && !v11->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)v5->IoStatus.Information;
        if ( Information )
          v2 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(
          (_DWORD)v10,
          (_DWORD)v11,
          (unsigned int)&v38,
          (_DWORD)v5,
          v2,
          v5->IoStatus.Status);
      }
      goto LABEL_78;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_78;
    v13 = &EventPnpRequestComplete;
LABEL_77:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v38, v5, v5->IoStatus.Status);
    goto LABEL_78;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_78;
  SecurityContext = v11->Parameters.Create.SecurityContext;
  v15 = 0;
  AccessState = 0LL;
  Flags = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  LowPart_high = 0;
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
  {
    SecurityQos = (char)SecurityContext[3].SecurityQos;
    AccessState = SecurityContext[1].AccessState;
    v17 = BYTE3(SecurityContext->AccessState);
    v15 = BYTE4(SecurityContext->SecurityQos);
    if ( !BYTE2(SecurityContext->SecurityQos) )
      goto LABEL_54;
    goto LABEL_78;
  }
  v21 = 0LL;
  v34[0] = 0;
  if ( SecurityContext->FullCreateOptions )
    goto LABEL_78;
  v22 = (unsigned int)SecurityContext[2].AccessState;
  LODWORD(v10) = 0;
  v36 = 0;
  v35 = v22;
  if ( !v22 )
    goto LABEL_51;
  v23 = v35;
  v24 = SecurityContext + 5;
  v37 = SecurityContext + 5;
  while ( 1 )
  {
    SecurityQos_low = LODWORD(v24->SecurityQos);
    if ( (unsigned int)SecurityQos_low >= 0x80 )
    {
      DesiredAccess = SecurityContext->DesiredAccess;
      if ( (unsigned int)SecurityQos_low < (unsigned int)DesiredAccess )
        break;
    }
LABEL_44:
    LODWORD(v10) = (_DWORD)v10 + 1;
    v24 = (_IO_SECURITY_CONTEXT *)((char *)&v37->SecurityQos + 4);
    v36 = (int)v10;
    v37 = (_IO_SECURITY_CONTEXT *)((char *)v37 + 4);
    if ( (unsigned int)v10 >= v23 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) != 64 )
  {
    LODWORD(v10) = *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) - 65;
    if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) == 65 )
    {
      LODWORD(v10) = SecurityQos_low + 56;
      if ( SecurityQos_low + 56 <= DesiredAccess )
      {
        v34[0] = 1;
        if ( *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 2) )
          v21 = (char *)&SecurityContext[1] + SecurityQos_low;
        v15 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low);
        AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + SecurityQos_low);
        v17 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 1);
      }
    }
    else if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + SecurityQos_low) == 66 )
    {
      LODWORD(v10) = SecurityQos_low + 40;
      if ( SecurityQos_low + 40 <= DesiredAccess )
      {
        if ( *(_DWORD *)((char *)&SecurityContext->AccessState + SecurityQos_low + 4) )
          v21 = (char *)&SecurityContext[1].AccessState + SecurityQos_low;
        AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext[1].SecurityQos + SecurityQos_low);
        goto LABEL_50;
      }
    }
    goto LABEL_42;
  }
  LODWORD(v10) = SecurityQos_low + 40;
  if ( SecurityQos_low + 40 > DesiredAccess )
  {
LABEL_42:
    if ( v34[0] )
      goto LABEL_51;
    LODWORD(v10) = v36;
    v23 = v35;
    goto LABEL_44;
  }
  if ( *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 2) )
    v21 = (char *)&SecurityContext[1] + SecurityQos_low;
  AccessState = *(_ACCESS_STATE **)((char *)&SecurityContext->DesiredAccess + SecurityQos_low);
LABEL_50:
  v17 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low + 1);
  v15 = *((_BYTE *)&SecurityContext->AccessState + SecurityQos_low);
LABEL_51:
  if ( v21 )
  {
    SecurityQos = *v21;
    v19 = 0;
LABEL_54:
    LOBYTE(v10) = SecurityQos - 8;
    if ( ((unsigned __int8)v10 & 0x5D) == 0 )
    {
      if ( BYTE3(SecurityContext->SecurityQos) == 1 || !AccessState || !v17 )
        goto LABEL_73;
      v28 = 0;
      v10 = (char *)AccessState + v17;
      p_SecurityEvaluated = (char *)&AccessState->SecurityEvaluated;
      if ( (unsigned __int8)((AccessState->OperationID.LowPart & 0x7F) - 114) <= 1u )
      {
        if ( p_SecurityEvaluated <= v10 )
        {
          v28 = 1;
          v19 = BYTE2(AccessState->OperationID.LowPart);
          v18 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
          LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
        }
      }
      else
      {
        if ( p_SecurityEvaluated <= v10 )
        {
          v18 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
          v30 = v17;
          if ( (unsigned int)HIBYTE(AccessState->OperationID.HighPart) + 8 <= v17 )
            v30 = HIBYTE(AccessState->OperationID.HighPart) + 8;
          v10 = (char *)&AccessState->Flags + 1;
          v31 = (unsigned __int64)AccessState + v30;
          if ( (unsigned __int64)&AccessState->Flags + 1 > v31 )
            Flags = 0;
          else
            Flags = AccessState->Flags;
          if ( (unsigned __int64)&AccessState->Flags + 2 <= v31 )
            LowPart_high = *v10;
          v28 = 1;
        }
        v19 = Flags;
      }
      if ( v28 )
      {
        LOBYTE(v2) = v19;
        v32 = LowPart_high;
      }
      else
      {
LABEL_73:
        v18 = 0;
        v32 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v10,
        (_DWORD)SecurityContext,
        (unsigned int)&v38,
        (_DWORD)v5,
        v5->IoStatus.Status,
        BYTE3(SecurityContext->SecurityQos),
        v15,
        v18,
        v2,
        v32,
        (char)v5);
    }
  }
LABEL_78:
  IofCompleteRequest(v5, 0);
  return ProtocolCommandEffects;
}
