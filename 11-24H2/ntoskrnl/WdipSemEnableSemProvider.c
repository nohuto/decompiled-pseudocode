/*
 * XREFs of WdipSemEnableSemProvider @ 0x1407A3384
 * Callers:
 *     WdipSemCleanStart @ 0x1407A0DC0 (WdipSemCleanStart.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x140A48730 (WdipSemEnableDisableTrace.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 */

__int64 WdipSemEnableSemProvider()
{
  NTSTATUS v0; // ecx
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  RegHandle = 0LL;
  v0 = WdipSemEnableDisableTrace(
         _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId),
         (unsigned int)&WDI_SEM_PROVIDER,
         0,
         0,
         0,
         1);
  if ( v0 >= 0 )
  {
    v0 = WdipSemEnableDisableTrace(
           _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
           (unsigned int)&WDI_SEM_PROVIDER,
           0,
           0,
           0,
           1);
    if ( v0 >= 0 && !WdipSemRegHandle )
    {
      v0 = EtwRegister(&WDI_SEM_PROVIDER, 0LL, 0LL, &RegHandle);
      if ( v0 >= 0 )
        WdipSemRegHandle = RegHandle;
    }
  }
  return (unsigned int)v0;
}
