/*
 * XREFs of AVrfpEnableHeapVerifier @ 0x180131E50
 * Callers:
 *     AVrfpEnableVerifierOptions @ 0x18011E874 (AVrfpEnableVerifierOptions.c)
 * Callees:
 *     <none>
 */

char AVrfpEnableHeapVerifier()
{
  if ( (AVrfpVerifierFlags & 1) != 0 )
  {
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x2000000;
    *(_DWORD *)RtlpDebugPageHeapTable |= 1u;
  }
  else if ( (AVrfpVerifierFlags & 0x8000) != 0 )
  {
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x2000000;
  }
  return 1;
}
