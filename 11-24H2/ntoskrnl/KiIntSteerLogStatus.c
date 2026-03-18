/*
 * XREFs of KiIntSteerLogStatus @ 0x140354250
 * Callers:
 *     KiIntSteerEventTraceControlCallback @ 0x14073CA90 (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     KiIntSteerEtwEventEnabled @ 0x1403536D8 (KiIntSteerEtwEventEnabled.c)
 *     KiIntSteerLogMask @ 0x140353958 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x140353A78 (KiIntSteerLogProc.c)
 *     KiIntSteerLogState @ 0x1403552B4 (KiIntSteerLogState.c)
 */

char __fastcall KiIntSteerLogStatus(char a1)
{
  __int64 *v2; // r14
  __int64 v3; // rax
  __int64 *i; // rbx
  __int64 *j; // rdi

  KiIntSteerLogMask(a1);
  KiIntSteerLogProc(a1);
  v2 = PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET;
  if ( a1 )
    v2 = (__int64 *)&PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN;
  LOBYTE(v3) = KiIntSteerEtwEventEnabled((__int64)v2);
  if ( (_BYTE)v3 )
  {
    for ( i = (__int64 *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (__int64 *)*i )
    {
      if ( !a1 )
      {
        v3 = i[20];
        if ( i[22] == v3 )
          continue;
      }
      for ( j = (__int64 *)i[2]; j != i + 2; j = (__int64 *)*j )
        LOBYTE(v3) = KiIntSteerLogState(j, v2);
    }
  }
  return v3;
}
