/*
 * XREFs of ?ndisMFakeWanSend@@YAHPEAX00@Z @ 0x1400A58A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMFakeWanSend(_QWORD *a1, void *a2, void *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi

  v3 = a1[2];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      78,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      v3);
  v4 = -1073741823;
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 540);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      79,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      v3);
  return v4;
}
