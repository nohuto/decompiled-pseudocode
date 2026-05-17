/*
 * XREFs of CsrFreeCaptureBuffer @ 0x1800A6DA0
 * Callers:
 *     CsrpClientConnectToServer @ 0x1800A6990 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, a1);
  return result;
}
