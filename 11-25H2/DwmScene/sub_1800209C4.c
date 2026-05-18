/*
 * XREFs of sub_1800209C4 @ 0x1800209C4
 * Callers:
 *     sub_1800204E4 @ 0x1800204E4 (sub_1800204E4.c)
 *     sub_180022C00 @ 0x180022C00 (sub_180022C00.c)
 * Callees:
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 */

__int64 sub_1800209C4()
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
