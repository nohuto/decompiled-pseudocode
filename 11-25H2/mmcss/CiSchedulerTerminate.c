/*
 * XREFs of CiSchedulerTerminate @ 0x1C000C8C8
 * Callers:
 *     CsTerminate @ 0x1C000C400 (CsTerminate.c)
 * Callees:
 *     CiSchedulerPoke @ 0x1C0003F10 (CiSchedulerPoke.c)
 */

LONG_PTR __fastcall CiSchedulerTerminate(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax

  if ( CiSchedulerThread )
  {
    ObfReferenceObject(CiSchedulerThread);
    CiSchedulerPoke(8u);
    CiSchedulerPoke(0);
    KeWaitForSingleObject(CiSchedulerThread, Executive, 0, 0, 0LL);
    result = ObfDereferenceObject(CiSchedulerThread);
    CiSchedulerThread = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    LOBYTE(a2) = 1;
    return ExDeleteTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, a2, 0LL, 0LL);
  }
  return result;
}
