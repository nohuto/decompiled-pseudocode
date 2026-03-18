/*
 * XREFs of PopPulseSystemIdleEvent @ 0x140A1E7EC
 * Callers:
 *     PopUpdateSystemIdleContext @ 0x140A1112C (PopUpdateSystemIdleContext.c)
 *     PopSystemIdleWorker @ 0x140A1E6C0 (PopSystemIdleWorker.c)
 *     PopUpdateLastUserInputTime @ 0x140A1EA84 (PopUpdateLastUserInputTime.c)
 *     PopInitializeSystemIdleDetection @ 0x140C1F3CC (PopInitializeSystemIdleDetection.c)
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
    *((_QWORD *)&unk_140E0B520 + 7 * (int)a1) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  return v1;
}
