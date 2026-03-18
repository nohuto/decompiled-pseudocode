/*
 * XREFs of GetData @ 0x1401A76E0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 GetData()
{
  __int64 result; // rax
  __int64 v1; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( (int)PsTlsGetValue(0LL, &v1) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1217);
    goto LABEL_5;
  }
  result = v1;
  if ( !v1 )
  {
    if ( PsGetCurrentThreadWin32Thread() )
LABEL_5:
      KeBugCheckEx(0x164u, 0x2CuLL, 0LL, 0LL, 0LL);
    return v1;
  }
  return result;
}
