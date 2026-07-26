/*
 * XREFs of NdisCompleteUnbindAdapter @ 0x1400D6160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

LONG __fastcall NdisCompleteUnbindAdapter(__int64 a1, int a2)
{
  int v2; // edi
  LONG result; // eax
  int v5; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      12,
      (struct _GUID *)&WPP_50c81d7a54e933505abf2e2dd0037343_Traceguids,
      a1);
  }
  *(_DWORD *)(a1 + 88) = v2;
  result = KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v5,
             6,
             13,
             (struct _GUID *)&WPP_50c81d7a54e933505abf2e2dd0037343_Traceguids,
             a1);
  }
  return result;
}
