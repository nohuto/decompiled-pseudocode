/*
 * XREFs of FsRtlpOplockPerfPrepareToSendData @ 0x1406FFE24
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x1406FFED4 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     FsRtlpOplockPerfCleanupData @ 0x1406FFCBC (FsRtlpOplockPerfCleanupData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
  if ( byte_140E658E1 && UnbiasedInterruptTime - qword_140E65908 >= (unsigned __int64)qword_140E65900 )
  {
    byte_140E658E0 = v1;
    g_OplockPerfSummaryContext = ExAllocatePool2(0x100uLL);
    if ( g_OplockPerfSummaryContext )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      qword_140E658E8 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)&xmmword_140E658F0 = Pool2;
        *((_QWORD *)&xmmword_140E658F0 + 1) = Pool2 + 128;
        result = 1;
        qword_140E65908 = v2;
        return result;
      }
    }
    FsRtlpOplockPerfCleanupData();
  }
  else
  {
    byte_140E658E0 = 0;
  }
  return 0;
}
