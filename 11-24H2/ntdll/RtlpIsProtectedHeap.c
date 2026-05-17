/*
 * XREFs of RtlpIsProtectedHeap @ 0x180097164
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800446C4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlSetHeapDebuggingInformation @ 0x180095C6C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetHeapInformation @ 0x180096E70 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x1800970B4 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpLockHeapForClone @ 0x180142A28 (RtlpLockHeapForClone.c)
 *     RtlpUnlockHeapForClone @ 0x180142C0C (RtlpUnlockHeapForClone.c)
 *     RtlpHpStackTraceHeapDisable @ 0x18014BF80 (RtlpHpStackTraceHeapDisable.c)
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
