/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x1408AFE78
 * Callers:
 *     PiSwDispatch @ 0x14072E770 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1402B827C (McTemplateK0zzd_EtwWriteTransfer.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A5298 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405A554C (McTemplateK0zzz_EtwWriteTransfer.c)
 *     PiSwUpdateArrayProperties @ 0x1408AF964 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceInterfaceSetState @ 0x1408AFBA4 (PiSwDeviceInterfaceSetState.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x1408B5A60 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x1408B66DC (PiSwValidatePropertyArray.c)
 *     PiSwLock @ 0x1408B6E3C (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x1408B7FB4 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1408B8B2C (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwInterfaceCreate @ 0x1409F0C54 (PiSwInterfaceCreate.c)
 *     PiSwInterfaceFree @ 0x1409F1384 (PiSwInterfaceFree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 FsContext2; // r14
  _QWORD *v6; // rsi
  struct _IRP *MasterIrp; // rcx
  int updated; // edi
  __int64 v9; // r8
  int v10; // r9d
  size_t Length; // rdx
  NTSTRSAFE_PCWSTR v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 InterfaceEntry; // rax
  __int64 v21; // r8
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  PVOID P; // [rsp+30h] [rbp-78h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v27; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v28[12]; // [rsp+48h] [rbp-60h] BYREF
  char v29; // [rsp+B8h] [rbp+10h]
  int v30; // [rsp+C8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v28[1] = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v28[2] = FsContext2;
  v28[0] = 0LL;
  P = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  pszSrc = 0LL;
  v30 = 0;
  v29 = 0;
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RegisterInterface_Start,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  v28[3] = &Irp->AssociatedIrp;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_48;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v28);
  if ( updated >= 0 )
  {
    NdrMesTypeDecode3(v28[0], "TP 3\a", &off_140B3D1E0, &off_140E06FF0, 2, &P);
    if ( P && *(_QWORD *)P && ((v9 = *((_QWORD *)P + 3)) != 0 || !*((_DWORD *)P + 4)) && (*((_DWORD *)P + 4) || !v9) )
    {
      updated = PiSwValidatePropertyArray(*((_QWORD *)P + 3));
      if ( updated >= 0 )
      {
        PiSwLock();
        if ( !(unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) || (*(_DWORD *)(FsContext2 + 64) & 8) != 0 )
        {
          updated = -1073741637;
        }
        else
        {
          LOBYTE(v10) = 1;
          updated = IopRegisterDeviceInterface(
                      *(_QWORD *)(FsContext2 + 80),
                      *(_QWORD *)P,
                      *((_QWORD *)P + 1),
                      v10,
                      (__int64)&pszSrc,
                      (__int64)&v30);
          if ( updated >= 0 )
          {
            if ( (byte_140EEFF64 & 0x40) != 0 )
              McTemplateK0zzz_EtwWriteTransfer(
                v17,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InterfaceRegistered,
                v18,
                *(const wchar_t **)(FsContext2 + 8),
                *(const wchar_t **)(FsContext2 + 16),
                pszSrc);
            v19 = *(_QWORD *)(FsContext2 + 120);
            if ( v19 )
              *(_DWORD *)(v19 + 48) |= v30;
            InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
            v6 = (_QWORD *)InterfaceEntry;
            v27 = (_QWORD *)InterfaceEntry;
            if ( InterfaceEntry )
            {
              updated = PiSwUpdateArrayProperties(
                          *(_QWORD *)(InterfaceEntry + 24),
                          *(_DWORD *)(InterfaceEntry + 32),
                          *((_QWORD *)P + 3),
                          *((_DWORD *)P + 4));
LABEL_35:
              ExReleaseResourceLite(&PiSwLockObj);
              KeLeaveCriticalRegion();
              if ( updated < 0 )
                goto LABEL_48;
              v21 = *((_QWORD *)P + 3);
              if ( v21 )
                updated = PiSwPropertySet(v6[2], 3LL, v21, *((unsigned int *)P + 4));
              if ( updated < 0 )
                goto LABEL_48;
              PiSwLock();
              updated = PiSwDeviceInterfaceSetState(FsContext2, (__int64)v6, *((_BYTE *)P + 32));
              goto LABEL_12;
            }
            updated = PiSwInterfaceCreate(pszSrc, *((_QWORD *)P + 3), *((unsigned int *)P + 4), &v27);
            if ( updated >= 0 )
            {
              v29 = 1;
              v22 = *(_QWORD **)(FsContext2 + 192);
              if ( *v22 != FsContext2 + 184 )
                goto LABEL_44;
              v6 = v27;
              *v27 = FsContext2 + 184;
              v6[1] = v22;
              *v22 = v6;
              *(_QWORD *)(FsContext2 + 192) = v6;
              goto LABEL_35;
            }
            v6 = v27;
          }
        }
LABEL_12:
        ExReleaseResourceLite(&PiSwLockObj);
        KeLeaveCriticalRegion();
        if ( updated < 0 )
          goto LABEL_48;
        Length = CurrentStackLocation->Parameters.Read.Length;
        v12 = pszSrc;
        updated = RtlStringCbCopyW((NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp, Length, pszSrc);
        if ( updated >= 0 )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( v12[v13] );
          Irp->IoStatus.Information = 2 * v13 + 2;
        }
      }
    }
    else
    {
      updated = -1073741811;
    }
  }
  if ( updated >= 0 )
    goto LABEL_18;
LABEL_48:
  if ( v6 && v29 )
  {
    PiSwLock();
    v23 = *v6;
    v24 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) == v6 && (_QWORD *)*v24 == v6 )
    {
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      PiSwInterfaceFree(v6);
      goto LABEL_18;
    }
LABEL_44:
    __fastfail(3u);
  }
LABEL_18:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v28[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v14,
      (__int64)KMPnPEvt_SwDevice_RegisterInterface_Stop,
      v15,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      updated);
  return (unsigned int)updated;
}
