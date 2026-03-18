/*
 * XREFs of PnpDeviceCompletionRequestCreate @ 0x140835154
 * Callers:
 *     PiProcessNewDeviceNodeAsync @ 0x14082CDEC (PiProcessNewDeviceNodeAsync.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x140833C84 (PnpEnableWatchdog.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpDeviceCompletionRequestCreate(__int64 a1, int a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rbx

  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    *(_DWORD *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_QWORD *)(Pool2 + 24) = a3;
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 32) = a2;
    *(_DWORD *)(Pool2 + 40) = -1073741595;
    *(_QWORD *)(Pool2 + 64) = PnpEnableWatchdog(2, Pool2, (const UNICODE_STRING *)(a1 + 56));
  }
  return v7;
}
