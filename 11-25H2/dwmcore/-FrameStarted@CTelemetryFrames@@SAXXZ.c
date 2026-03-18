/*
 * XREFs of ?FrameStarted@CTelemetryFrames@@SAXXZ @ 0x1801E7D10
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void CTelemetryFrames::FrameStarted(void)
{
  HANDLE CurrentThread; // rax

  CurrentThread = GetCurrentThread();
  if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
  {
    qword_180406E80 = CycleTime;
  }
  else
  {
    qword_180406E80 = 0LL;
    CycleTime = 0LL;
  }
}
