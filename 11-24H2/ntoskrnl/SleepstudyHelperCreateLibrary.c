/*
 * XREFs of SleepstudyHelperCreateLibrary @ 0x140A9B6C0
 * Callers:
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140C30C88 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 * Callees:
 *     SleepstudyHelperCreateLibraryEx @ 0x1404AAF60 (SleepstudyHelperCreateLibraryEx.c)
 */

__int64 __fastcall SleepstudyHelperCreateLibrary(int a1, _QWORD *a2)
{
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[2] = 0;
  v3[1] = a1;
  v3[0] = 1;
  return SleepstudyHelperCreateLibraryEx(v3, a2);
}
