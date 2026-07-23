/*
 * XREFs of PiSwGetChildPdo @ 0x140AC1360
 * Callers:
 *     PipEnumerateCompleted @ 0x1408B6C08 (PipEnumerateCompleted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     IoInvalidateDeviceRelations @ 0x14048DB00 (IoInvalidateDeviceRelations.c)
 *     McTemplateK0zzq_EtwWriteTransfer @ 0x1405A5368 (McTemplateK0zzq_EtwWriteTransfer.c)
 *     McTemplateK0zztt_EtwWriteTransfer @ 0x1405A5450 (McTemplateK0zztt_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405A5664 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     ObSetSecurityObjectByPointer @ 0x140854A90 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpConcatPWSTR @ 0x1408E1D40 (PnpConcatPWSTR.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 *     PiSwMakePdoInactive @ 0x1409F40D4 (PiSwMakePdoInactive.c)
 *     PiSwFindPdoAssociation @ 0x140A72894 (PiSwFindPdoAssociation.c)
 *     PiSwAddPdoAssociation @ 0x140A81554 (PiSwAddPdoAssociation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PDEVICE_OBJECT __fastcall PiSwGetChildPdo(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rdi
  __int64 v4; // rbx
  WCHAR *v5; // r14
  char v6; // r15
  __int64 v7; // rdx
  __int64 PdoAssociation; // r8
  UNICODE_STRING *p_DestinationString; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // r8
  __int16 v15; // ax
  char v16; // si
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  _DWORD *DeviceExtension; // rsi
  unsigned __int64 v20; // r8
  PDEVICE_OBJECT v21; // r8
  __int64 v22; // rcx
  const wchar_t *v23; // rcx
  const wchar_t *v24; // r9
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp+48h] BYREF
  PDEVICE_OBJECT v29; // [rsp+A0h] [rbp+50h] BYREF

  v3 = 0LL;
  v4 = a2 - 96;
  v5 = 0LL;
  v29 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      *(_QWORD *)(v4 + 112),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_GetChildPdo_Start,
      a3,
      *(const wchar_t **)(v4 + 8),
      *(const wchar_t **)(v4 + 16),
      *(const wchar_t **)(*(_QWORD *)(v4 + 112) + 8LL),
      *(_DWORD *)(v4 + 4));
  v6 = 1;
  PdoAssociation = PiSwFindPdoAssociation(v4, (__int64)a1, 1);
  if ( (*(_DWORD *)(v4 + 4) & 2) != 0 )
  {
    v16 = 0;
    if ( PdoAssociation )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(PdoAssociation + 40) + 64LL);
      *(_DWORD *)(v22 + 8) &= ~8u;
      if ( (*(_DWORD *)(v22 + 8) & 4) != 0 )
      {
        PiSwProcessRemove(*(_QWORD *)(PdoAssociation + 40), 0);
        v4 = 0LL;
      }
    }
    goto LABEL_31;
  }
  if ( PdoAssociation )
  {
    v3 = *(PDEVICE_OBJECT *)(PdoAssociation + 40);
    *((_DWORD *)v3->DeviceExtension + 2) = *((_DWORD *)v3->DeviceExtension + 2) & 0xFFFFFFB7 | 8;
    v6 = 0;
LABEL_26:
    v16 = v6;
    goto LABEL_31;
  }
  if ( v7 == *((_QWORD *)IopRootDeviceNode + 4) )
  {
    if ( *(_QWORD *)(v4 + 80) )
    {
      p_DestinationString = (UNICODE_STRING *)(v4 + 72);
      if ( *(_WORD *)(v4 + 72) >= 2u )
      {
LABEL_12:
        v13 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)p_DestinationString, 0x746C6644u);
        if ( v13 )
        {
          if ( (byte_140EEFF64 & 0x40) != 0 )
            McTemplateK0zzq_EtwWriteTransfer(
              v12,
              v11,
              v14,
              *(const wchar_t **)(v4 + 8),
              *(const wchar_t **)(v4 + 16),
              *(_WORD *)(v4 + 200));
          ObfDereferenceObject(v13);
          if ( !*(_WORD *)(v4 + 200) )
            IoInvalidateDeviceRelations(a1, SingleBusRelations);
          v15 = *(_WORD *)(v4 + 200);
          if ( v15 != -1 )
            *(_WORD *)(v4 + 200) = v15 + 1;
          v16 = 0;
          goto LABEL_31;
        }
        goto LABEL_20;
      }
    }
    v10 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&SourceString, 3uLL);
    v5 = (WCHAR *)SourceString;
    if ( v10 >= 0 && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 )
    {
      p_DestinationString = &DestinationString;
      goto LABEL_12;
    }
  }
LABEL_20:
  v17 = *(_QWORD *)(v4 + 120);
  *(_WORD *)(v4 + 200) = 0;
  if ( v17 )
    PiSwMakePdoInactive(v17);
  v16 = 0;
  v18 = IoCreateDevice(PiSwDeviceDriverObject, 0x10u, 0LL, 0x22u, 0x80u, 0, &v29);
  v3 = v29;
  if ( v18 >= 0 )
  {
    DeviceExtension = v29->DeviceExtension;
    *(_OWORD *)DeviceExtension = 0LL;
    v20 = *(_QWORD *)(v4 + 152);
    if ( v20 && (int)ObSetSecurityObjectByPointer((__int64)v3, 0x1Cu, v20) < 0 )
    {
      IoDeleteDevice(v3);
      v3 = 0LL;
    }
    else
    {
      *(_QWORD *)DeviceExtension = v4;
      _InterlockedAdd((volatile signed __int32 *)v4, 1u);
      v3 = v29;
      v21 = v29;
      *(_QWORD *)(v4 + 120) = v29;
      DeviceExtension[2] |= 8u;
      v21->Flags &= ~0x80u;
      PiSwAddPdoAssociation(v4, a1, v21);
      v5 = (WCHAR *)SourceString;
    }
    goto LABEL_26;
  }
LABEL_31:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x57706E50u);
  if ( v3 )
    PsReferenceSiloContext(v3);
  if ( (byte_140EEFF64 & 0x40) != 0 )
  {
    if ( v4 )
    {
      v23 = *(const wchar_t **)(v4 + 16);
      v24 = *(const wchar_t **)(v4 + 8);
    }
    else
    {
      v24 = &word_140AEDAC0;
      v23 = &word_140AEDAC0;
    }
    McTemplateK0zztt_EtwWriteTransfer(
      (__int64)v23,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_GetChildPdo_Stop,
      PdoAssociation,
      v24,
      v23,
      v3 != 0LL,
      v16);
  }
  return v3;
}
