/*
 * XREFs of IoGetDeviceNumaNode @ 0x140A92A00
 * Callers:
 *     IopGetNumaNodeInformation @ 0x140717B98 (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x140456190 (KeQueryHighestNodeNumber.c)
 */

NTSTATUS __stdcall IoGetDeviceNumaNode(PDEVICE_OBJECT Pdo, PUSHORT NodeNumber)
{
  _DWORD *DeviceNode; // rax
  _WORD *v4; // rax

  if ( !Pdo )
    return -1073741811;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  v4 = Pdo->DeviceObjectExtension->DeviceNode;
  if ( *((_DWORD *)v4 + 165) <= 0xFFFFFFFD )
  {
    *NodeNumber = v4[330];
    return 0;
  }
  if ( !KeQueryHighestNodeNumber() )
  {
    *NodeNumber = 0;
    return 0;
  }
  return -1073741275;
}
