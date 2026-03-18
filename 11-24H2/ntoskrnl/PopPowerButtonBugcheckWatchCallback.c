/*
 * XREFs of PopPowerButtonBugcheckWatchCallback @ 0x14075CCC0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerButtonBugcheckConfigure @ 0x14075CBAC (PopPowerButtonBugcheckConfigure.c)
 */

void __fastcall PopPowerButtonBugcheckWatchCallback(void *a1)
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  PopPowerButtonBugcheckConfigure(a1, 1, &v1);
}
