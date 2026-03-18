/*
 * XREFs of VfSetVerifierRunningMode @ 0x140B9B1F8
 * Callers:
 *     VfSetVerifierInformationEx @ 0x140B9C634 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140C3B6E4 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfSetVerifierRunningMode(int a1)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 3 )
    return 3221225485LL;
  VfVerifyMode = a1;
  result = 0LL;
  dword_140F03F04 = a1;
  return result;
}
