/*
 * XREFs of PiSwGetChildPdo @ 0x140AC044C
 * Callers:
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     IoInvalidateDeviceRelations @ 0x1404943F0 (IoInvalidateDeviceRelations.c)
 *     McTemplateK0zzq_EtwWriteTransfer @ 0x1405A4B68 (McTemplateK0zzq_EtwWriteTransfer.c)
 *     McTemplateK0zztt_EtwWriteTransfer @ 0x1405A4C50 (McTemplateK0zztt_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405A4E64 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PnpConcatPWSTR @ 0x14083E890 (PnpConcatPWSTR.c)
 *     ObSetSecurityObjectByPointer @ 0x14089F830 (ObSetSecurityObjectByPointer.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IoCreateDevice @ 0x14099E640 (IoCreateDevice.c)
 *     PiSwProcessRemove @ 0x1409A35FC (PiSwProcessRemove.c)
 *     PiSwMakePdoInactive @ 0x1409A38D4 (PiSwMakePdoInactive.c)
 *     PiSwFindPdoAssociation @ 0x140A767C0 (PiSwFindPdoAssociation.c)
 *     PiSwAddPdoAssociation @ 0x140A82210 (PiSwAddPdoAssociation.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  UNICODE_STRING *v20; // r8
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
  if ( (byte_140EEFA6C & 0x40) != 0 )
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
          if ( (byte_140EEFA6C & 0x40) != 0 )
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
    v20 = *(UNICODE_STRING **)(v4 + 152);
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
  if ( (byte_140EEFA6C & 0x40) != 0 )
  {
    if ( v4 )
    {
      v23 = *(const wchar_t **)(v4 + 16);
      v24 = *(const wchar_t **)(v4 + 8);
    }
    else
    {
      v24 = &word_140AD8570;
      v23 = &word_140AD8570;
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
