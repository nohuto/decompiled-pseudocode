/*
 * XREFs of DpiIsPowerRuntimeDStateTransition @ 0x1402BD284
 * Callers:
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiFdoHandleDevicePower @ 0x1403C4AF0 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x14040A974 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiFdoSetAdapterPowerState @ 0x14040AB28 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     <none>
 */

char __fastcall DpiIsPowerRuntimeDStateTransition(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = a1;
  if ( a1 && *(_DWORD *)(a1 + 16) == 1953656900 && *(_DWORD *)(a1 + 20) == 3 )
  {
    v2 = *(_QWORD *)(a1 + 2832);
    if ( !v2 )
      return v2;
    v1 = *(_QWORD *)(v2 + 64);
  }
  if ( !*(_BYTE *)(a1 + 1158) && !*(_BYTE *)(v1 + 482)
    || (LOBYTE(v2) = 1, *(_DWORD *)(a1 + 280) > 1u)
    || *(_BYTE *)(a1 + 483) )
  {
    LOBYTE(v2) = 0;
  }
  return v2;
}
