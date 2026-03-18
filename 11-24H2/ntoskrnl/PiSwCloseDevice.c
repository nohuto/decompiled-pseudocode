/*
 * XREFs of PiSwCloseDevice @ 0x140A93D94
 * Callers:
 *     PiSwIrpCleanup @ 0x1407308E0 (PiSwIrpCleanup.c)
 *     PiSwStopDestroy @ 0x140A102F4 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x140A86B50 (PiSwCloseDescendants.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x1404931D0 (IoInvalidateDeviceRelations.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A82A8 (McTemplateK0zz_EtwWriteTransfer.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BDDF0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x1409FA96C (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x1409FB4F8 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1409FB784 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwCloseDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v3; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  _QWORD *Buffer; // [rsp+40h] [rbp+8h] BYREF

  Buffer = (_QWORD *)a1;
  if ( (byte_140EEFD24 & 0x40) != 0 )
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
    if ( (byte_140EEFD24 & 0x40) != 0 )
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
