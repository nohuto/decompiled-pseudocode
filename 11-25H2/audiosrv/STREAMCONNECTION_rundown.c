/*
 * XREFs of STREAMCONNECTION_rundown @ 0x18010BAC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 */

__int64 __fastcall STREAMCONNECTION_rundown(_QWORD *a1)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, (__int64)&WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids, a1);
  }
  return ReleaseStreamConnection(a1);
}
