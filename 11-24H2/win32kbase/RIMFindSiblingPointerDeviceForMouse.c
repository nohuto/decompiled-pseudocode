/*
 * XREFs of RIMFindSiblingPointerDeviceForMouse @ 0x1401DCEC4
 * Callers:
 *     RIMApplyPTPConfigRemedyWorker @ 0x1400F1328 (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1401DCF20 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouse(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx

  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 56);
  LODWORD(a2) = RIMFindSiblingPointerDeviceForMouseWorker(a1, a2);
  RIMUnlockExclusive(UserSessionState + 56);
  return (unsigned int)a2;
}
