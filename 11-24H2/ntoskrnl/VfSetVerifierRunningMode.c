/*
 * XREFs of VfSetVerifierRunningMode @ 0x140B9D1F8
 * Callers:
 *     VfSetVerifierInformationEx @ 0x140B9E634 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140C3D83C (ViInitSystemPhase0.c)
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
  dword_140F04864 = a1;
  return result;
}
