/*
 * XREFs of PspEnableProcessTimerVirtualization @ 0x140A80A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnableProcessTimerVirtualization(__int64 a1)
{
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 4u);
  return 0LL;
}
