/*
 * XREFs of ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400EB858
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisCreateThreadStateObjectType@@YAJXZ @ 0x1400EB938 (-ndisCreateThreadStateObjectType@@YAJXZ.c)
 */

__int64 ndisInitializeThreadMonitorSubsystem(void)
{
  unsigned int ThreadStateObjectType; // ebx

  ThreadStateObjectType = ndisCreateThreadStateObjectType();
  if ( !ThreadStateObjectType )
    return 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_e4589a6404ca36650cd9364b60bd4efe_Traceguids,
      ThreadStateObjectType);
  return ThreadStateObjectType;
}
