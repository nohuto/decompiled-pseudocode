/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180035BE0
 * Callers:
 *     CsrpClientConnectToServer @ 0x1800357D0 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
