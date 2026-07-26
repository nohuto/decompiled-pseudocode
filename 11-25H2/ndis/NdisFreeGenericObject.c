/*
 * XREFs of NdisFreeGenericObject @ 0x1400A7F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisFreeGenericObject(PNDIS_GENERIC_OBJECT NdisObject)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      21,
      145,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)NdisObject);
  ExFreePoolWithTag(NdisObject, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      21,
      146,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      0);
}
