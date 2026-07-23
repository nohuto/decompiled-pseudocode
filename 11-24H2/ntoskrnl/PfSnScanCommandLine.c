/*
 * XREFs of PfSnScanCommandLine @ 0x140949628
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 *     PfSnCalculateScenarioNameAndHash @ 0x1409494C8 (PfSnCalculateScenarioNameAndHash.c)
 * Callees:
 *     PfSnGetUnsafeProcessParameters @ 0x14094A028 (PfSnGetUnsafeProcessParameters.c)
 *     PfSnCaptureParamBlockString @ 0x14094A08C (PfSnCaptureParamBlockString.c)
 *     PfSnParsePrefetchParam @ 0x14094A0DC (PfSnParsePrefetchParam.c)
 *     PfSnHashUnsafeUnicodeString @ 0x140A50A3C (PfSnHashUnsafeUnicodeString.c)
 */

__int64 __fastcall PfSnScanCommandLine(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // ebx
  __int64 UnsafeProcessParameters; // rax
  __int64 result; // rax
  int v9; // eax
  int v10; // edi
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v12[3]; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v12[0] = 0LL;
  v11 = 0LL;
  v3 = 0;
  v13 = 0;
  UnsafeProcessParameters = PfSnGetUnsafeProcessParameters();
  if ( !UnsafeProcessParameters )
    return 3221225865LL;
  result = PfSnCaptureParamBlockString(UnsafeProcessParameters, UnsafeProcessParameters + 112, v12);
  if ( (int)result >= 0 )
  {
    v9 = PfSnParsePrefetchParam(v12, &v13);
    v10 = v13;
    if ( v9 < 0 )
      v10 = 0;
    if ( !a3 )
      goto LABEL_6;
    result = PfSnHashUnsafeUnicodeString(v12, &v11);
    if ( (int)result >= 0 )
    {
      v3 = v11;
LABEL_6:
      *a1 = v3;
      result = 0LL;
      *a2 = v10;
    }
  }
  return result;
}
