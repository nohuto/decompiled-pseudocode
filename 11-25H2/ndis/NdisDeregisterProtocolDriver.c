/*
 * XREFs of NdisDeregisterProtocolDriver @ 0x1400BFA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     NdisDeregisterProtocol @ 0x14017D630 (NdisDeregisterProtocol.c)
 */

void __stdcall NdisDeregisterProtocolDriver(NDIS_HANDLE NdisProtocolHandle)
{
  __int64 v1; // rdx
  int v3; // edx
  int v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      0xDu,
      0xCu,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)NdisProtocolHandle,
      (unsigned __int16 *)NdisProtocolHandle + 36);
  NdisDeregisterProtocol(&v4, NdisProtocolHandle);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      13,
      13,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)NdisProtocolHandle);
  }
}
