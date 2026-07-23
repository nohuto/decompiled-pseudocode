/*
 * XREFs of IopInitializeMdlCache @ 0x140717728
 * Callers:
 *     IoInitSystem @ 0x140C1C9C8 (IoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *IopInitializeMdlCache()
{
  __int64 *result; // rax

  IopMcData = 3148801;
  result = &qword_140F8C4D0;
  FeaturePfnArrayDebug = 0;
  qword_140F8C4C8 = 0LL;
  qword_140F8C4D8 = (__int64)&qword_140F8C4D0;
  qword_140F8C4D0 = (__int64)&qword_140F8C4D0;
  qword_140F8C4E8 = 0LL;
  return result;
}
