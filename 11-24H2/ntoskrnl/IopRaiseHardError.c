/*
 * XREFs of IopRaiseHardError @ 0x140A44CA0
 * Callers:
 *     IopApcHardError @ 0x140A44C60 (IopApcHardError.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ExRaiseHardError @ 0x140A44F60 (ExRaiseHardError.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopRaiseHardError(PIRP Irp, __int64 a2, char *a3)
{
  char v6; // r15
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v8; // r14
  NTSTATUS v9; // esi
  __int64 v10; // r9
  _KPROCESS *Process; // rcx
  unsigned int Status; // r10d
  unsigned int v13; // r11d
  __int64 v14; // r8
  int v15; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v17; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-45h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v20[3]; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp-1h] BYREF
  struct _LIST_ENTRY *v22; // [rsp+80h] [rbp+7h]
  struct _LIST_ENTRY *Flink; // [rsp+88h] [rbp+Fh]

  v17 = 0;
  v18 = 0;
  v6 = 0;
  memset(v20, 0, sizeof(v20));
  DestinationString = 0LL;
  ObQueryNameStringMode(a3, 0LL, 0, &v18, 0);
  Pool2 = ExAllocatePool2(0x100uLL, v18, 0x20206F49u);
  v8 = (struct _LIST_ENTRY *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
LABEL_36:
    Irp->IoStatus.Status = v9;
LABEL_17:
    Irp->IoStatus.Information = 0LL;
LABEL_18:
    IofCompleteRequest(Irp, 1);
    return;
  }
  v9 = ObQueryNameStringMode(a3, Pool2, v18, &v17, 0);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    goto LABEL_36;
  }
  if ( a2 && (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    DestinationString.MaximumLength = 64;
    DestinationString.Buffer = (wchar_t *)(a2 + 32);
    DestinationString.Length = *(_WORD *)(a2 + 6);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  Process = Irp->Tail.Overlay.Thread->Process;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(Process, 0, (__int64)v20);
    v6 = 1;
  }
  Status = Irp->IoStatus.Status;
  switch ( Status )
  {
    case 0xC0000012:
      goto LABEL_8;
    case 0xC0000013:
    case 0xC0000014:
      goto LABEL_34;
    case 0xC00000A2:
LABEL_8:
      v22 = v8;
      p_DestinationString = &DestinationString;
      v13 = 3;
      v14 = 3LL;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      break;
    case 0xC00000A3:
    case 0xC00000B5:
LABEL_34:
      v13 = 2;
      Flink = 0LL;
      p_DestinationString = (UNICODE_STRING *)v8;
      v14 = 1LL;
      v22 = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      break;
    default:
      v13 = 0;
      v14 = 0LL;
      break;
  }
  if ( ExReadyForErrors )
  {
    v15 = ExRaiseHardError(Status, v13, v14, &p_DestinationString, 8, &v17);
  }
  else
  {
    v17 = 0;
    v15 = -1073741823;
  }
  if ( v6 )
    KiUnstackDetachProcess((__int64)v20, 0, v14, v10);
  ExFreePoolWithTag(v8, 0);
  if ( v15 < 0 || v17 != 9 )
  {
    if ( v17 == 3 )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( CurrentStackLocation->MajorFunction == 13 && CurrentStackLocation->MinorFunction == 1 )
        Irp->IoStatus.Information = 1LL;
      else
        Irp->IoStatus.Status = -1073741248;
    }
    if ( (Irp->Flags & 0x40) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  guard_dispatch_icall_no_overrides(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp);
}
