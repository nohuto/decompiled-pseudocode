/*
 * XREFs of ?SendConsoleDisplayWnf@@YAXH@Z @ 0x140152290
 * Callers:
 *     PowerConnectionEvent @ 0x14014C44C (PowerConnectionEvent.c)
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

void __fastcall SendConsoleDisplayWnf(int a1)
{
  bool v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 > 0;
  ZwUpdateWnfStateData(&WNF_PO_CONSOLE_DISPLAY_REQUEST_ACTIVE, &v1, 1LL, 0LL, 0LL);
}
