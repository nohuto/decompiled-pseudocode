/*
 * XREFs of ApiSetRetrieveCalibrationData @ 0x140155EE4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RetrieveCalibrationData @ 0x14023B734 (RetrieveCalibrationData.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetRetrieveCalibrationData(__int64 a1, __int128 *a2))(void)
{
  __int64 (*result)(void); // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4496LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      v5 = *a2;
      return (__int64 (*)(void))RetrieveCalibrationData(a1, &v5);
    }
  }
  return result;
}
