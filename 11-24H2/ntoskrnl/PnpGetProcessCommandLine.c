/*
 * XREFs of PnpGetProcessCommandLine @ 0x14072DCC4
 * Callers:
 *     PnpLogVetoInformation @ 0x140A9F1B4 (PnpLogVetoInformation.c)
 * Callees:
 *     PsQueryProcessCommandLine @ 0x140246E50 (PsQueryProcessCommandLine.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
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
