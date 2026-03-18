/*
 * XREFs of ?IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ @ 0x1C00EEF44
 * Callers:
 *     GreIsProcessSystemCritical @ 0x1C0027D10 (GreIsProcessSystemCritical.c)
 *     UmfdSessionUninitialize @ 0x1C009BBC0 (UmfdSessionUninitialize.c)
 *     zzzCalcStartCursorHide @ 0x1C00EF950 (zzzCalcStartCursorHide.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Umfd::IsSessionGlobalsAreaAllocated(Gre::Umfd *this)
{
  return *(_QWORD *)(SGDGetSessionState(this) + 40) != 0LL;
}
