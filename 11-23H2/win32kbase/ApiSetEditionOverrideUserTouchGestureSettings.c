/*
 * XREFs of ApiSetEditionOverrideUserTouchGestureSettings @ 0x1C0206EB4
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C0095570 (ReadPointerDeviceSettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionOverrideUserTouchGestureSettings(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296DE8;
  if ( qword_1C0296DE8 )
  {
    result = (__int64 (*)(void))qword_1C0296DE8();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296DF0;
      if ( qword_1C0296DF0 )
        return (__int64 (*)(void))qword_1C0296DF0(a1, a2);
    }
  }
  return result;
}
