/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x14095D5E8
 * Callers:
 *     PiSwDispatch @ 0x140AC02F0 (PiSwDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140424514 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     RtlStringCbCopyW @ 0x140436640 (RtlStringCbCopyW.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A4A98 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405A4D4C (McTemplateK0zzz_EtwWriteTransfer.c)
 *     PiSwUpdateArrayProperties @ 0x1408351E8 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x140835384 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceOperationsAllowed @ 0x140835F30 (PiSwDeviceOperationsAllowed.c)
 *     PiSwLock @ 0x1408363D0 (PiSwLock.c)
 *     PiSwValidatePropertyArray @ 0x140954850 (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x1409550B8 (PiSwPropertySet.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PiSwDeviceInterfaceSetState @ 0x14095DA64 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x14095E95C (PiSwInterfaceCreate.c)
 *     PiSwInterfaceFree @ 0x1409A3F4C (PiSwInterfaceFree.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 FsContext2; // r14
  __int64 *v6; // rsi
  struct _IRP *MasterIrp; // rcx
  int updated; // edi
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 *InterfaceEntry; // rax
  __int64 v20; // r8
  PVOID v21; // r8
  __int64 **v22; // rcx
  __int64 v23; // rcx
  __int64 **v24; // rax
  PVOID P; // [rsp+30h] [rbp-78h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-70h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-68h] BYREF
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
  if ( (byte_140EEFA6C & 0x40) != 0 )
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
    NdrMesTypeDecode3(v28[0], "TP 3\a", &off_140B2C160, &off_140E06FF0, 2, &P);
    if ( P
      && *(_QWORD *)P
      && ((v9 = *((_QWORD *)P + 3)) != 0 || !*((_DWORD *)P + 4))
      && ((v10 = *((_DWORD *)P + 4)) != 0 || !v9) )
    {
      updated = PiSwValidatePropertyArray(*((_QWORD *)P + 3), v10);
      if ( updated >= 0 )
      {
        PiSwLock();
        if ( !PiSwDeviceOperationsAllowed(FsContext2) || (*(_DWORD *)(FsContext2 + 64) & 8) != 0 )
        {
          updated = -1073741637;
        }
        else
        {
          updated = IopRegisterDeviceInterface(
                      *(_QWORD *)(FsContext2 + 80),
                      *(int **)P,
                      *((const wchar_t **)P + 1),
                      1,
                      (PVOID *)&pszSrc,
                      (__int64)&v30);
          if ( updated >= 0 )
          {
            if ( (byte_140EEFA6C & 0x40) != 0 )
              McTemplateK0zzz_EtwWriteTransfer(
                v16,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InterfaceRegistered,
                v17,
                *(const wchar_t **)(FsContext2 + 8),
                *(const wchar_t **)(FsContext2 + 16),
                pszSrc);
            v18 = *(_QWORD *)(FsContext2 + 120);
            if ( v18 )
              *(_DWORD *)(v18 + 48) |= v30;
            InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
            v6 = InterfaceEntry;
            v27 = InterfaceEntry;
            if ( InterfaceEntry )
            {
              updated = PiSwUpdateArrayProperties(
                          InterfaceEntry[3],
                          *((_DWORD *)InterfaceEntry + 8),
                          *((_QWORD *)P + 3),
                          *((_DWORD *)P + 4));
LABEL_35:
              ExReleaseResourceLite(&PiSwLockObj);
              KeLeaveCriticalRegion();
              if ( updated < 0 )
                goto LABEL_48;
              v20 = *((_QWORD *)P + 3);
              if ( v20 )
                updated = PiSwPropertySet(v6[2], 3u, v20, *((_DWORD *)P + 4));
              if ( updated < 0 )
                goto LABEL_48;
              PiSwLock();
              v21 = P;
              LOBYTE(v21) = *((_BYTE *)P + 32);
              updated = PiSwDeviceInterfaceSetState(FsContext2, v6, v21);
              goto LABEL_12;
            }
            updated = PiSwInterfaceCreate(pszSrc, *((_QWORD *)P + 3), *((unsigned int *)P + 4), &v27);
            if ( updated >= 0 )
            {
              v29 = 1;
              v22 = *(__int64 ***)(FsContext2 + 192);
              if ( *v22 != (__int64 *)(FsContext2 + 184) )
                goto LABEL_44;
              v6 = v27;
              *v27 = FsContext2 + 184;
              v6[1] = (__int64)v22;
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
        updated = RtlStringCbCopyW(
                    (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
                    CurrentStackLocation->Parameters.Read.Length,
                    pszSrc);
        if ( updated >= 0 )
        {
          v12 = -1LL;
          do
            ++v12;
          while ( *(_WORD *)(v11 + 2 * v12) );
          Irp->IoStatus.Information = 2 * v12 + 2;
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
    v24 = (__int64 **)v6[1];
    if ( *(__int64 **)(*v6 + 8) == v6 && *v24 == v6 )
    {
      *v24 = (__int64 *)v23;
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
  if ( (byte_140EEFA6C & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v13,
      (__int64)KMPnPEvt_SwDevice_RegisterInterface_Stop,
      v14,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      updated);
  return (unsigned int)updated;
}
