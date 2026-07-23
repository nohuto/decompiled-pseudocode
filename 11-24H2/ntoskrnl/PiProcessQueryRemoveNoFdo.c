/*
 * XREFs of PiProcessQueryRemoveNoFdo @ 0x140737F94
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpRestartDeviceNode @ 0x140721454 (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x140722134 (PipIsProblemReadonly.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     PiGetTargetDeviceNode @ 0x1409BBE78 (PiGetTargetDeviceNode.c)
 */

__int64 __fastcall PiProcessQueryRemoveNoFdo(__int64 a1)
{
  _DWORD *TargetDeviceNode; // rdi
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ecx

  TargetDeviceNode = (_DWORD *)PiGetTargetDeviceNode();
  v3 = 0;
  v4 = TargetDeviceNode[75];
  if ( ((v4 - 771) & 0xFFFFFFEE) == 0 && v4 != 787 )
  {
    if ( (TargetDeviceNode[99] & 0x6000) != 0 && !PipIsProblemReadonly((__int64)TargetDeviceNode, TargetDeviceNode[101]) )
      PipClearDevNodeProblem(v5);
    v6 = *(_DWORD *)(a1 + 152) & 2;
    if ( (TargetDeviceNode[99] & 0x6000) != 0 )
    {
      if ( !v6 )
        return (unsigned int)-1073741811;
    }
    else if ( v6 )
    {
      PipSetDevNodeProblem(TargetDeviceNode, *(unsigned int *)(a1 + 16), 0LL);
    }
    else
    {
      PnpRestartDeviceNode((__int64)TargetDeviceNode);
    }
  }
  return v3;
}
