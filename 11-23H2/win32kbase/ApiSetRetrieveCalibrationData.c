/*
 * XREFs of ApiSetRetrieveCalibrationData @ 0x1C0208118
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0187030 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C018CBD8 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetRetrieveCalibrationData(__int64 a1, __int128 *a2))(void)
{
  __int64 (*result)(void); // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  result = qword_1C0296268;
  if ( qword_1C0296268 )
  {
    result = (__int64 (*)(void))qword_1C0296268();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296270;
      if ( qword_1C0296270 )
      {
        v5 = *a2;
        return (__int64 (*)(void))qword_1C0296270(a1, &v5);
      }
    }
  }
  return result;
}
