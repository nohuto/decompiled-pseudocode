/*
 * XREFs of RtlpIsProtectedHeap @ 0x18002B7C4
 * Callers:
 *     RtlpSetRequestedFrontEndHeap @ 0x18002B720 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapInformation @ 0x18002BE70 (RtlSetHeapInformation.c)
 *     RtlSetHeapDebuggingInformation @ 0x1801126FC (RtlSetHeapDebuggingInformation.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpLockHeapForClone @ 0x180140BD8 (RtlpLockHeapForClone.c)
 *     RtlpUnlockHeapForClone @ 0x180140FBC (RtlpUnlockHeapForClone.c)
 *     RtlpHpStackTraceHeapDisable @ 0x18014A330 (RtlpHpStackTraceHeapDisable.c)
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
