/*
 * XREFs of ?ndisMFakeReset@@YAHPEAX@Z @ 0x14009C8A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMFakeReset(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      17,
      86,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
  v2 = a1[2];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 540);
    if ( *(_BYTE *)(a1[3] + 56LL) < 6u && (v3 & 0xC0230000) == 0xC0230000 )
      v3 = (unsigned __int16)v3 | 0xC0010000;
  }
  else
  {
    v3 = -1073741823;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      17,
      87,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
  return v3;
}
