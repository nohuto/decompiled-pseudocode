/*
 * XREFs of IopLiveDumpGetMillisecondCounter @ 0x14049B5E4
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x14049A8E4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IoCaptureLiveDump @ 0x1404E6068 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140597C08 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405982F0 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405989DC (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140599FDC (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpCollectPages @ 0x14059A264 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x14059A660 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEnterCorralledState @ 0x14059A980 (IopLiveDumpEnterCorralledState.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14059A9C0 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpGenerateIptSecondaryData @ 0x14059AFB4 (IopLiveDumpGenerateIptSecondaryData.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x14059B99C (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x14059BBE4 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x14059BFB0 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x14059C1A0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x14059C8F0 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x14059D0F0 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall IopLiveDumpGetMillisecondCounter(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = v2 + qword_140E66098 - qword_140E66090;
  qword_140E66098 = result;
  qword_140E66090 = v2;
  return result;
}
