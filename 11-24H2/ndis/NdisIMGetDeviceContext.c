/*
 * XREFs of NdisIMGetDeviceContext @ 0x140171840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 */

NDIS_HANDLE __stdcall NdisIMGetDeviceContext(NDIS_HANDLE MiniportAdapterHandle)
{
  int v2; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      56,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)MiniportAdapterHandle);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v2,
        1,
        57,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)MiniportAdapterHandle,
        *((_QWORD *)MiniportAdapterHandle + 247));
    }
  }
  return (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 247);
}
