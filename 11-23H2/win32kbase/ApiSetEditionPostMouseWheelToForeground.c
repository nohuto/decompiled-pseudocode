/*
 * XREFs of ApiSetEditionPostMouseWheelToForeground @ 0x1C02073D4
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA2E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     EditionPostMouseWheelToForeground @ 0x1C0232EDC (EditionPostMouseWheelToForeground.c)
 */

__int64 (*__fastcall ApiSetEditionPostMouseWheelToForeground(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8,
        __int64 *a9))(void)
{
  __int64 (*result)(void); // rax
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+58h] [rbp-10h] BYREF

  result = qword_1C02963E8;
  if ( qword_1C02963E8 )
  {
    result = (__int64 (*)(void))qword_1C02963E8();
    if ( (int)result >= 0 )
    {
      v15 = 0LL;
      if ( a8 )
        v15 = *a8;
      v14 = 0LL;
      if ( a9 )
        v14 = *a9;
      return (__int64 (*)(void))EditionPostMouseWheelToForeground(
                                  a1,
                                  a2,
                                  a3,
                                  a4,
                                  a5,
                                  a6,
                                  a7,
                                  (unsigned __int64)&v15 & -(__int64)(a8 != 0LL),
                                  (unsigned __int64)&v14 & -(__int64)(a9 != 0LL));
    }
  }
  return result;
}
