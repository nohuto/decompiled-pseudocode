/*
 * XREFs of NdisCompletePnPEvent @ 0x1400A7840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

LONG __fastcall NdisCompletePnPEvent(int a1, char a2, __int64 a3)
{
  struct _KEVENT *v6; // rcx
  LONG result; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      12,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      a2);
  v6 = *(struct _KEVENT **)(a3 + 24);
  *(_DWORD *)(a3 + 32) = a1;
  result = KeSetEvent(v6, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4,
             13,
             13,
             (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
             a2);
  return result;
}
