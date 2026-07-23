/*
 * XREFs of HvlpSnapshotCrashArea @ 0x140588100
 * Callers:
 *     HvlCollectLivedump @ 0x1405874B0 (HvlCollectLivedump.c)
 *     HvlCrashdumpCallbackRoutine @ 0x1405876A0 (HvlCrashdumpCallbackRoutine.c)
 *     HvlSkCrashdumpCallbackRoutine @ 0x1405878C0 (HvlSkCrashdumpCallbackRoutine.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void *HvlpSnapshotCrashArea()
{
  void *result; // rax

  if ( HvlpOfflineDumpFeatureEnabled && qword_140F8E1C0 )
  {
    if ( *(_QWORD *)&HvlpLocalCrashdumpArea )
      return memmove(*(void **)&HvlpLocalCrashdumpArea, qword_140F8E1C0, (unsigned int)HvlpCrashDumpAreaSize);
  }
  return result;
}
