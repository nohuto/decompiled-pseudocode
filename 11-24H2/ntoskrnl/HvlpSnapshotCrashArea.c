/*
 * XREFs of HvlpSnapshotCrashArea @ 0x14058AE10
 * Callers:
 *     HvlCollectLivedump @ 0x14058A1C0 (HvlCollectLivedump.c)
 *     HvlCrashdumpCallbackRoutine @ 0x14058A3B0 (HvlCrashdumpCallbackRoutine.c)
 *     HvlSkCrashdumpCallbackRoutine @ 0x14058A5D0 (HvlSkCrashdumpCallbackRoutine.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void *HvlpSnapshotCrashArea()
{
  void *result; // rax

  if ( HvlpOfflineDumpFeatureEnabled && qword_140F8DFE0 )
  {
    if ( *(_QWORD *)&HvlpLocalCrashdumpArea )
      return memmove(*(void **)&HvlpLocalCrashdumpArea, qword_140F8DFE0, (unsigned int)HvlpCrashDumpAreaSize);
  }
  return result;
}
