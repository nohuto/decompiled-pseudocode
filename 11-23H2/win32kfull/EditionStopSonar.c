/*
 * XREFs of EditionStopSonar @ 0x1C0151AA0
 * Callers:
 *     <none>
 * Callees:
 *     StopFade @ 0x1C01BC550 (StopFade.c)
 */

void *EditionStopSonar()
{
  void *result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx

  result = gpdwCPUserPreferencesMask;
  if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
  {
    result = *(void **)gfade;
    if ( (gfade[12] & 0x80u) != 0 )
    {
      EnterCrit(1LL, 0LL);
      if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
      {
        v2 = gfade[12];
        if ( (v2 & 0x80u) != 0LL )
        {
          StopFade();
          *(_DWORD *)(SGDGetUserSessionState(v5) + 15964) = -1;
          if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
          {
            if ( *(_BYTE *)(SGDGetUserSessionState(v2) + 13991) )
              *(_BYTE *)(SGDGetUserSessionState(v2) + 13991) = 0;
          }
        }
      }
      return (void *)UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
    }
  }
  return result;
}
