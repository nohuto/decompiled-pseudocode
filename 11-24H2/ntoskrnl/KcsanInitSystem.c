/*
 * XREFs of KcsanInitSystem @ 0x1405AE2A0
 * Callers:
 *     KasanInitSystem @ 0x140C26690 (KasanInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MmKcsanGetIgnoredRangeList @ 0x140679C1C (MmKcsanGetIgnoredRangeList.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140A22450 (PsCreateSystemThread.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall KcsanInitSystem(int a1)
{
  HANDLE ThreadHandle; // [rsp+58h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  if ( a1 == 1 )
  {
    KcsaniTelemetryLock = 0LL;
  }
  else if ( (_DWORD)KeNumberProcessors_0 != 1 )
  {
    qword_140FCDC30 = MmKcsanGetIgnoredRangeList();
    if ( !qword_140FCDC30 )
      KeBugCheckEx(0x1F1u, 4uLL, 9uLL, 0LL, 0LL);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E07038, 0LL, 0LL);
    if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, KcsaniTelemetryThread, 0LL) >= 0 )
    {
      ObCloseHandle(ThreadHandle, 0);
      KcsaniValidationEnabled = 1;
    }
  }
}
