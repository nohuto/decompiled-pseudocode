/*
 * XREFs of Endpoint_SM_PurgeTransferRingQueuesIfNeeded @ 0x140032834
 * Callers:
 *     ESM_PurgingTransferRingQueuesIfNeeded @ 0x140032810 (ESM_PurgingTransferRingQueuesIfNeeded.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_SM_PurgeTransferRingQueuesIfNeeded(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  unsigned int i; // esi

  result = *(unsigned int *)(a1 + 32);
  if ( (result & 4) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 144);
    for ( i = 1; i <= *(_DWORD *)(v3 + 8); ++i )
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01033 + 1320))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(a1 + 144) + 48) + 72LL),
                 0LL,
                 0LL);
  }
  return result;
}
