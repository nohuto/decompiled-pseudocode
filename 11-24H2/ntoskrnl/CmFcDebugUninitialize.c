/*
 * XREFs of CmFcDebugUninitialize @ 0x14066737C
 * Callers:
 *     CmFcShutdownSystem @ 0x1407D60D4 (CmFcShutdownSystem.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x14049BE80 (KeDeregisterBugCheckReasonCallback.c)
 */

BOOLEAN CmFcDebugUninitialize()
{
  return KeDeregisterBugCheckReasonCallback(&stru_140E62520);
}
