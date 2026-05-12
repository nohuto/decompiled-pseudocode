/*
 * XREFs of NvmeAdapterConnectControllerWorker @ 0x1400CDC00
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterConnectControllerInternal @ 0x1400CD9D0 (NvmeAdapterConnectControllerInternal.c)
 */

LONG __fastcall NvmeAdapterConnectControllerWorker(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 40) = NvmeAdapterConnectControllerInternal(
                           *(_QWORD *)a2,
                           *(_QWORD *)(a2 + 8),
                           *(_QWORD *)(a2 + 16),
                           *(_QWORD *)(a2 + 24),
                           (_BYTE *)(a2 + 48),
                           (PVOID *)(a2 + 32));
  return KeSetEvent((PRKEVENT)(a2 + 56), 0, 0);
}
