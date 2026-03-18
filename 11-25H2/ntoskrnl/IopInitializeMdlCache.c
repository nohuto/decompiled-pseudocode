/*
 * XREFs of IopInitializeMdlCache @ 0x14070DA98
 * Callers:
 *     IoInitSystem @ 0x140C098E8 (IoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *IopInitializeMdlCache()
{
  __int64 *result; // rax

  IopMcData = 3148801;
  result = &qword_140F8BB10;
  FeaturePfnArrayDebug = 0;
  qword_140F8BB08 = 0LL;
  qword_140F8BB18 = (__int64)&qword_140F8BB10;
  qword_140F8BB10 = (__int64)&qword_140F8BB10;
  qword_140F8BB28 = 0LL;
  return result;
}
