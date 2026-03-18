/*
 * XREFs of IopInitializeMdlCache @ 0x140719B98
 * Callers:
 *     IoInitSystem @ 0x140C1A988 (IoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *IopInitializeMdlCache()
{
  __int64 *result; // rax

  IopMcData = 3148801;
  result = &qword_140F8C250;
  FeaturePfnArrayDebug = 0;
  qword_140F8C248 = 0LL;
  qword_140F8C258 = (__int64)&qword_140F8C250;
  qword_140F8C250 = (__int64)&qword_140F8C250;
  qword_140F8C268 = 0LL;
  return result;
}
