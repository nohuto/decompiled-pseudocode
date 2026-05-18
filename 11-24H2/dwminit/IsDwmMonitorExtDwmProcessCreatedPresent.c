/*
 * XREFs of IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180003628
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000B030 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpTerminateSessionProcess @ 0x18000E730 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180003C55 (ApiSetQueryApiSetPresence_0.c)
 */

char IsDwmMonitorExtDwmProcessCreatedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18001AAD8 == 1 )
    return 1;
  if ( dword_18001AAD8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"JL", &v1) < 0 )
    return 0;
  result = v1;
  dword_18001AAD8 = 2 - (v1 != 0);
  return result;
}
