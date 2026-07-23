/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180024190
 * Callers:
 *     CsrpClientConnectToServer @ 0x180023D80 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
