/*
 * XREFs of FsRtlpOplockPerfPrepareToSendData @ 0x14070BD04
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x14070BDB4 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     FsRtlpOplockPerfCleanupData @ 0x14070BB9C (FsRtlpOplockPerfCleanupData.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
  if ( byte_140E65B21 && UnbiasedInterruptTime - qword_140E65B48 >= (unsigned __int64)qword_140E65B40 )
  {
    byte_140E65B20 = v1;
    g_OplockPerfSummaryContext = ExAllocatePool2(0x100uLL);
    if ( g_OplockPerfSummaryContext )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      qword_140E65B28 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)&xmmword_140E65B30 = Pool2;
        *((_QWORD *)&xmmword_140E65B30 + 1) = Pool2 + 128;
        result = 1;
        qword_140E65B48 = v2;
        return result;
      }
    }
    FsRtlpOplockPerfCleanupData();
  }
  else
  {
    byte_140E65B20 = 0;
  }
  return 0;
}
