/*
 * XREFs of sub_140009398 @ 0x140009398
 * Callers:
 *     sub_14002D524 @ 0x14002D524 (sub_14002D524.c)
 *     sub_14002DD48 @ 0x14002DD48 (sub_14002DD48.c)
 *     sub_14002EF8C @ 0x14002EF8C (sub_14002EF8C.c)
 *     sub_140031188 @ 0x140031188 (sub_140031188.c)
 *     sub_140034144 @ 0x140034144 (sub_140034144.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_140009398(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  void *result; // rax

  switch ( *(_DWORD *)(a1 + 4) )
  {
    case 1:
      *a3 = 15;
      result = &unk_1400123A0;
      break;
    case 2:
      *a3 = 19;
      result = &unk_140012170;
      break;
    case 3:
      *a3 = 21;
      result = &unk_140012740;
      break;
    default:
      *a3 = 22;
      result = &unk_140012530;
      break;
  }
  *a2 = result;
  return result;
}
