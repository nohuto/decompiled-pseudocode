/*
 * XREFs of IopLiveDumpGetMillisecondCounter @ 0x14049B334
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x14049A634 (IopLiveDumpAllocateDumpBuffers.c)
 *     IoCaptureLiveDump @ 0x1404D7188 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405944F8 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140594BE0 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405952CC (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1405968CC (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpCollectPages @ 0x140596B54 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x140596F50 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEnterCorralledState @ 0x140597270 (IopLiveDumpEnterCorralledState.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405972B0 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpGenerateIptSecondaryData @ 0x1405978A4 (IopLiveDumpGenerateIptSecondaryData.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x14059828C (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1405984D4 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405988A0 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140598A90 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405991E0 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1405999E0 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall IopLiveDumpGetMillisecondCounter(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = v2 + qword_140E65D78 - qword_140E65D80;
  qword_140E65D78 = result;
  qword_140E65D80 = v2;
  return result;
}
