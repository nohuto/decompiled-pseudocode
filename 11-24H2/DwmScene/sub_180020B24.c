/*
 * XREFs of sub_180020B24 @ 0x180020B24
 * Callers:
 *     sub_180020644 @ 0x180020644 (sub_180020644.c)
 *     sub_180022D60 @ 0x180022D60 (sub_180022D60.c)
 * Callees:
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 */

__int64 sub_180020B24()
{
  __int64 result; // rax
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  result = o__aligned_malloc(160LL, 8LL);
  if ( !result )
  {
    pExceptionObject[1] = "bad allocation";
    pExceptionObject[0] = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)pExceptionObject;
  }
  return result;
}
