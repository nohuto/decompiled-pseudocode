/*
 * XREFs of sub_1400085BC @ 0x1400085BC
 * Callers:
 *     sub_140008634 @ 0x140008634 (sub_140008634.c)
 *     sub_1400087C0 @ 0x1400087C0 (sub_1400087C0.c)
 * Callees:
 *     sub_140008954 @ 0x140008954 (sub_140008954.c)
 */

__int64 sub_1400085BC()
{
  sub_140008954();
  return WdfVersionUnbind(&DestinationString, &unk_140018C50, qword_140019128);
}
