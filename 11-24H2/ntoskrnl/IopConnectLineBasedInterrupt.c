/*
 * XREFs of IopConnectLineBasedInterrupt @ 0x140A11790
 * Callers:
 *     IoConnectInterruptEx @ 0x140A11B20 (IoConnectInterruptEx.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopGetInterruptConnectionData @ 0x140A11E14 (IopGetInterruptConnectionData.c)
 *     IoDisconnectInterrupt @ 0x140A121C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopConnectLineBasedInterrupt(struct _DEVICE_OBJECT *a1, _QWORD *a2, __int64 a3)
{
  _DWORD *DeviceNode; // rax

  *a2 = 0LL;
  if ( a1 && (DeviceNode = a1->DeviceObjectExtension->DeviceNode) != 0LL && (DeviceNode[99] & 0x20000) == 0 && a3 )
    return IopGetInterruptConnectionData(a1);
  else
    return 3221225485LL;
}
