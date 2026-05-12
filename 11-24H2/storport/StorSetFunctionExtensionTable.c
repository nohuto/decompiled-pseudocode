/*
 * XREFs of StorSetFunctionExtensionTable @ 0x140074DF4
 * Callers:
 *     RaCreateDriver @ 0x1401840E4 (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_140171110 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_140171110 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_140171120 = StorExtFreePool;
  *((_QWORD *)&xmmword_140171120 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_140171130 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_140171130 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_140171140 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_140171140 + 1) = StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_140171150 = (__int64)StorExtGetOriginalMdl;
  return result;
}
