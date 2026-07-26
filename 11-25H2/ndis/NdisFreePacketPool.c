/*
 * XREFs of NdisFreePacketPool @ 0x1400DD220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisFreePacketPoolInternal@@YAXPEAXE@Z @ 0x14008A600 (-ndisFreePacketPoolInternal@@YAXPEAXE@Z.c)
 */

void __stdcall NdisFreePacketPool(NDIS_HANDLE PoolHandle)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      21,
      12,
      (struct _GUID *)&WPP_6bf195b864a83f4f583394206a2d0b8f_Traceguids,
      (char)PoolHandle);
  ndisFreePacketPoolInternal((struct _NDIS_PKT_POOL *)PoolHandle);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      21,
      13,
      (struct _GUID *)&WPP_6bf195b864a83f4f583394206a2d0b8f_Traceguids,
      (char)PoolHandle);
}
