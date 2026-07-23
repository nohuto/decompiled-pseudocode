/*
 * XREFs of PopPulseSystemIdleEvent @ 0x140A1C20C
 * Callers:
 *     PopUpdateSystemIdleContext @ 0x1409A0024 (PopUpdateSystemIdleContext.c)
 *     PopSystemIdleWorker @ 0x140A1C0E0 (PopSystemIdleWorker.c)
 *     PopUpdateLastUserInputTime @ 0x140A1C4A4 (PopUpdateLastUserInputTime.c)
 *     PopInitializeSystemIdleDetection @ 0x140C325EC (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPulseSystemIdleEvent(unsigned int a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( a1 > 3 )
    return (unsigned int)-1073741811;
  else
    *((_QWORD *)&unk_140E0B700 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
