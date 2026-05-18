/*
 * XREFs of sub_180020B80 @ 0x180020B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

_QWORD *__fastcall sub_180020B80(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Utils::TelemTraceLoggerAttributes>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
