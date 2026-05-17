/*
 * XREFs of EtwpCreateEtwThread @ 0x1800B4ED0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800B598C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800B4FC0 (RtlpCreateUserThreadEx.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwResumeThread @ 0x180163C60 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x180163C80 (NtTerminateThread.c)
 */

__int64 EtwpCreateEtwThread()
{
  int v0; // eax

  if ( (int)RtlpCreateUserThreadEx(-1, 0, 1, 0, 0LL, 0LL) >= 0 )
  {
    v0 = ZwResumeThread(0LL, 0LL);
    if ( v0 < 0 )
    {
      NtTerminateThread(0LL, (unsigned int)v0);
      NtClose(0LL);
    }
  }
  return 0LL;
}
