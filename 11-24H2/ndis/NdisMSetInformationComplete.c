/*
 * XREFs of NdisMSetInformationComplete @ 0x1400C1070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x140066BF0 (-ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z.c)
 */

void __fastcall NdisMSetInformationComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  int v4; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x22u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      a2);
  if ( a1->MajorNdisVersion >= 6u )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      a1->pAdapterInstanceName,
      "NDIS 6 Miniport calling NDIS 5 API");
    KeBugCheckEx(0x7Cu, 0x15uLL, (ULONG_PTR)a1, 0LL, 0LL);
  }
  ndisCompleteLegacyRequest(a1, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      35,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1);
  }
}
