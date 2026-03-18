/*
 * XREFs of rimConvertCoordinatesWithRounding @ 0x1400AFCF8
 * Callers:
 *     RIMTransformPhysicalPointToScreen @ 0x1400AFA8C (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1400AFBC0 (RIMTransformPointerDevicePointToPhysical.c)
 *     RIMConvertPointCoordinates @ 0x1400AFC64 (RIMConvertPointCoordinates.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1401E202C (RIMUpdatePointerDeviceScalingInfo.c)
 * Callees:
 *     LongLongToLong @ 0x1400B74E0 (LongLongToLong.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, LONG *plResult)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  HRESULT v15; // eax
  int *v16; // rdx
  bool v17; // zf

  v6 = 0;
  v7 = a3;
  if ( a1 >= a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 63LL);
  if ( (int)v7 >= a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  v11 = a2 - a1;
  v12 = (a4 - (int)v7) * (__int64)(a5 - a1);
  v13 = 2 * v12;
  if ( v12 <= 0 )
    v14 = v13 - v11;
  else
    v14 = v11 + v13;
  v15 = LongLongToLong(v7 + v14 / (2LL * v11), plResult);
  v17 = v15 == 0;
  if ( !v15 )
  {
    if ( *v16 >= a4 )
      *v16 = a4 - 1;
    v17 = 1;
  }
  LOBYTE(v6) = v17;
  return v6;
}
