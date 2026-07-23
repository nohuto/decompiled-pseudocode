/*
 * XREFs of PopUmpoSendPowerRequestAction @ 0x1407506C4
 * Callers:
 *     PopPowerRequestNotificationsBegin @ 0x14073DC54 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x140A4C6BC (PopPowerRequestHandleRequestUpdate.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall PopUmpoSendPowerRequestAction(int a1, int a2, char a3)
{
  _DWORD Src[4]; // [rsp+20h] [rbp-58h] BYREF
  char v8; // [rsp+30h] [rbp-48h]

  memset_0(Src, 0, 0x48uLL);
  Src[0] = 16;
  Src[2] = a1;
  Src[3] = a2;
  v8 = a3;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
}
