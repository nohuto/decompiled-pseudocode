/*
 * XREFs of VfSetVerifierInformationEx @ 0x140B9E634
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     VfFreeCapturedUnicodeString @ 0x140B84E64 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140B84FCC (VfProbeAndCaptureUnicodeString.c)
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     VfSetVerifierRunningMode @ 0x140B9D1F8 (VfSetVerifierRunningMode.c)
 *     VfWdSetCancelTimeout @ 0x140B9E9B8 (VfWdSetCancelTimeout.c)
 */

__int64 __fastcall VfSetVerifierInformationEx(int *a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ebx
  __int128 v6; // [rsp+28h] [rbp-30h] BYREF
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  v2 = a1[6];
  v3 = *a1;
  if ( !v3 || (v4 = VfSetVerifierRunningMode(v3), v4 >= 0) )
  {
    if ( !v2 )
      goto LABEL_7;
    if ( v2 == -1 )
      v2 = 0;
    v4 = VfWdSetCancelTimeout(v2);
    if ( v4 >= 0 )
    {
LABEL_7:
      ++dword_140F04860;
      v4 = VfProbeAndCaptureUnicodeString((__int64)&v6, (unsigned __int64)(a1 + 2), 64LL);
      if ( v4 >= 0 )
      {
        VfDriverLock();
        v7 = xmmword_140F04868;
        xmmword_140F04868 = v6;
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
        VfFreeCapturedUnicodeString((__int64)&v7);
      }
    }
  }
  return (unsigned int)v4;
}
