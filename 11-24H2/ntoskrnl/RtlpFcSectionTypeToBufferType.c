/*
 * XREFs of RtlpFcSectionTypeToBufferType @ 0x14078D340
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFcSectionTypeToBufferType(int a1)
{
  int v1; // eax
  _DWORD *v2; // rdx
  _DWORD v4[4]; // [rsp+0h] [rbp-28h] BYREF

  v1 = 0;
  v2 = v4;
  do
    *v2++ = v1++;
  while ( v1 < 4 );
  return (unsigned int)v4[a1];
}
