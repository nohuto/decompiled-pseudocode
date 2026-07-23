/*
 * XREFs of KcsanInitSystem @ 0x1405AB210
 * Callers:
 *     KasanInitSystem @ 0x140C286E0 (KasanInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MmKcsanGetIgnoredRangeList @ 0x14067ADFC (MmKcsanGetIgnoredRangeList.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1408F8C00 (PsCreateSystemThread.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
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
    qword_140FCECB0 = MmKcsanGetIgnoredRangeList();
    if ( !qword_140FCECB0 )
      KeBugCheckEx(0x1F1u, 4uLL, 9uLL, 0LL, 0LL);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E07038, 0LL, 0LL);
    if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, KcsaniTelemetryThread, 0LL) >= 0 )
    {
      ObCloseHandle(ThreadHandle, 0);
      KcsaniValidationEnabled = 1;
    }
  }
}
