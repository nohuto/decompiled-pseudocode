/*
 * XREFs of NvmeControllerTerminateCommandTimeoutDetectThread @ 0x1400F5B04
 * Callers:
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 *     NvmeAdapterStorMQControllerRemoveWorker @ 0x1400D9840 (NvmeAdapterStorMQControllerRemoveWorker.c)
 *     NvmeControllerDeleteErrorRecoveryContext @ 0x1400ECAA0 (NvmeControllerDeleteErrorRecoveryContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerTerminateCommandTimeoutDetectThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 1288);
  if ( result )
  {
    result = *(_QWORD *)(result + 40);
    if ( result )
    {
      if ( *(_QWORD *)(result + 224) )
      {
        *(_QWORD *)(a1 + 136) |= 0x80000000uLL;
        _InterlockedOr(v4, 0);
        KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 200LL), 0, 0);
        v3 = *(_QWORD *)(a1 + 1288);
        Timeout.QuadPart = -30000000LL;
        ZwWaitForSingleObject(*(HANDLE *)(*(_QWORD *)(v3 + 40) + 224LL), 0, &Timeout);
        ZwClose(*(HANDLE *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 224LL));
        result = *(_QWORD *)(a1 + 1288);
        *(_QWORD *)(*(_QWORD *)(result + 40) + 224LL) = 0LL;
      }
    }
  }
  return result;
}
