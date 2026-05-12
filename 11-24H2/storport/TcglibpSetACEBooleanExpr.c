/*
 * XREFs of TcglibpSetACEBooleanExpr @ 0x14013FA60
 * Callers:
 *     TcglibpConfigureLockingSp @ 0x14013F864 (TcglibpConfigureLockingSp.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008578C (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x14013EF38 (TcglibpCallMethod.c)
 */

__int64 TcglibpSetACEBooleanExpr(int **a1, __int64 a2, __int64 a3, ...)
{
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  TcglibEalLogCommand(*a1, "SetACEBooleanExpr", a3, 23, v7, 0LL);
  return TcglibpCallMethod(
           (__int64)a1,
           a2,
           a3,
           0x600000017LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenSetACEBooleanExpr,
           (__int64)va,
           0LL,
           0LL,
           0LL,
           0LL);
}
