/*
 * XREFs of PiProcessQueryRemoveNoFdo @ 0x14072DDD4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpRestartDeviceNode @ 0x1407177C4 (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x1407184A4 (PipIsProblemReadonly.c)
 *     PiGetTargetDeviceNode @ 0x14082F66C (PiGetTargetDeviceNode.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
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
