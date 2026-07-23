/*
 * XREFs of KiIntSteerLogStatus @ 0x1402AF804
 * Callers:
 *     KiIntSteerEventTraceControlCallback @ 0x14073A9C0 (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     KiIntSteerEtwEventEnabled @ 0x1402B14A8 (KiIntSteerEtwEventEnabled.c)
 *     KiIntSteerLogMask @ 0x1402B1728 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x1402B1848 (KiIntSteerLogProc.c)
 *     KiIntSteerLogState @ 0x1402B2FE4 (KiIntSteerLogState.c)
 */

__int64 __fastcall KiIntSteerLogStatus(char a1)
{
  __int64 v2; // rcx
  __int64 *v3; // r14
  __int64 result; // rax
  __int64 *i; // rbx
  __int64 *j; // rdi

  KiIntSteerLogMask();
  LOBYTE(v2) = a1;
  KiIntSteerLogProc(v2);
  v3 = PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET;
  if ( a1 )
    v3 = (__int64 *)&PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN;
  result = KiIntSteerEtwEventEnabled(v3);
  if ( (_BYTE)result )
  {
    for ( i = (__int64 *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (__int64 *)*i )
    {
      if ( !a1 )
      {
        result = i[20];
        if ( i[22] == result )
          continue;
      }
      for ( j = (__int64 *)i[2]; j != i + 2; j = (__int64 *)*j )
        result = KiIntSteerLogState(j, v3);
    }
  }
  return result;
}
