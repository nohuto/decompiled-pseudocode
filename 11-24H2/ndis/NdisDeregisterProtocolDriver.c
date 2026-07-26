/*
 * XREFs of NdisDeregisterProtocolDriver @ 0x1400B8770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     NdisDeregisterProtocol @ 0x140172660 (NdisDeregisterProtocol.c)
 */

void __stdcall NdisDeregisterProtocolDriver(NDIS_HANDLE NdisProtocolHandle)
{
  __int64 v1; // rdx
  int v3; // edx
  int v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      0xDu,
      0xDu,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)NdisProtocolHandle,
      (unsigned __int16 *)NdisProtocolHandle + 36);
  NdisDeregisterProtocol(&v4, NdisProtocolHandle);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      13,
      14,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)NdisProtocolHandle);
  }
}
