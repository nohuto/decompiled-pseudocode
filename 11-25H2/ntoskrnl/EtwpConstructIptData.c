/*
 * XREFs of EtwpConstructIptData @ 0x1407A2768
 * Callers:
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1407A28DC (EtwpUpdateProcessorTraceConfiguration.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ZwLoadDriver @ 0x14069D300 (ZwLoadDriver.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpConstructIptData(__int64 a1)
{
  NTSTATUS Driver; // eax
  _QWORD *Pool2; // rbx
  unsigned __int64 ExtensionTable; // rax

  Driver = ZwLoadDriver(&DriverServiceName);
  if ( (int)(Driver + 0x80000000) >= 0 && Driver != -1073741554 )
    return 3221226092LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
  Pool2[2] = ExtensionTable;
  if ( !ExtensionTable )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221226092LL;
  }
  *(_QWORD *)(a1 + 1080) = Pool2;
  return 0LL;
}
