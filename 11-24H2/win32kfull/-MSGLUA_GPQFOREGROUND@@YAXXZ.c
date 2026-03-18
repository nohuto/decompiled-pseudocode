/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1400942AC
 * Callers:
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1400941F0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     EditionLLMouseWheelHook @ 0x140094C70 (EditionLLMouseWheelHook.c)
 *     EditionLLMouseButtonHook @ 0x140095CD0 (EditionLLMouseButtonHook.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1401A79E0 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1401D22A0 (EditionxxxReportMouseBreakToAccessibility.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14022FDC8 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1402305F0 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxInjectTouchInput @ 0x140234EBC (xxxInjectTouchInput.c)
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x140273C6C (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x140274624 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400942CC (-MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall MSGLUA_GPQFOREGROUND(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rax

  v2 = PtiCurrent(a1, a2);
  MSGLUA_GPQFOREGROUNDPTI(v2);
}
