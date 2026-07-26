/*
 * XREFs of NdisMDeregisterAdapterShutdownHandler @ 0x14009D440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008FBA0 (-ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __stdcall NdisMDeregisterAdapterShutdownHandler(NDIS_HANDLE MiniportHandle)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      49,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)MiniportHandle);
  ndisMDeregisterBugCheckHandler((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle);
  *((_QWORD *)MiniportHandle + 258) = 0LL;
  *((_QWORD *)MiniportHandle + 257) = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      50,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)MiniportHandle);
}
