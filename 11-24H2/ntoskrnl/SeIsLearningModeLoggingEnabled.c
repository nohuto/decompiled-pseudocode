/*
 * XREFs of SeIsLearningModeLoggingEnabled @ 0x14046453C
 * Callers:
 *     PsConvertToGuiThread @ 0x140AC9700 (PsConvertToGuiThread.c)
 * Callees:
 *     <none>
 */

char __fastcall SeIsLearningModeLoggingEnabled(__int64 a1)
{
  return *(_BYTE *)(a1 + 203) & 1;
}
