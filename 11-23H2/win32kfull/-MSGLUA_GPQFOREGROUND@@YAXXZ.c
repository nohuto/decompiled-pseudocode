/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C009995C
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C000A61C (xxxInternalKeyEventDirect.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C0082D00 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C00EA4B0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AAE3C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01AB5C0 (EditionChangeForegroundQueueForMouseInput.c)
 *     EditionLLMouseButtonHook @ 0x1C01ABA90 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01ABC70 (EditionLLMouseWheelHook.c)
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1C01ABDA0 (EditionxxxReportMouseBreakToAccessibility.c)
 *     xxxInjectTouchInput @ 0x1C01AFFF4 (xxxInjectTouchInput.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void MSGLUA_GPQFOREGROUND(void)
{
  struct tagTHREADINFO *v0; // rax

  v0 = PtiCurrentShared();
  EtwTraceUIPIInputError(v0, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432LL));
}
