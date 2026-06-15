/*
 * XREFs of STREAMCONNECTION_rundown @ 0x180112500
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 */

__int64 __fastcall STREAMCONNECTION_rundown(_QWORD *a1)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, (__int64)&WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids, a1);
  }
  return ReleaseStreamConnection(a1);
}
