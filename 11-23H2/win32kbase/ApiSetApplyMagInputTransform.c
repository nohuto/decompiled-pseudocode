/*
 * XREFs of ApiSetApplyMagInputTransform @ 0x1C0205A0C
 * Callers:
 *     RIMSetContactBoundary @ 0x1C018FD40 (RIMSetContactBoundary.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetApplyMagInputTransform(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02962F8;
  if ( qword_1C02962F8 )
  {
    result = (__int64 (*)(void))qword_1C02962F8();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296300;
      if ( qword_1C0296300 )
        return (__int64 (*)(void))qword_1C0296300(a1, a2);
    }
  }
  return result;
}
