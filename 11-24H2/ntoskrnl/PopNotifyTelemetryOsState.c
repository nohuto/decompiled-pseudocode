/*
 * XREFs of PopNotifyTelemetryOsState @ 0x140AA6FA4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopTransitionTelemetryOsState @ 0x140A80E74 (PopTransitionTelemetryOsState.c)
 */

__int64 __fastcall PopNotifyTelemetryOsState(int a1, int a2, int a3, char a4, char a5)
{
  unsigned int v7; // edx
  int v8; // edx
  int v9; // r8d

  v7 = 0;
  if ( dword_140E07680
    && (qword_140E07690 & 0x800000000000LL) != 0
    && (qword_140E07698 & 0x800000000000LL) == qword_140E07698 )
  {
    if ( (unsigned int)(a1 - 4) <= 2 )
    {
      v9 = 2;
      LOBYTE(v7) = a1 == 5;
      v8 = v7 + 1;
      return (unsigned int)PopTransitionTelemetryOsState(v9, v8);
    }
    if ( (unsigned int)(a1 - 2) <= 1 )
    {
      v8 = 4;
      v9 = 4 - (a5 != 0);
      if ( a1 == 3 || a3 == 5 )
      {
        if ( (a4 & 8) != 0 )
        {
          v8 = 3;
        }
        else
        {
          v8 = 5;
          if ( (unsigned int)(a2 - 2) <= 2 )
            v8 = 8;
        }
      }
      return (unsigned int)PopTransitionTelemetryOsState(v9, v8);
    }
  }
  return v7;
}
