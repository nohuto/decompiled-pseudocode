/*
 * XREFs of RtlpIsProtectedHeap @ 0x1800027C4
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x18000116C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180002714 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800983A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpLockHeapForClone @ 0x180144118 (RtlpLockHeapForClone.c)
 *     RtlpUnlockHeapForClone @ 0x1801442FC (RtlpUnlockHeapForClone.c)
 *     RtlpHpStackTraceHeapDisable @ 0x18014D530 (RtlpHpStackTraceHeapDisable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpIsProtectedHeap(__int64 a1)
{
  int v1; // eax

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v1 = *(unsigned __int16 *)(a1 + 30) >> 1;
  else
    LOBYTE(v1) = *(_BYTE *)(a1 + 563);
  return v1 & 1;
}
