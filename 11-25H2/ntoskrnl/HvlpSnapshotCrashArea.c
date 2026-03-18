/*
 * XREFs of HvlpSnapshotCrashArea @ 0x1405877A0
 * Callers:
 *     HvlCollectLivedump @ 0x140586B50 (HvlCollectLivedump.c)
 *     HvlCrashdumpCallbackRoutine @ 0x140586D40 (HvlCrashdumpCallbackRoutine.c)
 *     HvlSkCrashdumpCallbackRoutine @ 0x140586F60 (HvlSkCrashdumpCallbackRoutine.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void *HvlpSnapshotCrashArea()
{
  void *result; // rax

  if ( HvlpOfflineDumpFeatureEnabled && qword_140F8D820 )
  {
    if ( *(_QWORD *)&HvlpLocalCrashdumpArea )
      return memmove(*(void **)&HvlpLocalCrashdumpArea, qword_140F8D820, (unsigned int)HvlpCrashDumpAreaSize);
  }
  return result;
}
