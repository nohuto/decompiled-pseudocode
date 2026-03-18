/*
 * XREFs of DpiKsrRecoveryShutdown @ 0x14024A170
 * Callers:
 *     DpiKsrCallback @ 0x140249CF0 (DpiKsrCallback.c)
 * Callees:
 *     DxgkStopAdapters @ 0x1401D2618 (DxgkStopAdapters.c)
 */

__int64 __fastcall DpiKsrRecoveryShutdown(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1465) )
    return DxgkStopAdapters();
  return result;
}
