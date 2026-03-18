/*
 * XREFs of VfIrpLogInit @ 0x140B9B63C
 * Callers:
 *     VfIrpTrackingPluginEntry @ 0x1406A4140 (VfIrpTrackingPluginEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

ULONG_PTR VfIrpLogInit()
{
  ULONG_PTR result; // rax

  ViIrpLogDatabaseLock = 0LL;
  result = ExAllocatePool2(0x40uLL, 0x18uLL, 0x64496656uLL);
  ViIrpLogDatabase = result;
  if ( result )
  {
    *(_DWORD *)result = 0;
    result += 8LL;
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)result = result;
  }
  return result;
}
