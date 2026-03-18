/*
 * XREFs of PopUmpoSendPowerRequestOverrideCleanup @ 0x1409BAC40
 * Callers:
 *     PopPowerRequestDelete @ 0x1409BAA40 (PopPowerRequestDelete.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PopUmpoSendPowerRequestOverrideCleanup(__int64 a1)
{
  int v2; // eax
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(Src, 0, 0x48uLL);
  v2 = *(_DWORD *)(a1 + 36);
  Src[0] = 9;
  Src[2] = v2;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 0, 0LL);
}
