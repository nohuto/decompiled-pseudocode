/*
 * XREFs of NvmeControllerRequeuePendingRequests @ 0x1400F41A4
 * Callers:
 *     NvmeControllerProcessPendingRequestForResetRecovery @ 0x14013761C (NvmeControllerProcessPendingRequestForResetRecovery.c)
 * Callees:
 *     NvmeControllerRequeueSQPendingRequests @ 0x1400F41F8 (NvmeControllerRequeueSQPendingRequests.c)
 */

__int64 __fastcall NvmeControllerRequeuePendingRequests(__int64 a1)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *(unsigned __int16 *)(a1 + 22); i = (unsigned int)(i + 1) )
    NvmeControllerRequeueSQPendingRequests(*(_QWORD *)(a1 + 728) + 192 * i);
  return NvmeControllerRequeueSQPendingRequests(*(_QWORD *)(a1 + 712));
}
