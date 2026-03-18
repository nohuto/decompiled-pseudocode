/*
 * XREFs of Endpoint_SM_RestartTransferRingQueuesIfNeeded @ 0x140034374
 * Callers:
 *     ESM_RestartingTransferRingQueuesIfNeeded @ 0x140034350 (ESM_RestartingTransferRingQueuesIfNeeded.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_SM_RestartTransferRingQueuesIfNeeded(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  unsigned int i; // edi

  result = *(unsigned int *)(a1 + 32);
  if ( (result & 4) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 136);
    for ( i = 1; i <= *(_DWORD *)(v3 + 8); ++i )
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1232))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(a1 + 136) + 48) + 72LL));
  }
  return result;
}
