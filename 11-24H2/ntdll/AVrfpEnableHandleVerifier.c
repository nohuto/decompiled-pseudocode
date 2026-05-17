/*
 * XREFs of AVrfpEnableHandleVerifier @ 0x180131DD8
 * Callers:
 *     AVrfpEnableVerifierOptions @ 0x18011E874 (AVrfpEnableVerifierOptions.c)
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     NtSetInformationProcess @ 0x180162010 (NtSetInformationProcess.c)
 */

__int64 AVrfpEnableHandleVerifier()
{
  int v0; // ebx
  int v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( !AVrfpHandleTraces || (HIDWORD(v4) = AVrfpHandleTraces, v0 = NtSetInformationProcess(-1LL, 32LL, &v4), v0 < 0) )
  {
    v3 = 0;
    v1 = NtSetInformationProcess(-1LL, 32LL, &v3);
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return (unsigned int)v0;
}
