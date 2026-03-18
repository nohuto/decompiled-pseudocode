/*
 * XREFs of ApiSetPointerPromotionOnPointerInputRetrieval @ 0x1C0207F9C
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C01D9EE0 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetPointerPromotionOnPointerInputRetrieval(
        unsigned __int16 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296990;
  if ( qword_1C0296990 )
  {
    result = (__int64 (*)(void))qword_1C0296990();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296998;
      if ( qword_1C0296998 )
        return (__int64 (*)(void))qword_1C0296998(a1, a2, a3, a4);
    }
  }
  return result;
}
