/*
 * XREFs of IopQueueDeviceResetEvent @ 0x14071F224
 * Callers:
 *     PiProcessDeviceResetAction @ 0x1405A1C18 (PiProcessDeviceResetAction.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IopMarkDeviceToBeReset @ 0x14071F0B0 (IopMarkDeviceToBeReset.c)
 *     PipSetDevNodeStateFlags @ 0x140722288 (PipSetDevNodeStateFlags.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall IopQueueDeviceResetEvent(struct _DEVICE_OBJECT *BugCheckParameter2, _BYTE *a2)
{
  _DWORD *DeviceNode; // rdi
  int v5; // eax
  __int64 result; // rax
  int v7; // ecx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v10; // rcx
  unsigned __int16 *v11; // rdi
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx

  if ( !BugCheckParameter2 )
    goto LABEL_26;
  DeviceNode = BugCheckParameter2->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (v5 = DeviceNode[99], (v5 & 0x20000) != 0) )
  {
    IoAddTriageDumpDataBlock((ULONG)BugCheckParameter2, (PVOID)BugCheckParameter2->Size);
    DriverObject = BugCheckParameter2->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &BugCheckParameter2->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)BugCheckParameter2->DriverObject->DriverName.Buffer,
          (PVOID)BugCheckParameter2->DriverObject->DriverName.Length);
      }
    }
    v10 = (char *)BugCheckParameter2->DeviceObjectExtension->DeviceNode;
    if ( v10 )
    {
      v11 = (unsigned __int16 *)(v10 + 40);
      IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)0x388);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v11 + 1), (PVOID)*v11);
      }
      v12 = (char *)BugCheckParameter2->DeviceObjectExtension->DeviceNode + 56;
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)BugCheckParameter2->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)BugCheckParameter2->DeviceObjectExtension->DeviceNode + 28));
      }
      v13 = *((_QWORD *)BugCheckParameter2->DeviceObjectExtension->DeviceNode + 2);
      if ( v13 && *(_WORD *)(v13 + 56) )
      {
        IoAddTriageDumpDataBlock(v13 + 56, (PVOID)2);
        v14 = *((_QWORD *)BugCheckParameter2->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 64), (PVOID)*(unsigned __int16 *)(v14 + 56));
      }
    }
LABEL_26:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  *a2 = 0;
  if ( (v5 & 0x10) == 0 )
    return 3221226166LL;
  result = PipSetDevNodeStateFlags(BugCheckParameter2);
  if ( (int)result >= 0 && (_DWORD)result != 255 )
  {
    v7 = DeviceNode[75];
    if ( (unsigned int)(v7 - 787) <= 1 )
    {
      PipSetDevNodeProblem(DeviceNode, 54LL, 0LL);
      return IopMarkDeviceToBeReset((ULONG_PTR)BugCheckParameter2);
    }
    else if ( v7 == 785 )
    {
      return 259LL;
    }
    else
    {
      result = PnpRequestDeviceRemoval(DeviceNode, 0LL, 54LL);
      if ( (int)result >= 0 )
        *a2 = 1;
    }
  }
  return result;
}
