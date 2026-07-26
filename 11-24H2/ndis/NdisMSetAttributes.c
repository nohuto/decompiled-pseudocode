/*
 * XREFs of NdisMSetAttributes @ 0x14009FFF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     NdisMSetAttributesEx @ 0x14017F080 (NdisMSetAttributesEx.c)
 */

void __fastcall NdisMSetAttributes(void *a1, NDIS_HANDLE MiniportAdapterContext, char a3, NDIS_INTERFACE_TYPE a4)
{
  NDIS_HANDLE v6; // rbp
  int v8; // edx

  v6 = MiniportAdapterContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportAdapterContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterContext,
      1,
      98,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
  }
  NdisMSetAttributesEx(a1, v6, 0, a3 != 0 ? 8 : 0, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      99,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
  }
}
