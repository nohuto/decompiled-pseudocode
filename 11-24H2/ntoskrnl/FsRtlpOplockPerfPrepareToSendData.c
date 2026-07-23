/*
 * XREFs of FsRtlpOplockPerfPrepareToSendData @ 0x140709898
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     FsRtlpOplockPerfCleanupData @ 0x140709730 (FsRtlpOplockPerfCleanupData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char FsRtlpOplockPerfPrepareToSendData()
{
  __int64 UnbiasedInterruptTime; // rax
  char v1; // cl
  __int64 v2; // rbx
  __int64 Pool2; // rax
  char result; // al

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v2 = UnbiasedInterruptTime;
  if ( byte_140E65D81 && UnbiasedInterruptTime - qword_140E65DA8 >= (unsigned __int64)qword_140E65DA0 )
  {
    byte_140E65D80 = v1;
    g_OplockPerfSummaryContext = ExAllocatePool2(0x100uLL, 0x100uLL, 0x6F725346u);
    if ( g_OplockPerfSummaryContext )
    {
      Pool2 = ExAllocatePool2(0x100uLL, 0x100uLL, 0x6F725346u);
      qword_140E65D88 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)&xmmword_140E65D90 = Pool2;
        *((_QWORD *)&xmmword_140E65D90 + 1) = Pool2 + 128;
        result = 1;
        qword_140E65DA8 = v2;
        return result;
      }
    }
    FsRtlpOplockPerfCleanupData();
  }
  else
  {
    byte_140E65D80 = 0;
  }
  return 0;
}
