/*
 * XREFs of PpSystemHiveLimitCallback @ 0x140716D90
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140A3E3F0 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PpSystemHiveLimitCallback(__int64 a1, unsigned int a2)
{
  PVOID v2; // rbx
  __int64 result; // rax
  _DWORD v4[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( a2 < *(_DWORD *)(a1 + 4) )
  {
    v2 = IopRootDeviceNode;
    v4[1] = 0;
    v4[2] = 0;
    PnpSystemHiveTooLarge = 0;
    v4[0] = 49;
    PpDevNodeLockTree(1LL);
    PipForDeviceNodeSubtree(v2, PiResetProblemDevicesWorker, v4);
    PpDevNodeUnlockTree(1LL);
    return PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 0xEu, 0, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    PnpSystemHiveTooLarge = 1;
  }
  return result;
}
