/*
 * XREFs of NdisCloseAdapterEx @ 0x14007CA40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     NdisCloseAdapter @ 0x14017F9C0 (NdisCloseAdapter.c)
 */

NDIS_STATUS __stdcall NdisCloseAdapterEx(NDIS_HANDLE NdisBindingHandle)
{
  NDIS_STATUS v2; // edi
  char v4[4]; // [rsp+30h] [rbp-18h]
  NDIS_STATUS v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      68,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)NdisBindingHandle);
  *((_BYTE *)NdisBindingHandle + 65) = 1;
  NdisCloseAdapter(&v5, NdisBindingHandle);
  if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return v5;
  v2 = v5;
  *(_DWORD *)v4 = v5;
  WPP_RECORDER_SF_qL(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    4u,
    6u,
    0x45u,
    (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
    (char)NdisBindingHandle,
    *(_DWORD *)v4);
  return v2;
}
