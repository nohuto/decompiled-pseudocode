/*
 * XREFs of HalpBlkIdleLoop @ 0x140BDD7D0
 * Callers:
 *     HalpBlkProcessorStartup @ 0x140BDD860 (HalpBlkProcessorStartup.c)
 * Callees:
 *     HalpBlkIdleHalt @ 0x140BDD8B0 (HalpBlkIdleHalt.c)
 *     HalpBlkIdlePortReadHalt @ 0x140BDD8C0 (HalpBlkIdlePortReadHalt.c)
 *     HalpBlkIdlePortRead @ 0x140BDD8D0 (HalpBlkIdlePortRead.c)
 *     HalpBlkIdleMonitorMWait @ 0x140BDD8E0 (HalpBlkIdleMonitorMWait.c)
 */

void __noreturn HalpBlkIdleLoop()
{
  _EXCEPTION_REGISTRATION_RECORD *i; // rdi
  unsigned __int64 v1; // rbx

  for ( i = KeGetPcr()->NtTib.ExceptionList; ; _InterlockedIncrement64((volatile signed __int64 *)&i[8].Handler + v1) )
  {
    v1 = ((unsigned __int64)i[141].Next >> 52) & 0xF;
    if ( v1 >= 4 || !v1 )
      break;
    if ( v1 == 1 )
      HalpBlkIdlePortReadHalt(LOWORD(i[141].Next));
    if ( v1 == 2 )
      HalpBlkIdlePortRead(LOWORD(i[141].Next));
    else
      HalpBlkIdleMonitorMWait(&i[160], 0LL, LODWORD(i[141].Next));
  }
  HalpBlkIdleHalt();
}
