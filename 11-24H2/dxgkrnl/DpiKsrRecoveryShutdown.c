/*
 * XREFs of DpiKsrRecoveryShutdown @ 0x140250FA0
 * Callers:
 *     DpiKsrCallback @ 0x140250B20 (DpiKsrCallback.c)
 * Callees:
 *     DxgkStopAdapters @ 0x1401D78C8 (DxgkStopAdapters.c)
 */

__int64 __fastcall DpiKsrRecoveryShutdown(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1465) )
    return DxgkStopAdapters();
  return result;
}
