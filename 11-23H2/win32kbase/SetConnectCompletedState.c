/*
 * XREFs of SetConnectCompletedState @ 0x1C0011090
 * Callers:
 *     xxxRemoteConnect @ 0x1C00115D0 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x1C00110E4 (PowerConnectionEvent.c)
 *     ReferenceDwmApiPort @ 0x1C0047A70 (ReferenceDwmApiPort.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  __int64 v1; // rcx

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( qword_1C0296150 )
    {
      if ( (int)qword_1C0296150() >= 0 )
      {
        v1 = ReferenceDwmApiPort();
        if ( qword_1C0296158 )
          qword_1C0296158(v1);
      }
    }
  }
}
