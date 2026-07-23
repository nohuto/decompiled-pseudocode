/*
 * XREFs of RtlQueryUnbiasedInterruptTime @ 0x180087220
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpLogSetLastWin32ErrorEvent @ 0x180144954 (RtlpLogSetLastWin32ErrorEvent.c)
 */

BOOLEAN __cdecl RtlQueryUnbiasedInterruptTime(PLARGE_INTEGER InterruptTime)
{
  ULONG v2; // eax
  struct _TEB *v3; // rcx

  if ( InterruptTime )
  {
    InterruptTime->QuadPart = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
    return 1;
  }
  else
  {
    v2 = RtlNtStatusToDosErrorNoTeb(-1073741811);
    v3 = NtCurrentTeb();
    if ( g_dwLastErrorToBreakOn && v2 == g_dwLastErrorToBreakOn )
      __debugbreak();
    if ( v3->LastErrorValue != v2 )
    {
      v3->LastErrorValue = v2;
      if ( v2 )
      {
        if ( g_isErrorOriginProviderEnabled )
        {
          if ( v2 != 997 )
            RtlpLogSetLastWin32ErrorEvent(v2);
        }
      }
    }
    return 0;
  }
}
