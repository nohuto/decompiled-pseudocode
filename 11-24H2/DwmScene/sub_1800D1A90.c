/*
 * XREFs of sub_1800D1A90 @ 0x1800D1A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

_QWORD *__fastcall sub_1800D1A90(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Utils::Internal::SimpleCancellationToken>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
