/*
 * XREFs of CiThreadInitialize @ 0x1C000F8B8
 * Callers:
 *     CsInitialize @ 0x1C000F040 (CsInitialize.c)
 * Callees:
 *     WPP_SF_d @ 0x1C0004960 (WPP_SF_d.c)
 */

__int64 CiThreadInitialize()
{
  NTSTATUS ThreadNotifyRoutine; // ebx

  ThreadNotifyRoutine = PsSetCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
  if ( ThreadNotifyRoutine < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_29026e0d014631895ac1404d49971dec_Traceguids,
        ThreadNotifyRoutine);
  }
  else
  {
    CiThreadCallbackRegistered = 1;
  }
  return (unsigned int)ThreadNotifyRoutine;
}
