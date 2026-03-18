/*
 * XREFs of ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C0207A40
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0089C90 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionUnlinkAndFreeThreadPointerData(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296A30;
  if ( qword_1C0296A30 )
  {
    result = (__int64 (*)(void))qword_1C0296A30();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296A38;
      if ( qword_1C0296A38 )
        return (__int64 (*)(void))qword_1C0296A38(a1, a2);
    }
  }
  return result;
}
