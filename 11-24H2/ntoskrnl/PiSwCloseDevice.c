/*
 * XREFs of PiSwCloseDevice @ 0x140A90544
 * Callers:
 *     PiSwIrpCleanup @ 0x14072E8F0 (PiSwIrpCleanup.c)
 *     PiSwStopDestroy @ 0x1409BE704 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x140A81628 (PiSwCloseDescendants.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x14048DB00 (IoInvalidateDeviceRelations.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A5298 (McTemplateK0zz_EtwWriteTransfer.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x1409F32DC (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x1409F3E68 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1409F40F4 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwCloseDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v3; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  _QWORD *Buffer; // [rsp+40h] [rbp+8h] BYREF

  Buffer = (_QWORD *)a1;
  if ( (byte_140EEFF64 & 0x40) != 0 )
  {
    McTemplateK0zz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_CloseDevice,
      a3,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16));
    a1 = (__int64)Buffer;
  }
  if ( *(_QWORD *)(a1 + 88) )
  {
    PiSwQueuedCreateInfoFree(*(PVOID *)(a1 + 88));
    Buffer[11] = 0LL;
    a1 = (__int64)Buffer;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    *(_DWORD *)(a1 + 4) |= 2u;
    v3 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(Buffer[14], 0x746C6644u);
    v4 = v3;
    if ( v3 )
    {
      IoInvalidateDeviceRelations(v3, SingleBusRelations);
      ObfDereferenceObject(v4);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 112) )
    {
      PiSwBusRelationRemove((const wchar_t **)a1, a2, a3);
      a1 = (__int64)Buffer;
    }
    if ( (byte_140EEFF64 & 0x40) != 0 )
      McTemplateK0zz_EtwWriteTransfer(
        a1,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
        a3,
        *(const wchar_t **)(a1 + 8),
        *(const wchar_t **)(a1 + 16));
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    PiSwDeviceDereference(Buffer);
  }
}
