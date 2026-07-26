/*
 * XREFs of ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400E4648
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisCreateThreadStateObjectType@@YAJXZ @ 0x1400E4728 (-ndisCreateThreadStateObjectType@@YAJXZ.c)
 */

__int64 ndisInitializeThreadMonitorSubsystem(void)
{
  int v0; // edx
  unsigned int ThreadStateObjectType; // ebx

  ThreadStateObjectType = ndisCreateThreadStateObjectType();
  if ( !ThreadStateObjectType )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v0,
      1,
      10,
      (struct _GUID *)&WPP_e4589a6404ca36650cd9364b60bd4efe_Traceguids,
      ThreadStateObjectType);
  }
  return ThreadStateObjectType;
}
