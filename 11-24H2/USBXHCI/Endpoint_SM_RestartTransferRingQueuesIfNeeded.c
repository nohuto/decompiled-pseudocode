/*
 * XREFs of Endpoint_SM_RestartTransferRingQueuesIfNeeded @ 0x1400328F4
 * Callers:
 *     ESM_RestartingTransferRingQueuesIfNeeded @ 0x1400328D0 (ESM_RestartingTransferRingQueuesIfNeeded.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_SM_RestartTransferRingQueuesIfNeeded(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  unsigned int i; // edi

  result = *(unsigned int *)(a1 + 32);
  if ( (result & 4) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 144);
    for ( i = 1; i <= *(_DWORD *)(v3 + 8); ++i )
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1232))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(a1 + 144) + 48) + 72LL));
  }
  return result;
}
