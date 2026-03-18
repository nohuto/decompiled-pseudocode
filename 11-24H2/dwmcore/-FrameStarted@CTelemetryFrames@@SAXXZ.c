/*
 * XREFs of ?FrameStarted@CTelemetryFrames@@SAXXZ @ 0x1801DC6BC
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void CTelemetryFrames::FrameStarted(void)
{
  HANDLE CurrentThread; // rax

  CurrentThread = GetCurrentThread();
  if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
  {
    qword_1803FAE58 = CycleTime;
  }
  else
  {
    qword_1803FAE58 = 0LL;
    CycleTime = 0LL;
  }
}
