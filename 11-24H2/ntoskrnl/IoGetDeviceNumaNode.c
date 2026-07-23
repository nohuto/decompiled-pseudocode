/*
 * XREFs of IoGetDeviceNumaNode @ 0x140A8F1B0
 * Callers:
 *     IopGetNumaNodeInformation @ 0x140715728 (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x14044AED0 (KeQueryHighestNodeNumber.c)
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
