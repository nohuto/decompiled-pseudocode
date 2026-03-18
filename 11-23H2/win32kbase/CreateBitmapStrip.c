/*
 * XREFs of CreateBitmapStrip @ 0x1C00D60FC
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CreateBitmapStrip())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0295F70;
  if ( qword_1C0295F70 )
    return (__int64 (*)(void))qword_1C0295F70();
  return result;
}
