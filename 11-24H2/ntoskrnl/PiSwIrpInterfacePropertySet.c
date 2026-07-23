/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x1408B69EC
 * Callers:
 *     PiSwDispatch @ 0x14072E770 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1402B827C (McTemplateK0zzd_EtwWriteTransfer.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A5298 (McTemplateK0zz_EtwWriteTransfer.c)
 *     PiSwUpdateArrayProperties @ 0x1408AF964 (PiSwUpdateArrayProperties.c)
 *     PiSwPropertySet @ 0x1408B5A60 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x1408B66DC (PiSwValidatePropertyArray.c)
 *     PiSwLock @ 0x1408B6E3C (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x1408B7FB4 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1408B8B2C (PiSwDeviceFindInterfaceEntry.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfacePropertySet(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  const wchar_t **FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int v7; // ebx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 InterfaceEntry; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  const wchar_t **v16; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  v16 = FsContext2;
  v15 = 0LL;
  P = 0LL;
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetInterfaceProperty_Start,
      a3,
      FsContext2[1],
      FsContext2[2]);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_23;
  v7 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v15);
  if ( v7 < 0 )
    goto LABEL_15;
  NdrMesTypeDecode3(v15, "TP 3\a", &off_140B3D1E0, &off_140E06FF0, 4, &P);
  if ( P && *(_QWORD *)P && *((_QWORD *)P + 2) && (v8 = *((_DWORD *)P + 2)) != 0 )
  {
    v7 = PiSwValidatePropertyArray(*((_QWORD *)P + 2), v8);
    if ( v7 >= 0 )
    {
      PiSwLock();
      if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
      {
        InterfaceEntry = PiSwDeviceFindInterfaceEntry(v9, *(_QWORD *)P);
        v7 = InterfaceEntry
           ? PiSwUpdateArrayProperties(
               *(_QWORD *)(InterfaceEntry + 24),
               *(_DWORD *)(InterfaceEntry + 32),
               *((_QWORD *)P + 2),
               *((_DWORD *)P + 2))
           : -1073741275;
      }
      else
      {
        v7 = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      if ( v7 >= 0 )
        v7 = PiSwPropertySet(*(_QWORD *)P, 3LL, *((_QWORD *)P + 2), *((_DWORD *)P + 2));
    }
  }
  else
  {
LABEL_23:
    v7 = -1073741811;
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v15 )
    MesHandleFree();
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v11,
      (__int64)KMPnPEvt_SwDevice_SetInterfaceProperty_Stop,
      v12,
      FsContext2[1],
      FsContext2[2],
      v7);
  return (unsigned int)v7;
}
