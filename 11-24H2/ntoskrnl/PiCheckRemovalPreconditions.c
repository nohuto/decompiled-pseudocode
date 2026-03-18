/*
 * XREFs of PiCheckRemovalPreconditions @ 0x140A0E1E8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpFinalizeVetoedRemove @ 0x140A0C4C4 (PnpFinalizeVetoedRemove.c)
 *     PiGetTargetDeviceNode @ 0x140A0DA74 (PiGetTargetDeviceNode.c)
 */

__int64 __fastcall PiCheckRemovalPreconditions(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 TargetDeviceNode; // r9
  __int64 v4; // r10
  int v5; // r11d
  __int64 result; // rax
  unsigned __int64 v7; // rdx

  TargetDeviceNode = PiGetTargetDeviceNode(a2);
  result = 0LL;
  if ( (v5 & 0xFFFFFFFB) == 0 )
  {
    if ( (*(_DWORD *)(TargetDeviceNode + 396) & 0x1000) != 0 )
    {
      v7 = 1LL;
LABEL_9:
      PnpFinalizeVetoedRemove(v2, v7, (UNICODE_STRING *)(TargetDeviceNode + 40));
      return 2147483688LL;
    }
    if ( !v5 && *(_DWORD *)(v4 + 16) == 22 && *(_DWORD *)(TargetDeviceNode + 600) )
    {
      v7 = 10LL;
      goto LABEL_9;
    }
  }
  return result;
}
