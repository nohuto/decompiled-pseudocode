/*
 * XREFs of PnpGetProcessCommandLine @ 0x14072BCD4
 * Callers:
 *     PnpLogVetoInformation @ 0x140A9A584 (PnpLogVetoInformation.c)
 * Callees:
 *     PsQueryProcessCommandLine @ 0x1402E1810 (PsQueryProcessCommandLine.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void *__fastcall PnpGetProcessCommandLine(PRKPROCESS PROCESS)
{
  void *Pool2; // rbx
  int ProcessCommandLine; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v5) = 0;
  Pool2 = 0LL;
  ProcessCommandLine = PsQueryProcessCommandLine(PROCESS, 0LL, 0, 0, (unsigned int *)&v5);
  if ( ProcessCommandLine == -1073741820 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v5, 0x4F706E50u);
    if ( !Pool2 )
      return Pool2;
    ProcessCommandLine = PsQueryProcessCommandLine(PROCESS, (__int64)Pool2, v5, 0, (unsigned int *)&v5);
  }
  if ( ProcessCommandLine < 0 && Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0x4F706E50u);
    return 0LL;
  }
  return Pool2;
}
